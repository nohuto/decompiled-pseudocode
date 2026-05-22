/*
 * XREFs of ?AddRef@MPCSharedWorldInputTarget@@UEAAKXZ @ 0x180005BD0
 * Callers:
 *     ?AddRef@InputStateManager@@WBA@EAAKXZ @ 0x1800076B0 (-AddRef@InputStateManager@@WBA@EAAKXZ.c)
 *     ?AddRef@EdgeGestureTarget@@WBI@EAAKXZ @ 0x180007700 (-AddRef@EdgeGestureTarget@@WBI@EAAKXZ.c)
 *     ?AddRef@EdgeGestureTarget@@W7EAAKXZ @ 0x180007760 (-AddRef@EdgeGestureTarget@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCSharedWorldInputTarget::AddRef(MPCSharedWorldInputTarget *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 8);
}
