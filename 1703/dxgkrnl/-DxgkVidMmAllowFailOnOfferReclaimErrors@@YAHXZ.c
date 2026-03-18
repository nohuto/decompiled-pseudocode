/*
 * XREFs of ?DxgkVidMmAllowFailOnOfferReclaimErrors@@YAHXZ @ 0x1C017AF70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

bool __fastcall DxgkVidMmAllowFailOnOfferReclaimErrors(__int64 a1)
{
  struct DXGPROCESS *Current; // rcx

  Current = DXGPROCESS::GetCurrent(a1);
  return !Current || *((_BYTE *)Current + 274) == 0;
}
