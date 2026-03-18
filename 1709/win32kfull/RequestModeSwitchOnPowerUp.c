/*
 * XREFs of RequestModeSwitchOnPowerUp @ 0x1C01421E0
 * Callers:
 *     RawInputThread @ 0x1C0087D60 (RawInputThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS RequestModeSwitchOnPowerUp()
{
  NTSTATUS result; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rcx
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF

  if ( (gdwMitConfig & 4) != 0 )
  {
    result = CHidInput::GetKernelHandleToRimObj(gpHidInput, &Handle);
  }
  else
  {
    result = aDeviceTemplate[0];
    v3 = aDeviceTemplate[153];
    if ( !v3 )
      return result;
    result = RawInputManagerObjectCreateKernelHandle(v3, 3LL, 0LL);
  }
  if ( result >= 0 )
  {
    UserSessionSwitchLeaveCrit(v2, v1);
    RIMOnPowerNotification(Handle, gPTPEnabled != 0 ? 5LL : 1LL);
    EnterCrit(0LL, 1LL);
    return ZwClose(Handle);
  }
  return result;
}
