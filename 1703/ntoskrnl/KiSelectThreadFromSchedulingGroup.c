/*
 * XREFs of KiSelectThreadFromSchedulingGroup @ 0x140114C1C
 * Callers:
 *     KiSearchForNewThread @ 0x1400EB7B0 (KiSearchForNewThread.c)
 *     KiChooseLowestRankedThread @ 0x140112D54 (KiChooseLowestRankedThread.c)
 *     KiSelectLowestRankedThread @ 0x140113F6C (KiSelectLowestRankedThread.c)
 *     KiSelectThreadFromScbQueue @ 0x1402062D0 (KiSelectThreadFromScbQueue.c)
 * Callees:
 *     KiRemoveThreadFromScbQueue @ 0x140114C6C (KiRemoveThreadFromScbQueue.c)
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
