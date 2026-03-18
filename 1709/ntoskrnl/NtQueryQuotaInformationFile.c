/*
 * XREFs of NtQueryQuotaInformationFile @ 0x1406B9540
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     IopReferenceFileObject @ 0x140024E54 (IopReferenceFileObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAllocatePoolWithTagPriority @ 0x140081330 (ExAllocatePoolWithTagPriority.c)
 *     IopAllocateIrpExReturn @ 0x1400821E0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     IoAllocateMdl @ 0x1400BBD50 (IoAllocateMdl.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     IopProbeAndLockPages_0 @ 0x1401FBAA8 (IopProbeAndLockPages_0.c)
 *     IopVerifierExAllocatePoolWithQuota_4 @ 0x1401FBBB8 (IopVerifierExAllocatePoolWithQuota_4.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlValidSid @ 0x140486030 (RtlValidSid.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x1404AD220 (IopSynchronousServiceTail.c)
 *     IopAcquireFileObjectLock @ 0x14056053C (IopAcquireFileObjectLock.c)
 *     IopSynchronousApiServiceTail @ 0x1405753C0 (IopSynchronousApiServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x1406B4714 (IopAllocateIrpCleanup.c)
 *     IopCheckGetQuotaBufferValidity @ 0x1406B49CC (IopCheckGetQuotaBufferValidity.c)
 *     IopExceptionCleanup @ 0x1406B4D78 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryQuotaInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        PVOID SidList,
        ULONG SidListLength,
        PSID StartSid,
        BOOLEAN RestartScan)
{
  SIZE_T v9; // r10
  HANDLE v12; // r14
  struct _KTHREAD *CurrentThread; // rdx
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int16 v17; // ax
  ULONG v18; // r8d
  __int64 v19; // rax
  unsigned int v20; // r14d
  char *v21; // rcx
  ULONG v22; // r15d
  ULONG v23; // ecx
  NTSTATUS result; // eax
  char *PoolWithQuota_4; // rdi
  PSID v26; // r12
  unsigned int *v27; // rax
  PSID v28; // rax
  NTSTATUS v29; // esi
  struct _FILE_OBJECT *v30; // r13
  _DWORD *v31; // r14
  struct _KTHREAD *v32; // rax
  NTSTATUS v33; // edi
  struct _KEVENT *PoolWithTagPriority; // rax
  IRP *v35; // rax
  IRP *Irp; // rsi
  PIO_STATUS_BLOCK v37; // rax
  struct _IO_STACK_LOCATION *v38; // r14
  struct _DEVICE_OBJECT *v39; // r15
  ULONG Flags; // eax
  struct _IRP *v41; // rcx
  PMDL Mdl; // rcx
  __int64 v43; // r8
  char v44; // [rsp+40h] [rbp-98h]
  char v45; // [rsp+41h] [rbp-97h]
  char v46; // [rsp+42h] [rbp-96h]
  _BYTE v47[5]; // [rsp+43h] [rbp-95h] BYREF
  PVOID P; // [rsp+48h] [rbp-90h]
  PVOID v49; // [rsp+50h] [rbp-88h]
  PVOID Object; // [rsp+58h] [rbp-80h] BYREF
  unsigned int *v51; // [rsp+60h] [rbp-78h]
  PSID Sid; // [rsp+68h] [rbp-70h]
  PIRP v53; // [rsp+70h] [rbp-68h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-60h]
  struct _KTHREAD *v55; // [rsp+80h] [rbp-58h]
  _QWORD v56[10]; // [rsp+88h] [rbp-50h] BYREF

  v9 = Length;
  v12 = FileHandle;
  v49 = 0LL;
  P = 0LL;
  LODWORD(DeviceObject) = 0;
  Sid = 0LL;
  v51 = 0LL;
  v56[0] = 0LL;
  v56[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v55 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v45 = PreviousMode;
  if ( PreviousMode )
  {
    v15 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v15 = (__int64)IoStatusBlock;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    v16 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7];
    if ( v16 && ((v17 = *(_WORD *)(v16 + 8), v17 == 332) || v17 == 452) )
      v18 = 4;
    else
      v18 = 8;
    ProbeForWrite(Buffer, v9, v18);
    if ( StartSid )
    {
      v19 = (__int64)StartSid + 1;
      if ( (unsigned __int64)StartSid + 1 >= 0x7FFFFFFF0000LL )
        v19 = 0x7FFFFFFF0000LL;
      v46 = *(_BYTE *)v19;
      v20 = 4 * *(unsigned __int8 *)v19 + 8;
      LODWORD(DeviceObject) = v20;
      if ( ((unsigned __int8)StartSid & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v21 = (char *)StartSid + v20;
      if ( (unsigned __int64)v21 > 0x7FFFFFFF0000LL || v21 < StartSid )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      v46 = 0;
      v20 = (unsigned int)DeviceObject;
    }
    if ( SidList && (v22 = SidListLength) != 0 )
    {
      if ( ((unsigned __int8)SidList & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)SidList + SidListLength > 0x7FFFFFFF0000LL || (char *)SidList + SidListLength < SidList )
        MEMORY[0x7FFFFFFF0000] = 0;
      v23 = (SidListLength + 3) & 0xFFFFFFFC;
      if ( v23 > ~v20 )
        return -1073741811;
      if ( v23 < SidListLength )
        return -1073741811;
      PoolWithQuota_4 = (char *)IopVerifierExAllocatePoolWithQuota_4(NonPagedPoolNx, v23 + v20);
      P = PoolWithQuota_4;
      v51 = (unsigned int *)PoolWithQuota_4;
      memmove(PoolWithQuota_4, SidList, SidListLength);
    }
    else
    {
      v22 = 0;
      SidListLength = 0;
      if ( StartSid )
      {
        PoolWithQuota_4 = (char *)IopVerifierExAllocatePoolWithQuota_4(PagedPool, v20);
        P = PoolWithQuota_4;
      }
      else
      {
        PoolWithQuota_4 = (char *)P;
      }
    }
    if ( StartSid )
    {
      Sid = &PoolWithQuota_4[(v22 + 3) & 0xFFFFFFFC];
      memmove(Sid, StartSid, v20);
      *((_BYTE *)Sid + 1) = v46;
    }
    v26 = StartSid;
    v12 = FileHandle;
  }
  else
  {
    v22 = SidListLength;
    if ( SidList )
    {
      v27 = v51;
      if ( SidListLength )
        v27 = (unsigned int *)SidList;
      v51 = v27;
    }
    v28 = Sid;
    v26 = StartSid;
    if ( StartSid )
      v28 = StartSid;
    Sid = v28;
    PoolWithQuota_4 = (char *)P;
  }
  if ( v51 )
  {
    v53 = 0LL;
    v29 = IopCheckGetQuotaBufferValidity(v51, v22, &v53);
    if ( v29 < 0 )
    {
      IoStatusBlock->Information = (ULONG_PTR)v53;
LABEL_46:
      if ( PoolWithQuota_4 )
        ExFreePoolWithTag(PoolWithQuota_4, 0);
      return v29;
    }
  }
  if ( Sid && !RtlValidSid(Sid) )
  {
    if ( PoolWithQuota_4 )
      ExFreePoolWithTag(PoolWithQuota_4, 0);
    return -1073741704;
  }
  v29 = IopReferenceFileObject(v12, 0, PreviousMode, &Object, 0LL);
  if ( v29 < 0 )
    goto LABEL_46;
  v30 = (struct _FILE_OBJECT *)Object;
  v31 = (char *)Object + 80;
  if ( (*((_DWORD *)Object + 20) & 2) != 0 )
  {
    v32 = KeGetCurrentThread();
    --v32->KernelApcDisable;
    if ( !_InterlockedExchange((volatile __int32 *)Object + 29, 1) )
    {
      v30 = (struct _FILE_OBJECT *)Object;
      ObfReferenceObject(Object);
LABEL_61:
      v44 = 1;
      v22 = SidListLength;
      PoolWithQuota_4 = (char *)P;
      goto LABEL_71;
    }
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v30 = (struct _FILE_OBJECT *)Object;
    v33 = IopAcquireFileObjectLock((char *)Object, v45, (*v31 & 4) != 0, v47);
    if ( !v47[0] )
      goto LABEL_61;
    if ( P )
      ExFreePoolWithTag(P, 0);
LABEL_69:
    ObfDereferenceObject(v30);
    return v33;
  }
  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTagPriority = (struct _KEVENT *)ExAllocatePoolWithTagPriority(
                                              NonPagedPoolNx,
                                              0x18uLL,
                                              0x20206F49u,
                                              (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTagPriority = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x20206F49u);
  v49 = PoolWithTagPriority;
  if ( !PoolWithTagPriority )
  {
    if ( PoolWithQuota_4 )
      ExFreePoolWithTag(PoolWithQuota_4, 0);
    v33 = -1073741670;
    goto LABEL_69;
  }
  KeInitializeEvent(PoolWithTagPriority, SynchronizationEvent, 0);
  v44 = 0;
LABEL_71:
  if ( (*v31 & 0x4000000) == 0 )
    KeResetEvent(&v30->Event);
  DeviceObject = IoGetRelatedDeviceObject(v30);
  v35 = (IRP *)IopAllocateIrpExReturn();
  Irp = v35;
  v53 = v35;
  if ( !v35 )
  {
    if ( (*v31 & 2) == 0 )
      ExFreePoolWithTag(v49, 0);
    IopAllocateIrpCleanup((char *)v30, 0LL);
    if ( PoolWithQuota_4 )
      ExFreePoolWithTag(PoolWithQuota_4, 0);
    return -1073741670;
  }
  v35->Tail.Overlay.OriginalFileObject = v30;
  v35->Tail.Overlay.Thread = v55;
  v35->RequestorMode = v45;
  if ( v44 )
  {
    v35->UserEvent = 0LL;
    v37 = IoStatusBlock;
  }
  else
  {
    v35->UserEvent = (PKEVENT)v49;
    v37 = (PIO_STATUS_BLOCK)v56;
    Irp->Flags = 4;
  }
  Irp->UserIosb = v37;
  Irp->Overlay.AllocationSize.QuadPart = 0LL;
  v38 = Irp->Tail.Overlay.CurrentStackLocation - 1;
  v38->MajorFunction = 25;
  v38->FileObject = v30;
  Irp->Tail.Overlay.AuxiliaryBuffer = PoolWithQuota_4;
  v38->Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v51;
  v38->Parameters.Create.EaLength = v22;
  v39 = DeviceObject;
  Flags = DeviceObject->Flags;
  if ( (Flags & 4) != 0 )
  {
    if ( Length )
    {
      v41 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_4(NonPagedPoolNx, Length);
      Irp->AssociatedIrp.MasterIrp = v41;
      if ( !IopDisableBufferedIoInit )
        memset(v41, 0, Length);
      Irp->Flags |= 0x70u;
    }
    else
    {
      Irp->AssociatedIrp.MasterIrp = 0LL;
    }
  }
  else if ( (Flags & 0x10) != 0 )
  {
    if ( Length )
    {
      Mdl = IoAllocateMdl(Buffer, Length, 0, 1u, Irp);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      IopProbeAndLockPages_0(Mdl, v45, v43, (__int64)v39, v38->MajorFunction);
    }
    goto LABEL_95;
  }
  Irp->UserBuffer = Buffer;
LABEL_95:
  v38->Parameters.Read.Length = Length;
  v38->Parameters.QueryDirectory.FileName = (PUNICODE_STRING)Sid;
  v38->Flags = 0;
  v38->Flags = RestartScan != 0;
  if ( ReturnSingleEntry )
    v38->Flags |= 2u;
  if ( v26 )
    v38->Flags |= 4u;
  result = IopSynchronousServiceTail(v39, Irp, (__int64)v30, 0, v45, v44, 2u);
  if ( !v44 )
    return IopSynchronousApiServiceTail(result, v49, Irp, v45, (unsigned int *)v56, IoStatusBlock);
  return result;
}
