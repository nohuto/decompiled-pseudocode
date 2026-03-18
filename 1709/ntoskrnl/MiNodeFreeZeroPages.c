/*
 * XREFs of MiNodeFreeZeroPages @ 0x1400C5878
 * Callers:
 *     MiReplenishPageSlist @ 0x1400C53D0 (MiReplenishPageSlist.c)
 *     MiSignalLargePageRebuild @ 0x1400F00E0 (MiSignalLargePageRebuild.c)
 *     MiRebalanceZeroFreeLists @ 0x14014E230 (MiRebalanceZeroFreeLists.c)
 *     MiRebuildLargePages @ 0x14014E330 (MiRebuildLargePages.c)
 *     MiFreeZeroPageSlistSufficient @ 0x14022A49C (MiFreeZeroPageSlistSufficient.c)
 * Callees:
 *     MiNodeLargeFreeZeroPages @ 0x1400C5910 (MiNodeLargeFreeZeroPages.c)
 */

__int64 __fastcall MiNodeFreeZeroPages(__int64 a1, __int64 a2, int a3)
{
  __int16 v3; // bp
  _QWORD *v4; // rsi
  __int64 v5; // r9
  unsigned __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rdi
  int v11; // ebp
  _QWORD *v12; // rax

  v3 = a3;
  v4 = (_QWORD *)(a1 + 8032);
  v5 = 0LL;
  v6 = (unsigned int)~a3;
  v7 = 0LL;
  v8 = 0LL;
  v9 = (v6 >> 1) & 1;
  v11 = v3 & 0x400;
  do
  {
    if ( (unsigned int)MmNumberOfChannels > 1 )
      v12 = (_QWORD *)(a1 + 8 * (v8 + 2 * ((unsigned int)a2 + 506LL)));
    else
      v12 = v4;
    v5 += *v12;
    if ( v11 )
      v5 += MiNodeLargeFreeZeroPages(a1, a2, v7);
    v7 = (unsigned int)(v7 + 1);
    ++v8;
    ++v4;
  }
  while ( v8 <= v9 );
  return v5;
}
