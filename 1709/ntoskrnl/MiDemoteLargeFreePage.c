/*
 * XREFs of MiDemoteLargeFreePage @ 0x1401264DC
 * Callers:
 *     MiTradePage @ 0x140078860 (MiTradePage.c)
 * Callees:
 *     MiInsertLargePageInFreeOrZeroList @ 0x14004DAD0 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiTryUnlinkNodeLargePage @ 0x140126570 (MiTryUnlinkNodeLargePage.c)
 */

__int64 __fastcall MiDemoteLargeFreePage(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax

  v2 = a2;
  v3 = a1 & ~(MiLargePageSizes[(unsigned int)a2] - 1);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (int)MiTryUnlinkNodeLargePage(v3, a2, 4LL) > 1 )
  {
    result = 0LL;
  }
  else
  {
    MiInsertLargePageInFreeOrZeroList(48 * v3 - 0x58000000000LL, v2, 0, 0, 0);
    result = 1LL;
  }
  __writecr8(CurrentIrql);
  return result;
}
