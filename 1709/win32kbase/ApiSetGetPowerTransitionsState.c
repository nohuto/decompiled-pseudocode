/*
 * XREFs of ApiSetGetPowerTransitionsState @ 0x1C0097198
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C0018980 (RIMDeviceClassNotify.c)
 *     RIMOnTimerNotification @ 0x1C0102E50 (RIMOnTimerNotification.c)
 *     rimApplyPointerDevicePolicies @ 0x1C01100A8 (rimApplyPointerDevicePolicies.c)
 *     rimReportHidKeyboardInputData @ 0x1C01137E8 (rimReportHidKeyboardInputData.c)
 * Callees:
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall ApiSetGetPowerTransitionsState(void *a1)
{
  __int64 result; // rax

  memset(a1, 0, 0x3CuLL);
  result = IsGetPowerTransitionsStateSupported();
  if ( (int)result >= 0 )
    return GetPowerTransitionsState(a1);
  return result;
}
