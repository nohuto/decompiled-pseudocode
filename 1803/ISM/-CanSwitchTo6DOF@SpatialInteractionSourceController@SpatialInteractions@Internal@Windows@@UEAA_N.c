/*
 * XREFs of ?CanSwitchTo6DOF@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAA_NXZ @ 0x1800D4700
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::CanSwitchTo6DOF(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this)
{
  char v2; // bl
  _BYTE v4[24]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *))(*(_QWORD *)this + 56LL))(this) )
    return (*(unsigned __int8 (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *, _BYTE *))(*(_QWORD *)this + 64LL))(
             this,
             v4) != 0;
  return v2;
}
