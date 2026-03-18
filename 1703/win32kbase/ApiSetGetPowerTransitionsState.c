/*
 * XREFs of ApiSetGetPowerTransitionsState @ 0x1C0091614
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C0054C24 (RIMAllocateHidDesc.c)
 *     RIMOnTimerNotification @ 0x1C0102C90 (RIMOnTimerNotification.c)
 *     rimApplyPointerDevicePolicies @ 0x1C01115D4 (rimApplyPointerDevicePolicies.c)
 *     rimReportHidKeyboardInputData @ 0x1C0114D14 (rimReportHidKeyboardInputData.c)
 * Callees:
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall ApiSetGetPowerTransitionsState(void *a1)
{
  __int64 result; // rax

  memset(a1, 0, 0x38uLL);
  result = IsGetPowerTransitionsStateSupported();
  if ( (int)result >= 0 )
    return GetPowerTransitionsState(a1);
  return result;
}
