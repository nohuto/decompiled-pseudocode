/*
 * XREFs of MiNodeFreeZeroPages @ 0x1400B8330
 * Callers:
 *     MiReplenishPageSlist @ 0x1400756C0 (MiReplenishPageSlist.c)
 *     MiSignalLargePageRebuild @ 0x140083DBC (MiSignalLargePageRebuild.c)
 *     MiGetFreeOrZeroPage @ 0x1400BBDA0 (MiGetFreeOrZeroPage.c)
 *     MiFreeZeroPageSlistSufficient @ 0x14021EFC4 (MiFreeZeroPageSlistSufficient.c)
 *     MiPruneStandbyPages @ 0x14021FA24 (MiPruneStandbyPages.c)
 *     MiRebalanceZeroFreeLists @ 0x14021FC00 (MiRebalanceZeroFreeLists.c)
 *     MiRebuildLargePages @ 0x1402249F0 (MiRebuildLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiNodeFreeZeroPages(_QWORD *a1, unsigned int a2, __int16 a3)
{
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r13
  unsigned int v6; // eax
  __int64 v7; // r11
  int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 *v11; // rdx
  _QWORD *v12; // rdi
  __int64 v13; // r8
  __int64 *v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rax

  v3 = 0LL;
  v4 = a2;
  v5 = (a3 & 2) == 0;
  v6 = MmNumberOfChannels;
  v7 = 0LL;
  v8 = a3 & 0x400;
  do
  {
    if ( v6 > 1 )
      v9 = a1[2 * v4 + 259 + v7];
    else
      v9 = a1[v7 + 251];
    v3 += v9;
    if ( v8 )
    {
      v10 = 0LL;
      v11 = MiLargePageSizes;
      v12 = a1;
      v13 = 4 * v7;
      v14 = &a1[v7];
      v15 = 3LL;
      do
      {
        if ( (_DWORD)v4 == 4 )
        {
          if ( v7 == 2 )
            v16 = *v12 + v12[1];
          else
            v16 = *v14;
        }
        else
        {
          v16 = a1[v13 + 102 + v4] + a1[v13 + 110 + v4];
        }
        v17 = *v11++ * v16;
        v12 += 2;
        v10 += v17;
        v14 += 2;
        v13 += 16LL;
        --v15;
      }
      while ( v15 );
      v3 += v10;
    }
    v6 = MmNumberOfChannels;
    ++v7;
  }
  while ( v7 <= v5 );
  return v3;
}
