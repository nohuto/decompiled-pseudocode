/*
 * XREFs of EngFntCacheAlloc @ 0x1C013B980
 * Callers:
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1C013B8D4 (-FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z.c)
 *     vFontFileCache @ 0x1C022B1A4 (vFontFileCache.c)
 * Callees:
 *     CloseFNTCache @ 0x1C000A6DC (CloseFNTCache.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     SearchFntCacheNewLink @ 0x1C013BA68 (SearchFntCacheNewLink.c)
 *     bReAllocCacheFile @ 0x1C013BB7C (bReAllocCacheFile.c)
 */

PVOID __stdcall EngFntCacheAlloc(ULONG ulFastCheckSum, ULONG cjSize)
{
  char *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // r14
  _DWORD *v7; // rax
  int v9; // eax
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  v10 = ghsemFntCache;
  GreAcquireSemaphore(ghsemFntCache);
  v5 = qword_1C032C4C8;
  if ( qword_1C032C4C8 && ulFastCheckSum )
  {
    if ( (dword_1C032C4C0 & 2) != 0 )
    {
      v6 = (cjSize + 7) & 0xFFFFFFF8;
      if ( (unsigned __int64)(v6 + *(_QWORD *)(qword_1C032C4C8 + 32)) < *(_QWORD *)(qword_1C032C4C8 + 40)
        || (v9 = bReAllocCacheFile(cjSize), v5 = qword_1C032C4C8, v9) )
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
            v4 = *(char **)(v5 + 32);
            *(_QWORD *)(v5 + 32) = &v4[v6];
            v7[4] = cjSize;
            v7[5] = (_DWORD)v4 - *(_DWORD *)(v5 + 24);
          }
          *(_DWORD *)(v5 + 96) = 1;
        }
      }
    }
    else
    {
      *(_DWORD *)(qword_1C032C4C8 + 16) |= 2u;
    }
    if ( (*(_DWORD *)(v5 + 16) & 1) != 0 )
    {
      CloseFNTCache();
      v4 = 0LL;
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v10);
  return v4;
}
