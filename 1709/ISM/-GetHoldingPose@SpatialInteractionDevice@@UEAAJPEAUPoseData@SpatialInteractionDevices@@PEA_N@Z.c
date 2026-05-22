/*
 * XREFs of ?GetHoldingPose@SpatialInteractionDevice@@UEAAJPEAUPoseData@SpatialInteractionDevices@@PEA_N@Z @ 0x180074FE0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetPoseData @ 0x180074550 (_anonymous_namespace_--GetPoseData.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialInteractionDevice::GetHoldingPose(
        unsigned __int16 **this,
        struct SpatialInteractionDevices::PoseData *a2,
        bool *a3)
{
  int v6; // eax
  int v7; // edx
  unsigned __int16 *v8; // rcx
  int v10; // [rsp+40h] [rbp+8h] BYREF

  v6 = (*((__int64 (__fastcall **)(unsigned __int16 **, int *))*this + 15))(this, &v10);
  v7 = v10;
  if ( v6 < 0 )
    v7 = 0;
  v8 = this[11];
  v10 = v7;
  return anonymous_namespace_::GetPoseData(v8, v7, 0, (__int64)a2, (HKEY)a3);
}
