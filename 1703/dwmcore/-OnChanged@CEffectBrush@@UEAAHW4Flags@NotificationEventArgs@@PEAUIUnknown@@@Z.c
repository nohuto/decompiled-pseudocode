/*
 * XREFs of ?OnChanged@CEffectBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180010E00
 * Callers:
 *     <none>
 * Callees:
 *     ?TryCreateEffectInstance@CEffectBrush@@AEAAJXZ @ 0x180010C50 (-TryCreateEffectInstance@CEffectBrush@@AEAAJXZ.c)
 */

__int64 __fastcall CEffectBrush::OnChanged(CEffectBrush *a1)
{
  CEffectBrush::TryCreateEffectInstance(a1);
  return 1LL;
}
