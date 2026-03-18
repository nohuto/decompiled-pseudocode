/*
 * XREFs of ?CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801788A4
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180099748 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBVCShape@@@Z @ 0x180179A80 (-RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBVCShape@@@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CSolidColorLegacyMilBrush@@IEAA@PEAVCComposition@@@Z @ 0x18007D5AC (--0CSolidColorLegacyMilBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ??2CSolidColorLegacyMilBrush@@KAPEAX_K@Z @ 0x1800BFA88 (--2CSolidColorLegacyMilBrush@@KAPEAX_K@Z.c)
 */

__int64 __fastcall CSolidColorLegacyMilBrush::CreateFromColor(
        struct CSolidColorLegacyMilBrush **a1,
        struct CComposition *a2,
        const struct _D3DCOLORVALUE *a3)
{
  unsigned int v6; // edi
  CSolidColorLegacyMilBrush *v7; // rax
  CSolidColorLegacyMilBrush *v8; // rbx
  __int128 v9; // xmm0

  v6 = 0;
  v7 = (CSolidColorLegacyMilBrush *)CSolidColorLegacyMilBrush::operator new();
  if ( v7 )
    v8 = CSolidColorLegacyMilBrush::CSolidColorLegacyMilBrush(v7, a2);
  else
    v8 = 0LL;
  if ( v8 )
  {
    v9 = *(_OWORD *)&a3->r;
    *((_QWORD *)v8 + 9) = 0x3FF0000000000000LL;
    *(_OWORD *)((char *)v8 + 104) = v9;
    CMILCOMBase::InternalAddRef(v8);
    *a1 = v8;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x41u);
  }
  return v6;
}
