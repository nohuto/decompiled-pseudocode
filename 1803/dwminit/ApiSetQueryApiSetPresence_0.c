/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x1800085F0
 * Callers:
 *     IsWaitForInputIdlePresent @ 0x180007D08 (IsWaitForInputIdlePresent.c)
 *     IsEnumDisplayDevicesWPresent @ 0x180007DDC (IsEnumDisplayDevicesWPresent.c)
 *     IsDwmLockScreenUpdatesPresent @ 0x180007EB0 (IsDwmLockScreenUpdatesPresent.c)
 *     IsDwmMonitorExtDwmProcessCreatedPresent @ 0x180008090 (IsDwmMonitorExtDwmProcessCreatedPresent.c)
 *     IsCreateAppChromePresent @ 0x1800085F8 (IsCreateAppChromePresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
