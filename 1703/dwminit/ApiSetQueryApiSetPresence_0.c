/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x180007250
 * Callers:
 *     IsWaitForInputIdlePresent @ 0x180006754 (IsWaitForInputIdlePresent.c)
 *     IsEnumDisplayDevicesWPresent @ 0x180006828 (IsEnumDisplayDevicesWPresent.c)
 *     IsDwmLockScreenUpdatesPresent @ 0x1800068FC (IsDwmLockScreenUpdatesPresent.c)
 *     IsCreateAppChromePresent @ 0x1800069D0 (IsCreateAppChromePresent.c)
 *     IsDwmMonitorExtDwmProcessCreatedPresent @ 0x180006B28 (IsDwmMonitorExtDwmProcessCreatedPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
