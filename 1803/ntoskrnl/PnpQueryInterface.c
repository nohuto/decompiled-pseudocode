/*
 * XREFs of PnpQueryInterface @ 0x1405C5140
 * Callers:
 *     PnprQueryReplaceFeatures @ 0x14023CE94 (PnprQueryReplaceFeatures.c)
 *     PiDmaGuardProcessNewDeviceNode @ 0x1405C4A18 (PiDmaGuardProcessNewDeviceNode.c)
 *     PnpGetDeviceLocationStrings @ 0x1405C4AF8 (PnpGetDeviceLocationStrings.c)
 *     PiProcessNewDeviceNode @ 0x1405D0A18 (PiProcessNewDeviceNode.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x1406479C4 (PiGetDmaAdapterFromBusInterface.c)
 *     IoQueryInterface @ 0x140647DF0 (IoQueryInterface.c)
 *     IopQueryInterfaceRecurseUp @ 0x140647E40 (IopQueryInterfaceRecurseUp.c)
 *     PnprIdentifyUnits @ 0x140734384 (PnprIdentifyUnits.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x14073FFBC (PiProcessDriversLoadedOnSecureDevice.c)
 *     PipUnprotectDevice @ 0x140740074 (PipUnprotectDevice.c)
 * Callees:
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140007610 (IoGetAttachedDeviceReferenceWithTag.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x1400FD990 (IofCallDriver.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     IopBuildSynchronousFsdRequest @ 0x140539280 (IopBuildSynchronousFsdRequest.c)
 */

__int64 __fastcall PnpQueryInterface(
        PDEVICE_OBJECT DeviceObject,
        ULONG_PTR a2,
        USHORT a3,
        USHORT a4,
        struct _NAMED_PIPE_CREATE_PARAMETERS *a5,
        USHORT *a6)
{
  struct _DEVICE_OBJECT *AttachedDeviceReferenceWithTag; // rdi
  IRP *v11; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int Status; // ebx
  struct _IO_STATUS_BLOCK v15; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  if ( a4 < 0x20u )
    return 3221225485LL;
  memset(a6, 0, a4);
  *a6 = a4;
  a6[1] = a3;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(DeviceObject, 0x49706E50u);
  v11 = IopBuildSynchronousFsdRequest(
          0x1Bu,
          (__int64)AttachedDeviceReferenceWithTag,
          0LL,
          0,
          0LL,
          &Event,
          &v15,
          retaddr);
  if ( v11 )
  {
    CurrentStackLocation = v11->Tail.Overlay.CurrentStackLocation;
    v11->RequestorMode = 0;
    v11->IoStatus.Status = -1073741637;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = a5;
    CurrentStackLocation[-1].MinorFunction = 8;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = a2;
    CurrentStackLocation[-1].Parameters.QueryInterface.Size = a4;
    CurrentStackLocation[-1].Parameters.QueryInterface.Version = a3;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)a6;
    Status = IofCallDriver(AttachedDeviceReferenceWithTag, v11);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = v15.Status;
    }
  }
  else
  {
    Status = -1073741670;
  }
  ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x49706E50u);
  return Status;
}
