/*
 * XREFs of ?GetRealizedColor@CSolidColorLegacyMilBrush@@QEBAJPEAU_D3DCOLORVALUE@@@Z @ 0x1800B5FFC
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x180056940 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ?GetBrushRealizationInternal@CSolidColorLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x1801B6C90 (-GetBrushRealizationInternal@CSolidColorLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetOpacity@CLegacyMilBrush@@KAJNPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CP@@@PEAM@Z @ 0x1800B5998 (-GetOpacity@CLegacyMilBrush@@KAJNPEAV-$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CP@@@PEAM@Z.c)
 */

__int64 __fastcall CSolidColorLegacyMilBrush::GetRealizedColor(
        CSolidColorLegacyMilBrush *this,
        struct _D3DCOLORVALUE *a2)
{
  int Opacity; // eax
  unsigned int v5; // ebx
  float v6; // xmm1_4
  float v8; // [rsp+40h] [rbp+8h] BYREF

  Opacity = CLegacyMilBrush::GetOpacity(*((double *)this + 9), *((_QWORD *)this + 10), &v8);
  v5 = Opacity;
  if ( Opacity < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Opacity, 0x1Eu);
  }
  else
  {
    v6 = v8;
    *(struct _D3DCOLORVALUE *)&a2->r = *(struct _D3DCOLORVALUE *)((char *)this + 104);
    a2->a = v6 * a2->a;
  }
  return v5;
}
