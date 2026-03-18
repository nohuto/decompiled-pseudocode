/*
 * XREFs of IopQueryXxxInformation @ 0x14048FF44
 * Callers:
 *     PfpPrefetchEntireDirectory @ 0x140441FDC (PfpPrefetchEntireDirectory.c)
 *     PfSnGetSectionObject @ 0x140442728 (PfSnGetSectionObject.c)
 *     IopQueryNameInternal @ 0x14048F970 (IopQueryNameInternal.c)
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     IoQueryVolumeInformation @ 0x140597930 (IoQueryVolumeInformation.c)
 *     IoQueryFileInformation @ 0x140597960 (IoQueryFileInformation.c)
 *     MiCreatePagingFile @ 0x1405D3FF0 (MiCreatePagingFile.c)
 *     IopGetNetworkOpenInformation @ 0x1405F1B78 (IopGetNetworkOpenInformation.c)
 *     IopValidateJunctionTarget @ 0x1406B68DC (IopValidateJunctionTarget.c)
 *     MiAttemptPageFileExtension @ 0x1406E43F8 (MiAttemptPageFileExtension.c)
 * Callees:
 *     IopAcquireFastLock @ 0x14002354C (IopAcquireFastLock.c)
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     IopWaitForSynchronousIo @ 0x140061054 (IopWaitForSynchronousIo.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     IopQueueThreadIrp @ 0x140082130 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x1400821E0 (IopAllocateIrpExReturn.c)
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     IopAcquireFileObjectLock @ 0x14056053C (IopAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x1406B4714 (IopAllocateIrpCleanup.c)
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
  struct _DEVICE_OBJECT *RelatedDeviceObject; // r13
  __int64 Irp; // rax
  IRP *v14; // rdi
  __int64 v15; // rdx
  NTSTATUS v16; // eax
  unsigned int FinalStatus; // ebp
  unsigned int v19; // edi
  __int64 v20; // [rsp+30h] [rbp-58h] BYREF
  __int64 v21; // [rsp+38h] [rbp-50h]
  struct _KEVENT Event; // [rsp+40h] [rbp-48h] BYREF
  char v23; // [rsp+90h] [rbp+8h]

  v20 = 0LL;
  v21 = 0LL;
  ObfReferenceObject(Object);
  if ( (Object->Flags & 2) != 0 )
  {
    if ( !IopAcquireFastLock((volatile __int32 *)&Object->Type) )
    {
      v19 = IopAcquireFileObjectLock(Object);
      if ( v23 )
      {
        ObfDereferenceObject(Object);
        return v19;
      }
    }
    KeResetEvent(&Object->Event);
    v11 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v11 = 0;
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  Irp = IopAllocateIrpExReturn();
  v14 = (IRP *)Irp;
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
    v15 = *(_QWORD *)(Irp + 184);
    *(_QWORD *)(Irp + 72) = &v20;
    *(_QWORD *)(v15 - 24) = Object;
    *(_BYTE *)(v15 - 72) = a7 != 0 ? 5 : 10;
    *(_DWORD *)(Irp + 16) |= 0x10u;
    *(_QWORD *)(Irp + 24) = a5;
    *(_DWORD *)(v15 - 64) = a3;
    *(_DWORD *)(v15 - 56) = a2;
    IopQueueThreadIrp(Irp);
    v16 = IofCallDriver(RelatedDeviceObject, v14);
    FinalStatus = v16;
    if ( v11 )
    {
      if ( v16 == 259 )
      {
        IopWaitForSynchronousIo(v14, (unsigned int *)Object, a4);
        FinalStatus = Object->FinalStatus;
      }
      _InterlockedExchange((volatile __int32 *)&Object->Busy, 0);
      if ( Object->Waiters )
        KeSetEvent(&Object->Lock, 0, 0);
      ObfDereferenceObject(Object);
      KeLeaveCriticalRegion();
    }
    else if ( v16 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      FinalStatus = v20;
    }
    *a6 = v21;
    return FinalStatus;
  }
  else
  {
    IopAllocateIrpCleanup(Object, 0LL);
    return 3221225626LL;
  }
}
