/*
 * XREFs of ?GetAtom@CSwapChainProp@@MEAAGXZ @ 0x1C0126B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwapChainProp::GetAtom(CSwapChainProp *this)
{
  return LOWORD(WPP_MAIN_CB.Dpc.DeferredContext);
}
