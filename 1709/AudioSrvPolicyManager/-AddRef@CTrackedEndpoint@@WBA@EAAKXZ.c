/*
 * XREFs of ?AddRef@CTrackedEndpoint@@WBA@EAAKXZ @ 0x180006840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CTrackedEndpoint::AddRef(__int64 a1)
{
  return CWindowsPolicyManager::AddRef((CWindowsPolicyManager *)(a1 - 16));
}
