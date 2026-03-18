/*
 * XREFs of IoRaiseHardError @ 0x1401F3B80
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueApc @ 0x14003FEC0 (KeInsertQueueApc.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     KeInitializeApc @ 0x14010F400 (KeInitializeApc.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

void __stdcall IoRaiseHardError(PIRP Irp, PVPB Vpb, PDEVICE_OBJECT RealDeviceObject)
{
  PVPB v4; // r15
  int v6; // ecx
  PETHREAD Thread; // r14
  ULONG Flags; // eax
  PVOID PoolWithTag; // rsi
  bool v10; // si
  _DWORD *Teb; // r13
  _KPROCESS *Process; // rsi
  char v13; // r15
  int v14; // eax
  unsigned __int64 v15; // rcx
  __int16 v16; // r8
  __int16 v17; // r8
  struct _WORK_QUEUE_ITEM *v18; // rax
  $5BC46E0569261879018906DEC3127961 v19; // [rsp+58h] [rbp-60h] BYREF

  v4 = Vpb;
  v6 = 0;
  Thread = Irp->Tail.Overlay.Thread;
  Flags = Irp->Flags;
  if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 0x10) != 0 )
  {
    if ( (Flags & 0x40) != 0 )
      Irp->IoStatus.Information = 0LL;
    goto LABEL_4;
  }
  if ( (Flags & 0x3FF1FFFF) != 0x43 && Irp->Tail.Overlay.CurrentStackLocation->MajorFunction != 18 )
  {
    LOBYTE(v6) = KeGetCurrentThread()->WaitBlock[3].SpareLong != 0;
    if ( !v6 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x4350414Bu);
      if ( PoolWithTag )
      {
        KeInitializeApc(
          (__int64)PoolWithTag,
          (__int64)Thread,
          Irp->ApcEnvironment,
          (__int64)PspQueueApcSpecialApc,
          (__int64)IopAbortRequest,
          (__int64)IopRaiseHardError,
          0,
          (__int64)Irp);
        KeInsertQueueApc((__int64)PoolWithTag, (__int64)v4, (__int64)RealDeviceObject, 0);
        return;
      }
LABEL_4:
      IofCompleteRequest(Irp, 1);
      return;
    }
    if ( (Thread->MiscFlags & 0x400) == 0 )
    {
      v10 = 1;
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
      {
        Teb = Thread->Teb;
        Process = Thread->Process;
        if ( Process == KeGetCurrentThread()->ApcState.Process )
        {
          v13 = 0;
        }
        else
        {
          v13 = 1;
          KiStackAttachProcess(Process, 0, (__int64)&v19);
        }
        v14 = Teb[1452];
        v15 = Process[1].ActiveProcessors.Bitmap[7];
        if ( v15 )
        {
          v16 = *(_WORD *)(v15 + 8);
          if ( v16 == 332 || v16 == 452 )
          {
            v17 = *(_WORD *)(v15 + 8);
            if ( v17 == 332 || v17 == 452 )
              v14 |= Teb[3018];
          }
        }
        v10 = (v14 & 0x10) != 0;
        if ( v13 )
          KiUnstackDetachProcess(&v19, 0LL);
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)&Thread[1].WaitStatus);
        v4 = Vpb;
      }
      if ( v10 )
      {
        Irp->IoStatus.Information = 0LL;
        goto LABEL_4;
      }
    }
  }
  v18 = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x72456F49u);
  if ( !v18 )
    goto LABEL_4;
  v18->WorkerRoutine = (void (__fastcall *)(void *))IopStartApcHardError;
  v18->Parameter = v18;
  v18->List.Flink = 0LL;
  v18[1].List.Flink = (struct _LIST_ENTRY *)Irp;
  v18[1].List.Blink = (struct _LIST_ENTRY *)v4;
  v18[1].WorkerRoutine = (void (__fastcall *)(void *))RealDeviceObject;
  ExQueueWorkItem(v18, CriticalWorkQueue);
}
