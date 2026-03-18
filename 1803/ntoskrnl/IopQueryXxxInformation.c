/*
 * XREFs of IopQueryXxxInformation @ 0x1404A51B8
 * Callers:
 *     PfpPrefetchEntireDirectory @ 0x1404A08D8 (PfpPrefetchEntireDirectory.c)
 *     PfSnGetSectionObject @ 0x1404A1E78 (PfSnGetSectionObject.c)
 *     IopQueryNameInternal @ 0x1404A5650 (IopQueryNameInternal.c)
 *     IoQueryVolumeInformation @ 0x140583600 (IoQueryVolumeInformation.c)
 *     IoQueryFileInformation @ 0x140583630 (IoQueryFileInformation.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 *     MiCreatePagingFile @ 0x14063BE50 (MiCreatePagingFile.c)
 *     IopGetNetworkOpenInformation @ 0x1406552CC (IopGetNetworkOpenInformation.c)
 *     IopValidateJunctionTarget @ 0x14071B5BC (IopValidateJunctionTarget.c)
 *     MiAttemptPageFileExtension @ 0x14074E7F8 (MiAttemptPageFileExtension.c)
 * Callees:
 *     IopAcquireFastLock_0 @ 0x140007BC8 (IopAcquireFastLock_0.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     IopWaitForSynchronousIo @ 0x1400EE730 (IopWaitForSynchronousIo.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     IofCallDriver @ 0x1400FD990 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x1400FDC10 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x1400FDE40 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400FE1C0 (IoGetRelatedDeviceObject.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     IopAcquireFileObjectLock @ 0x1404941E4 (IopAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140719344 (IopAllocateIrpCleanup.c)
 */

__int64 __fastcall IopQueryXxxInformation(
        struct _FILE_OBJECT *Object,
        ULONG a2,
        ULONG a3,
        char a4,
        struct _IRP *a5,
        _DWORD *a6,
        char a7)
{
  char v11; // bp
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v13; // r8
  struct _DEVICE_OBJECT *v14; // rsi
  __int64 v15; // rdx
  __int64 Irp; // rax
  IRP *v17; // rdi
  struct _KEVENT *p_Event; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  bool v20; // cf
  NTSTATUS v21; // eax
  unsigned int FinalStatus; // esi
  unsigned int v24; // edi
  __int64 v25; // [rsp+30h] [rbp-58h] BYREF
  __int64 v26; // [rsp+38h] [rbp-50h]
  struct _KEVENT Event; // [rsp+40h] [rbp-48h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  char v29; // [rsp+90h] [rbp+8h] BYREF

  v25 = 0LL;
  v26 = 0LL;
  ObfReferenceObject(Object);
  if ( (Object->Flags & 2) != 0 )
  {
    if ( !IopAcquireFastLock_0((volatile __int32 *)&Object->Type) )
    {
      v24 = IopAcquireFileObjectLock((char *)Object, a4, (Object->Flags & 4) != 0, &v29);
      if ( v29 )
      {
        ObfDereferenceObject(Object);
        return v24;
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
  LOBYTE(v13) = v11 ^ 1;
  v14 = RelatedDeviceObject;
  LOBYTE(v15) = RelatedDeviceObject->StackSize;
  Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v15, v13, retaddr);
  v17 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = Object;
    *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
    *(_BYTE *)(Irp + 64) = a4;
    if ( v11 )
    {
      *(_BYTE *)(Irp + 71) |= 2u;
      p_Event = 0LL;
    }
    else
    {
      *(_DWORD *)(Irp + 16) = 4;
      p_Event = &Event;
    }
    v17->UserEvent = p_Event;
    v17->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v17->Tail.Overlay.CurrentStackLocation;
    v20 = a7 != 0;
    a7 = -a7;
    v17->UserIosb = (PIO_STATUS_BLOCK)&v25;
    CurrentStackLocation[-1].FileObject = Object;
    CurrentStackLocation[-1].MajorFunction = v20 ? 5 : 10;
    v17->Flags |= 0x10u;
    v17->AssociatedIrp.MasterIrp = a5;
    CurrentStackLocation[-1].Parameters.Read.Length = a3;
    CurrentStackLocation[-1].Parameters.Create.Options = a2;
    IopQueueThreadIrp((__int64)v17);
    v21 = IofCallDriver(v14, v17);
    FinalStatus = v21;
    if ( v11 )
    {
      if ( v21 == 259 )
      {
        IopWaitForSynchronousIo(v17, (unsigned int *)Object, a4);
        FinalStatus = Object->FinalStatus;
      }
      _InterlockedExchange((volatile __int32 *)&Object->Busy, 0);
      if ( Object->Waiters )
        KeSetEvent(&Object->Lock, 0, 0);
      ObfDereferenceObject(Object);
      KeLeaveCriticalRegion();
    }
    else if ( v21 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      FinalStatus = v25;
    }
    *a6 = v26;
    return FinalStatus;
  }
  else
  {
    IopAllocateIrpCleanup(Object, 0LL);
    return 3221225626LL;
  }
}
