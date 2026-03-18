/*
 * XREFs of PopGetBlockedPhaseGuid @ 0x14070C024
 * Callers:
 *     PopPublishAndPurgePowerRequestStats @ 0x14070C050 (PopPublishAndPurgePowerRequestStats.c)
 *     PopPublishAndResetPowerRequestsCollectionStats @ 0x14070C290 (PopPublishAndResetPowerRequestsCollectionStats.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopGetBlockedPhaseGuid(__int64 a1, int a2)
{
  int v2; // edx

  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 4) = 0LL;
  *(_DWORD *)(a1 + 12) = 0;
  v2 = a2 - 1;
  if ( !v2 || v2 == 2 )
    *(GUID *)a1 = GUID_SLEEPSTUDY_BLOCKER_DAM_PHASE;
  return a1;
}
