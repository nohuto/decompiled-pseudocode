/*
 * XREFs of ?GetBrushRealizationInternal@CImageLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18007B7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18007C430 (-GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBru.c)
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
  if ( BrushRealizationInternal < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BrushRealizationInternal, 0x5Au);
  }
  else if ( !*((_DWORD *)this + 94) )
  {
    *((_OWORD *)this + 24) = *((_OWORD *)a2 + 9);
  }
  return v6;
}
