/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x180062EE0
 * Callers:
 *     IsWinStationIsSessionRemoteablePresent @ 0x1800626D8 (IsWinStationIsSessionRemoteablePresent.c)
 *     IsWTSQuerySessionInformationWPresent @ 0x18006283C (IsWTSQuerySessionInformationWPresent.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180062B98 (IsGetDefaultSpatialRenderingModePresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
