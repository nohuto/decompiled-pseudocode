/*
 * XREFs of ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1C0030334
 * Callers:
 *     ?vIFIMetricsToTextMetricW@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@PEAU_IFIMETRICS@@@Z @ 0x1C000EE80 (-vIFIMetricsToTextMetricW@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@PEAU_IFIMETRICS@@@Z.c)
 *     cjIFIMetricsToOTMW @ 0x1C002D514 (cjIFIMetricsToOTMW.c)
 * Callees:
 *     ?fwdExternalLeading@IFIOBJ@@QEAAFXZ @ 0x1C002FABC (-fwdExternalLeading@IFIOBJ@@QEAAFXZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C0030910 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C008AC28 (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 *     GetAppCompatFlags @ 0x1C00F8ED0 (GetAppCompatFlags.c)
 */

void __fastcall vIFIMetricsToTextMetricWStrict(
        struct RFONTOBJ *a1,
        struct DCOBJ *a2,
        struct tagTEXTMETRICW *a3,
        struct _IFIMETRICS *a4)
{
  char v7; // r15
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rcx
  LONG v11; // r8d
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  LONG v18; // ecx
  char v19; // al
  int v20; // edx
  __int64 v21; // rax
  int v22; // ebx
  char v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int AppCompatFlags; // eax
  _QWORD v30[2]; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int16 v31; // [rsp+34h] [rbp-2Ch]
  char v32; // [rsp+36h] [rbp-2Ah]
  LONG v33; // [rsp+44h] [rbp-1Ch]
  LONG v34; // [rsp+48h] [rbp-18h]
  LONG v35; // [rsp+4Ch] [rbp-14h]
  LONG v36; // [rsp+50h] [rbp-10h]
  LONG v37; // [rsp+54h] [rbp-Ch]
  LONG v38; // [rsp+58h] [rbp-8h]
  LONG v39; // [rsp+A8h] [rbp+48h] BYREF
  int v40; // [rsp+B0h] [rbp+50h]
  struct _IFIMETRICS *v41; // [rsp+B8h] [rbp+58h]

  v41 = a4;
  IFIOBJR::IFIOBJR((IFIOBJR *)v30, a4, a1, a2);
  v7 = 8;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 352LL) & 0x802) == 0x802 )
  {
    a3->tmHeight = (*(_DWORD *)(*(_QWORD *)a1 + 316LL) + 8) >> 4;
    a3->tmAscent = (*(_DWORD *)(*(_QWORD *)a1 + 308LL) + 8) >> 4;
    a3->tmOverhang = RFONTOBJ::lOverhang(a1);
  }
  else
  {
    v39 = 0;
    bFToL(2050LL, &v39, 0LL);
    a3->tmHeight = v39;
    v39 = 0;
    bFToL(v24, &v39, 0LL);
    a3->tmAscent = v39;
    RFONTOBJ::lOverhang(a1);
    v39 = 0;
    bFToL(v25, &v39, 0LL);
    a3->tmOverhang = v39;
  }
  v8 = v30[0];
  if ( (*(_DWORD *)(v30[0] + 48LL) & 0x3000010) != 0 )
  {
    v9 = *(_QWORD *)a1;
    v39 = 0;
    v10 = *(unsigned int *)(v9 + 376);
    if ( (_DWORD)v10 == 0x80000000 )
    {
      v40 = *(_DWORD *)(v9 + 208);
      bFToL(v10, &v39, 0LL);
      v11 = a3->tmHeight - v39;
    }
    else
    {
      bFToL(v10, &v39, 0LL);
      v11 = v39;
    }
    a3->tmInternalLeading = v11;
    v12 = *(_QWORD *)a1;
    v39 = 0;
    v13 = *(unsigned int *)(v12 + 372);
    if ( (_DWORD)v13 == 0x80000000 )
      v13 = (unsigned int)(__int16)IFIOBJ::fwdExternalLeading((IFIOBJ *)v30);
    bFToL(v13, &v39, 0LL);
    a3->tmExternalLeading = v39;
    v14 = *(_QWORD *)a1;
    v39 = 0;
    v15 = *(unsigned int *)(v14 + 380);
    if ( (_DWORD)v15 == 0x80000000 )
      v40 = *(_DWORD *)(v14 + 204);
    bFToL(v15, &v39, 0LL);
    a3->tmMaxCharWidth = v39;
    v16 = *(_QWORD *)a1;
    v39 = 0;
    v17 = *(unsigned int *)(v16 + 384);
    if ( (_DWORD)v17 == 0x80000000 )
      v40 = *(_DWORD *)(v16 + 204);
    bFToL(v17, &v39, 0LL);
    a3->tmAveCharWidth = v39;
  }
  else if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 352LL) & 0x802) == 0x802 )
  {
    a3->tmMaxCharWidth = v33;
    a3->tmAveCharWidth = v34;
    a3->tmInternalLeading = v35;
    a3->tmExternalLeading = v36;
  }
  else
  {
    v39 = 0;
    bFToL(2050LL, &v39, 0LL);
    a3->tmMaxCharWidth = v39;
    v39 = 0;
    bFToL(v26, &v39, 0LL);
    a3->tmAveCharWidth = v39;
    v39 = 0;
    bFToL(v27, &v39, 0LL);
    a3->tmInternalLeading = v39;
    v39 = 0;
    bFToL(v28, &v39, 0LL);
    a3->tmExternalLeading = v39;
  }
  v18 = a3->tmHeight - a3->tmAscent;
  a3->tmWeight = v31;
  v19 = v32 & 1;
  a3->tmDescent = v18;
  a3->tmItalic = -(v19 != 0);
  a3->tmUnderlined = *(_BYTE *)(v8 + 52) & 2;
  a3->tmStruckOut = *(_BYTE *)(v8 + 52) & 0x10;
  v20 = *(_DWORD *)(*(_QWORD *)a2 + 2184LL);
  a3->tmUnderlined = -((v20 & 0x20) != 0);
  a3->tmStruckOut = -((v20 & 0x80u) != 0);
  a3->tmFirstChar = *(_WORD *)(v8 + 112);
  a3->tmLastChar = *(_WORD *)(v8 + 114);
  a3->tmDefaultChar = *(_WORD *)(v8 + 116);
  a3->tmBreakChar = *(_WORD *)(v8 + 118);
  a3->tmCharSet = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 66LL);
  if ( (*(_DWORD *)(v8 + 48) & 1) != 0 )
  {
    v21 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    if ( (*(_DWORD *)(v21 + 32) & 1) != 0
      || (*(_DWORD *)(v21 + 2200) & 0x2000) != 0
      || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 68LL) != 1
      || gbDBCSCodePage && (AppCompatFlags = GetAppCompatFlags(0LL), AppCompatFlags < 0) )
    {
      v7 = 0;
    }
    a3->tmPitchAndFamily = ((*(_DWORD *)(v8 + 48) & 1) != 0 ? 6 : 0) | ((*(_DWORD *)(v8 + 48) & 0x401000) == 0) | *(_BYTE *)(v8 + 45) & 0xF0 | ((unsigned __int8)*(_DWORD *)(v8 + 48) >> 1) & 2 | v7;
  }
  else
  {
    v22 = *(_DWORD *)(*(_QWORD *)a1 + 88LL) != 0 ? 8 : 0;
    if ( (v41->flInfo & 8) == 0 || gbDBCSCodePage && (int)GetAppCompatFlags(0LL) < 0 )
      v23 = 0;
    else
      v23 = 10;
    a3->tmPitchAndFamily = ((*(_DWORD *)(v8 + 48) & 1) != 0 ? 6 : 0) | ((*(_DWORD *)(v8 + 48) & 0x401000) == 0) | *(_BYTE *)(v8 + 45) & 0xF0 | ((unsigned __int8)*(_DWORD *)(v8 + 48) >> 1) & 2 | v23 | v22;
  }
  a3->tmDigitizedAspectX = v37;
  a3->tmDigitizedAspectY = v38;
}
