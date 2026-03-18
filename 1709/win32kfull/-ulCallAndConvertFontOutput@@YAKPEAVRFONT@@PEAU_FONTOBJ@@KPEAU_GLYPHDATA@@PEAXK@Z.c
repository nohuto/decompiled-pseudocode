/*
 * XREFs of ?ulCallAndConvertFontOutput@@YAKPEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C00393D4
 * Callers:
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C00F9AB8 (xInsertMetricsPlusRFONTOBJ.c)
 *     xInsertGlyphbitsRFONTOBJ @ 0x1C01011A4 (xInsertGlyphbitsRFONTOBJ.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02AD8FC (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C00392BC (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C0039370 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     ?ulClearTypeFilter_6x5@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z @ 0x1C00D4DE4 (-ulClearTypeFilter_6x5@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z.c)
 *     ?ulClearTypeFilter_6x1@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z @ 0x1C00D54D0 (-ulClearTypeFilter_6x1@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     AdjustGlyphIntenisty @ 0x1C0253C60 (AdjustGlyphIntenisty.c)
 */

__int64 __fastcall ulCallAndConvertFontOutput(
        struct RFONT *a1,
        struct _FONTOBJ *a2,
        __int64 a3,
        struct _GLYPHDATA *a4,
        struct _GLYPHBITS *a5,
        unsigned int a6)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  unsigned int v9; // r13d
  __int64 (__fastcall *v12)(__int64, struct _FONTOBJ *, __int64, _QWORD, struct _GLYPHDATA *, struct _GLYPHBITS *, unsigned int); // rbx
  FLONG flFontType; // r8d
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // r8d
  unsigned __int64 v17; // rcx
  unsigned int v18; // ebx
  __int64 v20; // [rsp+40h] [rbp-C8h]
  _QWORD v21[3]; // [rsp+48h] [rbp-C0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-A8h] BYREF

  v6 = -1;
  v7 = *((_QWORD *)a1 + 13);
  v9 = a3;
  v21[0] = *((_QWORD *)a1 + 15);
  v20 = v7;
  v12 = *(__int64 (__fastcall **)(__int64, struct _FONTOBJ *, __int64, _QWORD, struct _GLYPHDATA *, struct _GLYPHBITS *, unsigned int))(*(_QWORD *)(v21[0] + 88LL) + 2928LL);
  if ( gpepCSRSS )
  {
    ATTACHOBJ::ATTACHOBJ(&ApcState, (unsigned __int64)v21, a3, (__int64)a4);
    v6 = v12(v20, a2, 1LL, v9, a4, a5, a6);
    ATTACHOBJ::~ATTACHOBJ(&ApcState);
  }
  if ( v6 == -1 )
    return (unsigned int)-1;
  flFontType = a2->flFontType;
  if ( (flFontType & 0x10000000) == 0 )
    return v6;
  v14 = a4->rclInk.right - (__int64)a4->rclInk.left;
  v15 = a4->rclInk.bottom - (__int64)a4->rclInk.top;
  if ( v14 < 0 || v15 < 0 )
    return (unsigned int)-1;
  v16 = flFontType & 0x20000000;
  if ( v16 )
    v15 *= 5LL;
  v17 = ((v15 * (v14 + 2) + 3) & 0xFFFFFFFFFFFFFFFCuLL) + 16;
  if ( v17 > 0xFFFFFFFF )
    return (unsigned int)-1;
  if ( v17 > v6 )
    v6 = v17;
  if ( a5 )
  {
    if ( v6 <= a6 )
    {
      if ( v16 )
      {
        v18 = ulClearTypeFilter_6x5(a5, a4, a1);
        if ( *((_QWORD *)a1 + 114) )
          AdjustGlyphIntenisty(a5);
      }
      else
      {
        v18 = ulClearTypeFilter_6x1(a5, (struct _GLYPHDATA *)v15, a1);
      }
      if ( v18 <= v6 )
      {
        if ( (a2->flFontType & 0x20000000) != 0 )
          return v18;
        return v6;
      }
    }
    return (unsigned int)-1;
  }
  return v6;
}
