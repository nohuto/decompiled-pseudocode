/*
 * XREFs of ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x1C0030DE8
 * Callers:
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C00F9AB8 (xInsertMetricsPlusRFONTOBJ.c)
 *     xInsertGlyphbitsRFONTOBJ @ 0x1C01011A4 (xInsertGlyphbitsRFONTOBJ.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0135568 (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C02AD9F0 (-bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 */

void *__fastcall RFONTOBJ::pgbCheckGlyphCache(RFONTOBJ *this, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // rax
  __int64 *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned int v11; // edx
  size_t v12; // rcx
  __int64 v13; // rdi
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rcx

  v2 = *(_QWORD *)this;
  v4 = *(_QWORD *)(*(_QWORD *)this + 616LL);
  if ( v4 + a2 < v4 )
    return 0LL;
  if ( v4 + a2 > *(_QWORD *)(v2 + 624) )
  {
    v6 = *(__int64 **)(v2 + 608);
    if ( v6 && (v7 = *v6) != 0 )
    {
      v8 = v7 + 8;
      v9 = *(unsigned int *)(v2 + 576) - 8LL;
      *(_QWORD *)(v2 + 608) = v7;
      v10 = v9 + v7;
      *(_QWORD *)(v2 + 616) = v8;
      *(_QWORD *)(v2 + 624) = v10;
      if ( v8 + a2 > v10 )
        return 0LL;
    }
    else
    {
      v11 = *(_DWORD *)(v2 + 584);
      if ( v11 )
        v12 = *(unsigned int *)(v2 + 576);
      else
        v12 = *(unsigned int *)(v2 + 572);
      if ( (*(_DWORD *)(v2 + 68) & 1) != 0 )
        return 0LL;
      if ( v11 >= *(_DWORD *)(v2 + 580) )
        return 0LL;
      v13 = (unsigned int)v12;
      if ( a2 + 8 > (unsigned __int64)(unsigned int)v12 )
        return 0LL;
      v14 = (_QWORD *)PALLOCMEM2(v12);
      if ( !v14 )
      {
        EngSetLastError(8u);
        return 0LL;
      }
      ++*(_DWORD *)(v2 + 584);
      v15 = *(_QWORD **)(v2 + 608);
      if ( v15 )
        *v15 = v14;
      else
        *(_QWORD *)(v2 + 600) = v14;
      *(_QWORD *)(v2 + 608) = v14;
      *v14 = 0LL;
      v16 = *(_QWORD *)(v2 + 608);
      *(_QWORD *)(v2 + 616) = v16 + 8;
      *(_QWORD *)(v2 + 624) = v13 + v16 - 8;
    }
  }
  return *(void **)(v2 + 616);
}
