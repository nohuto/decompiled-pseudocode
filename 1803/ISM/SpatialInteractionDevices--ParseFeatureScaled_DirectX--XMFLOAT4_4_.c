/*
 * XREFs of SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT4_4_ @ 0x18009FFA4
 * Callers:
 *     ?GetPoseData@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4Handedness@1@W4PoseType@1@PEAUPoseData@1@PEA_N@Z @ 0x18009B72C (-GetPoseData@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4Handedness@1@W4PoseType@1@PEAUPose.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180075ACC (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     SpatialInteractionDevices::UpdateFeatureReportIfNeeded @ 0x18009D928 (SpatialInteractionDevices--UpdateFeatureReportIfNeeded.c)
 *     ?HidStatus@SpatialInteractionDevices@@YAJJ@Z @ 0x1800A1130 (-HidStatus@SpatialInteractionDevices@@YAJJ@Z.c)
 *     ?ConvertHIDValueToDouble@Internal@SpatialInteractionDevices@@YAN_JPEBU_HIDP_VALUE_CAPS@@@Z @ 0x1800A1F44 (-ConvertHIDValueToDouble@Internal@SpatialInteractionDevices@@YAN_JPEBU_HIDP_VALUE_CAPS@@@Z.c)
 */

__int64 __fastcall SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT4_4_(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        _BYTE *a5)
{
  _BYTE *v5; // r15
  _WORD *v6; // rsi
  char v7; // r10
  __int64 v10; // rbp
  unsigned int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // rbx
  float v14; // xmm5_4
  int updated; // eax
  unsigned int v17; // edi
  unsigned int ScaledUsageValue; // eax
  int v19; // edx
  int v20; // eax
  const struct _HIDP_VALUE_CAPS *v21; // r8
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  LONG UsageValue; // [rsp+90h] [rbp+18h] BYREF

  LOBYTE(UsageValue) = a3;
  v5 = a5;
  v6 = (_WORD *)(a2 + 2);
  v7 = 0;
  v10 = 0LL;
  *a5 = 0;
  while ( 1 )
  {
    v11 = *(_DWORD *)(a1 + 184);
    v12 = 0LL;
    if ( !v11 )
    {
LABEL_9:
      v14 = 0.0;
      goto LABEL_10;
    }
    while ( 1 )
    {
      v13 = *(_QWORD *)(a1 + 176) + 72 * v12;
      if ( *(v6 - 1) == *(_WORD *)(v13 + 10)
        && v6[1] == *(_WORD *)v13
        && *v6 == *(_WORD *)(v13 + 8)
        && !*(_BYTE *)(v13 + 12)
        && v6[2] == *(_WORD *)(v13 + 56) )
      {
        break;
      }
      v12 = (unsigned int)(v12 + 1);
      if ( (unsigned int)v12 >= v11 )
        goto LABEL_9;
    }
    LOBYTE(v12) = *(_BYTE *)(v13 + 2);
    updated = SpatialInteractionDevices::UpdateFeatureReportIfNeeded((__int64 *)a1, v12);
    v17 = updated;
    if ( updated < 0 )
      break;
    ScaledUsageValue = HidP_GetScaledUsageValue(
                         HidP_Feature,
                         *(_WORD *)v13,
                         *(_WORD *)(v13 + 6),
                         *(_WORD *)(v13 + 56),
                         &UsageValue,
                         *(PHIDP_PREPARSED_DATA *)(a1 + 56),
                         *(PCHAR *)(a1 + 288),
                         *(_DWORD *)(a1 + 280));
    v20 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)ScaledUsageValue, v19);
    if ( v20 < 0 )
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0x4D8,
               (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
               (const char *)(unsigned int)v20);
    v14 = SpatialInteractionDevices::Internal::ConvertHIDValueToDouble(
            (SpatialInteractionDevices::Internal *)UsageValue,
            v13,
            v21);
LABEL_10:
    *(float *)(a4 + 4 * v10) = v14;
    v6 += 8;
    if ( (unsigned __int64)++v10 >= 4 )
    {
      *v5 = v7;
      return 0LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4CE,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
    (const char *)(unsigned int)updated);
  return v17;
}
