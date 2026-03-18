/*
 * XREFs of xInsertMetricsPlusRFONTOBJ @ 0x1C00F9AB8
 * Callers:
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0033A10 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 * Callees:
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x1C0030DE8 (-pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C0031EA0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ?bCheckMetricsCache@RFONTOBJ@@QEAAHXZ @ 0x1C0032584 (-bCheckMetricsCache@RFONTOBJ@@QEAAHXZ.c)
 *     ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0033A60 (-bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?ulCallAndConvertFontOutput@@YAKPEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C00393D4 (-ulCallAndConvertFontOutput@@YAKPEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0135568 (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall xInsertMetricsPlusRFONTOBJ(RFONTOBJ *this, struct _GLYPHDATA **a2, unsigned __int16 a3)
{
  __int64 v6; // rbp
  unsigned int v7; // r15d
  __int64 v8; // rbx
  struct RFONT *v9; // rbp
  unsigned __int64 v10; // rsi
  struct _GLYPHBITS *v11; // rax
  struct _GLYPHDATA *v12; // r9
  struct _GLYPHBITS *v13; // rbp
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  struct _GLYPHDATA *v18; // rcx
  unsigned __int16 v19; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-80h] BYREF
  _GLYPHDATA v21; // [rsp+40h] [rbp-78h] BYREF

  v6 = *(_QWORD *)(*(_QWORD *)this + 480LL);
  if ( (*(_DWORD *)(*(_QWORD *)this + 68LL) & 2) != 0 )
  {
    v19 = a3;
    RFONTOBJ::vXlatGlyphArray(this, &v19, 1, &v20, 0, 0);
    v7 = v20;
  }
  else
  {
    v7 = a3;
  }
  v8 = *(_QWORD *)this;
  if ( v7 == *(_DWORD *)(*(_QWORD *)this + 456LL) )
  {
    v18 = *(struct _GLYPHDATA **)(v6 + 8);
    if ( v18 )
    {
      *a2 = v18;
      return 1LL;
    }
  }
  if ( !*(_DWORD *)(v8 + 72) )
    return RFONTOBJ::bInsertMetrics(this, a2);
  if ( !(unsigned int)RFONTOBJ::bCheckMetricsCache(this) )
    return 0LL;
  v9 = *(struct RFONT **)this;
  if ( *(_DWORD *)(*(_QWORD *)this + 72LL) != 2 )
  {
    memset(&v21, 0, sizeof(v21));
    v10 = *(unsigned int *)(v8 + 648);
    if ( v10 < *(_QWORD *)(v8 + 624) - *(_QWORD *)(v8 + 616)
      || (LODWORD(v10) = ulCallAndConvertFontOutput(v9, (struct _FONTOBJ *)v9, v7, &v21, 0LL, 0), (_DWORD)v10 != -1) )
    {
      v11 = (struct _GLYPHBITS *)RFONTOBJ::pgbCheckGlyphCache(this, (unsigned int)v10);
      v12 = &v21;
      v13 = v11;
      if ( !*(_DWORD *)(*(_QWORD *)this + 652LL) )
        v12 = *(struct _GLYPHDATA **)(v8 + 536);
      v14 = ulCallAndConvertFontOutput(*(struct RFONT **)this, *(struct _FONTOBJ **)this, v7, v12, v11, v10);
      v15 = v14;
      if ( v14 != -1 )
      {
        if ( *(_DWORD *)(*(_QWORD *)this + 652LL) )
        {
          v16 = *(_QWORD *)(v8 + 536);
          *(_OWORD *)v16 = *(_OWORD *)&v21.gdf.pgb;
          *(_QWORD *)(v16 + 16) = *(_QWORD *)&v21.fxA;
        }
        *a2 = *(struct _GLYPHDATA **)(v8 + 536);
        if ( *(_DWORD *)(*(_QWORD *)this + 652LL) )
          *(_QWORD *)(v8 + 536) += 24LL;
        else
          *(_QWORD *)(v8 + 536) += 64LL;
        if ( v13 )
          *(_QWORD *)(v8 + 616) += v15;
        return 1LL;
      }
    }
    return 0LL;
  }
  return RFONTOBJ::bInsertMetricsPlusPath(this, a2, a3);
}
