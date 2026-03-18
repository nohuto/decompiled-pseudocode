/*
 * XREFs of xInsertGlyphbitsRFONTOBJ @ 0x1C01011A4
 * Callers:
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C0032534 (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 * Callees:
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x1C0030DE8 (-pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z.c)
 *     ?ulCallAndConvertFontOutput@@YAKPEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C00393D4 (-ulCallAndConvertFontOutput@@YAKPEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C02AD9F0 (-bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?vFlushCache@RFONTOBJ@@QEAAXXZ @ 0x1C02ADC9C (-vFlushCache@RFONTOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall xInsertGlyphbitsRFONTOBJ(RFONTOBJ *this, struct _GLYPHDATA *a2, unsigned int a3)
{
  __int64 v3; // rbx
  unsigned int v4; // r15d
  int v7; // eax
  unsigned __int64 v8; // rbp
  struct _GLYPHBITS *v9; // rax
  struct _GLYPHBITS *v10; // rsi
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 result; // rax
  struct _GLYPHDATA v14; // [rsp+30h] [rbp-78h] BYREF

  v3 = *(_QWORD *)this;
  v4 = a3;
  if ( (*(_DWORD *)(*(_QWORD *)this + 68LL) & 1) != 0 )
    return 0LL;
  v7 = *(_DWORD *)(v3 + 72);
  if ( !v7 )
    return 0LL;
  if ( v7 != 2 )
  {
    v8 = *(unsigned int *)(v3 + 648);
    if ( v8 < *(_QWORD *)(v3 + 624) - *(_QWORD *)(v3 + 616)
      || (LODWORD(v8) = ulCallAndConvertFontOutput((struct RFONT *)v3, (struct _FONTOBJ *)v3, a2->hg, &v14, 0LL, 0),
          (_DWORD)v8 != -1) )
    {
      while ( 1 )
      {
        v9 = (struct _GLYPHBITS *)RFONTOBJ::pgbCheckGlyphCache(this, (unsigned int)v8);
        v10 = v9;
        if ( v9 )
          break;
        if ( !v4 )
          return 0LL;
        RFONTOBJ::vFlushCache(this);
        v4 = 0;
      }
      v11 = ulCallAndConvertFontOutput(*(struct RFONT **)this, *(struct _FONTOBJ **)this, a2->hg, &v14, v9, v8);
      if ( v11 != -1 )
      {
        v12 = v11;
        result = 1LL;
        a2->gdf.pgb = v10;
        *(_QWORD *)(v3 + 616) += v12;
        return result;
      }
    }
    return 0LL;
  }
  return RFONTOBJ::bInsertGlyphbitsPath(this, a2, a3);
}
