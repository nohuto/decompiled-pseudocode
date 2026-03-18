/*
 * XREFs of ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1C003C39C
 * Callers:
 *     cjIFIMetricsToOTMW @ 0x1C0039574 (cjIFIMetricsToOTMW.c)
 *     ?vIFIMetricsToTextMetricW@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@PEAU_IFIMETRICS@@@Z @ 0x1C00B6048 (-vIFIMetricsToTextMetricW@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@PEAU_IFIMETRICS@@@Z.c)
 * Callees:
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C0036620 (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C003C7C4 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     GetAppCompatFlags @ 0x1C0073430 (GetAppCompatFlags.c)
 *     bFToL @ 0x1C00F1FA8 (bFToL.c)
 */

void __fastcall vIFIMetricsToTextMetricWStrict(
        struct RFONTOBJ *a1,
        struct DCOBJ *a2,
        struct tagTEXTMETRICW *a3,
        struct _IFIMETRICS *a4)
{
  char v8; // si
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  LONG v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  LONG v19; // ecx
  char v20; // al
  __int64 v21; // rax
  char v22; // r8
  BYTE v23; // r8
  LONG v24; // eax
  int v25; // r14d
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int16 v32; // [rsp+34h] [rbp-2Ch]
  char v33; // [rsp+36h] [rbp-2Ah]
  LONG v34; // [rsp+44h] [rbp-1Ch]
  LONG v35; // [rsp+48h] [rbp-18h]
  LONG v36; // [rsp+4Ch] [rbp-14h]
  LONG v37; // [rsp+50h] [rbp-10h]
  LONG v38; // [rsp+54h] [rbp-Ch]
  LONG v39; // [rsp+58h] [rbp-8h]
  LONG v40; // [rsp+A8h] [rbp+48h] BYREF
  int v41; // [rsp+B0h] [rbp+50h]

  IFIOBJR::IFIOBJR((IFIOBJR *)&v31, a4, a1, a2);
  v8 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 352LL) & 0x802) == 0x802 )
  {
    a3->tmHeight = (*(_DWORD *)(*(_QWORD *)a1 + 316LL) + 8) >> 4;
    a3->tmAscent = (*(_DWORD *)(*(_QWORD *)a1 + 308LL) + 8) >> 4;
    a3->tmOverhang = RFONTOBJ::lOverhang(a1);
  }
  else
  {
    v40 = 0;
    bFToL(2050LL, &v40, 0LL);
    a3->tmHeight = v40;
    v40 = 0;
    bFToL(v26, &v40, 0LL);
    a3->tmAscent = v40;
    RFONTOBJ::lOverhang(a1);
    v40 = 0;
    bFToL(v27, &v40, 0LL);
    a3->tmOverhang = v40;
  }
  v9 = v31;
  if ( (*(_DWORD *)(v31 + 48) & 0x3000010) != 0 )
  {
    v10 = *(_QWORD *)a1;
    v40 = 0;
    v11 = *(unsigned int *)(v10 + 376);
    if ( (_DWORD)v11 == 0x80000000 )
    {
      v41 = *(_DWORD *)(v10 + 208);
      bFToL(v11, &v40, 0LL);
      v13 = a3->tmHeight - v40;
    }
    else
    {
      bFToL(v11, &v40, 0LL);
      v13 = v40;
    }
    a3->tmInternalLeading = v13;
    v14 = *(_QWORD *)a1;
    v40 = 0;
    if ( *(_DWORD *)(v14 + 372) == 0x80000000 )
    {
      v12 = *(unsigned __int16 *)(v9 + 68);
      LOWORD(v12) = *(_WORD *)(v9 + 64) + v12 - *(_WORD *)(v9 + 66) - *(_WORD *)(v9 + 62) - *(_WORD *)(v9 + 60);
      v41 = *(_DWORD *)(v14 + 208);
      if ( (__int16)v12 <= 0 )
        LOWORD(v12) = 0;
    }
    bFToL(v12, &v40, 0LL);
    a3->tmExternalLeading = v40;
    v15 = *(_QWORD *)a1;
    v40 = 0;
    v16 = *(unsigned int *)(v15 + 380);
    if ( (_DWORD)v16 == 0x80000000 )
      v41 = *(_DWORD *)(v15 + 204);
    bFToL(v16, &v40, 0LL);
    a3->tmMaxCharWidth = v40;
    v17 = *(_QWORD *)a1;
    v40 = 0;
    v18 = *(unsigned int *)(v17 + 384);
    if ( (_DWORD)v18 == 0x80000000 )
      v41 = *(_DWORD *)(v17 + 204);
    bFToL(v18, &v40, 0LL);
    a3->tmAveCharWidth = v40;
  }
  else if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 352LL) & 0x802) == 0x802 )
  {
    a3->tmMaxCharWidth = v34;
    a3->tmAveCharWidth = v35;
    a3->tmInternalLeading = v36;
    a3->tmExternalLeading = v37;
  }
  else
  {
    v40 = 0;
    bFToL(2050LL, &v40, 0LL);
    a3->tmMaxCharWidth = v40;
    v40 = 0;
    bFToL(v28, &v40, 0LL);
    a3->tmAveCharWidth = v40;
    v40 = 0;
    bFToL(v29, &v40, 0LL);
    a3->tmInternalLeading = v40;
    v40 = 0;
    bFToL(v30, &v40, 0LL);
    a3->tmExternalLeading = v40;
  }
  v19 = a3->tmHeight - a3->tmAscent;
  a3->tmWeight = v32;
  v20 = v33 & 1;
  a3->tmDescent = v19;
  a3->tmItalic = -(v20 != 0);
  a3->tmUnderlined = *(_BYTE *)(v9 + 52) & 2;
  a3->tmStruckOut = *(_BYTE *)(v9 + 52) & 0x10;
  LOBYTE(v19) = *(_DWORD *)(*(_QWORD *)a2 + 2184LL) & 0x80;
  a3->tmUnderlined = -((*(_DWORD *)(*(_QWORD *)a2 + 2184LL) & 0x20) != 0);
  a3->tmStruckOut = -((_BYTE)v19 != 0);
  a3->tmFirstChar = *(_WORD *)(v9 + 112);
  a3->tmLastChar = *(_WORD *)(v9 + 114);
  a3->tmDefaultChar = *(_WORD *)(v9 + 116);
  a3->tmBreakChar = *(_WORD *)(v9 + 118);
  a3->tmCharSet = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 66LL);
  if ( (*(_DWORD *)(v9 + 48) & 1) != 0 )
  {
    v21 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    if ( (*(_DWORD *)(v21 + 32) & 1) == 0
      && (*(_DWORD *)(v21 + 2200) & 0x2000) == 0
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 68LL) == 1
      && (!gbDBCSCodePage || (GetAppCompatFlags(0LL) & 0x80000000) == 0) )
    {
      v8 = 1;
    }
    v22 = (*(_DWORD *)(v9 + 48) >> 1) & 2 | ((*(_DWORD *)(v9 + 48) & 1) != 0 ? 6 : 0) | ((*(_DWORD *)(v9 + 48) & 0x401000) == 0);
    v8 *= 8;
  }
  else
  {
    v25 = *(_DWORD *)(*(_QWORD *)a1 + 88LL);
    if ( (a4->flInfo & 8) != 0 && (!gbDBCSCodePage || (GetAppCompatFlags(0LL) & 0x80000000) == 0) )
      v8 = 10;
    v22 = (v25 != 0 ? 8 : 0) | (*(_DWORD *)(v9 + 48) >> 1) & 2 | ((*(_DWORD *)(v9 + 48) & 1) != 0 ? 6 : 0) | ((*(_DWORD *)(v9 + 48) & 0x401000) == 0);
  }
  v23 = v8 | *(_BYTE *)(v9 + 45) & 0xF0 | v22;
  a3->tmDigitizedAspectX = v38;
  v24 = v39;
  a3->tmPitchAndFamily = v23;
  a3->tmDigitizedAspectY = v24;
}
