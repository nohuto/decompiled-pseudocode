/*
 * XREFs of EngFntCacheAlloc @ 0x1C0142780
 * Callers:
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1C01426D4 (-FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z.c)
 *     vFontFileCache @ 0x1C022C6F4 (vFontFileCache.c)
 * Callees:
 *     EngCloseFNTCache @ 0x1C00BFD94 (EngCloseFNTCache.c)
 *     SearchFntCacheNewLink @ 0x1C0142864 (SearchFntCacheNewLink.c)
 *     bReAllocCacheFile @ 0x1C0142978 (bReAllocCacheFile.c)
 */

PVOID __stdcall EngFntCacheAlloc(ULONG ulFastCheckSum, ULONG cjSize)
{
  __int64 v2; // rbx
  char *v3; // rdi
  __int64 v6; // r14
  _DWORD *v7; // rax
  int v9; // eax

  v2 = qword_1C0327748;
  v3 = 0LL;
  if ( !qword_1C0327748 || !ulFastCheckSum )
    return 0LL;
  if ( (dword_1C0327740 & 2) != 0 )
  {
    v6 = (cjSize + 7) & 0xFFFFFFF8;
    if ( (unsigned __int64)(v6 + *(_QWORD *)(qword_1C0327748 + 32)) < *(_QWORD *)(qword_1C0327748 + 40)
      || (v9 = bReAllocCacheFile(cjSize), v2 = qword_1C0327748, v9) )
    {
      v7 = (_DWORD *)SearchFntCacheNewLink(ulFastCheckSum);
      if ( v7 )
      {
        if ( v7[4] || v7[5] )
        {
          v7[6] |= 1u;
        }
        else
        {
          v3 = *(char **)(v2 + 32);
          *(_QWORD *)(v2 + 32) = &v3[v6];
          v7[4] = cjSize;
          v7[5] = (_DWORD)v3 - *(_DWORD *)(v2 + 24);
        }
        *(_DWORD *)(v2 + 48) = 1;
      }
    }
  }
  else
  {
    *(_DWORD *)(qword_1C0327748 + 16) |= 2u;
  }
  if ( (*(_DWORD *)(v2 + 16) & 1) != 0 )
  {
    EngCloseFNTCache();
    return 0LL;
  }
  return v3;
}
