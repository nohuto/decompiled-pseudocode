/*
 * XREFs of ?GetTrustLevel@WGIController@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x18007AEB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WGIController::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return MPCManagerClient::GetTrustLevel((MPCManagerClient *)(a1 - 40), a2);
}
