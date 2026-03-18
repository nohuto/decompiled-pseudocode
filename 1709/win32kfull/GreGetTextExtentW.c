/*
 * XREFs of GreGetTextExtentW @ 0x1C0108E28
 * Callers:
 *     ?GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z @ 0x1C0108B7C (-GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C013B98C (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C013C3E8 (xxxDrawCaptionTemp.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01F7D60 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     ?xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C02160B4 (-xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z @ 0x1C0218794 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z.c)
 *     xxxPSMTextOut @ 0x1C021CF78 (xxxPSMTextOut.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C023B60C (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z @ 0x1C023B9A0 (-NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C023D948 (xxxPSMGetTextExtent.c)
 *     NtGdiGetTextExtent @ 0x1C028A860 (NtGdiGetTextExtent.c)
 *     GreGetCharacterPlacementW @ 0x1C0294920 (GreGetCharacterPlacementW.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z @ 0x1C001B944 (--0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0025620 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?bUseMetaPtoD@DC@@QEAAHXZ @ 0x1C0027C40 (-bUseMetaPtoD@DC@@QEAAHXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0030F20 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C0035FB8 (-bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z @ 0x1C00361A8 (-vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z.c)
 *     ?bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z @ 0x1C00B3434 (-bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z.c)
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C00B353C (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C0142F68 (--1ESTROBJ@@QEAA@XZ.c)
 *     ?bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z @ 0x1C0142FAC (-bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetTextExtentW(HDC a1, unsigned __int16 *a2, unsigned int a3, struct tagSIZE *a4, char a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _FD_XFORM *v11; // r11
  int v12; // esi
  float cy; // xmm1_4
  __m128i v15; // xmm0
  struct _FD_XFORM *v16; // [rsp+98h] [rbp-80h] BYREF
  float cx; // [rsp+A0h] [rbp-78h] BYREF
  float v18; // [rsp+A4h] [rbp-74h] BYREF
  DC *v19[2]; // [rsp+A8h] [rbp-70h] BYREF
  unsigned int *v20[2]; // [rsp+B8h] [rbp-60h] BYREF
  int v21; // [rsp+C8h] [rbp-50h] BYREF
  _DWORD v22[11]; // [rsp+CCh] [rbp-4Ch] BYREF
  _BYTE v23[320]; // [rsp+F8h] [rbp-20h] BYREF

  v8 = 0;
  if ( a3 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v19, a1);
    if ( v19[0] )
    {
      v16 = 0LL;
      if ( (unsigned int)RFONTOBJ::bInit(&v16, (struct XDCOBJ *)v19, 0, (a5 & 2) != 0 ? 4 : 2) )
        GreAcquireSemaphore(*(_QWORD *)&v16[33].eXX);
      v11 = v16;
      if ( v16 )
      {
        if ( (LODWORD(v16[4].eXY) & 4) != 0 )
          RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v16, a2, a3);
        v12 = *((_DWORD *)v19[0] + 547);
        if ( v12 == LODWORD(v11[24].eXY) || LODWORD(v11[12].eYX) == 1 && (LODWORD(v11[30].eYX) & 4) == 0 )
        {
          v8 = RFONTOBJ::bTextExtent(
                 (RFONTOBJ *)&v16,
                 (struct XDCOBJ *)v19,
                 a2,
                 a3,
                 v12,
                 *(_DWORD *)(*((_QWORD *)v19[0] + 10) + 160LL),
                 *(_DWORD *)(*((_QWORD *)v19[0] + 10) + 168LL),
                 *(_DWORD *)(*((_QWORD *)v19[0] + 10) + 172LL),
                 a5,
                 a4);
          if ( v8
            && v12
            && *(_DWORD *)(*((_QWORD *)v19[0] + 10) + 68LL) == 1
            && !(unsigned int)DC::bUseMetaPtoD(v19[0])
            && (LODWORD(v16[30].eYX) & 4) != 0 )
          {
            cy = (float)a4->cy;
            cx = (float)a4->cx;
            v15 = (__m128i)COERCE_UNSIGNED_INT((float)v12);
            v18 = cy;
            *(float *)v15.m128i_i32 = *(float *)v15.m128i_i32 / 10.0;
            v21 = efCos((unsigned int)_mm_cvtsi128_si32(v15));
            EFLOAT::vAbs((EFLOAT *)&v21);
            v22[2] = v21;
            v22[0] = efSin((unsigned int)_mm_cvtsi128_si32(v15));
            EFLOAT::vAbs((EFLOAT *)v22);
            v22[3] = 0;
            v22[4] = 0;
            v22[1] = v22[0];
            EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v20, (struct MATRIX *)&v21, 33);
            v8 = 1;
            if ( (v20[0][8] & 2) == 0 )
              v8 = EXFORMOBJ::bXform((EXFORMOBJ *)v20, (struct VECTORFL *)&cx, (struct VECTORFL *)&cx, 1uLL);
            if ( v8 )
            {
              EFLOAT::vAbs((EFLOAT *)&cx);
              EFLOAT::vAbs((EFLOAT *)&v18);
              v8 = EPOINTFL::bToPOINTL((EPOINTFL *)&cx, (struct _POINTL *)a4);
            }
          }
        }
        else
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v20, (struct XDCOBJ *)v19, 516);
          ESTROBJ::vInit(
            (ESTROBJ *)v23,
            a2,
            a3,
            (struct XDCOBJ *)v19,
            (struct RFONTOBJ *)&v16,
            v20,
            0LL,
            0,
            v12,
            *(_DWORD *)(*((_QWORD *)v19[0] + 10) + 160LL),
            *(_DWORD *)(*((_QWORD *)v19[0] + 10) + 168LL),
            *(_DWORD *)(*((_QWORD *)v19[0] + 10) + 172LL),
            0,
            0,
            0,
            0LL,
            0LL,
            0);
          if ( (v23[64] & 4) != 0 )
            v8 = ESTROBJ::bTextExtent((ESTROBJ *)v23, (struct RFONTOBJ *)&v16, v12, a4);
          ESTROBJ::~ESTROBJ((ESTROBJ *)v23);
        }
      }
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v16, v9, v10);
      if ( v19[0] )
        XDCOBJ::vUnlockFast((XDCOBJ *)v19);
    }
  }
  else
  {
    *a4 = 0LL;
    return 1;
  }
  return v8;
}
