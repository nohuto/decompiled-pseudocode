/*
 * XREFs of ?OnChanged@CEffectBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180095800
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800357C4 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?HasValidTemplate@CEffectBrush@@AEBA_NXZ @ 0x1800955F8 (-HasValidTemplate@CEffectBrush@@AEBA_NXZ.c)
 *     ?TryCreateEffectInstance@CEffectBrush@@AEAAJXZ @ 0x18009560C (-TryCreateEffectInstance@CEffectBrush@@AEAAJXZ.c)
 */

__int64 __fastcall CEffectBrush::OnChanged(__int64 *a1, int a2)
{
  bool HasValidTemplate; // al
  unsigned int v5; // r8d

  CEffectBrush::TryCreateEffectInstance((CEffectBrush *)a1);
  HasValidTemplate = CEffectBrush::HasValidTemplate((CEffectBrush *)a1);
  v5 = 0;
  if ( HasValidTemplate )
  {
    if ( a2 == 14 )
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(a1 + 8);
    return 1;
  }
  return v5;
}
