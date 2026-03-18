/*
 * XREFs of ?vIFIMetricsToTextMetricW@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@PEAU_IFIMETRICS@@@Z @ 0x1C00B6048
 * Callers:
 *     ?vGetTextMetrics@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@@Z @ 0x1C0108DA0 (-vGetTextMetrics@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@@Z.c)
 * Callees:
 *     ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1C003C39C (-vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 */

void __fastcall vIFIMetricsToTextMetricW(
        struct RFONTOBJ *a1,
        struct DCOBJ *a2,
        struct tagTEXTMETRICW *a3,
        struct _IFIMETRICS *a4)
{
  _OWORD *v7; // rax

  vIFIMetricsToTextMetricWStrict(a1, a2, a3, a4);
  LOBYTE(a3[1].tmAscent) = a4->chFirstChar;
  BYTE1(a3[1].tmAscent) = a4->chLastChar;
  BYTE2(a3[1].tmAscent) = a4->chDefaultChar;
  HIBYTE(a3[1].tmAscent) = a4->chBreakChar;
  v7 = PALLOCMEM2(0x44uLL, 2003661895LL, 1);
  if ( v7 )
  {
    *(_QWORD *)(*(_QWORD *)a1 + 696LL) = v7;
    *v7 = *(_OWORD *)&a3->tmHeight;
    v7[1] = *(_OWORD *)&a3->tmExternalLeading;
    v7[2] = *(_OWORD *)&a3->tmOverhang;
    v7[3] = *(_OWORD *)&a3->tmDefaultChar;
    *((_DWORD *)v7 + 16) = a3[1].tmAscent;
  }
}
