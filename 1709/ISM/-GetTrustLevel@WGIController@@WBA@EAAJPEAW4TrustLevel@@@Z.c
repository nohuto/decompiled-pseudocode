/*
 * XREFs of ?GetTrustLevel@WGIController@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x1800A2A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WGIController::GetTrustLevel(__int64 a1, unsigned int *a2)
{
  return DWMInputTarget::GetViewId((DWMInputTarget *)(a1 - 16), a2);
}
