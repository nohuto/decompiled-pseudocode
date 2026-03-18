/*
 * XREFs of MiGetNodeStandbyPageCount @ 0x14014E55C
 * Callers:
 *     MiCheckZeroFreeRebalance @ 0x1400C6F10 (MiCheckZeroFreeRebalance.c)
 *     MiRebalanceZeroFreeLists @ 0x14014E230 (MiRebalanceZeroFreeLists.c)
 *     MiRebuildLargePages @ 0x14014E330 (MiRebuildLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNodeStandbyPageCount(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax

  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 16) + 7128LL;
  v5 = 8LL;
  v6 = (_QWORD *)(192 * (a3 + 43LL * a2) + v4);
  do
  {
    v3 += *v6;
    v6 += 3;
    --v5;
  }
  while ( v5 );
  return v3;
}
