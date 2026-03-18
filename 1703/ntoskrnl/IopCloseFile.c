/*
 * XREFs of IopCloseFile @ 0x140527CA0
 * Callers:
 *     IopDeleteFile @ 0x14051E790 (IopDeleteFile.c)
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 *     IopCreateFile @ 0x140541AA0 (IopCreateFile.c)
 * Callees:
 *     IopCloseFileObjectExtension @ 0x140025EE8 (IopCloseFileObjectExtension.c)
 *     IopAcquireFastLock_0 @ 0x140026998 (IopAcquireFastLock_0.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     IopSetLockOperationProcess @ 0x14004F2B0 (IopSetLockOperationProcess.c)
 *     IopGetFileObjectExtension @ 0x1400511D0 (IopGetFileObjectExtension.c)
 *     IoGetAttachedDevice @ 0x1400815B0 (IoGetAttachedDevice.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     IopDequeueIrpFromThread @ 0x1400ED860 (IopDequeueIrpFromThread.c)
 *     IopAllocateIrpMustSucceed @ 0x1400ED940 (IopAllocateIrpMustSucceed.c)
 *     IoGetRelatedDeviceObject @ 0x1400EDDF0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     IoFreeIrp @ 0x1400F1190 (IoFreeIrp.c)
 *     IofCallDriver @ 0x1400F1390 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x1400F1410 (IopQueueThreadIrp.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     IopCleanupProcessResources @ 0x140433288 (IopCleanupProcessResources.c)
 *     IopAcquireFileObjectLock @ 0x140561408 (IopAcquireFileObjectLock.c)
 *     IopFreeBandwidthContract @ 0x1406918FC (IopFreeBandwidthContract.c)
 *     VfFastIoCheckState @ 0x14076804C (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140768104 (VfFastIoSnapState.c)
 */

void __fastcall IopCloseFile(__int64 a1, struct _FILE_OBJECT *a2, __int64 a3, __int64 a4)
{
  __int64 FileObjectExtension; // rbp
  __int64 v7; // rdi
  int v8; // r15d
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v10; // r14
  struct _KTHREAD *CurrentThread; // rax
  IRP *MustSucceed; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _KTHREAD *v14; // rax
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax
  _QWORD *v17; // r8
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  struct _DEVICE_OBJECT *v19; // rbp
  PFAST_IO_DISPATCH FastIoDispatch; // r14
  __int64 (__fastcall *FastIoUnlockAll)(_QWORD, _QWORD, _QWORD, _QWORD); // r14
  void *v22; // rdi
  char v23; // r12
  IRP *v24; // rdi
  struct _IO_STACK_LOCATION *v25; // rcx
  _BYTE v26[16]; // [rsp+38h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-40h] BYREF

  if ( a3 == 1 )
  {
    FileObjectExtension = 0LL;
    v7 = 0LL;
    v8 = 0;
    if ( a2->FileObjectExtension )
    {
      FileObjectExtension = IopGetFileObjectExtension((__int64)a2, 2, 0LL);
      v7 = IopGetFileObjectExtension((__int64)a2, (int)v17 + 4, v17);
    }
    if ( a4 == 1 )
    {
      if ( (a2->Flags & 0x800) != 0 )
        AttachedDevice = IoGetAttachedDevice(a2->DeviceObject);
      else
        AttachedDevice = IoGetRelatedDeviceObject(a2);
      a2->Flags |= 0x40000u;
      v10 = AttachedDevice;
      if ( a1 && (a2->Flags & 2) != 0 )
      {
        CurrentThread = KeGetCurrentThread();
        v8 = 1;
        --CurrentThread->KernelApcDisable;
        if ( _InterlockedExchange((volatile __int32 *)&a2->Busy, 1) )
        {
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          while ( (unsigned int)IopAcquireFileObjectLock(a2) )
            ;
        }
        else
        {
          ObfReferenceObject(a2);
        }
      }
      if ( v7 )
        IopFreeBandwidthContract(a2);
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      if ( (a2->Flags & 0x4000000) == 0 )
        KeResetEvent(&a2->Event);
      MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)v10, (unsigned __int8)v10->StackSize);
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
      v14 = KeGetCurrentThread();
      ++v14->OtherOperationCount;
      __incgsdword(0x2EE4u);
      if ( IofCallDriver(v10, MustSucceed) == 259 )
        KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
      MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
      IopDequeueIrpFromThread(MustSucceed);
      IoFreeIrp(MustSucceed);
      if ( v8 )
      {
        _InterlockedExchange((volatile __int32 *)&a2->Busy, 0);
        if ( a2->Waiters )
          KeSetEvent(&a2->Lock, 0, 0);
        ObfDereferenceObject(a2);
        v15 = KeGetCurrentThread();
        v16 = v15->KernelApcDisable + 1;
        v15->KernelApcDisable = v16;
        if ( !v16
          && ($69CD3F157F9F39B6F7113F2231989901 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
          && !v15->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery((__int64)v15);
        }
      }
      if ( a2->CompletionContext || FileObjectExtension )
        IopCleanupProcessResources((__int64)a2, a1, FileObjectExtension);
      if ( a2->FileObjectExtension )
        IopCloseFileObjectExtension((__int64)a2);
    }
    else
    {
      if ( a2->CompletionContext || FileObjectExtension )
        IopCleanupProcessResources((__int64)a2, a1, FileObjectExtension);
      if ( (int)IopSetLockOperationProcess((__int64)a2, a1, 1, a4) >= 0 )
      {
        if ( (a2->Flags & 0x800) != 0 )
          RelatedDeviceObject = IoGetAttachedDevice(a2->DeviceObject);
        else
          RelatedDeviceObject = IoGetRelatedDeviceObject(a2);
        v19 = RelatedDeviceObject;
        FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
        if ( (a2->Flags & 2) != 0 && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) == 0 )
        {
          v8 = 1;
          if ( !IopAcquireFastLock_0((volatile __int32 *)&a2->Type) )
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
          v22 = (void *)VfFastIoSnapState();
        else
          v22 = 0LL;
        v23 = FastIoUnlockAll(a2, KeGetCurrentThread()->ApcState.Process, v26, v19);
        if ( v22 )
          VfFastIoCheckState(v22);
        if ( !v23 )
        {
LABEL_51:
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          if ( (a2->Flags & 0x4000000) == 0 )
            KeResetEvent(&a2->Event);
          v24 = (IRP *)IopAllocateIrpMustSucceed((__int64)v19, (unsigned __int8)v19->StackSize);
          v24->Tail.Overlay.OriginalFileObject = a2;
          v24->Tail.Overlay.Thread = KeGetCurrentThread();
          v24->UserIosb = &v24->IoStatus;
          v25 = v24->Tail.Overlay.CurrentStackLocation;
          v24->RequestorMode = 0;
          v24->UserEvent = &Event;
          v24->Flags = 4;
          v24->Overlay.AllocationSize.QuadPart = 0LL;
          *(_WORD *)&v25[-1].MajorFunction = 785;
          v25[-1].FileObject = a2;
          ObfReferenceObject(a2);
          IopQueueThreadIrp((__int64)v24);
          if ( IofCallDriver(v19, v24) == 259 )
            KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
        }
        if ( v8 == 1 )
        {
          _InterlockedExchange((volatile __int32 *)&a2->Busy, 0);
          if ( a2->Waiters )
            KeSetEvent(&a2->Lock, 0, 0);
          ObfDereferenceObject(a2);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        }
      }
    }
  }
}
