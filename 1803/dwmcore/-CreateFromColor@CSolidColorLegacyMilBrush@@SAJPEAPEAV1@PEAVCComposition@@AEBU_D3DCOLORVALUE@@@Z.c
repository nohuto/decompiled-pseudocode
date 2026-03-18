/*
 * XREFs of ?CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801A995C
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180090490 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBVCShape@@@Z @ 0x1801A9FF4 (-RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBVCShape@@@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CSolidColorLegacyMilBrush@@IEAA@PEAVCComposition@@@Z @ 0x1800B5E4C (--0CSolidColorLegacyMilBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ??2CSolidColorLegacyMilBrush@@KAPEAX_K@Z @ 0x1800C63F0 (--2CSolidColorLegacyMilBrush@@KAPEAX_K@Z.c)
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x41u);
  }
  return v6;
}
