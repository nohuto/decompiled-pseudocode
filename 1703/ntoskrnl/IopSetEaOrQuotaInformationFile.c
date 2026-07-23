/*
 * XREFs of IopSetEaOrQuotaInformationFile @ 0x14068A1D8
 * Callers:
 *     NtSetQuotaInformationFile @ 0x14068DF90 (NtSetQuotaInformationFile.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     IopAcquireFastLock @ 0x140022E54 (IopAcquireFastLock.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x140033E50 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     IopReferenceFileObject @ 0x14004F3DC (IopReferenceFileObject.c)
 *     IopAllocateIrpExReturn @ 0x1400ED980 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400EDDF0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     IoAllocateMdl @ 0x1401176F0 (IoAllocateMdl.c)
 *     ExAllocatePoolWithTagPriority @ 0x14012A7A0 (ExAllocatePoolWithTagPriority.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     IopProbeAndLockPages_0 @ 0x1401EFEC4 (IopProbeAndLockPages_0.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IopSynchronousApiServiceTail @ 0x140440474 (IopSynchronousApiServiceTail.c)
 *     IopSynchronousServiceTail @ 0x14053A760 (IopSynchronousServiceTail.c)
 *     IopAcquireFileObjectLock @ 0x140561408 (IopAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140688728 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140688D98 (IopExceptionCleanup.c)
 *     IoCheckQuotaBufferValidity @ 0x14068B460 (IoCheckQuotaBufferValidity.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopSetEaOrQuotaInformationFile(void *a1, unsigned __int64 a2, char *a3, ULONG a4)
{
  SIZE_T v4; // rbx
  struct _IO_STATUS_BLOCK *v6; // rdi
  struct _KEVENT *v8; // r15
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v10; // rcx
  __int64 result; // rax
  struct _FILE_OBJECT *v12; // r14
  unsigned int v13; // ebx
  struct _KEVENT *PoolWithTagPriority; // rax
  __int64 v15; // rdx
  IRP *v16; // rax
  IRP *Irp; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  ULONG Flags; // eax
  _FILE_QUOTA_INFORMATION *PoolWithQuota_1; // rdi
  int v21; // eax
  PMDL Mdl; // rcx
  char v23; // r12
  char v24; // bl
  char v25; // [rsp+40h] [rbp-78h] BYREF
  char v26; // [rsp+41h] [rbp-77h]
  int v27; // [rsp+44h] [rbp-74h]
  PVOID P; // [rsp+48h] [rbp-70h]
  ULONG ErrorOffset; // [rsp+50h] [rbp-68h] BYREF
  PVOID Object; // [rsp+58h] [rbp-60h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-58h]
  PIRP v32; // [rsp+68h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-48h]
  _QWORD v34[3]; // [rsp+78h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+B8h] [rbp+0h]
  char v38; // [rsp+E0h] [rbp+28h]

  v4 = a4;
  v6 = (struct _IO_STATUS_BLOCK *)a2;
  v8 = 0LL;
  P = 0LL;
  v34[0] = 0LL;
  v34[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v38 = PreviousMode;
  if ( PreviousMode )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v10 = a2;
    *(_DWORD *)v10 = *(_DWORD *)v10;
    if ( a4 )
    {
      if ( ((unsigned __int8)a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a3[a4] > 0x7FFFFFFF0000LL || &a3[a4] < a3 )
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
        v25 = 1;
        goto LABEL_23;
      }
      v13 = IopAcquireFileObjectLock((char *)v12, PreviousMode, (v12->Flags & 4) != 0, &v25);
      v27 = v13;
      if ( !v25 )
      {
        v4 = a4;
        goto LABEL_15;
      }
    }
    else
    {
      if ( ViVerifierDriverAddedThunkListHead )
        PoolWithTagPriority = (struct _KEVENT *)ExAllocatePoolWithTagPriority(
                                                  NonPagedPoolNx,
                                                  0x18uLL,
                                                  0x20206F49u,
                                                  (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
      else
        PoolWithTagPriority = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x20206F49u);
      v8 = PoolWithTagPriority;
      P = PoolWithTagPriority;
      if ( PoolWithTagPriority )
      {
        KeInitializeEvent(PoolWithTagPriority, SynchronizationEvent, 0);
        v25 = 0;
LABEL_23:
        if ( (v12->Flags & 0x4000000) == 0 )
          KeResetEvent(&v12->Event);
        DeviceObject = IoGetRelatedDeviceObject(v12);
        LOBYTE(v15) = DeviceObject->StackSize;
        v16 = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, v15, 0LL, retaddr);
        Irp = v16;
        v32 = v16;
        if ( !v16 )
        {
          if ( (v12->Flags & 2) == 0 )
            ExFreePoolWithTag(v8, 0);
          IopAllocateIrpCleanup((char *)v12, 0LL);
          return 3221225626LL;
        }
        v16->Tail.Overlay.OriginalFileObject = v12;
        v16->Tail.Overlay.Thread = CurrentThread;
        v16->RequestorMode = PreviousMode;
        if ( v25 )
        {
          v16->UserEvent = 0LL;
          v16->UserIosb = v6;
          v16->AllocationFlags |= 2u;
        }
        else
        {
          v16->UserEvent = v8;
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
          if ( (_DWORD)v4 )
          {
            v26 = 0;
            PoolWithQuota_1 = (_FILE_QUOTA_INFORMATION *)IopVerifierExAllocatePoolWithQuota_1(NonPagedPoolNx, v4);
            Irp->AssociatedIrp.MasterIrp = (struct _IRP *)PoolWithQuota_1;
            memmove(PoolWithQuota_1, a3, v4);
            LODWORD(v4) = a4;
            v21 = IoCheckQuotaBufferValidity(PoolWithQuota_1, a4, &ErrorOffset);
            v27 = v21;
            if ( v21 < 0 )
            {
              v26 = 1;
              *(_DWORD *)a2 = v21;
              *(_QWORD *)(a2 + 8) = ErrorOffset;
              RtlRaiseStatus(v21);
            }
            Irp->Flags |= 0x30u;
            v6 = (struct _IO_STATUS_BLOCK *)a2;
            goto LABEL_44;
          }
          Irp->AssociatedIrp.MasterIrp = 0LL;
        }
        else if ( (Flags & 0x10) != 0 )
        {
          if ( (_DWORD)v4 )
          {
            Mdl = IoAllocateMdl(a3, v4, 0, 1u, Irp);
            if ( !Mdl )
              RtlRaiseStatus(-1073741670);
            v23 = v38;
            IopProbeAndLockPages_0(Mdl, v38, 0, (__int64)DeviceObject, CurrentStackLocation[-1].MajorFunction);
            goto LABEL_45;
          }
LABEL_44:
          v23 = v38;
LABEL_45:
          CurrentStackLocation[-1].Parameters.Read.Length = v4;
          v24 = v25;
          result = IopSynchronousServiceTail(DeviceObject, Irp, (__int64)v12, 0, v23, v25, 2u);
          if ( !v24 )
            return IopSynchronousApiServiceTail(result, v8, Irp, v23, (unsigned int *)v34, v6);
          return result;
        }
        Irp->UserBuffer = a3;
        goto LABEL_44;
      }
      v13 = -1073741670;
    }
    ObfDereferenceObject(v12);
    return v13;
  }
  return result;
}
