/*
 * XREFs of MiGetAvailablePagesExcludeSlists @ 0x140230474
 * Callers:
 *     MiRemoveLowestPriorityStandbyPage @ 0x140135E60 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAvailablePagesExcludeSlists(__int64 a1)
{
  return *(_QWORD *)(a1 + 5952);
}
