/*
 * XREFs of HUBDSM_ClearingDeviceLostProgammingFlagOnRestart @ 0x1C001CCA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_ClearingDeviceLostProgammingFlagOnRestart(__int64 a1)
{
  _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 960) + 1636LL), 0xFFFFFFDF);
  return 4077LL;
}
