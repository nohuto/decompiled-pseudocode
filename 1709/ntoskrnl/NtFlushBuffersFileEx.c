/*
 * XREFs of NtFlushBuffersFileEx @ 0x140575154
 * Callers:
 *     NtFlushBuffersFile @ 0x140575130 (NtFlushBuffersFile.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     IopVerifierExAllocatePool @ 0x140024538 (IopVerifierExAllocatePool.c)
 *     IopReferenceFileObject @ 0x140024E54 (IopReferenceFileObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     IopAllocateIrpExReturn @ 0x1400821E0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IopSynchronousServiceTail @ 0x1404AD220 (IopSynchronousServiceTail.c)
 *     IopAcquireFileObjectLock @ 0x14056053C (IopAcquireFileObjectLock.c)
 *     IopSynchronousApiServiceTail @ 0x1405753C0 (IopSynchronousApiServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x1406B4714 (IopAllocateIrpCleanup.c)
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
  struct _DEVICE_OBJECT *RelatedDeviceObject; // r12
  __int64 Irp; // rax
  IRP *v18; // rbx
  PIO_STATUS_BLOCK v19; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v21; // r9
  struct _KEVENT *Pool; // rax
  NTSTATUS v23; // ebx
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v25; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v26[2]; // [rsp+50h] [rbp-38h] BYREF
  char v27; // [rsp+98h] [rbp+10h]
  char v28; // [rsp+A0h] [rbp+18h] BYREF

  v27 = Flags;
  v26[0] = 0LL;
  v26[1] = 0LL;
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
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, &Object, &v25);
  if ( result >= 0 )
  {
    v10 = (struct _FILE_OBJECT *)Object;
    v11 = (char *)Object + 80;
    v12 = *((_DWORD *)Object + 20);
    if ( ((~(unsigned __int8)(v12 >> 5) & 4 | 2) & v25.GrantedAccess) != 0 )
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
          Irp = IopAllocateIrpExReturn();
          v18 = (IRP *)Irp;
          if ( Irp )
          {
            *(_QWORD *)(Irp + 192) = v10;
            *(_QWORD *)(Irp + 152) = CurrentThread;
            *(_BYTE *)(Irp + 64) = PreviousMode;
            if ( v14 )
            {
              *(_QWORD *)(Irp + 80) = 0LL;
              v19 = IoStatusBlock;
            }
            else
            {
              *(_QWORD *)(Irp + 80) = v15;
              v19 = (PIO_STATUS_BLOCK)v26;
              v18->Flags = 4;
            }
            v18->UserIosb = v19;
            v18->Overlay.AllocationSize.QuadPart = 0LL;
            CurrentStackLocation = v18->Tail.Overlay.CurrentStackLocation;
            CurrentStackLocation[-1].MajorFunction = 9;
            CurrentStackLocation[-1].FileObject = v10;
            if ( (v27 & 1) != 0 )
            {
              CurrentStackLocation[-1].MinorFunction = 2;
            }
            else if ( (v27 & 2) != 0 )
            {
              CurrentStackLocation[-1].MinorFunction = 3;
            }
            else if ( (v27 & 4) != 0 )
            {
              CurrentStackLocation[-1].MinorFunction = 4;
            }
            result = IopSynchronousServiceTail(RelatedDeviceObject, v18, (__int64)v10, 0, PreviousMode, v14, 2u);
            if ( !v14 )
            {
              LOBYTE(v21) = PreviousMode;
              return IopSynchronousApiServiceTail((unsigned int)result, v15, v18, v21, v26, IoStatusBlock);
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
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v10 = (struct _FILE_OBJECT *)Object;
        v23 = IopAcquireFileObjectLock((char *)Object, PreviousMode, (*v11 & 4) != 0, &v28);
        if ( !v28 )
          goto LABEL_12;
      }
      else
      {
        Pool = (struct _KEVENT *)IopVerifierExAllocatePool(NonPagedPoolNx, 0x18uLL);
        v15 = Pool;
        if ( Pool )
        {
          KeInitializeEvent(Pool, SynchronizationEvent, 0);
          v14 = 0;
          goto LABEL_13;
        }
        v23 = -1073741670;
      }
    }
    else
    {
      v23 = -1073741790;
    }
    ObfDereferenceObject(v10);
    return v23;
  }
  return result;
}
