/*
 * XREFs of PnpQueryInterface @ 0x14051AEB4
 * Callers:
 *     PnprQueryReplaceFeatures @ 0x1402000B4 (PnprQueryReplaceFeatures.c)
 *     PiDmaGuardProcessNewDeviceNode @ 0x140517228 (PiDmaGuardProcessNewDeviceNode.c)
 *     IoQueryInterface @ 0x140517310 (IoQueryInterface.c)
 *     PnpGetDeviceLocationStrings @ 0x140518FFC (PnpGetDeviceLocationStrings.c)
 *     PiProcessNewDeviceNode @ 0x14052E48C (PiProcessNewDeviceNode.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x140599154 (PiGetDmaAdapterFromBusInterface.c)
 *     IopQueryInterfaceRecurseUp @ 0x14059C284 (IopQueryInterfaceRecurseUp.c)
 *     PnprIdentifyUnits @ 0x1406CC9E4 (PnprIdentifyUnits.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x1406D555C (PiProcessDriversLoadedOnSecureDevice.c)
 *     PipUnprotectDevice @ 0x1406D5614 (PipUnprotectDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1400DE5E8 (IoGetAttachedDeviceReferenceWithTag.c)
 *     memset @ 0x140192F40 (memset.c)
 *     IopBuildSynchronousFsdRequest @ 0x14051AFE0 (IopBuildSynchronousFsdRequest.c)
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
