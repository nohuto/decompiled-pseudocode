/*
 * XREFs of ?DismissPlaceMode@CDragVisualAcc@@UEAAXXZ @ 0x1802F85D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_DismissPlaceModeButtons@CDragVisualAcc@@AEAAXXZ @ 0x1802F9CC8 (-_DismissPlaceModeButtons@CDragVisualAcc@@AEAAXXZ.c)
 */

void __fastcall CDragVisualAcc::DismissPlaceMode(IRawElementProviderSimple *this)
{
  CDragVisualAcc::_DismissPlaceModeButtons(this - 4);
  LODWORD(this[2].lpVtbl) = 0;
}
