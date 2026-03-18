/*
 * XREFs of ?GetBrushRealizationInternal@CImageLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18007CAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18007CF60 (-GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBru.c)
 */

__int64 __fastcall CImageLegacyMilBrush::GetBrushRealizationInternal(
        CImageLegacyMilBrush *this,
        const struct LegacyMilBrushContext *a2,
        struct CMILBrush **a3)
{
  signed int BrushRealizationInternal; // eax
  unsigned int v6; // ebx

  BrushRealizationInternal = CTileLegacyMilBrush::GetBrushRealizationInternal(this, a2, a3);
  v6 = BrushRealizationInternal;
  if ( BrushRealizationInternal < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, BrushRealizationInternal, 0x58u);
  }
  else if ( !*((_DWORD *)this + 94) )
  {
    *((_OWORD *)this + 24) = *((_OWORD *)a2 + 9);
  }
  return v6;
}
