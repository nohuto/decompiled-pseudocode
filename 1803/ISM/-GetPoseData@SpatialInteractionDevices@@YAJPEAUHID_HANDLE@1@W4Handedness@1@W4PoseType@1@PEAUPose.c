/*
 * XREFs of ?GetPoseData@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4Handedness@1@W4PoseType@1@PEAUPoseData@1@PEA_N@Z @ 0x18009B72C
 * Callers:
 *     ?GetPosesOffsets@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJXZ @ 0x1800D8950 (-GetPosesOffsets@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJX.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OpenBestMatchingControllerKey@SpatialInteractionDevices@@YAJPEB_WGGGW4Handedness@1@PEAPEAUHKEY__@@PEA_N@Z @ 0x18009AE7C (-OpenBestMatchingControllerKey@SpatialInteractionDevices@@YAJPEB_WGGGW4Handedness@1@PEAPEAUHKEY_.c)
 *     _anonymous_namespace_::OpenPosesFallbackRootKey @ 0x18009B2B0 (_anonymous_namespace_--OpenPosesFallbackRootKey.c)
 *     _anonymous_namespace_::MakePoseValid @ 0x18009B50C (_anonymous_namespace_--MakePoseValid.c)
 *     _anonymous_namespace_::ReadPoseDataFromRegistry @ 0x18009B60C (_anonymous_namespace_--ReadPoseDataFromRegistry.c)
 *     _anonymous_namespace_::GetPoseSubKey @ 0x18009B6E4 (_anonymous_namespace_--GetPoseSubKey.c)
 *     SpatialInteractionDevices::AdjustOrientationAndScale @ 0x18009F204 (SpatialInteractionDevices--AdjustOrientationAndScale.c)
 *     SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT3_3_ @ 0x18009FDEC (SpatialInteractionDevices--ParseFeatureScaled_DirectX--XMFLOAT3_3_.c)
 *     SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT4_4_ @ 0x18009FFA4 (SpatialInteractionDevices--ParseFeatureScaled_DirectX--XMFLOAT4_4_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialInteractionDevices::GetPoseData(
        unsigned __int16 *a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        HKEY phkResult)
{
  HKEY v8; // r15
  unsigned __int16 *v9; // rcx
  int v10; // eax
  char v11; // r12
  int v12; // r8d
  HKEY v13; // rbx
  const WCHAR *PoseSubKey; // rax
  bool v15; // al
  int v16; // ebx
  _BYTE *v17; // rsi
  int v18; // eax
  int v19; // r8d
  __int64 v20; // rdx
  int v21; // r8d
  bool v22; // al
  const wchar_t *v23; // rax
  int v24; // eax
  HKEY v25; // rbx
  char v26; // al
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  HKEY hKey; // [rsp+80h] [rbp+30h] BYREF

  v8 = phkResult;
  *(_BYTE *)phkResult = 0;
  hKey = 0LL;
  v9 = a1 + 4;
  if ( *((_QWORD *)v9 + 3) >= 8uLL )
    v9 = *(unsigned __int16 **)v9;
  v10 = SpatialInteractionDevices::OpenBestMatchingControllerKey(v9, a1[22], a1[23], a1[24], a2, &hKey, &phkResult);
  v11 = 1;
  if ( v10 >= 0 )
  {
    phkResult = 0LL;
    v13 = hKey;
    PoseSubKey = anonymous_namespace_::GetPoseSubKey((char *)a3);
    if ( !RegOpenKeyExW(v13, PoseSubKey, 0, 0x20019u, &phkResult) )
    {
      anonymous_namespace_::ReadPoseDataFromRegistry(phkResult, a4);
      v15 = *(_BYTE *)(a4 + 29) || *(_BYTE *)(a4 + 28);
      *(_BYTE *)v8 = v15;
    }
    if ( phkResult )
      RegCloseKey(phkResult);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x86,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractiondevice.cpp",
      (const char *)(unsigned int)v10);
  }
  if ( *(_BYTE *)v8 )
    goto LABEL_42;
  if ( !a3 )
  {
    v17 = (_BYTE *)(a4 + 28);
    v18 = SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT3_3_(
            (_DWORD)a1,
            (unsigned int)&unk_1800F41A0,
            v12,
            a4,
            a4 + 28);
    v16 = v18;
    if ( v18 < 0 )
    {
      v20 = 1276LL;
      goto LABEL_23;
    }
    v18 = SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT4_4_(
            (_DWORD)a1,
            (unsigned int)&unk_1800F41D0,
            v21,
            (int)a4 + 12,
            a4 + 29);
    v16 = v18;
    if ( v18 < 0 )
    {
      v20 = 1277LL;
      goto LABEL_23;
    }
    goto LABEL_26;
  }
  if ( a3 != 1 )
  {
    v16 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x504,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
      (const char *)0x80070057LL);
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x93,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractiondevice.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_43;
  }
  v17 = (_BYTE *)(a4 + 28);
  v18 = SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT3_3_(
          (_DWORD)a1,
          (unsigned int)&unk_1800F4210,
          v12,
          a4,
          a4 + 28);
  v16 = v18;
  if ( v18 >= 0 )
  {
    v18 = SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT4_4_(
            (_DWORD)a1,
            (unsigned int)&unk_1800F4240,
            v19,
            (int)a4 + 12,
            a4 + 29);
    v16 = v18;
    if ( v18 < 0 )
    {
      v20 = 1281LL;
      goto LABEL_23;
    }
LABEL_26:
    SpatialInteractionDevices::AdjustOrientationAndScale(a4);
    v16 = 0;
    goto LABEL_27;
  }
  v20 = 1280LL;
LABEL_23:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
    (const char *)(unsigned int)v18);
LABEL_27:
  if ( v16 < 0 )
    goto LABEL_28;
  v22 = *(_BYTE *)(a4 + 29) || *v17;
  *(_BYTE *)v8 = v22;
  if ( !v22 )
  {
    phkResult = 0LL;
    v23 = anonymous_namespace_::GetPoseSubKey((char *)a3);
    v24 = anonymous_namespace_::OpenPosesFallbackRootKey(a1[22], a1[23], a1[24], (__int64)v23, &phkResult);
    v25 = phkResult;
    if ( v24 < 0 )
    {
      *v17 = 0;
      *(_BYTE *)(a4 + 29) = 0;
      v26 = 0;
    }
    else
    {
      anonymous_namespace_::ReadPoseDataFromRegistry(phkResult, a4);
      v26 = *(_BYTE *)(a4 + 29);
    }
    if ( !v26 && !*v17 )
      v11 = 0;
    *(_BYTE *)v8 = v11;
    if ( v25 )
      RegCloseKey(v25);
  }
LABEL_42:
  anonymous_namespace_::MakePoseValid(a4);
  v16 = 0;
LABEL_43:
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v16;
}
