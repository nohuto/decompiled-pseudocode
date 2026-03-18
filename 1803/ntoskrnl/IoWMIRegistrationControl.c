/*
 * XREFs of IoWMIRegistrationControl @ 0x140600880
 * Callers:
 *     PpmEnableWmiInterface @ 0x1406287CC (PpmEnableWmiInterface.c)
 *     ViDdiDriverEntry @ 0x1408158E0 (ViDdiDriverEntry.c)
 *     WmipDriverEntry @ 0x14089FCB0 (WmipDriverEntry.c)
 *     WheaInitialize @ 0x1408A29A0 (WheaInitialize.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x1400739AC (WmipUnreferenceRegEntry.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400FD530 (KeReleaseMutex.c)
 *     WmipFindRegEntryByDevice @ 0x140161EC8 (WmipFindRegEntryByDevice.c)
 *     WmipDeregisterDevice @ 0x1406007DC (WmipDeregisterDevice.c)
 *     WmipRegisterDevice @ 0x140600958 (WmipRegisterDevice.c)
 *     WmipSetTraceNotify @ 0x140600BEC (WmipSetTraceNotify.c)
 *     WmipUpdateRegistration @ 0x140651638 (WmipUpdateRegistration.c)
 */

NTSTATUS __stdcall IoWMIRegistrationControl(PDEVICE_OBJECT DeviceObject, ULONG Action)
{
  char v2; // r14
  ULONG v4; // eax
  ULONG v5; // eax
  NTSTATUS v6; // ebx
  ULONG v8; // eax
  ULONG v10; // eax
  ULONG v11; // eax
  __int64 RegEntryByDevice; // rbx

  v2 = 0;
  if ( WmipServiceDeviceObject )
  {
    v4 = Action & 0x7FFFFFFF;
    if ( (Action & 0x80000000) == 0 )
      v4 = Action;
    if ( (v4 & 0x10000) != 0 )
    {
      v2 = 1;
      v4 &= 0xFF0EFFFF;
    }
    v5 = v4 - 1;
    if ( !v5 )
    {
      v6 = WmipRegisterDevice(DeviceObject);
      if ( v2 )
        WmipSetTraceNotify(DeviceObject);
      return v6;
    }
    v8 = v5 - 1;
    if ( !v8 )
      return WmipDeregisterDevice((__int64)DeviceObject);
    v10 = v8 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 != 1 )
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
      return WmipUpdateRegistration(DeviceObject);
    }
    else
    {
      v6 = WmipDeregisterDevice((__int64)DeviceObject);
      if ( v6 < 0 )
        return v6;
      return WmipRegisterDevice(DeviceObject);
    }
  }
  return -1073741823;
}
