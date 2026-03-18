/*
 * XREFs of EngCloseFNTCache @ 0x1C00BFD94
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C00BF850 (xxxLW_LoadFonts.c)
 *     EngFntCacheAlloc @ 0x1C0142780 (EngFntCacheAlloc.c)
 * Callees:
 *     bSetFntCacheReg @ 0x1C00BF290 (bSetFntCacheReg.c)
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C00C1AB0 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     ComputeFileviewCheckSum @ 0x1C00C1D10 (ComputeFileviewCheckSum.c)
 */

void EngCloseFNTCache()
{
  char v0; // al
  _DWORD *v1; // rdx
  int v2; // edx
  int v3; // eax
  int v4; // eax
  unsigned int v5; // ecx

  v0 = dword_1C0327740;
  if ( (dword_1C0327740 & 3) != 0 )
  {
    v1 = (_DWORD *)qword_1C0327748;
    if ( qword_1C0327748 )
    {
      if ( (dword_1C0327740 & 2) == 0 )
        goto LABEL_4;
      if ( *(_QWORD *)qword_1C0327748 && *(_DWORD *)(qword_1C0327748 + 48) )
      {
        *(_DWORD *)(*(_QWORD *)qword_1C0327748 + 20LL) = *(_DWORD *)(qword_1C0327748 + 8);
        *(_DWORD *)(*(_QWORD *)v1 + 36LL) = v1[8] - v1[6];
        v3 = ComputeFileviewCheckSum(*(_QWORD *)v1 + 4LL, (unsigned int)(*(_DWORD *)(*(_QWORD *)v1 + 24LL) - 4));
        v1 = (_DWORD *)qword_1C0327748;
        **(_DWORD **)qword_1C0327748 = v3;
        v0 = dword_1C0327740;
      }
      if ( (v0 & 2) != 0 )
      {
        v4 = v1[4];
        if ( v1[3] != v4 )
          bSetFntCacheReg(1u, v4);
        v2 = 0;
        v5 = 0;
      }
      else
      {
LABEL_4:
        v2 = v1[4];
        if ( (v2 & 3) == 0 )
        {
LABEL_5:
          vCleanUpFntCacheInternal();
          return;
        }
        v5 = 1;
      }
      bSetFntCacheReg(v5, v2);
      goto LABEL_5;
    }
  }
  dword_1C0327740 = 0;
  gbFntCacheClosed = 1;
}
