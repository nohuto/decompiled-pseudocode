/*
 * XREFs of RemoveRimManagedInputDevices @ 0x1C00FED58
 * Callers:
 *     RemoveInputDevices @ 0x1C00FE810 (RemoveInputDevices.c)
 * Callees:
 *     <none>
 */

__int64 RemoveRimManagedInputDevices()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  if ( (gdwMitConfig & 1) == 0 )
  {
    if ( gptiCurrent == gTermIO[2] )
    {
      RIMDirectPnpRemoveDevicesOfType(aDeviceTemplate[12], 0LL);
    }
    else
    {
      KeSetEvent(aDeviceTemplate[39], 1, 0);
      UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
      KeWaitForSingleObject(aDeviceTemplate[42], WrUserRequest, 0, 0, 0LL);
      EnterCrit(0LL, 1LL);
    }
  }
  if ( (gdwMitConfig & 2) == 0 )
  {
    if ( gptiCurrent == gptiRit )
    {
      RIMDirectPnpRemoveDevicesOfType(aDeviceTemplate[82], 1LL);
    }
    else
    {
      KeSetEvent(aDeviceTemplate[109], 1, 0);
      UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
      KeWaitForSingleObject(aDeviceTemplate[112], WrUserRequest, 0, 0, 0LL);
      EnterCrit(0LL, 1LL);
    }
  }
  if ( (gdwMitConfig & 4) == 0 )
  {
    if ( gptiCurrent != gptiRit || gbDIT )
    {
      KeSetEvent(aDeviceTemplate[179], 1, 0);
      UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
      KeWaitForSingleObject(aDeviceTemplate[182], WrUserRequest, 0, 0, 0LL);
      EnterCrit(0LL, 1LL);
    }
    else
    {
      RIMDirectPnpRemoveDevicesOfType(aDeviceTemplate[152], 2LL);
    }
  }
  if ( (gdwMitConfig & 1) != 0 )
    CBaseInput::HandleTSRequest(gpMouseSensor, 1LL);
  if ( (gdwMitConfig & 2) != 0 )
    CBaseInput::HandleTSRequest(gpKeyboardSensor, 1LL);
  result = gdwMitConfig;
  if ( (gdwMitConfig & 4) != 0 )
    return CBaseInput::HandleTSRequest(gpHidInput, 1LL);
  return result;
}
