/*
 * XREFs of KeUpdateThreadSchedulingProperties @ 0x140120EB0
 * Callers:
 *     KiSetThreadSchedulingGroup @ 0x140120BE4 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x140120D30 (KiRemoveThreadFromSchedulingGroup.c)
 * Callees:
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1400433E4 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiIsThreadRankNonZero @ 0x1401138D0 (KiIsThreadRankNonZero.c)
 */

_BYTE *__fastcall KeUpdateThreadSchedulingProperties(__int64 a1, __int64 a2, struct _KPRCB *a3)
{
  _BYTE *result; // rax
  char v6; // r9
  char v7; // cl
  bool IsThreadRankNonZero; // al

  result = (_BYTE *)KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
  if ( v6 == 2 && !a3->NextThread || v6 == 3 )
  {
    if ( (*(_BYTE *)(a1 + 2) & 4) != 0 )
    {
      IsThreadRankNonZero = KiIsThreadRankNonZero(a1, a3);
      v7 = 1;
      if ( !IsThreadRankNonZero )
        v7 = *(_BYTE *)(a1 + 195);
    }
    else
    {
      v7 = *(_BYTE *)(a1 + 195);
    }
    result = a3->PriorityState;
    *result = v7;
  }
  return result;
}
