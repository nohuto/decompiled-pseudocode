/*
 * XREFs of ?GetPointerPose@SpatialInteractionDevice@@UEAAJPEAUPoseData@SpatialInteractionDevices@@PEA_N@Z @ 0x180075040
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetPoseData @ 0x180074550 (_anonymous_namespace_--GetPoseData.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialInteractionDevice::GetPointerPose(
        unsigned __int16 **this,
        struct SpatialInteractionDevices::PoseData *a2,
        bool *a3)
{
  int v6; // eax
  int v7; // edx
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v6 = (*((__int64 (__fastcall **)(unsigned __int16 **, int *))*this + 15))(this, &v9);
  v7 = v9;
  if ( v6 < 0 )
    v7 = 0;
  v9 = v7;
  return anonymous_namespace_::GetPoseData(this[11], v7, 1u, (__int64)a2, (HKEY)a3);
}
