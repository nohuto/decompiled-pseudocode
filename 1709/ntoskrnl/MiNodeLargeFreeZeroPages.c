/*
 * XREFs of MiNodeLargeFreeZeroPages @ 0x1400C5910
 * Callers:
 *     MiNodeFreeZeroPages @ 0x1400C5878 (MiNodeFreeZeroPages.c)
 *     MiDemoteLocalLargePage @ 0x1400C62F0 (MiDemoteLocalLargePage.c)
 *     MiSignalLargePageRebuild @ 0x1400F00E0 (MiSignalLargePageRebuild.c)
 *     MiRebuildLargePages @ 0x14014E330 (MiRebuildLargePages.c)
 *     MiRebuildLargePage @ 0x1402336B8 (MiRebuildLargePage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiNodeLargeFreeZeroPages(_QWORD *a1, unsigned int a2, int a3)
{
  __int64 v3; // r9
  __int64 *v4; // r11
  __int64 v6; // rsi
  __int64 v7; // rdi
  _QWORD *v8; // r10
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax

  v3 = 0LL;
  v4 = MiLargePageSizes;
  v6 = 0LL;
  v7 = 0LL;
  v8 = a1;
  v9 = 3LL;
  do
  {
    if ( a2 == 4 )
    {
      if ( a3 == 2 )
        v11 = *v8 + v8[1];
      else
        v11 = a1[v7 + a3];
    }
    else
    {
      v10 = a2 + 4 * (v6 + a3);
      v11 = a1[v10 + 6] + a1[v10 + 14];
    }
    v12 = *v4++ * v11;
    v8 += 2;
    v3 += v12;
    v7 += 2LL;
    v6 += 4LL;
    --v9;
  }
  while ( v9 );
  return v3;
}
