/*
 * XREFs of GreGetTextExtentW @ 0x1C000C2DC
 * Callers:
 *     ?xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z @ 0x1C000CAC4 (-xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C000CBA8 (xxxPSMGetTextExtent.c)
 *     xxxDrawCaptionTemp @ 0x1C0138108 (xxxDrawCaptionTemp.c)
 *     ?GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z @ 0x1C013DCC8 (-GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01ED8D4 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C020D3F8 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     ?xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0215194 (-xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z @ 0x1C0217614 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z.c)
 *     xxxPSMTextOut @ 0x1C021BCC8 (xxxPSMTextOut.c)
 *     DT_GetExtentMinusPrefixes @ 0x1C0239ED0 (DT_GetExtentMinusPrefixes.c)
 *     NeedsEndEllipsis @ 0x1C023A4F0 (NeedsEndEllipsis.c)
 *     NtGdiGetTextExtent @ 0x1C028DCF0 (NtGdiGetTextExtent.c)
 *     GreGetCharacterPlacementW @ 0x1C0298268 (GreGetCharacterPlacementW.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?bUseMetaPtoD@DC@@QEAAHXZ @ 0x1C007AE60 (-bUseMetaPtoD@DC@@QEAAHXZ.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C007CA50 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C007DA94 (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z @ 0x1C008A800 (-vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C008AFD0 (-bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C008B1D0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z @ 0x1C011D3C0 (-bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z.c)
 *     ??0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z @ 0x1C012879C (--0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z.c)
 *     ?bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z @ 0x1C013C110 (-bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C013C23C (--1ESTROBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetTextExtentW(HDC a1, unsigned __int16 *a2, unsigned int a3, struct tagSIZE *a4, char a5)
{
  unsigned int v8; // ebx
  _DWORD *v9; // r11
  int v10; // esi
  float cy; // xmm1_4
  __m128i v13; // xmm0
  __int64 v14; // [rsp+98h] [rbp-80h] BYREF
  float cx; // [rsp+A0h] [rbp-78h] BYREF
  float v16; // [rsp+A4h] [rbp-74h] BYREF
  DC *v17[2]; // [rsp+A8h] [rbp-70h] BYREF
  _QWORD v18[2]; // [rsp+B8h] [rbp-60h] BYREF
  int v19; // [rsp+C8h] [rbp-50h] BYREF
  _DWORD v20[11]; // [rsp+CCh] [rbp-4Ch] BYREF
  _BYTE v21[320]; // [rsp+F8h] [rbp-20h] BYREF

  v8 = 0;
  if ( a3 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v17, a1);
    if ( v17[0] )
    {
      v14 = 0LL;
      if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v14, (struct XDCOBJ *)v17, 0, (a5 & 2) != 0 ? 4 : 2) )
        GreAcquireSemaphore(*(_QWORD *)(v14 + 528));
      v9 = (_DWORD *)v14;
      if ( v14 )
      {
        if ( (*(_DWORD *)(v14 + 68) & 4) != 0 )
          RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v14, a2, a3);
        v10 = *((_DWORD *)v17[0] + 547);
        if ( v10 == v9[97] || v9[50] == 1 && (v9[122] & 4) == 0 )
        {
          v8 = RFONTOBJ::bTextExtent(
                 (RFONTOBJ *)&v14,
                 (struct XDCOBJ *)v17,
                 a2,
                 a3,
                 v10,
                 *(_DWORD *)(*((_QWORD *)v17[0] + 10) + 160LL),
                 *(_DWORD *)(*((_QWORD *)v17[0] + 10) + 168LL),
                 *(_DWORD *)(*((_QWORD *)v17[0] + 10) + 172LL),
                 a5,
                 a4);
          if ( v8
            && v10
            && *(_DWORD *)(*((_QWORD *)v17[0] + 10) + 68LL) == 1
            && !(unsigned int)DC::bUseMetaPtoD(v17[0])
            && (*(_DWORD *)(v14 + 488) & 4) != 0 )
          {
            cy = (float)a4->cy;
            cx = (float)a4->cx;
            v13 = (__m128i)COERCE_UNSIGNED_INT((float)v10);
            v16 = cy;
            *(float *)v13.m128i_i32 = *(float *)v13.m128i_i32 / 10.0;
            v19 = efCos((unsigned int)_mm_cvtsi128_si32(v13));
            EFLOAT::vAbs((EFLOAT *)&v19);
            v20[2] = v19;
            v20[0] = efSin((unsigned int)_mm_cvtsi128_si32(v13));
            EFLOAT::vAbs((EFLOAT *)v20);
            v20[3] = 0;
            v20[4] = 0;
            v20[1] = v20[0];
            EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v18, (struct MATRIX *)&v19, 0x21u);
            v8 = 1;
            if ( (*(_DWORD *)(v18[0] + 32LL) & 2) == 0 )
              v8 = EXFORMOBJ::bXform((EXFORMOBJ *)v18, (struct VECTORFL *)&cx, (struct VECTORFL *)&cx, 1uLL);
            if ( v8 )
            {
              EFLOAT::vAbs((EFLOAT *)&cx);
              EFLOAT::vAbs((EFLOAT *)&v16);
              v8 = EPOINTFL::bToPOINTL((EPOINTFL *)&cx, (struct _POINTL *)a4);
            }
          }
        }
        else
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v18, (struct XDCOBJ *)v17, 0x204u);
          ESTROBJ::vInit(
            (ESTROBJ *)v21,
            a2,
            a3,
            (struct XDCOBJ *)v17,
            (struct RFONTOBJ *)&v14,
            (struct EXFORMOBJ *)v18,
            0LL,
            0,
            v10,
            *(_DWORD *)(*((_QWORD *)v17[0] + 10) + 160LL),
            *(_DWORD *)(*((_QWORD *)v17[0] + 10) + 168LL),
            *(_DWORD *)(*((_QWORD *)v17[0] + 10) + 172LL),
            0,
            0,
            0,
            0LL,
            0LL,
            0);
          if ( (v21[64] & 4) != 0 )
            v8 = ESTROBJ::bTextExtent((ESTROBJ *)v21, (struct RFONTOBJ *)&v14, v10, a4);
          ESTROBJ::~ESTROBJ((ESTROBJ *)v21);
        }
      }
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v14);
    }
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v17);
  }
  else
  {
    *a4 = 0LL;
    return 1;
  }
  return v8;
}
