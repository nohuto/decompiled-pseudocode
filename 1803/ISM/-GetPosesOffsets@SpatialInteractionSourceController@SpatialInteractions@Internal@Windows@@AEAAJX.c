/*
 * XREFs of ?GetPosesOffsets@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJXZ @ 0x1800D8950
 * Callers:
 *     ?EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800D6470 (-EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPoseData@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4Handedness@1@W4PoseType@1@PEAUPoseData@1@PEA_N@Z @ 0x18009B72C (-GetPoseData@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4Handedness@1@W4PoseType@1@PEAUPose.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::GetPosesOffsets(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this)
{
  int v1; // edx
  unsigned __int16 *v2; // rbp
  char v4; // bl
  int PoseData; // esi
  __int64 v6; // rdx
  int v8; // edx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v10; // [rsp+50h] [rbp+8h] BYREF
  struct HKEY__ v11; // [rsp+58h] [rbp+10h] BYREF

  v1 = *((_DWORD *)this + 8);
  v2 = (unsigned __int16 *)((char *)this + 448);
  v4 = 0;
  LOBYTE(v10) = 0;
  PoseData = SpatialInteractionDevices::GetPoseData(
               (unsigned __int16 *)this + 224,
               v1,
               0,
               (__int64)this + 36,
               (HKEY)&v10);
  if ( PoseData < 0 )
  {
    v6 = 1346LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
      (const char *)(unsigned int)PoseData);
    return (unsigned int)PoseData;
  }
  v8 = *((_DWORD *)this + 8);
  LOBYTE(v11.unused) = 0;
  PoseData = SpatialInteractionDevices::GetPoseData(v2, v8, 1u, (__int64)this + 68, &v11);
  if ( PoseData < 0 )
  {
    v6 = 1349LL;
    goto LABEL_3;
  }
  if ( *((_BYTE *)this + 784) || (_BYTE)v10 || LOBYTE(v11.unused) )
    v4 = 1;
  *((_BYTE *)this + 277) = v4;
  return 0LL;
}
