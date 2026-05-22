/*
 * XREFs of ?AddRef@EdgeGestureTarget@@W7EAAKXZ @ 0x180007760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EdgeGestureTarget::AddRef(__int64 a1)
{
  return MPCSharedWorldInputTarget::AddRef((MPCSharedWorldInputTarget *)(a1 - 8));
}
