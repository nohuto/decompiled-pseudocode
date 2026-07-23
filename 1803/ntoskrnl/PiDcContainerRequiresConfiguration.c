/*
 * XREFs of PiDcContainerRequiresConfiguration @ 0x1405D5428
 * Callers:
 *     PiDcHandleCustomDeviceEvent @ 0x14051FDD4 (PiDcHandleCustomDeviceEvent.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1405D5280 (PiDcUpdateDeviceContainerMembership.c)
 *     PiDcHandleDeviceEvent @ 0x1405EA00C (PiDcHandleDeviceEvent.c)
 *     PiDcHandleInterfaceEvent @ 0x14060442C (PiDcHandleInterfaceEvent.c)
 *     PiDcHandleSystemFirmwareUpdate @ 0x1407294AC (PiDcHandleSystemFirmwareUpdate.c)
 * Callees:
 *     wcscmp @ 0x14018A5F0 (wcscmp.c)
 *     ZwUpdateWnfStateData @ 0x1401AAD80 (ZwUpdateWnfStateData.c)
 *     _PnpGetObjectProperty @ 0x140506D2C (_PnpGetObjectProperty.c)
 *     _PnpSetObjectProperty @ 0x1405D2000 (_PnpSetObjectProperty.c)
 */

__int64 __fastcall PiDcContainerRequiresConfiguration(wchar_t *Str2)
{
  int ObjectProperty; // ebx
  int v4; // [rsp+88h] [rbp+10h] BYREF
  int v5; // [rsp+90h] [rbp+18h] BYREF
  char v6; // [rsp+98h] [rbp+20h] BYREF

  ObjectProperty = 0;
  v4 = 0;
  if ( wcscmp(L"{00000000-0000-0000-0000-000000000000}", Str2) )
  {
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       (__int64)Str2,
                       5u,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_DeviceContainer_ConfigFlags,
                       (__int64)&v4,
                       (__int64)&v5,
                       4,
                       (__int64)&v6,
                       0);
    if ( ObjectProperty < 0 || v5 != -1 || v4 != 7 )
    {
      ObjectProperty = PnpSetObjectProperty(
                         *(__int64 *)&PiPnpRtlCtx,
                         (__int64)Str2,
                         5u,
                         0LL,
                         0LL,
                         (__int64)&DEVPKEY_DeviceContainer_ConfigFlags,
                         7,
                         (__int64)&unconfiguredConfigFlags,
                         4u,
                         0);
      if ( ObjectProperty >= 0 )
        ZwUpdateWnfStateData(&WNF_PNPC_CONTAINER_CONFIG_REQUESTED, 0LL, 0, 0LL, 0LL, 0, 0);
    }
  }
  return (unsigned int)ObjectProperty;
}
