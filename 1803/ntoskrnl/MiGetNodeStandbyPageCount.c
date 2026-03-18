/*
 * XREFs of MiGetNodeStandbyPageCount @ 0x1402659E4
 * Callers:
 *     MiCheckZeroFreeRebalance @ 0x140121EB0 (MiCheckZeroFreeRebalance.c)
 *     MiRebuildLargePages @ 0x140155E10 (MiRebuildLargePages.c)
 *     MiRebalanceZeroFreeLists @ 0x140266380 (MiRebalanceZeroFreeLists.c)
 *     MiRebuildLargePage @ 0x14026D668 (MiRebuildLargePage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNodeStandbyPageCount(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r10
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax

  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = 8LL;
  v6 = (_QWORD *)(192LL * a3 + 1984LL * a2 + v4 + 856);
  do
  {
    v3 += *v6;
    v6 += 3;
    --v5;
  }
  while ( v5 );
  return v3;
}
