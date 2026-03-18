/*
 * XREFs of ?PutFntCacheDrv@@YAXKPEAVPDEV@@K@Z @ 0x1C0102214
 * Callers:
 *     UmfdLoadFontFileView @ 0x1C0027684 (UmfdLoadFontFileView.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     SearchFntCacheNewLink @ 0x1C013BA68 (SearchFntCacheNewLink.c)
 */

void __fastcall PutFntCacheDrv(unsigned int a1, struct PDEV *a2, __int16 a3)
{
  __int64 v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = ghsemFntCache;
  GreAcquireSemaphore(ghsemFntCache);
  if ( (dword_1C032C4C0 & 3) != 0 )
  {
    v6 = qword_1C032C4C8;
    if ( qword_1C032C4C8 )
    {
      if ( a1 )
      {
        v7 = 1;
        while ( a2 != *(struct PDEV **)(qword_1C032C4C8 + 8LL * v7 + 48) )
        {
          if ( ++v7 > 5 )
            goto LABEL_2;
        }
        if ( v7 )
        {
          if ( (dword_1C032C4C0 & 2) != 0 )
          {
            v8 = SearchFntCacheNewLink(a1);
            if ( v8 )
            {
              if ( *(_WORD *)(v8 + 14) )
              {
                *(_DWORD *)(v8 + 24) |= 1u;
              }
              else
              {
                *(_WORD *)(v8 + 12) = v7;
                *(_WORD *)(v8 + 14) = a3;
              }
            }
            else
            {
              *(_DWORD *)(v6 + 16) |= 2u;
            }
            *(_DWORD *)(v6 + 96) = 1;
          }
          else
          {
            *(_DWORD *)(qword_1C032C4C8 + 16) |= 2u;
          }
        }
      }
    }
  }
LABEL_2:
  SEMOBJ::vUnlock((SEMOBJ *)&v9);
}
