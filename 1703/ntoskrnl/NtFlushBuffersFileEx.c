/*
 * XREFs of NtFlushBuffersFileEx @ 0x1404401B4
 * Callers:
 *     NtFlushBuffersFile @ 0x140440190 (NtFlushBuffersFile.c)
 * Callees:
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     IopReferenceFileObject @ 0x14004F3DC (IopReferenceFileObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     IopAllocateIrpExReturn @ 0x1400ED980 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400EDDF0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     ExAllocatePoolWithTagPriority @ 0x14012A7A0 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IopSynchronousApiServiceTail @ 0x140440474 (IopSynchronousApiServiceTail.c)
 *     IopSynchronousServiceTail @ 0x14053A760 (IopSynchronousServiceTail.c)
 *     IopAcquireFileObjectLock @ 0x140561408 (IopAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140688728 (IopAllocateIrpCleanup.c)
 */

NTSTATUS __cdecl NtFlushBuffersFileEx(
        HANDLE FileHandle,
        ULONG Flags,
        PVOID Parameters,
        ULONG ParametersSize,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  struct _KTHREAD *CurrentThread; // r13
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v8; // rcx
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v10; // rdi
  _DWORD *v11; // r12
  unsigned int v12; // edx
  struct _KTHREAD *v13; // rax
  char v14; // r15
  struct _KEVENT *v15; // rsi
  PDEVICE_OBJECT RelatedDeviceObject; // r12
  __int64 v17; // rdx
  __int64 Irp; // rax
  IRP *v19; // rbx
  PIO_STATUS_BLOCK v20; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v22; // r9
  struct _KEVENT *PoolWithTagPriority; // rax
  NTSTATUS v24; // ebx
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v26; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v27[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  char v29; // [rsp+98h] [rbp+10h]
  char v30; // [rsp+A0h] [rbp+18h]

  v29 = Flags;
  v27[0] = 0LL;
  v27[1] = 0LL;
  if ( Parameters || ParametersSize )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v8 = (__int64)IoStatusBlock;
    *(_DWORD *)v8 = *(_DWORD *)v8;
  }
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, &Object, &v26);
  if ( result >= 0 )
  {
    v10 = (struct _FILE_OBJECT *)Object;
    v11 = (char *)Object + 80;
    v12 = *((_DWORD *)Object + 20);
    if ( ((~(unsigned __int8)(v12 >> 5) & 4 | 2) & v26.GrantedAccess) != 0 )
    {
      if ( (v12 & 2) != 0 )
      {
        v13 = KeGetCurrentThread();
        --v13->KernelApcDisable;
        if ( !_InterlockedExchange((volatile __int32 *)Object + 29, 1) )
        {
          v10 = (struct _FILE_OBJECT *)Object;
          ObfReferenceObject(Object);
LABEL_12:
          v14 = 1;
          v15 = 0LL;
LABEL_13:
          if ( (*v11 & 0x4000000) == 0 )
            KeResetEvent(&v10->Event);
          RelatedDeviceObject = IoGetRelatedDeviceObject(v10);
          LOBYTE(v17) = RelatedDeviceObject->StackSize;
          Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v17, 0LL, retaddr);
          v19 = (IRP *)Irp;
          if ( Irp )
          {
            *(_QWORD *)(Irp + 192) = v10;
            *(_QWORD *)(Irp + 152) = CurrentThread;
            *(_BYTE *)(Irp + 64) = PreviousMode;
            if ( v14 )
            {
              *(_QWORD *)(Irp + 80) = 0LL;
              v20 = IoStatusBlock;
            }
            else
            {
              *(_QWORD *)(Irp + 80) = v15;
              v20 = (PIO_STATUS_BLOCK)v27;
              v19->Flags = 4;
            }
            v19->UserIosb = v20;
            v19->Overlay.AllocationSize.QuadPart = 0LL;
            CurrentStackLocation = v19->Tail.Overlay.CurrentStackLocation;
            CurrentStackLocation[-1].MajorFunction = 9;
            CurrentStackLocation[-1].FileObject = v10;
            if ( (v29 & 1) != 0 )
            {
              CurrentStackLocation[-1].MinorFunction = 2;
            }
            else if ( (v29 & 2) != 0 )
            {
              CurrentStackLocation[-1].MinorFunction = 3;
            }
            else if ( (v29 & 4) != 0 )
            {
              CurrentStackLocation[-1].MinorFunction = 4;
            }
            result = IopSynchronousServiceTail(RelatedDeviceObject, v19, PreviousMode, v14, 2);
            if ( !v14 )
            {
              LOBYTE(v22) = PreviousMode;
              return IopSynchronousApiServiceTail((unsigned int)result, v15, v19, v22, v27, IoStatusBlock);
            }
          }
          else
          {
            if ( v15 )
              ExFreePoolWithTag(v15, 0);
            IopAllocateIrpCleanup(v10, 0LL);
            return -1073741670;
          }
          return result;
        }
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v10 = (struct _FILE_OBJECT *)Object;
        v24 = IopAcquireFileObjectLock(Object);
        if ( !v30 )
          goto LABEL_12;
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
        v15 = PoolWithTagPriority;
        if ( PoolWithTagPriority )
        {
          KeInitializeEvent(PoolWithTagPriority, SynchronizationEvent, 0);
          v14 = 0;
          goto LABEL_13;
        }
        v24 = -1073741670;
      }
    }
    else
    {
      v24 = -1073741790;
    }
    ObfDereferenceObject(v10);
    return v24;
  }
  return result;
}
