/*
 * XREFs of ?PutFNTCacheCheckSum@@YAXKK@Z @ 0x1C0106A54
 * Callers:
 *     ??0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C00296A8 (--0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     SearchFntCacheNewLink @ 0x1C013BA68 (SearchFntCacheNewLink.c)
 */

void __fastcall PutFNTCacheCheckSum(unsigned int a1, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = ghsemFntCache;
  GreAcquireSemaphore(ghsemFntCache);
  v4 = qword_1C032C4C8;
  if ( qword_1C032C4C8 && a1 )
  {
    if ( (dword_1C032C4C0 & 2) != 0 )
    {
      v5 = SearchFntCacheNewLink(a1);
      if ( v5 )
      {
        if ( *(_DWORD *)(v5 + 4) )
          *(_DWORD *)(v5 + 24) |= 1u;
        else
          *(_DWORD *)(v5 + 4) = a2;
        *(_DWORD *)(v4 + 96) = 1;
      }
    }
    else
    {
      *(_DWORD *)(qword_1C032C4C8 + 16) |= 2u;
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v6);
}
