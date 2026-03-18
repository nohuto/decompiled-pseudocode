/*
 * XREFs of RequestModeSwitchOnPowerUp @ 0x1C013B758
 * Callers:
 *     RawInputThread @ 0x1C004A5F0 (RawInputThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS RequestModeSwitchOnPowerUp()
{
  NTSTATUS result; // eax
  PRKEVENT v1; // rcx
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF

  if ( (gdwMitConfig & 4) != 0 )
  {
    result = CHidInput::GetKernelHandleToRimObj(gpHidInput, &Handle);
  }
  else
  {
    result = (NTSTATUS)aDeviceTemplate[0];
    v1 = aDeviceTemplate[153];
    if ( !v1 )
      return result;
    result = RawInputManagerObjectCreateKernelHandle(v1, 3LL, 0LL);
  }
  if ( result >= 0 )
  {
    RIMOnPowerNotification(Handle, 1LL);
    return ZwClose(Handle);
  }
  return result;
}
