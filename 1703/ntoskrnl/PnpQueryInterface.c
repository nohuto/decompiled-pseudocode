/*
 * XREFs of PnpQueryInterface @ 0x1404DDD80
 * Callers:
 *     PnprQueryReplaceFeatures @ 0x1401FA374 (PnprQueryReplaceFeatures.c)
 *     PnpGetDeviceLocationStrings @ 0x1404DC26C (PnpGetDeviceLocationStrings.c)
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 *     PipCallDriverAddDevice @ 0x1404E1D64 (PipCallDriverAddDevice.c)
 *     IoQueryInterface @ 0x1405C77C0 (IoQueryInterface.c)
 *     IopQueryInterfaceRecurseUp @ 0x1405C7810 (IopQueryInterfaceRecurseUp.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x1405CB374 (PiGetDmaAdapterFromBusInterface.c)
 *     PnprIdentifyUnits @ 0x1406A2144 (PnprIdentifyUnits.c)
 * Callees:
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140081554 (IoGetAttachedDeviceReferenceWithTag.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     IofCallDriver @ 0x1400F1390 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     memset @ 0x140192D80 (memset.c)
 *     IopBuildSynchronousFsdRequest @ 0x1404DDEB0 (IopBuildSynchronousFsdRequest.c)
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
  unsigned int v13; // ebx
  unsigned int v15[4]; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  if ( a4 < 0x20u )
    return 3221225485LL;
  memset(a6, 0, a4);
  *a6 = a4;
  a6[1] = a3;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(DeviceObject, 0x49706E50u);
  v11 = (IRP *)IopBuildSynchronousFsdRequest(
                 27,
                 (_DWORD)AttachedDeviceReferenceWithTag,
                 0,
                 0,
                 0LL,
                 (__int64)&Event,
                 (__int64)v15,
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
    v13 = IofCallDriver(AttachedDeviceReferenceWithTag, v11);
    if ( v13 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v13 = v15[0];
    }
  }
  else
  {
    v13 = -1073741670;
  }
  ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x49706E50u);
  return v13;
}
