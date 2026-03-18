/*
 * XREFs of RemoveInputDevices @ 0x1C00FE810
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00FE0C0 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C0139E30 (xxxRemoteReconnect.c)
 * Callees:
 *     RemoveRimManagedInputDevices @ 0x1C00FED58 (RemoveRimManagedInputDevices.c)
 */

__int64 RemoveInputDevices()
{
  unsigned int v0; // ebx
  char *v1; // rdi
  __int64 v2; // rsi
  _QWORD *v3; // rcx
  struct _LIST_ENTRY *v5; // rcx
  HANDLE Handle; // [rsp+40h] [rbp+8h]

  if ( (dword_1C032CA80 & 1) == 0 )
  {
    dword_1C032CA80 |= 1u;
    byte_1C032C7D0 = gdwMitConfig & 1;
    byte_1C032C7D1 = (gdwMitConfig & 2) != 0;
    byte_1C032C7D2 = (gdwMitConfig & 4) != 0;
  }
  v0 = 0;
  v1 = &byte_1C032C7D0;
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
      v5 = (&aDeviceTemplate[0][4].Header.WaitListHead.Flink)[v2];
      if ( v5 && (int)RawInputManagerObjectCreateKernelHandle(v5, 3LL, 0LL) >= 0 )
      {
        RIMDirectStopDeviceClassNotifications(Handle);
        ZwClose(Handle);
      }
    }
    ++v0;
    ++v1;
    v2 += 70LL;
  }
  while ( v0 <= 2 );
  RemoveRimManagedInputDevices();
  return ForceUpdatePointerDeviceSystemMetricKeys();
}
