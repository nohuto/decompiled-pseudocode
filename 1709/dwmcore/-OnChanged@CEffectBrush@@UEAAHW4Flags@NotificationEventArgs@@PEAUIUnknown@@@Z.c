/*
 * XREFs of ?OnChanged@CEffectBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180082D10
 * Callers:
 *     <none>
 * Callees:
 *     ?HasValidTemplate@CEffectBrush@@AEBA_NXZ @ 0x180082AEC (-HasValidTemplate@CEffectBrush@@AEBA_NXZ.c)
 *     ?TryCreateEffectInstance@CEffectBrush@@AEAAJXZ @ 0x180082B00 (-TryCreateEffectInstance@CEffectBrush@@AEAAJXZ.c)
 */

_BOOL8 __fastcall CEffectBrush::OnChanged(CEffectBrush *a1)
{
  CEffectBrush::TryCreateEffectInstance(a1);
  return CEffectBrush::HasValidTemplate(a1);
}
