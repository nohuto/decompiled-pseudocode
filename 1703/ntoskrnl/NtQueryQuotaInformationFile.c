/*
 * XREFs of NtQueryQuotaInformationFile @ 0x14068D860
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     IopReferenceFileObject @ 0x14004F3DC (IopReferenceFileObject.c)
 *     IopAllocateIrpExReturn @ 0x1400ED980 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400EDDF0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     IoAllocateMdl @ 0x1401176F0 (IoAllocateMdl.c)
 *     ExAllocatePoolWithTagPriority @ 0x14012A7A0 (ExAllocatePoolWithTagPriority.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     IopProbeAndLockPages_1 @ 0x1401F5CD4 (IopProbeAndLockPages_1.c)
 *     IopVerifierExAllocatePoolWithQuota_4 @ 0x1401F5D70 (IopVerifierExAllocatePoolWithQuota_4.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IopSynchronousApiServiceTail @ 0x140440474 (IopSynchronousApiServiceTail.c)
 *     RtlValidSid @ 0x1404F5A90 (RtlValidSid.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x14053A760 (IopSynchronousServiceTail.c)
 *     IopAcquireFileObjectLock @ 0x140561408 (IopAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140688728 (IopAllocateIrpCleanup.c)
 *     IopCheckGetQuotaBufferValidity @ 0x1406889EC (IopCheckGetQuotaBufferValidity.c)
 *     IopExceptionCleanup @ 0x140688D98 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
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
  HANDLE v10; // r14
  struct _KTHREAD *CurrentThread; // rdx
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  __int16 v15; // ax
  UNICODE_STRING *v16; // r12
  __int64 v17; // rax
  unsigned int v18; // r14d
  char *v19; // rcx
  ULONG v20; // r15d
  ULONG v21; // ecx
  NTSTATUS result; // eax
  char *PoolWithQuota_4; // rdi
  unsigned int *v24; // rax
  PSID v25; // rax
  NTSTATUS v26; // esi
  struct _FILE_OBJECT *v27; // r13
  _DWORD *v28; // r14
  struct _KTHREAD *v29; // rax
  NTSTATUS v30; // edi
  struct _KEVENT *PoolWithTagPriority; // rax
  __int64 v32; // rdx
  IRP *v33; // rax
  IRP *Irp; // rsi
  PIO_STATUS_BLOCK v35; // rax
  struct _IO_STACK_LOCATION *v36; // r14
  struct _DEVICE_OBJECT *v37; // r15
  ULONG Flags; // eax
  struct _IRP *v39; // rcx
  PMDL Mdl; // rcx
  __int64 v41; // r8
  char v42; // [rsp+40h] [rbp-98h]
  KPROCESSOR_MODE v43; // [rsp+41h] [rbp-97h]
  char v44; // [rsp+42h] [rbp-96h]
  char v45[4]; // [rsp+44h] [rbp-94h] BYREF
  PVOID P; // [rsp+48h] [rbp-90h]
  PVOID v47; // [rsp+50h] [rbp-88h]
  PVOID Object; // [rsp+58h] [rbp-80h] BYREF
  unsigned int *v49; // [rsp+60h] [rbp-78h]
  PIRP v50; // [rsp+68h] [rbp-70h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-68h]
  PSID Sid; // [rsp+78h] [rbp-60h]
  struct _KTHREAD *v53; // [rsp+80h] [rbp-58h]
  _QWORD v54[10]; // [rsp+88h] [rbp-50h] BYREF
  __int64 retaddr; // [rsp+D8h] [rbp+0h]

  v10 = FileHandle;
  v47 = 0LL;
  P = 0LL;
  LODWORD(DeviceObject) = 0;
  Sid = 0LL;
  v49 = 0LL;
  v54[0] = 0LL;
  v54[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v53 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v43 = PreviousMode;
  if ( PreviousMode )
  {
    v13 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v13 = (__int64)IoStatusBlock;
    *(_DWORD *)v13 = *(_DWORD *)v13;
    v14 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7];
    if ( v14 && ((v15 = *(_WORD *)(v14 + 8), v15 == 332) || v15 == 452) )
      ProbeForWrite(Buffer, Length, 4u);
    else
      ProbeForWrite(Buffer, Length, 8u);
    v16 = (UNICODE_STRING *)StartSid;
    if ( StartSid )
    {
      v17 = (__int64)StartSid + 1;
      if ( (unsigned __int64)StartSid + 1 >= 0x7FFFFFFF0000LL )
        v17 = 0x7FFFFFFF0000LL;
      v44 = *(_BYTE *)v17;
      v18 = 4 * *(unsigned __int8 *)v17 + 8;
      LODWORD(DeviceObject) = v18;
      if ( ((unsigned __int8)StartSid & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = (char *)StartSid + v18;
      if ( (unsigned __int64)v19 > 0x7FFFFFFF0000LL || v19 < StartSid )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      v44 = 0;
      v18 = (unsigned int)DeviceObject;
    }
    if ( SidList && (v20 = SidListLength) != 0 )
    {
      if ( ((unsigned __int8)SidList & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)SidList + SidListLength > 0x7FFFFFFF0000LL || (char *)SidList + SidListLength < SidList )
        MEMORY[0x7FFFFFFF0000] = 0;
      v21 = (SidListLength + 3) & 0xFFFFFFFC;
      if ( v21 > ~v18 )
        return -1073741811;
      if ( v21 < SidListLength )
        return -1073741811;
      PoolWithQuota_4 = (char *)IopVerifierExAllocatePoolWithQuota_4(NonPagedPoolNx, v21 + v18);
      P = PoolWithQuota_4;
      v49 = (unsigned int *)PoolWithQuota_4;
      memmove(PoolWithQuota_4, SidList, SidListLength);
    }
    else
    {
      v20 = 0;
      SidListLength = 0;
      if ( StartSid )
      {
        PoolWithQuota_4 = (char *)IopVerifierExAllocatePoolWithQuota_4(PagedPool, v18);
        P = PoolWithQuota_4;
      }
      else
      {
        PoolWithQuota_4 = (char *)P;
      }
    }
    if ( StartSid )
    {
      Sid = &PoolWithQuota_4[(v20 + 3) & 0xFFFFFFFC];
      memmove(Sid, StartSid, v18);
      *((_BYTE *)Sid + 1) = v44;
    }
    v10 = FileHandle;
  }
  else
  {
    v20 = SidListLength;
    if ( SidList )
    {
      v24 = v49;
      if ( SidListLength )
        v24 = (unsigned int *)SidList;
      v49 = v24;
    }
    v25 = Sid;
    v16 = (UNICODE_STRING *)StartSid;
    if ( StartSid )
      v25 = StartSid;
    Sid = v25;
    PoolWithQuota_4 = (char *)P;
  }
  if ( v49 )
  {
    v50 = 0LL;
    v26 = IopCheckGetQuotaBufferValidity(v49, v20, &v50);
    if ( v26 < 0 )
    {
      IoStatusBlock->Information = (ULONG_PTR)v50;
LABEL_46:
      if ( PoolWithQuota_4 )
        ExFreePoolWithTag(PoolWithQuota_4, 0);
      return v26;
    }
  }
  if ( Sid && !RtlValidSid(Sid) )
  {
    if ( PoolWithQuota_4 )
      ExFreePoolWithTag(PoolWithQuota_4, 0);
    return -1073741704;
  }
  v26 = IopReferenceFileObject(v10, 0, PreviousMode, &Object, 0LL);
  if ( v26 < 0 )
    goto LABEL_46;
  v27 = (struct _FILE_OBJECT *)Object;
  v28 = (char *)Object + 80;
  if ( (*((_DWORD *)Object + 20) & 2) != 0 )
  {
    v29 = KeGetCurrentThread();
    --v29->KernelApcDisable;
    if ( !_InterlockedExchange((volatile __int32 *)Object + 29, 1) )
    {
      v27 = (struct _FILE_OBJECT *)Object;
      ObfReferenceObject(Object);
LABEL_61:
      v42 = 1;
      v20 = SidListLength;
      PoolWithQuota_4 = (char *)P;
      goto LABEL_71;
    }
    KeLeaveCriticalRegion();
    v27 = (struct _FILE_OBJECT *)Object;
    v30 = IopAcquireFileObjectLock((char *)Object, v43, (*v28 & 4) != 0, v45);
    if ( !v45[0] )
      goto LABEL_61;
    if ( P )
      ExFreePoolWithTag(P, 0);
LABEL_69:
    ObfDereferenceObject(v27);
    return v30;
  }
  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTagPriority = (struct _KEVENT *)ExAllocatePoolWithTagPriority(
                                              NonPagedPoolNx,
                                              0x18uLL,
                                              0x20206F49u,
                                              (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTagPriority = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x20206F49u);
  v47 = PoolWithTagPriority;
  if ( !PoolWithTagPriority )
  {
    if ( PoolWithQuota_4 )
      ExFreePoolWithTag(PoolWithQuota_4, 0);
    v30 = -1073741670;
    goto LABEL_69;
  }
  KeInitializeEvent(PoolWithTagPriority, SynchronizationEvent, 0);
  v42 = 0;
LABEL_71:
  if ( (*v28 & 0x4000000) == 0 )
    KeResetEvent(&v27->Event);
  DeviceObject = IoGetRelatedDeviceObject(v27);
  LOBYTE(v32) = DeviceObject->StackSize;
  v33 = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, v32, 0LL, retaddr);
  Irp = v33;
  v50 = v33;
  if ( !v33 )
  {
    if ( (*v28 & 2) == 0 )
      ExFreePoolWithTag(v47, 0);
    IopAllocateIrpCleanup((char *)v27, 0LL);
    if ( PoolWithQuota_4 )
      ExFreePoolWithTag(PoolWithQuota_4, 0);
    return -1073741670;
  }
  v33->Tail.Overlay.OriginalFileObject = v27;
  v33->Tail.Overlay.Thread = v53;
  v33->RequestorMode = v43;
  if ( v42 )
  {
    v33->UserEvent = 0LL;
    v35 = IoStatusBlock;
  }
  else
  {
    v33->UserEvent = (PKEVENT)v47;
    v35 = (PIO_STATUS_BLOCK)v54;
    Irp->Flags = 4;
  }
  Irp->UserIosb = v35;
  Irp->Overlay.AllocationSize.QuadPart = 0LL;
  v36 = Irp->Tail.Overlay.CurrentStackLocation - 1;
  v36->MajorFunction = 25;
  v36->FileObject = v27;
  Irp->Tail.Overlay.AuxiliaryBuffer = PoolWithQuota_4;
  v36->Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v49;
  v36->Parameters.Create.EaLength = v20;
  v37 = DeviceObject;
  Flags = DeviceObject->Flags;
  if ( (Flags & 4) != 0 )
  {
    if ( Length )
    {
      v39 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_4(NonPagedPoolNx, Length);
      Irp->AssociatedIrp.MasterIrp = v39;
      if ( !IopDisableBufferedIoInit )
        memset(v39, 0, Length);
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
      IopProbeAndLockPages_1(Mdl, v43, v41, (__int64)v37, v36->MajorFunction);
    }
    goto LABEL_95;
  }
  Irp->UserBuffer = Buffer;
LABEL_95:
  v36->Parameters.Read.Length = Length;
  v36->Parameters.QueryDirectory.FileName = v16;
  v36->Flags = 0;
  v36->Flags = RestartScan != 0;
  if ( ReturnSingleEntry )
    v36->Flags |= 2u;
  if ( v16 )
    v36->Flags |= 4u;
  result = IopSynchronousServiceTail(v37, Irp, (__int64)v27, 0, v43, v42, 2u);
  if ( !v42 )
    return IopSynchronousApiServiceTail(result, v47, Irp, v43, (unsigned int *)v54, IoStatusBlock);
  return result;
}
