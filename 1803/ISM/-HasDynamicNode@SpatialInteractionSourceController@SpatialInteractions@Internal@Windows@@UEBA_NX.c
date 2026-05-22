/*
 * XREFs of ?HasDynamicNode@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEBA_NXZ @ 0x1800D6130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::HasDynamicNode(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rcx
  bool v3; // bl

  v2 = (RTL_SRWLOCK *)((unsigned __int64)&this[138] & -(__int64)(TryAcquireSRWLockShared(this + 138) != 0));
  v3 = v2 && this[108].Ptr;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v3;
}
