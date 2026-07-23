/*
 * XREFs of NtFlushBuffersFileEx @ 0x140560E8C
 * Callers:
 *     NtFlushBuffersFile @ 0x140560E68 (NtFlushBuffersFile.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x140007BA0 (IopVerifierExAllocatePool.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     IopReferenceFileObject @ 0x1400697A4 (IopReferenceFileObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     IopAllocateIrpExReturn @ 0x1400FDE40 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400FE1C0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1404941E4 (IopAcquireFileObjectLock.c)
 *     IopSynchronousApiServiceTail @ 0x1405610F8 (IopSynchronousApiServiceTail.c)
 *     IopSynchronousServiceTail @ 0x14059D990 (IopSynchronousServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x140719344 (IopAllocateIrpCleanup.c)
 */

NTSTATUS __cdecl NtFlushBuffersFileEx(
        HANDLE FileHandle,
        ULONG Flags,
        PVOID Parameters,
        ULONG ParametersSize,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  char v5; // r12
  struct _KTHREAD *CurrentThread; // r13
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v9; // rcx
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v11; // rbx
  _DWORD *v12; // rsi
  unsigned int v13; // edx
  struct _KTHREAD *v14; // rax
  char v15; // r15
  struct _KEVENT *v16; // rdi
  __int64 v17; // rdx
  __int64 Irp; // rax
  IRP *v19; // rsi
  PIO_STATUS_BLOCK v20; // rax
  struct _KEVENT *v21; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v23; // r9
  struct _KEVENT *Pool; // rax
  NTSTATUS v25; // edi
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v27; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v28[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp+18h] BYREF

  v5 = Flags;
  if ( Parameters || ParametersSize )
    return -1073741811;
  v28[0] = 0LL;
  v28[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v9 = (__int64)IoStatusBlock;
    *(_DWORD *)v9 = *(_DWORD *)v9;
  }
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, &Object, &v27);
  if ( result >= 0 )
  {
    v11 = (struct _FILE_OBJECT *)Object;
    v12 = (char *)Object + 80;
    v13 = *((_DWORD *)Object + 20);
    if ( ((~(unsigned __int8)(v13 >> 5) & 4 | 2) & v27.GrantedAccess) != 0 )
    {
      if ( (v13 & 2) != 0 )
      {
        v14 = KeGetCurrentThread();
        --v14->KernelApcDisable;
        if ( !_InterlockedExchange((volatile __int32 *)Object + 29, 1) )
        {
          v11 = (struct _FILE_OBJECT *)Object;
          ObfReferenceObject(Object);
LABEL_12:
          v15 = 1;
          v16 = 0LL;
LABEL_13:
          if ( (*v12 & 0x4000000) == 0 )
            KeResetEvent(&v11->Event);
          DeviceObject = IoGetRelatedDeviceObject(v11);
          LOBYTE(v17) = DeviceObject->StackSize;
          Irp = IopAllocateIrpExReturn((__int64)DeviceObject, v17, 0LL, retaddr);
          v19 = (IRP *)Irp;
          if ( Irp )
          {
            *(_QWORD *)(Irp + 192) = v11;
            *(_QWORD *)(Irp + 152) = CurrentThread;
            *(_BYTE *)(Irp + 64) = PreviousMode;
            if ( v15 )
            {
              v20 = IoStatusBlock;
              v21 = 0LL;
            }
            else
            {
              *(_DWORD *)(Irp + 16) = 4;
              v20 = (PIO_STATUS_BLOCK)v28;
              v21 = v16;
            }
            v19->UserEvent = v21;
            v19->UserIosb = v20;
            v19->Overlay.AllocationSize.QuadPart = 0LL;
            CurrentStackLocation = v19->Tail.Overlay.CurrentStackLocation;
            CurrentStackLocation[-1].MajorFunction = 9;
            CurrentStackLocation[-1].FileObject = v11;
            if ( (v5 & 1) != 0 )
            {
              CurrentStackLocation[-1].MinorFunction = 2;
            }
            else if ( (v5 & 2) != 0 )
            {
              CurrentStackLocation[-1].MinorFunction = 3;
            }
            else if ( (v5 & 4) != 0 )
            {
              CurrentStackLocation[-1].MinorFunction = 4;
            }
            result = IopSynchronousServiceTail(DeviceObject, v19, PreviousMode, v15, 2);
            if ( !v15 )
            {
              LOBYTE(v23) = PreviousMode;
              return IopSynchronousApiServiceTail((unsigned int)result, v16, v19, v23, v28, IoStatusBlock);
            }
          }
          else
          {
            if ( v16 )
              ExFreePoolWithTag(v16, 0);
            IopAllocateIrpCleanup(v11, 0LL);
            return -1073741670;
          }
          return result;
        }
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v11 = (struct _FILE_OBJECT *)Object;
        v25 = IopAcquireFileObjectLock((char *)Object, PreviousMode, (*v12 & 4) != 0, &DeviceObject);
        if ( !(_BYTE)DeviceObject )
          goto LABEL_12;
      }
      else
      {
        Pool = (struct _KEVENT *)IopVerifierExAllocatePool(NonPagedPoolNx, 0x18uLL);
        v16 = Pool;
        if ( Pool )
        {
          KeInitializeEvent(Pool, SynchronizationEvent, 0);
          v15 = 0;
          goto LABEL_13;
        }
        v25 = -1073741670;
      }
    }
    else
    {
      v25 = -1073741790;
    }
    ObfDereferenceObject(v11);
    return v25;
  }
  return result;
}
