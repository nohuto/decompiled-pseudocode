/*
 * XREFs of ?Release@DynamicAudioEndpointManager@@W7EAAKXZ @ 0x1800661A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall DynamicAudioEndpointManager::Release(__int64 a1)
{
  return PersistedEndpointPolicyRule::Release((PersistedEndpointPolicyRule *)(a1 - 8));
}
