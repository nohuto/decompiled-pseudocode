/*
 * XREFs of _lambda_855ca075e0ac3c7a60546b478bdcde3e_::_lambda_invoker_cdecl_ @ 0x1800728D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x18001341C (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 */

void __fastcall lambda_855ca075e0ac3c7a60546b478bdcde3e_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        PVOID Context,
        PTP_TIMER Timer)
{
  CAnalogCompositorManager::GetInstance(Instance);
  CAnalogCompositorManager::SetIdleState(2, 1);
}
