/*
 * XREFs of ?DxgkVidMmAllowFailOnOfferReclaimErrors@@YAHXZ @ 0x1C009D220
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

bool DxgkVidMmAllowFailOnOfferReclaimErrors(void)
{
  struct DXGPROCESS *Current; // rcx

  Current = DXGPROCESS::GetCurrent();
  return !Current || *((_BYTE *)Current + 322) == 0;
}
