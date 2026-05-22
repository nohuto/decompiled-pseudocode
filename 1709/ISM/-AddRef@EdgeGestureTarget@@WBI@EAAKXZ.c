/*
 * XREFs of ?AddRef@EdgeGestureTarget@@WBI@EAAKXZ @ 0x180007700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EdgeGestureTarget::AddRef(__int64 a1)
{
  return MPCSharedWorldInputTarget::AddRef((MPCSharedWorldInputTarget *)(a1 - 24));
}
