/*
 * XREFs of ?ulCallAndConvertFontOutput@@YAKPEAVPDEVOBJ@@PEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0030778
 * Callers:
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C00EA768 (xInsertMetricsPlusRFONTOBJ.c)
 *     xInsertGlyphbitsRFONTOBJ @ 0x1C00F26C0 (xInsertGlyphbitsRFONTOBJ.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02B12AC (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z @ 0x1C0032F14 (--0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C0032F4C (--1ATTACHOBJ@@QEAA@XZ.c)
 *     ?ulClearTypeFilter_6x5@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z @ 0x1C00D7D84 (-ulClearTypeFilter_6x5@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z.c)
 *     ?ulClearTypeFilter_6x1@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z @ 0x1C00D8480 (-ulClearTypeFilter_6x1@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     AdjustGlyphIntenisty @ 0x1C025216C (AdjustGlyphIntenisty.c)
 */

__int64 __fastcall ulCallAndConvertFontOutput(
        struct PDEVOBJ *a1,
        struct RFONT *a2,
        struct _FONTOBJ *a3,
        unsigned int a4,
        struct _GLYPHDATA *a5,
        struct _GLYPHBITS *a6,
        unsigned int a7)
{
  unsigned int v7; // edi
  __int64 (__fastcall *v11)(__int64, struct _FONTOBJ *, __int64, _QWORD, struct _GLYPHDATA *, struct _GLYPHBITS *, unsigned int); // rbx
  FLONG flFontType; // r8d
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // r8d
  unsigned __int64 v16; // rcx
  unsigned int v17; // ebx
  __int64 v19; // [rsp+40h] [rbp-A8h]
  _BYTE v20[64]; // [rsp+50h] [rbp-98h] BYREF

  v7 = -1;
  v11 = *(__int64 (__fastcall **)(__int64, struct _FONTOBJ *, __int64, _QWORD, struct _GLYPHDATA *, struct _GLYPHBITS *, unsigned int))(*(_QWORD *)a1 + 2928LL);
  v19 = *((_QWORD *)a2 + 13);
  if ( gpepCSRSS )
  {
    ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v20, a1);
    v7 = v11(v19, a3, 1LL, a4, a5, a6, a7);
    ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v20);
  }
  if ( v7 != -1 )
  {
    flFontType = a3->flFontType;
    if ( (flFontType & 0x10000000) == 0 )
      return v7;
    v13 = a5->rclInk.right - (__int64)a5->rclInk.left;
    v14 = a5->rclInk.bottom - (__int64)a5->rclInk.top;
    if ( v13 >= 0 && v14 >= 0 )
    {
      v15 = flFontType & 0x20000000;
      if ( v15 )
        v14 *= 5LL;
      v16 = ((v14 * (v13 + 2) + 3) & 0xFFFFFFFFFFFFFFFCuLL) + 16;
      if ( v16 <= 0xFFFFFFFF )
      {
        if ( v16 > v7 )
          v7 = v16;
        if ( !a6 )
          return v7;
        if ( v7 <= a7 )
        {
          if ( v15 )
          {
            v17 = ulClearTypeFilter_6x5(a6, a5, a2);
            if ( *((_QWORD *)a2 + 114) )
              AdjustGlyphIntenisty(a6);
          }
          else
          {
            v17 = ulClearTypeFilter_6x1(a6, (struct _GLYPHDATA *)v14, a2);
          }
          if ( v17 <= v7 )
          {
            if ( (a3->flFontType & 0x20000000) != 0 )
              return v17;
            return v7;
          }
        }
      }
    }
  }
  return 0xFFFFFFFFLL;
}
