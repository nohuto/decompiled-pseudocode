/*
 * XREFs of ?GetBrushRealizationInternal@CImageLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x1801B2B40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x1801A6270 (-GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBru.c)
 */

__int64 __fastcall CImageLegacyMilBrush::GetBrushRealizationInternal(
        CImageLegacyMilBrush *this,
        const struct LegacyMilBrushContext *a2,
        struct CMILBrush **a3)
{
  int BrushRealizationInternal; // eax
  unsigned int v6; // ebx

  BrushRealizationInternal = CTileLegacyMilBrush::GetBrushRealizationInternal(this, a2, a3);
  v6 = BrushRealizationInternal;
  if ( BrushRealizationInternal >= 0 )
  {
    if ( !*((_DWORD *)this + 94) )
      *((_OWORD *)this + 24) = *((_OWORD *)a2 + 9);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BrushRealizationInternal, 0x58u);
  }
  return v6;
}
