/*
 * XREFs of ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C003C7C4
 * Callers:
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C0008138 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00346C8 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     cjIFIMetricsToOTMW @ 0x1C0039574 (cjIFIMetricsToOTMW.c)
 *     ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1C003C39C (-vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS.c)
 *     GreFontIsLinked @ 0x1C00C1844 (GreFontIsLinked.c)
 *     ?vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z @ 0x1C013A44C (-vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0282E5C (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C003E0AC (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C003E0E8 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 */

IFIOBJR *__fastcall IFIOBJR::IFIOBJR(
        IFIOBJR *this,
        const struct _IFIMETRICS *a2,
        struct RFONTOBJ *a3,
        struct DCOBJ *a4)
{
  int *v6; // rcx
  int v7; // r10d
  int v8; // r9d
  int v9; // r10d
  __int16 v10; // cx
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

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
        v14 = *v6;
LABEL_17:
        *((_OWORD *)this + 1) = *(_OWORD *)((char *)v6 + v14);
        *((_DWORD *)this + 8) = *(int *)((char *)v6 + v14 + 16);
        break;
      }
      goto LABEL_21;
    case 16384:
      if ( (a2->fsSelection & 0x20) == 0 )
      {
        v14 = v6[1];
        goto LABEL_17;
      }
LABEL_21:
      v14 = v6[2];
      goto LABEL_17;
    case 24576:
      goto LABEL_21;
  }
  v8 = *((__int16 *)this + 12);
  v9 = *((__int16 *)this + 13);
  *((_DWORD *)this + 10) = v8;
  *((_DWORD *)this + 9) = v9;
  v10 = a2->fwdMacAscender + a2->fwdMacLineGap - a2->fwdMacDescender - a2->fwdWinDescender - a2->fwdWinAscender;
  if ( v10 <= 0 )
    v10 = 0;
  *((_DWORD *)this + 12) = v10;
  *((_DWORD *)this + 11) = (__int16)(a2->fwdWinAscender + a2->fwdWinDescender - a2->fwdUnitsPerEm);
  if ( (a2->flInfo & 0x3000010) == 0 )
  {
    v12 = *(_DWORD *)(*(_QWORD *)a3 + 672LL);
    if ( v12 > 1 )
    {
      *((_DWORD *)this + 10) = v12 * v8;
      *((_DWORD *)this + 9) = v12 * v9;
    }
    v13 = *(_DWORD *)(*(_QWORD *)a3 + 676LL);
    if ( v13 > 1 )
    {
      *((_DWORD *)this + 12) *= v13;
      *((_DWORD *)this + 11) *= v13;
    }
  }
  if ( (a2->flInfo & 1) != 0 )
  {
    v15 = *(_QWORD *)(*(_QWORD *)a4 + 48LL);
    *((_DWORD *)this + 13) = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v15);
    *((_DWORD *)this + 14) = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v15);
  }
  else
  {
    *((_DWORD *)this + 13) = a2->ptlAspect.y * *(_DWORD *)(*(_QWORD *)a3 + 676LL);
    *((_DWORD *)this + 14) = a2->ptlAspect.x * *(_DWORD *)(*(_QWORD *)a3 + 672LL);
  }
  return this;
}
