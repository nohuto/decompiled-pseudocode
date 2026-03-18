/*
 * XREFs of IoRaiseHardError @ 0x1401F9540
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeApc @ 0x140025DA0 (KeInitializeApc.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KeInsertQueueApc @ 0x1400AB220 (KeInsertQueueApc.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     IopGetThreadActiveConsoleId @ 0x1406B805C (IopGetThreadActiveConsoleId.c)
 */

void __stdcall IoRaiseHardError(PIRP Irp, PVPB Vpb, PDEVICE_OBJECT RealDeviceObject)
{
  PVPB v4; // r13
  bool v6; // r15
  PETHREAD Thread; // r14
  int SessionId; // ebx
  LONG SpareLong; // edx
  PVOID PoolWithTag; // rbx
  bool v11; // bl
  _DWORD *Teb; // r13
  _KPROCESS *Process; // rbx
  char v14; // r15
  int v15; // eax
  unsigned __int64 v16; // rdx
  __int16 v17; // cx
  struct _WORK_QUEUE_ITEM *v18; // rax
  $709EDFC2F9E0D4565D6AA3C4377BC643 v19; // [rsp+58h] [rbp-70h] BYREF

  v4 = Vpb;
  v6 = 0;
  Thread = Irp->Tail.Overlay.Thread;
  if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 0x10) != 0 )
    goto LABEL_26;
  SessionId = MmGetSessionIdEx((__int64)Thread->Process);
  if ( SessionId == -1 )
    SessionId = 0;
  if ( SessionId != (unsigned int)IopGetThreadActiveConsoleId(Thread) )
  {
LABEL_26:
    if ( (Irp->Flags & 0x40) == 0 )
      goto LABEL_28;
LABEL_27:
    Irp->IoStatus.Information = 0LL;
    goto LABEL_28;
  }
  if ( (Irp->Flags & 0x3FF1FFFF) != 0x43 && Irp->Tail.Overlay.CurrentStackLocation->MajorFunction != 18 )
  {
    SpareLong = KeGetCurrentThread()->WaitBlock[3].SpareLong;
    v6 = SpareLong != 0;
    if ( !SpareLong )
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
      goto LABEL_28;
    }
  }
  if ( v6 && (Thread->MiscFlags & 0x400) == 0 )
  {
    v11 = 1;
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
    {
      Teb = Thread->Teb;
      Process = Thread->Process;
      if ( Process == KeGetCurrentThread()->ApcState.Process )
      {
        v14 = 0;
      }
      else
      {
        v14 = 1;
        KiStackAttachProcess(Process, 0, (__int64)&v19);
      }
      v15 = Teb[1452];
      v16 = Process[1].ActiveProcessors.Bitmap[7];
      if ( v16 )
      {
        v17 = *(_WORD *)(v16 + 8);
        if ( v17 == 332 || v17 == 452 )
          v15 |= Teb[3018];
      }
      v11 = (v15 & 0x10) != 0;
      if ( v14 )
        KiUnstackDetachProcess(&v19, 0LL);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&Thread[1].WaitStatus);
      v4 = Vpb;
    }
    if ( v11 )
      goto LABEL_27;
  }
  v18 = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x72456F49u);
  if ( v18 )
  {
    v18->WorkerRoutine = (void (__fastcall *)(void *))IopStartApcHardError;
    v18->Parameter = v18;
    v18->List.Flink = 0LL;
    v18[1].List.Flink = (struct _LIST_ENTRY *)Irp;
    v18[1].List.Blink = (struct _LIST_ENTRY *)v4;
    v18[1].WorkerRoutine = (void (__fastcall *)(void *))RealDeviceObject;
    ExQueueWorkItem(v18, CriticalWorkQueue);
    return;
  }
LABEL_28:
  IofCompleteRequest(Irp, 1);
}
