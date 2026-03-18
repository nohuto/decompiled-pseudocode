/*
 * XREFs of RemoveInputDevices @ 0x1C00D6A40
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00D63E0 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C0140AE0 (xxxRemoteReconnect.c)
 * Callees:
 *     ForceUpdatePointerDeviceSystemMetricKeys @ 0x1C00D6BBC (ForceUpdatePointerDeviceSystemMetricKeys.c)
 *     RemoveRimManagedInputDevices @ 0x1C00D6F84 (RemoveRimManagedInputDevices.c)
 */

__int64 RemoveInputDevices()
{
  unsigned int v0; // ebx
  char *v1; // rdi
  __int64 v2; // rsi
  _QWORD *v3; // rcx
  __int64 v5; // rcx
  HANDLE Handle; // [rsp+40h] [rbp+8h]

  if ( (dword_1C0327D10 & 1) == 0 )
  {
    dword_1C0327D10 |= 1u;
    byte_1C0327A58 = gdwMitConfig & 1;
    byte_1C0327A59 = (gdwMitConfig & 2) != 0;
    byte_1C0327A5A = (gdwMitConfig & 4) != 0;
  }
  v0 = 0;
  v1 = &byte_1C0327A58;
  v2 = 0LL;
  do
  {
    if ( *v1 )
    {
      if ( v0 )
      {
        v3 = (_QWORD *)gpHidInput;
        if ( v0 != 2 )
          v3 = (_QWORD *)gpKeyboardSensor;
      }
      else
      {
        v3 = (_QWORD *)gpMouseSensor;
      }
      CBaseInput::HandleTSRequest(*v3, 3LL);
    }
    else
    {
      v5 = *(_QWORD *)(v2 + aDeviceTemplate[0] + 104);
      if ( v5 && (int)RawInputManagerObjectCreateKernelHandle(v5, 3LL, 0LL) >= 0 )
      {
        RIMDirectStopDeviceClassNotifications(Handle);
        ZwClose(Handle);
      }
    }
    ++v0;
    ++v1;
    v2 += 560LL;
  }
  while ( v0 <= 2 );
  RemoveRimManagedInputDevices();
  return ForceUpdatePointerDeviceSystemMetricKeys();
}
