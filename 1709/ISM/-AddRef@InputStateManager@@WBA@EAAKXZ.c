/*
 * XREFs of ?AddRef@InputStateManager@@WBA@EAAKXZ @ 0x1800076B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputStateManager::AddRef(__int64 a1)
{
  return MPCSharedWorldInputTarget::AddRef((MPCSharedWorldInputTarget *)(a1 - 16));
}
