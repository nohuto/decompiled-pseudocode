/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x1400043F0
 * Callers:
 *     IsChangeWindowMessageFilterExPresent @ 0x140003E6C (IsChangeWindowMessageFilterExPresent.c)
 *     IsWinStationQueryInformationWPresent @ 0x1400040DC (IsWinStationQueryInformationWPresent.c)
 *     IsDWMGhostHandleGhostMsgPresent @ 0x1400041C8 (IsDWMGhostHandleGhostMsgPresent.c)
 *     IsImmDisableIMEPresent @ 0x1400042C0 (IsImmDisableIMEPresent.c)
 *     IsCreateAppChromePresent @ 0x140004394 (IsCreateAppChromePresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
