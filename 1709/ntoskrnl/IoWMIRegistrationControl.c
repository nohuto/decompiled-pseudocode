/*
 * XREFs of IoWMIRegistrationControl @ 0x14057F320
 * Callers:
 *     PpmEnableWmiInterface @ 0x1405E1624 (PpmEnableWmiInterface.c)
 *     ViDdiDriverEntry @ 0x1407A88B0 (ViDdiDriverEntry.c)
 *     WheaInitialize @ 0x140840C7C (WheaInitialize.c)
 *     WmipDriverEntry @ 0x140843D40 (WmipDriverEntry.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     WmipUnreferenceRegEntry @ 0x1400DEBA0 (WmipUnreferenceRegEntry.c)
 *     WmipFindRegEntryByDevice @ 0x14012402C (WmipFindRegEntryByDevice.c)
 *     WmipDeregisterDevice @ 0x14057F230 (WmipDeregisterDevice.c)
 *     WmipUpdateRegistration @ 0x14057F2D0 (WmipUpdateRegistration.c)
 *     WmipRegisterDevice @ 0x14057F3F8 (WmipRegisterDevice.c)
 *     WmipSetTraceNotify @ 0x1405DF154 (WmipSetTraceNotify.c)
 */

NTSTATUS __stdcall IoWMIRegistrationControl(PDEVICE_OBJECT DeviceObject, ULONG Action)
{
  int v2; // r14d
  ULONG v4; // edx
  NTSTATUS v5; // ebx
  ULONG v7; // edx
  ULONG v8; // edx
  ULONG v9; // edx
  __int64 RegEntryByDevice; // rbx

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
      return WmipDeregisterDevice((__int64)DeviceObject);
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 != 1 )
          return -1073741811;
        RegEntryByDevice = WmipFindRegEntryByDevice((__int64)DeviceObject);
        if ( !RegEntryByDevice )
          return -1073741811;
        KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
        _InterlockedOr((volatile signed __int32 *)(RegEntryByDevice + 48), 0x20000000u);
        KeReleaseMutex(&WmipSMMutex, 0);
        WmipUnreferenceRegEntry(RegEntryByDevice);
        return 0;
      }
      return WmipUpdateRegistration((__int64)DeviceObject);
    }
    else
    {
      v5 = WmipDeregisterDevice((__int64)DeviceObject);
      if ( v5 < 0 )
        return v5;
      return WmipRegisterDevice(DeviceObject);
    }
  }
  return -1073741823;
}
