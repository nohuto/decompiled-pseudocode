/*
 * XREFs of GreSfmDxQuerySwapChainBindingStatus @ 0x1C0057490
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00574B8 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C005B034 (-NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 */

int __fastcall GreSfmDxQuerySwapChainBindingStatus(int a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  int result; // eax

  result = 0;
  if ( a2->Model != D3DKMT_PM_REDIRECTED_COMPOSITION )
    return NotifyPendingFlipPresent(a1, a2);
  if ( a2->Token.Flip.FenceValue )
    return NotifyPendingCompositionBuffersPresent(a1, a2);
  return result;
}
