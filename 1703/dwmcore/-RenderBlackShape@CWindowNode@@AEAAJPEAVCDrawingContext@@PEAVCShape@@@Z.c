/*
 * XREFs of ?RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCShape@@@Z @ 0x180162C08
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180051D10 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x180162AFC (-RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800A1660 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z @ 0x1800A90E4 (-DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z.c)
 *     ?CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z @ 0x18014B124 (-CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CWindowNode::RenderBlackShape(
        struct CComposition **this,
        struct CDrawingContext *a2,
        struct CShape *a3)
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x106Au);
  }
  else
  {
    v9 = CSolidColorLegacyMilBrush::CreateFromColor(&v12, this[2], &stru_1801FC928);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x106Fu);
      v5 = v12;
    }
    else
    {
      v5 = v12;
      v10 = CDrawingContext::DrawShape(a2, a3, v12);
      v8 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1071u);
      else
        *((_BYTE *)a2 + 6777) = 1;
    }
  }
  if ( v5 )
    CMILCOMBase::InternalRelease(v5);
  return v8;
}
