/*
 * XREFs of GreSfmDxQuerySwapChainBindingStatus @ 0x1C00279D0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000544C (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 */

__int64 __fastcall GreSfmDxQuerySwapChainBindingStatus(int a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2, char a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2->Model != D3DKMT_PM_REDIRECTED_COMPOSITION )
    return NotifyPendingFlipPresent(a1, a2, a3);
  if ( a2->Token.Flip.FenceValue )
    return NotifyPendingCompositionBuffersPresent(a1, a2);
  return result;
}
