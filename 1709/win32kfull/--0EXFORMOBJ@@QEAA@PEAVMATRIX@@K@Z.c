/*
 * XREFs of ??0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z @ 0x1C001B944
 * Callers:
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C0036620 (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     ??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1C00B25A8 (--0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 *     GreGetTextExtentW @ 0x1C0108E28 (GreGetTextExtentW.c)
 *     ?vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z @ 0x1C013A44C (-vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z.c)
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
