/*
 * XREFs of IopSetEaOrQuotaInformationFile @ 0x1406B5E40
 * Callers:
 *     NtSetQuotaInformationFile @ 0x1406B9C70 (NtSetQuotaInformationFile.c)
 * Callees:
 *     IopAcquireFastLock @ 0x14002354C (IopAcquireFastLock.c)
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     IopVerifierExAllocatePool @ 0x140024538 (IopVerifierExAllocatePool.c)
 *     IopReferenceFileObject @ 0x140024E54 (IopReferenceFileObject.c)
 *     IopAllocateIrpExReturn @ 0x1400821E0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     IoAllocateMdl @ 0x1400BBD50 (IoAllocateMdl.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x1400FEBE0 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     IopProbeAndLockPages_1 @ 0x1401FBB08 (IopProbeAndLockPages_1.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IopSynchronousServiceTail @ 0x1404AD220 (IopSynchronousServiceTail.c)
 *     IopAcquireFileObjectLock @ 0x14056053C (IopAcquireFileObjectLock.c)
 *     IopSynchronousApiServiceTail @ 0x1405753C0 (IopSynchronousApiServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x1406B4714 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x1406B4D78 (IopExceptionCleanup.c)
 *     IoCheckQuotaBufferValidity @ 0x1406B7100 (IoCheckQuotaBufferValidity.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopSetEaOrQuotaInformationFile(void *a1, unsigned __int64 a2, void *a3, ULONG a4)
{
  struct _IO_STATUS_BLOCK *v5; // rdi
  struct _KEVENT *v7; // r15
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 result; // rax
  struct _FILE_OBJECT *v12; // r14
  unsigned int v13; // ebx
  char v14; // r13
  struct _KEVENT *Pool; // rax
  IRP *v16; // rax
  IRP *Irp; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  ULONG Flags; // eax
  ULONG v20; // eax
  _FILE_QUOTA_INFORMATION *PoolWithQuota_1; // rdi
  int v22; // eax
  PMDL Mdl; // rcx
  char v24; // r12
  char v25; // [rsp+40h] [rbp-78h] BYREF
  char v26; // [rsp+41h] [rbp-77h]
  int v27; // [rsp+44h] [rbp-74h]
  ULONG ErrorOffset; // [rsp+48h] [rbp-70h] BYREF
  PVOID P; // [rsp+50h] [rbp-68h]
  PVOID Object; // [rsp+58h] [rbp-60h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-58h]
  PIRP v32; // [rsp+68h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-48h]
  _QWORD v34[3]; // [rsp+78h] [rbp-40h] BYREF
  KPROCESSOR_MODE v37; // [rsp+E0h] [rbp+28h]

  v5 = (struct _IO_STATUS_BLOCK *)a2;
  v7 = 0LL;
  P = 0LL;
  v34[0] = 0LL;
  v34[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v37 = PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v9 = a2;
    *(_DWORD *)v9 = *(_DWORD *)v9;
    if ( a4 )
    {
      if ( ((unsigned __int8)a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = (unsigned __int64)a3 + a4;
      if ( v10 > 0x7FFFFFFF0000LL || v10 < (unsigned __int64)a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  result = IopReferenceFileObject(a1, 2u, PreviousMode, &Object, 0LL);
  v27 = result;
  if ( (int)result >= 0 )
  {
    v12 = (struct _FILE_OBJECT *)Object;
    if ( (*((_DWORD *)Object + 20) & 2) != 0 )
    {
      if ( IopAcquireFastLock((volatile __int32 *)Object) )
      {
LABEL_15:
        v14 = 1;
        goto LABEL_20;
      }
      v13 = IopAcquireFileObjectLock((char *)v12, PreviousMode, (v12->Flags & 4) != 0, &v25);
      v27 = v13;
      if ( !v25 )
      {
        PreviousMode = v37;
        goto LABEL_15;
      }
    }
    else
    {
      Pool = (struct _KEVENT *)IopVerifierExAllocatePool(NonPagedPoolNx, 0x18uLL);
      v7 = Pool;
      P = Pool;
      if ( Pool )
      {
        KeInitializeEvent(Pool, SynchronizationEvent, 0);
        v14 = 0;
LABEL_20:
        v25 = v14;
        if ( (v12->Flags & 0x4000000) == 0 )
          KeResetEvent(&v12->Event);
        DeviceObject = IoGetRelatedDeviceObject(v12);
        v16 = (IRP *)IopAllocateIrpExReturn();
        Irp = v16;
        v32 = v16;
        if ( !v16 )
        {
          if ( (v12->Flags & 2) == 0 )
            ExFreePoolWithTag(v7, 0);
          IopAllocateIrpCleanup((char *)v12, 0LL);
          return 3221225626LL;
        }
        v16->Tail.Overlay.OriginalFileObject = v12;
        v16->Tail.Overlay.Thread = CurrentThread;
        v16->RequestorMode = PreviousMode;
        if ( v14 )
        {
          v16->UserEvent = 0LL;
          v16->UserIosb = v5;
          v16->AllocationFlags |= 2u;
        }
        else
        {
          v16->UserEvent = v7;
          v16->UserIosb = (PIO_STATUS_BLOCK)v34;
          v16->Flags = 4;
        }
        v16->Overlay.AllocationSize.QuadPart = 0LL;
        CurrentStackLocation = v16->Tail.Overlay.CurrentStackLocation;
        CurrentStackLocation[-1].MajorFunction = 26;
        CurrentStackLocation[-1].FileObject = v12;
        Flags = DeviceObject->Flags;
        if ( (Flags & 4) != 0 )
        {
          v20 = a4;
          if ( !a4 )
          {
            Irp->AssociatedIrp.MasterIrp = 0LL;
            Irp->UserBuffer = a3;
            goto LABEL_43;
          }
          v26 = 0;
          PoolWithQuota_1 = (_FILE_QUOTA_INFORMATION *)IopVerifierExAllocatePoolWithQuota_1(NonPagedPoolNx, a4);
          Irp->AssociatedIrp.MasterIrp = (struct _IRP *)PoolWithQuota_1;
          memmove(PoolWithQuota_1, a3, a4);
          v22 = IoCheckQuotaBufferValidity(PoolWithQuota_1, a4, &ErrorOffset);
          v27 = v22;
          if ( v22 < 0 )
          {
            v26 = 1;
            *(_DWORD *)a2 = v22;
            *(_QWORD *)(a2 + 8) = ErrorOffset;
            RtlRaiseStatus(v22);
          }
          Irp->Flags |= 0x30u;
          v5 = (struct _IO_STATUS_BLOCK *)a2;
          PreviousMode = v37;
        }
        else
        {
          if ( (Flags & 0x10) != 0 )
          {
            v20 = a4;
            if ( a4 )
            {
              Mdl = IoAllocateMdl(a3, a4, 0, 1u, Irp);
              if ( !Mdl )
                RtlRaiseStatus(-1073741670);
              IopProbeAndLockPages_1(
                Mdl,
                PreviousMode,
                0,
                (__int64)DeviceObject,
                CurrentStackLocation[-1].MajorFunction);
              v20 = a4;
            }
            goto LABEL_43;
          }
          Irp->UserBuffer = a3;
        }
        v20 = a4;
LABEL_43:
        CurrentStackLocation[-1].Parameters.Read.Length = v20;
        v24 = v25;
        result = IopSynchronousServiceTail(DeviceObject, Irp, (__int64)v12, 0, PreviousMode, v25, 2u);
        if ( !v24 )
          return IopSynchronousApiServiceTail(result, v7, Irp, PreviousMode, (unsigned int *)v34, v5);
        return result;
      }
      v13 = -1073741670;
    }
    ObfDereferenceObject(v12);
    return v13;
  }
  return result;
}
