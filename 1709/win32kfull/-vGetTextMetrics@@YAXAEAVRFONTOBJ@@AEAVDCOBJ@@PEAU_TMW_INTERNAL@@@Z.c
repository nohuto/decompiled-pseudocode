/*
 * XREFs of ?vGetTextMetrics@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@@Z @ 0x1C0108DA0
 * Callers:
 *     GreGetTextMetricsW @ 0x1C0108CF4 (GreGetTextMetricsW.c)
 * Callees:
 *     ?vIFIMetricsToTextMetricW@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@PEAU_IFIMETRICS@@@Z @ 0x1C00B6048 (-vIFIMetricsToTextMetricW@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@PEAU_IFIMETRICS@@@Z.c)
 */

void __fastcall vGetTextMetrics(struct RFONTOBJ *a1, struct DCOBJ *a2, struct _TMW_INTERNAL *a3)
{
  __int64 v4; // rax
  int v5; // edx

  v4 = *(_QWORD *)(*(_QWORD *)a1 + 696LL);
  if ( v4 )
  {
    *(_OWORD *)a3 = *(_OWORD *)v4;
    *((_OWORD *)a3 + 1) = *(_OWORD *)(v4 + 16);
    *((_OWORD *)a3 + 2) = *(_OWORD *)(v4 + 32);
    *((_OWORD *)a3 + 3) = *(_OWORD *)(v4 + 48);
    *((_DWORD *)a3 + 16) = *(_DWORD *)(v4 + 64);
    v5 = *(_DWORD *)(*(_QWORD *)a2 + 2184LL);
    *((_BYTE *)a3 + 53) = -((v5 & 0x20) != 0);
    *((_BYTE *)a3 + 54) = -((v5 & 0x80u) != 0);
    *((_BYTE *)a3 + 56) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 66LL);
  }
  else
  {
    vIFIMetricsToTextMetricW(
      a1,
      a2,
      (struct tagTEXTMETRICW *)a3,
      *(struct _IFIMETRICS **)(*(_QWORD *)(*(_QWORD *)a1 + 112LL) + 32LL));
  }
}
