/*
 * XREFs of xInsertMetricsRFONTOBJ @ 0x1C00EA994
 * Callers:
 *     ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C008DBBC (-bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 * Callees:
 *     ?QueryFontData@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0032444 (-QueryFontData@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C008C0B0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ?bCheckMetricsCache@RFONTOBJ@@QEAAHXZ @ 0x1C008FF38 (-bCheckMetricsCache@RFONTOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall xInsertMetricsRFONTOBJ(RFONTOBJ *this, _QWORD *a2, unsigned __int16 a3)
{
  unsigned int v3; // edi
  __int64 v6; // r14
  unsigned int v7; // ebp
  __int64 v8; // rbx
  __int64 v9; // r14
  BOOL v10; // r15d
  struct _GLYPHDATA *v11; // rax
  __int64 v12; // rax
  __int64 v14; // rax
  unsigned __int16 v15; // [rsp+40h] [rbp-A8h] BYREF
  unsigned int v16; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-98h] BYREF
  struct _GLYPHDATA v18; // [rsp+60h] [rbp-88h] BYREF

  v3 = 0;
  v6 = *(_QWORD *)(*(_QWORD *)this + 480LL);
  if ( (*(_DWORD *)(*(_QWORD *)this + 68LL) & 2) != 0 )
  {
    v15 = a3;
    RFONTOBJ::vXlatGlyphArray(this, &v15, 1, &v16, 0, 0);
    v7 = v16;
  }
  else
  {
    v7 = a3;
  }
  v8 = *(_QWORD *)this;
  if ( v7 == *(_DWORD *)(*(_QWORD *)this + 456LL) && (v14 = *(_QWORD *)(v6 + 8)) != 0 )
  {
    *a2 = v14;
    return 1LL;
  }
  else if ( (unsigned int)RFONTOBJ::bCheckMetricsCache(this) )
  {
    v9 = *(_QWORD *)this;
    v17 = *(_QWORD *)(*(_QWORD *)this + 80LL);
    v10 = *(_DWORD *)(v9 + 72) == 2;
    memset(&v18, 0, sizeof(v18));
    v11 = &v18;
    if ( !*(_DWORD *)(v9 + 652) )
      v11 = *(struct _GLYPHDATA **)(v8 + 536);
    if ( (unsigned int)PDEVOBJ::QueryFontData(
                         (PDEVOBJ *)&v17,
                         *(struct DHPDEV__ **)(v9 + 104),
                         (struct _FONTOBJ *)v9,
                         v10 + 1,
                         v7,
                         v11,
                         0LL,
                         0) != -1 )
    {
      if ( *(_DWORD *)(*(_QWORD *)this + 652LL) )
      {
        v12 = *(_QWORD *)(v8 + 536);
        *(_OWORD *)v12 = *(_OWORD *)&v18.gdf.pgb;
        *(_QWORD *)(v12 + 16) = *(_QWORD *)&v18.fxA;
      }
      **(_QWORD **)(v8 + 536) = 0LL;
      *a2 = *(_QWORD *)(v8 + 536);
      if ( *(_DWORD *)(*(_QWORD *)this + 652LL) )
        *(_QWORD *)(v8 + 536) += 24LL;
      else
        *(_QWORD *)(v8 + 536) += 64LL;
      return 1;
    }
    return v3;
  }
  else
  {
    return 0LL;
  }
}
