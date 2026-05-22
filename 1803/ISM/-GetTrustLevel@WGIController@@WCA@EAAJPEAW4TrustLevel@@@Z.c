/*
 * XREFs of ?GetTrustLevel@WGIController@@WCA@EAAJPEAW4TrustLevel@@@Z @ 0x18007ADF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WGIController::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return MPCManagerClient::GetTrustLevel((MPCManagerClient *)(a1 - 32), a2);
}
