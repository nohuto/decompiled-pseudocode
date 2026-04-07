/*
 * XREFs of ?GetPillarBoxColor@CImmersiveState@@SAXPEAU_D3DCOLORVALUE@@@Z @ 0x18009DEE4
 * Callers:
 *     ?SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ @ 0x18009E304 (-SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     GetStaticImmersiveColorPriv @ 0x1800A1CB8 (GetStaticImmersiveColorPriv.c)
 */

void __fastcall CImmersiveState::GetPillarBoxColor(struct _D3DCOLORVALUE *a1)
{
  int StaticImmersiveColorPriv; // eax

  StaticImmersiveColorPriv = GetStaticImmersiveColorPriv(565LL);
  a1->a = 1.0;
  a1->r = GammaLUT_sRGB_to_scRGB[(unsigned __int8)StaticImmersiveColorPriv] / 255.0;
  a1->g = GammaLUT_sRGB_to_scRGB[BYTE1(StaticImmersiveColorPriv)] / 255.0;
  a1->b = GammaLUT_sRGB_to_scRGB[BYTE2(StaticImmersiveColorPriv)] / 255.0;
}
