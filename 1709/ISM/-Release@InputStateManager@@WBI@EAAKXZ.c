/*
 * XREFs of ?Release@InputStateManager@@WBI@EAAKXZ @ 0x1800076F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputStateManager::Release(__int64 a1)
{
  return InputRedirectionComponent::Release((InputRedirectionComponent *)(a1 - 24));
}
