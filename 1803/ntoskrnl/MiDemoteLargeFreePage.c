/*
 * XREFs of MiDemoteLargeFreePage @ 0x140003C2C
 * Callers:
 *     MiTradePage @ 0x140121260 (MiTradePage.c)
 * Callees:
 *     MiTryUnlinkNodeLargePage @ 0x140003CC0 (MiTryUnlinkNodeLargePage.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x140029290 (MiInsertLargePageInFreeOrZeroList.c)
 */

__int64 __fastcall MiDemoteLargeFreePage(__int64 a1, __int64 a2)
{
  int v2; // esi
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax

  v2 = a2;
  v3 = a1 & ~(MiLargePageSizes[(unsigned int)a2] - 1);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (int)MiTryUnlinkNodeLargePage(v3, a2, 8LL) <= 1 )
  {
    MiInsertLargePageInFreeOrZeroList(48 * v3, v2, 0, 0, 0);
    result = 1LL;
  }
  else
  {
    result = 0LL;
  }
  __writecr8(CurrentIrql);
  return result;
}
