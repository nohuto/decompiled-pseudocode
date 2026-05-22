/*
 * XREFs of SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT3_3_ @ 0x18007A7A0
 * Callers:
 *     _anonymous_namespace_::GetPoseData @ 0x180074550 (_anonymous_namespace_--GetPoseData.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     SpatialInteractionDevices::UpdateFeatureReportIfNeeded @ 0x18007819C (SpatialInteractionDevices--UpdateFeatureReportIfNeeded.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18007BCE4 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?HidStatus@SpatialInteractionDevices@@YAJJ@Z @ 0x18007BD0C (-HidStatus@SpatialInteractionDevices@@YAJJ@Z.c)
 *     ?ConvertHIDValueToDouble@Internal@SpatialInteractionDevices@@YAN_JPEBU_HIDP_VALUE_CAPS@@@Z @ 0x18007CE74 (-ConvertHIDValueToDouble@Internal@SpatialInteractionDevices@@YAN_JPEBU_HIDP_VALUE_CAPS@@@Z.c)
 */

__int64 __fastcall SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT3_3_(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        char *a5)
{
  char *v5; // r15
  _WORD *v6; // rbp
  char v7; // r8
  unsigned __int64 v10; // rsi
  unsigned int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // rbx
  int updated; // eax
  unsigned int v16; // edi
  unsigned int ScaledUsageValue; // eax
  int v18; // edx
  int v19; // eax
  const struct _HIDP_VALUE_CAPS *v20; // r8
  float v21; // xmm5_4
  int UsageValue; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  LONG v24; // [rsp+80h] [rbp+18h] BYREF

  LOBYTE(v24) = a3;
  v5 = a5;
  v6 = (_WORD *)(a2 + 2);
  v7 = 0;
  v10 = 0LL;
  *a5 = 0;
  while ( 1 )
  {
    v11 = *(_DWORD *)(a1 + 224);
    v12 = 0LL;
    if ( !v11 )
    {
LABEL_10:
      *(_DWORD *)(a4 + 4 * v10) = 0;
      goto LABEL_11;
    }
    while ( 1 )
    {
      v13 = *(_QWORD *)(a1 + 216) + 72 * v12;
      if ( *(v6 - 1) == *(_WORD *)(v13 + 10)
        && v6[1] == *(_WORD *)v13
        && *v6 == *(_WORD *)(v13 + 8)
        && !*(_BYTE *)(v13 + 12)
        && v6[2] == *(_WORD *)(v13 + 56)
        && ((*(_DWORD *)(v13 + 36) - 17) & 0xFFFFFFFD) == 0 )
      {
        break;
      }
      v12 = (unsigned int)(v12 + 1);
      if ( (unsigned int)v12 >= v11 )
        goto LABEL_10;
    }
    updated = SpatialInteractionDevices::UpdateFeatureReportIfNeeded(a1, *(_BYTE *)(v13 + 2));
    v16 = updated;
    if ( updated < 0 )
      break;
    ScaledUsageValue = HidP_GetScaledUsageValue(
                         HidP_Feature,
                         *(_WORD *)v13,
                         *(_WORD *)(v13 + 6),
                         *(_WORD *)(v13 + 56),
                         &v24,
                         *(PHIDP_PREPARSED_DATA *)(a1 + 96),
                         *(PCHAR *)(a1 + 328),
                         *(_DWORD *)(a1 + 320));
    v19 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)ScaledUsageValue, v18);
    if ( v19 < 0 )
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0x4E1,
               (unsigned int)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
               (const char *)(unsigned int)v19,
               UsageValue);
    v21 = SpatialInteractionDevices::Internal::ConvertHIDValueToDouble(
            (SpatialInteractionDevices::Internal *)v24,
            v13,
            v20);
    if ( *(_DWORD *)(v13 + 36) == 19 )
      v21 = v21 * 2.54;
    *(float *)(a4 + 4 * v10) = v21;
    v7 = 1;
LABEL_11:
    ++v10;
    v6 += 8;
    if ( v10 >= 3 )
    {
      *v5 = v7;
      return 0LL;
    }
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x4D7,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
    (const char *)(unsigned int)updated);
  return v16;
}
