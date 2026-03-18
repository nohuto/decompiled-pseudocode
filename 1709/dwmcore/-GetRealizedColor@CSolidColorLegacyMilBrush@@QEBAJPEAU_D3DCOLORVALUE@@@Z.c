/*
 * XREFs of ?GetRealizedColor@CSolidColorLegacyMilBrush@@QEBAJPEAU_D3DCOLORVALUE@@@Z @ 0x18007D48C
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE@gsl@@PEA_N@Z @ 0x18001E008 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ?GetBrushRealizationInternal@CSolidColorLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x180182E20 (-GetBrushRealizationInternal@CSolidColorLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetOpacity@CLegacyMilBrush@@KAJNPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CK@@@PEAM@Z @ 0x18007D6CC (-GetOpacity@CLegacyMilBrush@@KAJNPEAV-$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CK@@@PEAM@Z.c)
 */

__int64 __fastcall CSolidColorLegacyMilBrush::GetRealizedColor(
        CSolidColorLegacyMilBrush *this,
        struct _D3DCOLORVALUE *a2)
{
  signed int Opacity; // eax
  unsigned int v5; // ebx
  float v6; // xmm1_4
  float v8; // [rsp+40h] [rbp+8h] BYREF

  Opacity = CLegacyMilBrush::GetOpacity(this, *((_QWORD *)this + 10), &v8);
  v5 = Opacity;
  if ( Opacity < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, Opacity, 0x1Eu);
  }
  else
  {
    v6 = v8;
    *(struct _D3DCOLORVALUE *)&a2->r = *(struct _D3DCOLORVALUE *)((char *)this + 104);
    a2->a = v6 * a2->a;
  }
  return v5;
}
