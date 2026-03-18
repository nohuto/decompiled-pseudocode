/*
 * XREFs of ?pvFileUMPD@RFONTOBJ@@QEAAPEAXPEAKPEAPEAX@Z @ 0x1C0283C20
 * Callers:
 *     ?FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z @ 0x1C026FC60 (-FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z.c)
 * Callees:
 *     ?pchTranslateUMPD@RFONTOBJ@@QEAAPEADPEADPEAPEAX@Z @ 0x1C02839B0 (-pchTranslateUMPD@RFONTOBJ@@QEAAPEADPEADPEAPEAX@Z.c)
 *     ?GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z @ 0x1C029989C (-GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z.c)
 */

char *__fastcall RFONTOBJ::pvFileUMPD(RFONTOBJ *this, unsigned int *a2, void **a3)
{
  __int64 v3; // rax
  char *v4; // r9
  __int64 v8; // r10
  unsigned __int64 v9; // rdx
  char *TrueTypeFile; // rax
  unsigned int v11; // eax
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)this;
  v4 = 0LL;
  v14 = 0;
  v8 = *(_QWORD *)(v3 + 120);
  if ( v8
    && (v9 = *(_QWORD *)(v8 + 80)) != 0
    && (v13[0] = *(_QWORD *)(v3 + 120),
        TrueTypeFile = (char *)PFFOBJ::GetTrueTypeFile((PFFOBJ *)v13, v9, &v14),
        (v4 = TrueTypeFile) != 0LL)
    && (v4 = RFONTOBJ::pchTranslateUMPD(this, TrueTypeFile, a3)) != 0LL )
  {
    v11 = v14;
  }
  else
  {
    v11 = 0;
  }
  if ( a2 )
    *a2 = v11;
  return v4;
}
