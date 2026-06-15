/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x18004B170
 * Callers:
 *     IsWinStationIsSessionRemoteablePresent @ 0x18004A990 (IsWinStationIsSessionRemoteablePresent.c)
 *     IsWTSQuerySessionInformationWPresent @ 0x18004AAF4 (IsWTSQuerySessionInformationWPresent.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18004AE50 (IsGetDefaultSpatialRenderingModePresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
