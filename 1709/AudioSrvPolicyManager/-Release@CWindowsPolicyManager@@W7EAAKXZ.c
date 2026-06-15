/*
 * XREFs of ?Release@CWindowsPolicyManager@@W7EAAKXZ @ 0x180006850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CWindowsPolicyManager::Release(__int64 a1)
{
  return CTrackedEndpoint::Release((CTrackedEndpoint *)(a1 - 8));
}
