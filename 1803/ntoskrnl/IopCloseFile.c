/*
 * XREFs of IopCloseFile @ 0x1405B12E0
 * Callers:
 *     IopCreateFile @ 0x1404F3030 (IopCreateFile.c)
 *     IopDeleteFile @ 0x1405B15A0 (IopDeleteFile.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     IopAcquireFastLock_1 @ 0x140061B6C (IopAcquireFastLock_1.c)
 *     IopSetLockOperationProcess @ 0x140068F80 (IopSetLockOperationProcess.c)
 *     IopGetFileObjectExtension @ 0x140069628 (IopGetFileObjectExtension.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     IopCloseFileObjectExtension @ 0x1400BD990 (IopCloseFileObjectExtension.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     IofCallDriver @ 0x1400FD990 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x1400FDC10 (IopQueueThreadIrp.c)
 *     IoGetRelatedDeviceObject @ 0x1400FE1C0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     IopAllocateIrpMustSucceed @ 0x140106AA0 (IopAllocateIrpMustSucceed.c)
 *     IoFreeIrp @ 0x140106E30 (IoFreeIrp.c)
 *     IoGetAttachedDevice @ 0x140107050 (IoGetAttachedDevice.c)
 *     IopDequeueIrpFromThread @ 0x140107260 (IopDequeueIrpFromThread.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     IopAcquireFileObjectLock @ 0x1404941E4 (IopAcquireFileObjectLock.c)
 *     IopCleanupProcessResources @ 0x14055C5BC (IopCleanupProcessResources.c)
 *     IopFreeBandwidthContract @ 0x1407225F8 (IopFreeBandwidthContract.c)
 *     VfFastIoCheckState @ 0x140816D04 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140816DDC (VfFastIoSnapState.c)
 */

void __fastcall IopCloseFile(__int64 a1, struct _FILE_OBJECT *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 FileObjectExtension; // r14
  __int64 v8; // rbp
  int v9; // r15d
  ULONG Flags; // edi
  PDEVICE_OBJECT AttachedDevice; // rax
  int v12; // edi
  struct _DEVICE_OBJECT *v13; // r13
  struct _KTHREAD *CurrentThread; // rax
  IRP *MustSucceed; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _KTHREAD *v17; // rax
  struct _KTHREAD *v18; // rcx
  bool v19; // zf
  _QWORD *v20; // r8
  __int64 v21; // rcx
  ULONG v22; // edi
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  struct _DEVICE_OBJECT *v27; // rbp
  PFAST_IO_DISPATCH FastIoDispatch; // r14
  __int64 (__fastcall *FastIoUnlockAll)(_QWORD, _QWORD, _QWORD, _QWORD); // r14
  void *v30; // rdi
  char v31; // r12
  IRP *v32; // rdi
  struct _IO_STACK_LOCATION *v33; // rcx
  _BYTE v34[8]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v35[16]; // [rsp+38h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-40h] BYREF
  char v37; // [rsp+A0h] [rbp+18h] BYREF

  if ( a3 == 1 )
  {
    v4 = a4;
    FileObjectExtension = 0LL;
    v8 = 0LL;
    v9 = 0;
    if ( a2->FileObjectExtension )
    {
      FileObjectExtension = IopGetFileObjectExtension((__int64)a2, 2, 0LL);
      v8 = IopGetFileObjectExtension(v21, (int)v20 + 4, v20);
    }
    if ( v4 == 1 )
    {
      Flags = a2->Flags;
      if ( (Flags & 0x800) != 0 )
      {
        AttachedDevice = IoGetAttachedDevice(a2->DeviceObject);
      }
      else
      {
        AttachedDevice = IoGetRelatedDeviceObject(a2);
        Flags = a2->Flags;
      }
      v12 = Flags | 0x40000;
      v13 = AttachedDevice;
      a2->Flags = v12;
      if ( a1 && (v12 & 2) != 0 )
      {
        CurrentThread = KeGetCurrentThread();
        v9 = 1;
        --CurrentThread->KernelApcDisable;
        if ( _InterlockedExchange((volatile __int32 *)&a2->Busy, 1) )
        {
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          while ( (unsigned int)IopAcquireFileObjectLock((char *)a2, 0, 0, v34) )
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
      MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)v13, (unsigned __int8)v13->StackSize);
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
      v17 = KeGetCurrentThread();
      ++v17->OtherOperationCount;
      __incgsdword(0x2EE4u);
      if ( IofCallDriver(v13, MustSucceed) == 259 )
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
        v18 = KeGetCurrentThread();
        v19 = v18->KernelApcDisable++ == -1;
        if ( v19
          && ($005F0E83B22994B61E86C72E0CE43C71 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
          && !v18->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
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
        v22 = a2->Flags;
        if ( (v22 & 0x800) != 0 )
        {
          RelatedDeviceObject = IoGetAttachedDevice(a2->DeviceObject);
        }
        else
        {
          RelatedDeviceObject = IoGetRelatedDeviceObject(a2);
          v22 = a2->Flags;
        }
        v27 = RelatedDeviceObject;
        FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
        if ( (v22 & 2) != 0 && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) == 0 )
        {
          v9 = 1;
          if ( !IopAcquireFastLock_1((volatile __int32 *)&a2->Type) )
          {
            while ( (unsigned int)IopAcquireFileObjectLock((char *)a2, 0, 0, &v37) )
              ;
          }
        }
        if ( !FastIoDispatch )
          goto LABEL_51;
        FastIoUnlockAll = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoUnlockAll;
        if ( !FastIoUnlockAll )
          goto LABEL_51;
        if ( (MmVerifierData & 0x10) != 0 )
          v30 = (void *)VfFastIoSnapState(v25, v24, v26);
        else
          v30 = 0LL;
        v31 = FastIoUnlockAll(a2, KeGetCurrentThread()->ApcState.Process, v35, v27);
        if ( v30 )
          VfFastIoCheckState(v30, (ULONG_PTR)FastIoUnlockAll);
        if ( !v31 )
        {
LABEL_51:
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          if ( (a2->Flags & 0x4000000) == 0 )
            KeResetEvent(&a2->Event);
          v32 = (IRP *)IopAllocateIrpMustSucceed((__int64)v27, (unsigned __int8)v27->StackSize);
          v32->Tail.Overlay.OriginalFileObject = a2;
          v32->Tail.Overlay.Thread = KeGetCurrentThread();
          v32->UserIosb = &v32->IoStatus;
          v33 = v32->Tail.Overlay.CurrentStackLocation;
          v32->RequestorMode = 0;
          v32->UserEvent = &Event;
          v32->Flags = 4;
          v32->Overlay.AllocationSize.QuadPart = 0LL;
          *(_WORD *)&v33[-1].MajorFunction = 785;
          v33[-1].FileObject = a2;
          ObfReferenceObject(a2);
          IopQueueThreadIrp((__int64)v32);
          if ( IofCallDriver(v27, v32) == 259 )
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
