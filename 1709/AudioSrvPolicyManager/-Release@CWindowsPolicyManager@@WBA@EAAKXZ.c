/*
 * XREFs of ?Release@CWindowsPolicyManager@@WBA@EAAKXZ @ 0x180006870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CWindowsPolicyManager::Release(__int64 a1)
{
  return CTrackedEndpoint::Release((CTrackedEndpoint *)(a1 - 16));
}
