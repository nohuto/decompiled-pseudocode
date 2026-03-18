/*
 * XREFs of ??0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z @ 0x1C012879C
 * Callers:
 *     GreGetTextExtentW @ 0x1C000C2DC (GreGetTextExtentW.c)
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C008AC28 (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     ??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1C00E615C (--0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 *     ?vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z @ 0x1C0129E8C (-vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z.c)
 * Callees:
 *     <none>
 */

EXFORMOBJ *__fastcall EXFORMOBJ::EXFORMOBJ(EXFORMOBJ *this, struct MATRIX *a2, int a3)
{
  *((_DWORD *)this + 3) = 0;
  *(_QWORD *)this = a2;
  if ( (a3 & 1) != 0 )
  {
    EXFORMOBJ::vComputeAccelFlags(this, a3 & 0x38);
  }
  else if ( (a3 & 0x38) != 0 )
  {
    *((_DWORD *)a2 + 8) = a3;
  }
  return this;
}
