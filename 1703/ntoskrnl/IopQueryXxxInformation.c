/*
 * XREFs of IopQueryXxxInformation @ 0x14053E758
 * Callers:
 *     IoQueryVolumeInformation @ 0x1404503F0 (IoQueryVolumeInformation.c)
 *     IoQueryFileInformation @ 0x140450420 (IoQueryFileInformation.c)
 *     IopGetNetworkOpenInformation @ 0x14045EA38 (IopGetNetworkOpenInformation.c)
 *     PfpPrefetchEntireDirectory @ 0x140465B88 (PfpPrefetchEntireDirectory.c)
 *     IopQueryNameInternal @ 0x1404FBBC0 (IopQueryNameInternal.c)
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 *     PfSnGetSectionObject @ 0x14053DFD0 (PfSnGetSectionObject.c)
 *     MiCreatePagingFile @ 0x1405B967C (MiCreatePagingFile.c)
 *     IopValidateJunctionTarget @ 0x14068AC90 (IopValidateJunctionTarget.c)
 *     MiAttemptPageFileExtension @ 0x1406B77B4 (MiAttemptPageFileExtension.c)
 * Callees:
 *     IopWaitForSynchronousIo @ 0x140022334 (IopWaitForSynchronousIo.c)
 *     IopAcquireFastLock @ 0x140022E54 (IopAcquireFastLock.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     IopAllocateIrpExReturn @ 0x1400ED980 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400EDDF0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     IofCallDriver @ 0x1400F1390 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x1400F1410 (IopQueueThreadIrp.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     IopAcquireFileObjectLock @ 0x140561408 (IopAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140688728 (IopAllocateIrpCleanup.c)
 */

__int64 __fastcall IopQueryXxxInformation(
        struct _FILE_OBJECT *Object,
        int a2,
        int a3,
        char a4,
        __int64 a5,
        _DWORD *a6,
        char a7)
{
  char v11; // r14
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 Irp; // rax
  IRP *v16; // rdi
  __int64 v17; // rdx
  NTSTATUS v18; // eax
  unsigned int FinalStatus; // ebp
  unsigned int v21; // edi
  __int64 v22; // [rsp+30h] [rbp-58h] BYREF
  __int64 v23; // [rsp+38h] [rbp-50h]
  struct _KEVENT Event; // [rsp+40h] [rbp-48h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  char v26; // [rsp+90h] [rbp+8h]

  v22 = 0LL;
  v23 = 0LL;
  ObfReferenceObject(Object);
  if ( (Object->Flags & 2) != 0 )
  {
    v11 = 1;
    if ( !IopAcquireFastLock((volatile __int32 *)&Object->Type) )
    {
      v21 = IopAcquireFileObjectLock(Object);
      if ( v26 )
      {
        ObfDereferenceObject(Object);
        return v21;
      }
    }
    KeResetEvent(&Object->Event);
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v11 = 0;
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  LOBYTE(v13) = v11 == 0;
  LOBYTE(v14) = RelatedDeviceObject->StackSize;
  Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v14, v13, retaddr);
  v16 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = Object;
    *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
    *(_BYTE *)(Irp + 64) = a4;
    if ( v11 )
    {
      *(_QWORD *)(Irp + 80) = 0LL;
      *(_BYTE *)(Irp + 71) |= 2u;
    }
    else
    {
      *(_DWORD *)(Irp + 16) = 4;
      *(_QWORD *)(Irp + 80) = &Event;
    }
    *(_QWORD *)(Irp + 88) = 0LL;
    v17 = *(_QWORD *)(Irp + 184);
    *(_QWORD *)(Irp + 72) = &v22;
    *(_QWORD *)(v17 - 24) = Object;
    *(_BYTE *)(v17 - 72) = a7 != 0 ? 5 : 10;
    *(_DWORD *)(Irp + 16) |= 0x10u;
    *(_QWORD *)(Irp + 24) = a5;
    *(_DWORD *)(v17 - 64) = a3;
    *(_DWORD *)(v17 - 56) = a2;
    IopQueueThreadIrp(Irp);
    v18 = IofCallDriver(RelatedDeviceObject, v16);
    FinalStatus = v18;
    if ( v11 )
    {
      if ( v18 == 259 )
      {
        IopWaitForSynchronousIo(v16, (unsigned int *)Object, a4);
        FinalStatus = Object->FinalStatus;
      }
      _InterlockedExchange((volatile __int32 *)&Object->Busy, 0);
      if ( Object->Waiters )
        KeSetEvent(&Object->Lock, 0, 0);
      ObfDereferenceObject(Object);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    else if ( v18 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      FinalStatus = v22;
    }
    *a6 = v23;
    return FinalStatus;
  }
  else
  {
    IopAllocateIrpCleanup(Object, 0LL);
    return 3221225626LL;
  }
}
