/*
 * XREFs of ?RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBVCShape@@@Z @ 0x180179A80
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18009A570 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x180179974 (-RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?DrawShape@CDrawingContext@@QEAAJAEBVCShape@@PEAVCLegacyMilBrush@@@Z @ 0x1800400E8 (-DrawShape@CDrawingContext@@QEAAJAEBVCShape@@PEAVCLegacyMilBrush@@@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180041600 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801788A4 (-CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CWindowNode::RenderBlackShape(
        struct CComposition **this,
        struct CDrawingContext *a2,
        const struct CShape *a3)
{
  struct CSolidColorLegacyMilBrush *v5; // rdi
  signed int v7; // eax
  unsigned int v8; // ebx
  signed int v9; // eax
  signed int v10; // eax
  struct CSolidColorLegacyMilBrush *v12; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0LL;
  v12 = 0LL;
  v7 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x1001u);
  }
  else
  {
    v9 = CSolidColorLegacyMilBrush::CreateFromColor(&v12, this[2], &stru_180219A30);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x1006u);
      v5 = v12;
    }
    else
    {
      v5 = v12;
      v10 = CDrawingContext::DrawShape(a2, a3, v12);
      v8 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x1008u);
      else
        *((_BYTE *)a2 + 6833) = 1;
    }
  }
  if ( v5 )
    CMILCOMBase::InternalRelease(v5);
  return v8;
}
