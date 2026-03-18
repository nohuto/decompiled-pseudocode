/*
 * XREFs of ?RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBVCShape@@@Z @ 0x1801A9FF4
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800918D0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801A9EE4 (-RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180066CF0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?DrawShape@CDrawingContext@@QEAAJAEBVCShape@@PEAVCLegacyMilBrush@@@Z @ 0x18006E054 (-DrawShape@CDrawingContext@@QEAAJAEBVCShape@@PEAVCLegacyMilBrush@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801A995C (-CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CWindowNode::RenderBlackShape(
        struct CComposition **this,
        struct CDrawingContext *a2,
        const struct CShape *a3)
{
  struct CSolidColorLegacyMilBrush *v5; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  struct CSolidColorLegacyMilBrush *v12; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0LL;
  v12 = 0LL;
  v7 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xCE7u);
  }
  else
  {
    v9 = CSolidColorLegacyMilBrush::CreateFromColor(&v12, this[2], &stru_1802AD270);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xCECu);
      v5 = v12;
    }
    else
    {
      v5 = v12;
      v10 = CDrawingContext::DrawShape(a2, a3, v12);
      v8 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xCEEu);
      else
        *((_BYTE *)a2 + 6835) = 1;
    }
  }
  if ( v5 )
    CMILCOMBase::InternalRelease(v5);
  return v8;
}
