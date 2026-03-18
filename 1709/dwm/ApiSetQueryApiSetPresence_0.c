/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x140004930
 * Callers:
 *     IsChangeWindowMessageFilterExPresent @ 0x1400043B0 (IsChangeWindowMessageFilterExPresent.c)
 *     IsWinStationQueryInformationWPresent @ 0x140004620 (IsWinStationQueryInformationWPresent.c)
 *     IsDWMGhostHandleGhostMsgPresent @ 0x14000470C (IsDWMGhostHandleGhostMsgPresent.c)
 *     IsImmDisableIMEPresent @ 0x140004804 (IsImmDisableIMEPresent.c)
 *     IsCreateAppChromePresent @ 0x1400048D8 (IsCreateAppChromePresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
