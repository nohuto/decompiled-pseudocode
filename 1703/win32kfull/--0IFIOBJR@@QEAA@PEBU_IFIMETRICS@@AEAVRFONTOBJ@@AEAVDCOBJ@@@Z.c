/*
 * XREFs of ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C0030910
 * Callers:
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C0003464 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     cjIFIMetricsToOTMW @ 0x1C002D514 (cjIFIMetricsToOTMW.c)
 *     ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1C0030334 (-vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C008E7C0 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreFontIsLinked @ 0x1C0102D2C (GreFontIsLinked.c)
 *     ?vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z @ 0x1C0129E8C (-vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C028630C (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C003177C (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0031818 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 */

IFIOBJR *__fastcall IFIOBJR::IFIOBJR(
        IFIOBJR *this,
        const struct _IFIMETRICS *a2,
        struct RFONTOBJ *a3,
        struct DCOBJ *a4)
{
  int *v6; // rcx
  int v7; // r10d
  int v8; // r10d
  __int16 v9; // ax
  int v10; // r11d
  int v11; // r9d
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = a2;
  v6 = (int *)((char *)a2 + a2->dpFontSim);
  v7 = *(_DWORD *)(*(_QWORD *)a3 + 12LL) & 0x6000;
  switch ( v7 )
  {
    case 0:
      *((_BYTE *)this + 19) = a2->panose.bWeight;
      *((_WORD *)this + 10) = a2->usWinWeight;
      *((_WORD *)this + 11) = a2->fsSelection;
      *((_WORD *)this + 12) = a2->fwdAveCharWidth;
      *((_WORD *)this + 13) = a2->fwdMaxCharInc;
      *(POINTL *)((char *)this + 28) = a2->ptlCaret;
      break;
    case 8192:
      if ( (a2->fsSelection & 1) == 0 )
      {
        v16 = *v6;
LABEL_17:
        *((_OWORD *)this + 1) = *(_OWORD *)((char *)v6 + v16);
        *((_DWORD *)this + 8) = *(int *)((char *)v6 + v16 + 16);
        break;
      }
      goto LABEL_21;
    case 16384:
      if ( (a2->fsSelection & 0x20) == 0 )
      {
        v16 = v6[1];
        goto LABEL_17;
      }
LABEL_21:
      v16 = v6[2];
      goto LABEL_17;
    case 24576:
      goto LABEL_21;
  }
  v8 = *((__int16 *)this + 12);
  v9 = 0;
  v10 = *((__int16 *)this + 13);
  *((_DWORD *)this + 10) = v8;
  *((_DWORD *)this + 9) = v10;
  if ( (__int16)(a2->fwdMacAscender + a2->fwdMacLineGap - a2->fwdMacDescender - a2->fwdWinAscender - a2->fwdWinDescender) > 0 )
    v9 = a2->fwdMacAscender + a2->fwdMacLineGap - a2->fwdMacDescender - a2->fwdWinAscender - a2->fwdWinDescender;
  v11 = v9;
  *((_DWORD *)this + 12) = v9;
  *((_DWORD *)this + 11) = (__int16)(a2->fwdWinDescender + a2->fwdWinAscender - a2->fwdUnitsPerEm);
  if ( (a2->flInfo & 0x3000010) == 0 )
  {
    v13 = *(_DWORD *)(*(_QWORD *)a3 + 672LL);
    if ( v13 > 1 )
    {
      *((_DWORD *)this + 10) = v13 * v8;
      *((_DWORD *)this + 9) = v13 * v10;
    }
    v14 = *(_DWORD *)(*(_QWORD *)a3 + 676LL);
    if ( v14 > 1 )
    {
      v15 = v14 * *((_DWORD *)this + 11);
      *((_DWORD *)this + 12) = v14 * v11;
      *((_DWORD *)this + 11) = v15;
    }
  }
  if ( (a2->flInfo & 1) != 0 )
  {
    v17 = *(_QWORD *)(*(_QWORD *)a4 + 48LL);
    *((_DWORD *)this + 13) = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v17);
    *((_DWORD *)this + 14) = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v17);
  }
  else
  {
    *((_DWORD *)this + 13) = a2->ptlAspect.y * *(_DWORD *)(*(_QWORD *)a3 + 676LL);
    *((_DWORD *)this + 14) = a2->ptlAspect.x * *(_DWORD *)(*(_QWORD *)a3 + 672LL);
  }
  return this;
}
