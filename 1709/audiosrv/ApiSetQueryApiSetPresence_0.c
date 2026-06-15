/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x180035040
 * Callers:
 *     IsWinStationIsSessionRemoteablePresent @ 0x180034838 (IsWinStationIsSessionRemoteablePresent.c)
 *     IsWTSQuerySessionInformationWPresent @ 0x18003499C (IsWTSQuerySessionInformationWPresent.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180034CF8 (IsGetDefaultSpatialRenderingModePresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
