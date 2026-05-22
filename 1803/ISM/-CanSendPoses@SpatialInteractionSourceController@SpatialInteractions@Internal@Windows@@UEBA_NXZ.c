/*
 * XREFs of ?CanSendPoses@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEBA_NXZ @ 0x1800D6200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::CanSendPoses(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_BYTE *)this + 100) )
    return 0;
  if ( *((_BYTE *)this + 784) && *((_BYTE *)this + 785)
    || (*(unsigned __int8 (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *))(*(_QWORD *)this + 56LL))(this) )
  {
    return 1;
  }
  return v1;
}
