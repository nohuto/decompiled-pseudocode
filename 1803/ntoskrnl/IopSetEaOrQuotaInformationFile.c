/*
 * XREFs of IopSetEaOrQuotaInformationFile @ 0x14071AB3C
 * Callers:
 *     NtSetQuotaInformationFile @ 0x14071EC10 (NtSetQuotaInformationFile.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x140007BA0 (IopVerifierExAllocatePool.c)
 *     IopAcquireFastLock_0 @ 0x140007BC8 (IopAcquireFastLock_0.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     IopReferenceFileObject @ 0x1400697A4 (IopReferenceFileObject.c)
 *     IoAllocateMdl @ 0x140098CD0 (IoAllocateMdl.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x1400D05A8 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     IopAllocateIrpExReturn @ 0x1400FDE40 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400FE1C0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     IopProbeAndLockPages_0 @ 0x140232AF0 (IopProbeAndLockPages_0.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1404941E4 (IopAcquireFileObjectLock.c)
 *     IopSynchronousApiServiceTail @ 0x1405610F8 (IopSynchronousApiServiceTail.c)
 *     IopSynchronousServiceTail @ 0x14059D990 (IopSynchronousServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x140719344 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140719A28 (IopExceptionCleanup.c)
 *     IoCheckQuotaBufferValidity @ 0x14071BD90 (IoCheckQuotaBufferValidity.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopSetEaOrQuotaInformationFile(void *a1, unsigned __int64 a2, char *a3, unsigned int a4, char a5)
{
  SIZE_T v5; // r13
  struct _IO_STATUS_BLOCK *v7; // rdi
  struct _KEVENT *v9; // r12
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v11; // rcx
  __int64 result; // rax
  struct _FILE_OBJECT *v13; // r14
  unsigned int v14; // ebx
  struct _KEVENT *Pool; // rax
  __int64 v16; // rdx
  IRP *v17; // rax
  IRP *Irp; // rsi
  struct _IO_STATUS_BLOCK *v19; // rax
  struct _KEVENT *v20; // rcx
  ULONG Flags; // eax
  _FILE_QUOTA_INFORMATION *PoolWithQuota_1; // rdi
  int v23; // eax
  PMDL Mdl; // rcx
  struct _IO_STACK_LOCATION *v25; // r15
  char v26; // r15
  KPROCESSOR_MODE v27; // [rsp+40h] [rbp-78h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-70h]
  struct _IO_STACK_LOCATION *v29; // [rsp+48h] [rbp-70h]
  ULONG ErrorOffset; // [rsp+50h] [rbp-68h] BYREF
  PVOID P; // [rsp+58h] [rbp-60h]
  PVOID Object; // [rsp+60h] [rbp-58h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-50h]
  PIRP v34; // [rsp+70h] [rbp-48h]
  _QWORD v35[3]; // [rsp+78h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+B8h] [rbp+0h]

  v5 = a4;
  v7 = (struct _IO_STATUS_BLOCK *)a2;
  v9 = 0LL;
  P = 0LL;
  v35[0] = 0LL;
  v35[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v27 = PreviousMode;
  if ( PreviousMode )
  {
    v11 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v11 = a2;
    *(_DWORD *)v11 = *(_DWORD *)v11;
    if ( a4 )
    {
      if ( ((unsigned __int8)a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a3[a4] > 0x7FFFFFFF0000LL || &a3[a4] < a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  result = IopReferenceFileObject(a1, 2u, PreviousMode, &Object, 0LL);
  if ( (int)result >= 0 )
  {
    v13 = (struct _FILE_OBJECT *)Object;
    if ( (*((_DWORD *)Object + 20) & 2) != 0 )
    {
      if ( IopAcquireFastLock_0((volatile __int32 *)Object) )
      {
LABEL_15:
        a5 = 1;
        goto LABEL_20;
      }
      v14 = IopAcquireFileObjectLock((char *)v13, PreviousMode, (v13->Flags & 4) != 0, &a5);
      if ( !a5 )
      {
        PreviousMode = v27;
        goto LABEL_15;
      }
    }
    else
    {
      Pool = (struct _KEVENT *)IopVerifierExAllocatePool(NonPagedPoolNx, 0x18uLL);
      v9 = Pool;
      P = Pool;
      if ( Pool )
      {
        KeInitializeEvent(Pool, SynchronizationEvent, 0);
        a5 = 0;
LABEL_20:
        if ( (v13->Flags & 0x4000000) == 0 )
          KeResetEvent(&v13->Event);
        DeviceObject = IoGetRelatedDeviceObject(v13);
        LOBYTE(v16) = DeviceObject->StackSize;
        v17 = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, v16, 0LL, retaddr);
        Irp = v17;
        v34 = v17;
        if ( !v17 )
        {
          if ( (v13->Flags & 2) == 0 )
            ExFreePoolWithTag(v9, 0);
          IopAllocateIrpCleanup((char *)v13, 0LL);
          return 3221225626LL;
        }
        v17->Tail.Overlay.OriginalFileObject = v13;
        v17->Tail.Overlay.Thread = CurrentThread;
        v17->RequestorMode = PreviousMode;
        if ( a5 )
        {
          v17->AllocationFlags |= 2u;
          v19 = v7;
          v20 = 0LL;
        }
        else
        {
          v17->Flags = 4;
          v19 = (struct _IO_STATUS_BLOCK *)v35;
          v20 = v9;
        }
        Irp->UserEvent = v20;
        Irp->UserIosb = v19;
        Irp->Overlay.AllocationSize.QuadPart = 0LL;
        v29 = Irp->Tail.Overlay.CurrentStackLocation - 1;
        v29->MajorFunction = 26;
        v29->FileObject = v13;
        Flags = DeviceObject->Flags;
        if ( (Flags & 4) != 0 )
        {
          if ( (_DWORD)v5 )
          {
            PoolWithQuota_1 = (_FILE_QUOTA_INFORMATION *)IopVerifierExAllocatePoolWithQuota_1(NonPagedPoolNx, v5);
            Irp->AssociatedIrp.MasterIrp = (struct _IRP *)PoolWithQuota_1;
            memmove(PoolWithQuota_1, a3, v5);
            v23 = IoCheckQuotaBufferValidity(PoolWithQuota_1, v5, &ErrorOffset);
            if ( v23 < 0 )
            {
              *(_DWORD *)a2 = v23;
              *(_QWORD *)(a2 + 8) = ErrorOffset;
              RtlRaiseStatus(v23);
            }
            Irp->Flags |= 0x30u;
            PreviousMode = v27;
            v7 = (struct _IO_STATUS_BLOCK *)a2;
            goto LABEL_41;
          }
          Irp->AssociatedIrp.MasterIrp = 0LL;
        }
        else if ( (Flags & 0x10) != 0 )
        {
          if ( (_DWORD)v5 )
          {
            Mdl = IoAllocateMdl(a3, v5, 0, 1u, Irp);
            if ( !Mdl )
              RtlRaiseStatus(-1073741670);
            v25 = v29;
            IopProbeAndLockPages_0(Mdl, PreviousMode, 0, (__int64)DeviceObject, v29->MajorFunction);
            goto LABEL_42;
          }
LABEL_41:
          v25 = v29;
LABEL_42:
          v25->Parameters.Read.Length = v5;
          v26 = a5;
          result = IopSynchronousServiceTail(DeviceObject, Irp, (__int64)v13, 0, PreviousMode, a5, 2u);
          if ( !v26 )
            return IopSynchronousApiServiceTail(result, v9, Irp, PreviousMode, (unsigned int *)v35, v7);
          return result;
        }
        Irp->UserBuffer = a3;
        goto LABEL_41;
      }
      v14 = -1073741670;
    }
    ObfDereferenceObject(v13);
    return v14;
  }
  return result;
}
