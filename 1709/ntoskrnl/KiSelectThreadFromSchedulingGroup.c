/*
 * XREFs of KiSelectThreadFromSchedulingGroup @ 0x1400D2970
 * Callers:
 *     KiSearchForNewThread @ 0x14006EA10 (KiSearchForNewThread.c)
 *     KiSelectLowestRankedThread @ 0x1400A8B20 (KiSelectLowestRankedThread.c)
 *     KiChooseLowestRankedThread @ 0x1400AB7D4 (KiChooseLowestRankedThread.c)
 *     KiSelectThreadFromScbQueue @ 0x14020C8C0 (KiSelectThreadFromScbQueue.c)
 * Callees:
 *     KiRemoveThreadFromScbQueue @ 0x1400D29C0 (KiRemoveThreadFromScbQueue.c)
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
    KiRemoveThreadFromScbQueue(a1, a2, v3);
  }
  return v3;
}
