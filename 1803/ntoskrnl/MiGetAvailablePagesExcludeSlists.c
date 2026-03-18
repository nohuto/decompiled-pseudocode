/*
 * XREFs of MiGetAvailablePagesExcludeSlists @ 0x14026B788
 * Callers:
 *     MiRemoveLowestPriorityStandbyPage @ 0x14014FC20 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAvailablePagesExcludeSlists(__int64 a1)
{
  return *(_QWORD *)(a1 + 7040);
}
