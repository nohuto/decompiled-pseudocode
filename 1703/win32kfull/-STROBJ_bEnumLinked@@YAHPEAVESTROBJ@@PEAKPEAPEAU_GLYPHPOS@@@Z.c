/*
 * XREFs of ?STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z @ 0x1C00DF488
 * Callers:
 *     STROBJ_bEnum @ 0x1C00DF3C0 (STROBJ_bEnum.c)
 * Callees:
 *     ?cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1C008E570 (-cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02B12AC (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 */

__int64 __fastcall STROBJ_bEnumLinked(struct ESTROBJ *a1, unsigned int *a2, struct _GLYPHPOS **a3)
{
  int v3; // eax
  unsigned int v4; // edi
  _DWORD *v8; // rax
  int v9; // edx
  __int64 i; // rcx
  RFONTOBJ *v11; // rcx
  _DWORD *v14; // rax
  __int64 v15; // rcx
  int v16; // edx

  v3 = *((_DWORD *)a1 + 12);
  v4 = 0;
  if ( v3 )
  {
    if ( v3 == *(_DWORD *)a1 )
    {
      *a2 = 0;
      return 0LL;
    }
    *((_QWORD *)a1 + 28) += 4LL;
    *((_QWORD *)a1 + 29) += 24LL;
    v14 = (_DWORD *)*((_QWORD *)a1 + 28);
    v15 = *((_QWORD *)a1 + 29);
    v16 = *((_DWORD *)a1 + 60);
    while ( *v14 != v16 )
    {
      v15 += 24LL;
      ++v14;
      *((_QWORD *)a1 + 29) = v15;
      *((_QWORD *)a1 + 28) = v14;
    }
  }
  else
  {
    v8 = (_DWORD *)*((_QWORD *)a1 + 27);
    v9 = *((_DWORD *)a1 + 60);
    *((_QWORD *)a1 + 28) = v8;
    for ( i = *((_QWORD *)a1 + 9); ; i += 24LL )
    {
      *((_QWORD *)a1 + 29) = i;
      if ( *v8 == v9 )
        break;
      *((_QWORD *)a1 + 28) = ++v8;
    }
  }
  v11 = (RFONTOBJ *)*((_QWORD *)a1 + 7);
  if ( v11 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)v11 + 68LL) & 1) != 0
       ? (unsigned int)RFONTOBJ::bInsertGlyphbitsLookaside(
                         v11,
                         *((struct _GLYPHPOS **)a1 + 29),
                         *(_DWORD *)(*(_QWORD *)v11 + 72LL)) != 0
       : RFONTOBJ::cGetGlyphDataCache(v11, 1u, *((struct _GLYPHPOS **)a1 + 29)) )
    {
      ++*((_DWORD *)a1 + 12);
      *a2 = 1;
      *a3 = (struct _GLYPHPOS *)*((_QWORD *)a1 + 29);
      LOBYTE(v4) = *((_DWORD *)a1 + 12) < *(_DWORD *)a1;
      return v4;
    }
  }
  *a2 = 0;
  return 0LL;
}
