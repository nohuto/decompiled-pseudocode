/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x1800096F0
 * Callers:
 *     IsWaitForInputIdlePresent @ 0x1800087D4 (IsWaitForInputIdlePresent.c)
 *     IsEnumDisplayDevicesWPresent @ 0x1800088A8 (IsEnumDisplayDevicesWPresent.c)
 *     IsDwmLockScreenUpdatesPresent @ 0x18000897C (IsDwmLockScreenUpdatesPresent.c)
 *     IsDwmMonitorExtDwmProcessCreatedPresent @ 0x180008B5C (IsDwmMonitorExtDwmProcessCreatedPresent.c)
 *     IsCreateAppChromePresent @ 0x1800096F8 (IsCreateAppChromePresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
