/*
 * XREFs of KiSelectThreadFromSchedulingGroup @ 0x1400A9160
 * Callers:
 *     KiSelectLowestRankedThread @ 0x1400A723C (KiSelectLowestRankedThread.c)
 *     KiChooseLowestRankedThread @ 0x1400A8E28 (KiChooseLowestRankedThread.c)
 *     KiSearchForNewThread @ 0x1400F7480 (KiSearchForNewThread.c)
 *     KiSelectThreadFromScbQueue @ 0x14024ABA4 (KiSelectThreadFromScbQueue.c)
 * Callees:
 *     KiRemoveThreadFromScbQueue @ 0x1400A91B0 (KiRemoveThreadFromScbQueue.c)
 */

__int64 __fastcall KiSelectThreadFromSchedulingGroup(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  unsigned int v4; // eax
  unsigned int v5; // r9d

  v3 = 0LL;
  v4 = *(unsigned __int16 *)(a2 + 114) >> a3;
  if ( v4 )
  {
    _BitScanReverse(&v5, v4);
    v3 = *(_QWORD *)(a2 + 16LL * (a3 + v5) + 136) - 216LL;
    KiRemoveThreadFromScbQueue(a1, a2);
  }
  return v3;
}
