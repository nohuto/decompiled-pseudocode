/*
 * XREFs of IopCloseFile @ 0x1404BAD60
 * Callers:
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     IopDeleteFile @ 0x1404BB010 (IopDeleteFile.c)
 *     IopCreateFile @ 0x14053C790 (IopCreateFile.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     IopAcquireFastLock_1 @ 0x1400242A8 (IopAcquireFastLock_1.c)
 *     IopGetFileObjectExtension @ 0x14002469C (IopGetFileObjectExtension.c)
 *     IopSetLockOperationProcess @ 0x140024D28 (IopSetLockOperationProcess.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     IopQueueThreadIrp @ 0x140082130 (IopQueueThreadIrp.c)
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     IoFreeIrp @ 0x1400853A0 (IoFreeIrp.c)
 *     IoGetAttachedDevice @ 0x1400855C0 (IoGetAttachedDevice.c)
 *     IopDequeueIrpFromThread @ 0x1400857A0 (IopDequeueIrpFromThread.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     IopAllocateIrpMustSucceed @ 0x140085890 (IopAllocateIrpMustSucceed.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     IopCloseFileObjectExtension @ 0x14011D454 (IopCloseFileObjectExtension.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     IopAcquireFileObjectLock @ 0x14056053C (IopAcquireFileObjectLock.c)
 *     IopCleanupProcessResources @ 0x14056829C (IopCleanupProcessResources.c)
 *     IopFreeBandwidthContract @ 0x1406BD638 (IopFreeBandwidthContract.c)
 *     VfFastIoCheckState @ 0x1407A9C74 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1407A9D54 (VfFastIoSnapState.c)
 */

void __fastcall IopCloseFile(__int64 a1, struct _FILE_OBJECT *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 FileObjectExtension; // rbp
  __int64 v8; // rdi
  int v9; // r15d
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v11; // r14
  struct _KTHREAD *CurrentThread; // rax
  IRP *MustSucceed; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _KTHREAD *v15; // rax
  struct _KTHREAD *v16; // rcx
  bool v17; // zf
  _QWORD *v18; // r8
  __int64 v19; // rcx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct _DEVICE_OBJECT *v24; // rbp
  PFAST_IO_DISPATCH FastIoDispatch; // r14
  __int64 (__fastcall *FastIoUnlockAll)(_QWORD, _QWORD, _QWORD, _QWORD); // r14
  void *v27; // rdi
  char v28; // r12
  IRP *v29; // rdi
  struct _IO_STACK_LOCATION *v30; // rcx
  _BYTE v31[16]; // [rsp+38h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-40h] BYREF

  if ( a3 == 1 )
  {
    v4 = a4;
    FileObjectExtension = 0LL;
    v8 = 0LL;
    v9 = 0;
    if ( a2->FileObjectExtension )
    {
      FileObjectExtension = IopGetFileObjectExtension((__int64)a2, 2, 0LL);
      v8 = IopGetFileObjectExtension(v19, (int)v18 + 4, v18);
    }
    if ( v4 == 1 )
    {
      if ( (a2->Flags & 0x800) != 0 )
        AttachedDevice = IoGetAttachedDevice(a2->DeviceObject);
      else
        AttachedDevice = IoGetRelatedDeviceObject(a2);
      a2->Flags |= 0x40000u;
      v11 = AttachedDevice;
      if ( a1 && (a2->Flags & 2) != 0 )
      {
        CurrentThread = KeGetCurrentThread();
        v9 = 1;
        --CurrentThread->KernelApcDisable;
        if ( _InterlockedExchange((volatile __int32 *)&a2->Busy, 1) )
        {
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          while ( (unsigned int)IopAcquireFileObjectLock(a2) )
            ;
        }
        else
        {
          ObfReferenceObject(a2);
        }
      }
      if ( v8 )
        IopFreeBandwidthContract(a2);
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      if ( (a2->Flags & 0x4000000) == 0 )
        KeResetEvent(&a2->Event);
      MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)v11, v11->StackSize);
      MustSucceed->Tail.Overlay.OriginalFileObject = a2;
      MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
      MustSucceed->UserIosb = &MustSucceed->IoStatus;
      CurrentStackLocation = MustSucceed->Tail.Overlay.CurrentStackLocation;
      MustSucceed->RequestorMode = 0;
      MustSucceed->UserEvent = &Event;
      MustSucceed->Overlay.AllocationSize.QuadPart = 0LL;
      MustSucceed->Flags = 1028;
      CurrentStackLocation[-1].MajorFunction = 18;
      CurrentStackLocation[-1].FileObject = a2;
      IopQueueThreadIrp((__int64)MustSucceed);
      v15 = KeGetCurrentThread();
      ++v15->OtherOperationCount;
      __incgsdword(0x2EE4u);
      if ( IofCallDriver(v11, MustSucceed) == 259 )
        KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
      MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
      IopDequeueIrpFromThread(MustSucceed);
      IoFreeIrp(MustSucceed);
      if ( v9 )
      {
        _InterlockedExchange((volatile __int32 *)&a2->Busy, 0);
        if ( a2->Waiters )
          KeSetEvent(&a2->Lock, 0, 0);
        ObfDereferenceObject(a2);
        v16 = KeGetCurrentThread();
        v17 = v16->KernelApcDisable++ == -1;
        if ( v17
          && ($B476B70DB57F76B110DA5B9238C3E934 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
          && !v16->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery((__int64)v16);
        }
      }
      if ( a2->CompletionContext || FileObjectExtension )
        IopCleanupProcessResources(a2, a1, FileObjectExtension);
      if ( a2->FileObjectExtension )
        IopCloseFileObjectExtension((__int64)a2);
    }
    else
    {
      if ( a2->CompletionContext || FileObjectExtension )
        IopCleanupProcessResources(a2, a1, FileObjectExtension);
      if ( (int)IopSetLockOperationProcess((__int64)a2, a1, 1, a4) >= 0 )
      {
        if ( (a2->Flags & 0x800) != 0 )
          RelatedDeviceObject = IoGetAttachedDevice(a2->DeviceObject);
        else
          RelatedDeviceObject = IoGetRelatedDeviceObject(a2);
        v24 = RelatedDeviceObject;
        FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
        if ( (a2->Flags & 2) != 0 && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) == 0 )
        {
          v9 = 1;
          if ( !IopAcquireFastLock_1((volatile __int32 *)&a2->Type) )
          {
            while ( (unsigned int)IopAcquireFileObjectLock(a2) )
              ;
          }
        }
        if ( !FastIoDispatch )
          goto LABEL_51;
        FastIoUnlockAll = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoUnlockAll;
        if ( !FastIoUnlockAll )
          goto LABEL_51;
        if ( (MmVerifierData & 0x10) != 0 )
          v27 = (void *)VfFastIoSnapState(v22, v21, v23);
        else
          v27 = 0LL;
        v28 = FastIoUnlockAll(a2, KeGetCurrentThread()->ApcState.Process, v31, v24);
        if ( v27 )
          VfFastIoCheckState(v27, (ULONG_PTR)FastIoUnlockAll);
        if ( !v28 )
        {
LABEL_51:
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          if ( (a2->Flags & 0x4000000) == 0 )
            KeResetEvent(&a2->Event);
          v29 = (IRP *)IopAllocateIrpMustSucceed((__int64)v24, v24->StackSize);
          v29->Tail.Overlay.OriginalFileObject = a2;
          v29->Tail.Overlay.Thread = KeGetCurrentThread();
          v29->UserIosb = &v29->IoStatus;
          v30 = v29->Tail.Overlay.CurrentStackLocation;
          v29->RequestorMode = 0;
          v29->UserEvent = &Event;
          v29->Flags = 4;
          v29->Overlay.AllocationSize.QuadPart = 0LL;
          *(_WORD *)&v30[-1].MajorFunction = 785;
          v30[-1].FileObject = a2;
          ObfReferenceObject(a2);
          IopQueueThreadIrp((__int64)v29);
          if ( IofCallDriver(v24, v29) == 259 )
            KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
        }
        if ( v9 == 1 )
        {
          _InterlockedExchange((volatile __int32 *)&a2->Busy, 0);
          if ( a2->Waiters )
            KeSetEvent(&a2->Lock, 0, 0);
          ObfDereferenceObject(a2);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        }
      }
    }
  }
}
