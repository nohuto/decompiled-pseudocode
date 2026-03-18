/*
 * XREFs of IoWMIRegistrationControl @ 0x14059FCD0
 * Callers:
 *     PpmEnableWmiInterface @ 0x14059FC64 (PpmEnableWmiInterface.c)
 *     ViDdiDriverEntry @ 0x140766D10 (ViDdiDriverEntry.c)
 *     WheaInitialize @ 0x1407FC324 (WheaInitialize.c)
 *     WmipDriverEntry @ 0x1407FF1F0 (WmipDriverEntry.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x14006E848 (WmipUnreferenceRegEntry.c)
 *     KeReleaseMutex @ 0x1400DDCF0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     WmipFindRegEntryByDevice @ 0x14015420C (WmipFindRegEntryByDevice.c)
 *     WmipDeregisterDevice @ 0x14059962C (WmipDeregisterDevice.c)
 *     WmipUpdateRegistration @ 0x14059FC1C (WmipUpdateRegistration.c)
 *     WmipRegisterDevice @ 0x14059FDA8 (WmipRegisterDevice.c)
 *     WmipSetTraceNotify @ 0x1405A0034 (WmipSetTraceNotify.c)
 */

NTSTATUS __stdcall IoWMIRegistrationControl(PDEVICE_OBJECT DeviceObject, ULONG Action)
{
  int v2; // r14d
  ULONG v4; // edx
  NTSTATUS v5; // ebx
  ULONG v7; // edx
  ULONG v8; // edx
  ULONG v9; // edx
  volatile signed __int32 *RegEntryByDevice; // rbx

  v2 = 0;
  if ( WmipServiceDeviceObject )
  {
    if ( (Action & 0x80000000) != 0 )
      Action &= ~0x80000000;
    if ( (Action & 0x10000) != 0 )
    {
      v2 = 1;
      Action &= 0xFF0EFFFF;
    }
    v4 = Action - 1;
    if ( !v4 )
    {
      v5 = WmipRegisterDevice(DeviceObject);
      if ( v2 )
        WmipSetTraceNotify(DeviceObject);
      return v5;
    }
    v7 = v4 - 1;
    if ( !v7 )
      return WmipDeregisterDevice(DeviceObject);
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 != 1 )
          return -1073741811;
        RegEntryByDevice = WmipFindRegEntryByDevice(DeviceObject);
        if ( !RegEntryByDevice )
          return -1073741811;
        KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
        _InterlockedOr(RegEntryByDevice + 12, 0x20000000u);
        KeReleaseMutex(&WmipSMMutex, 0);
        WmipUnreferenceRegEntry((__int64)RegEntryByDevice);
        return 0;
      }
      return WmipUpdateRegistration(DeviceObject);
    }
    else
    {
      v5 = WmipDeregisterDevice(DeviceObject);
      if ( v5 < 0 )
        return v5;
      return WmipRegisterDevice(DeviceObject);
    }
  }
  return -1073741823;
}
