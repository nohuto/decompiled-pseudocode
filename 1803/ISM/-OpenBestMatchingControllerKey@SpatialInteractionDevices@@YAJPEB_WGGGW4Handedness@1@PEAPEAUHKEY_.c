/*
 * XREFs of ?OpenBestMatchingControllerKey@SpatialInteractionDevices@@YAJPEB_WGGGW4Handedness@1@PEAPEAUHKEY__@@PEA_N@Z @ 0x18009AE7C
 * Callers:
 *     ?GetPoseData@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4Handedness@1@W4PoseType@1@PEAUPoseData@1@PEA_N@Z @ 0x18009B72C (-GetPoseData@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4Handedness@1@W4PoseType@1@PEAUPose.c)
 *     ?ReadHapticsEngineParameters@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXPEA_N0@Z @ 0x1800D933C (-ReadHapticsEngineParameters@SpatialInteractionSourceController@SpatialInteractions@Internal@Win.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800668E8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18006966C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$swprintf_s@$0EA@@@YAHAEAY0EA@_WPEB_WZZ @ 0x18009BC98 (--$swprintf_s@$0EA@@@YAHAEAY0EA@_WPEB_WZZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialInteractionDevices::OpenBestMatchingControllerKey(
        _WORD *a1,
        unsigned __int16 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        PHKEY phkResult,
        _BYTE *a7)
{
  unsigned __int16 v8; // di
  const WCHAR *v10; // rcx
  CONFIGRET Device_Interface_PropertyW; // eax
  const char *v12; // r9
  signed int v13; // eax
  signed int v14; // ebx
  __int64 v15; // rdx
  CONFIGRET DevNodeW; // eax
  signed int v17; // eax
  __int64 v18; // rdx
  CONFIGRET v19; // eax
  signed int v20; // eax
  const wchar_t *v21; // rbx
  HKEY v22; // rcx
  HKEY v23; // rax
  PULONG PropertyBufferSize; // [rsp+20h] [rbp-E0h]
  HKEY phkDevice; // [rsp+30h] [rbp-D0h] BYREF
  ULONG v27; // [rsp+38h] [rbp-C8h] BYREF
  DEVPROPTYPE PropertyType; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v29; // [rsp+40h] [rbp-C0h]
  int v30; // [rsp+48h] [rbp-B8h]
  LPCWSTR pszDeviceInterface[4]; // [rsp+50h] [rbp-B0h] BYREF
  DEVNODE pdnDevInst[4]; // [rsp+70h] [rbp-90h] BYREF
  WCHAR SubKey[64]; // [rsp+80h] [rbp-80h] BYREF
  WCHAR PropertyBuffer[200]; // [rsp+100h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2D8h] [rbp+1D8h]

  v29 = -2LL;
  v8 = a3;
  *phkResult = 0LL;
  *a7 = 0;
  phkDevice = 0LL;
  v30 = 0;
  std::wstring::wstring((unsigned __int64 *)pszDeviceInterface, a1, a3);
  pdnDevInst[0] = 0;
  v27 = 400;
  v10 = (const WCHAR *)pszDeviceInterface;
  if ( pszDeviceInterface[3] >= (LPCWSTR)8 )
    v10 = pszDeviceInterface[0];
  Device_Interface_PropertyW = CM_Get_Device_Interface_PropertyW(
                                 v10,
                                 &DEVPKEY_Device_InstanceId,
                                 &PropertyType,
                                 (PBYTE)PropertyBuffer,
                                 &v27,
                                 0);
  if ( Device_Interface_PropertyW )
  {
    v13 = CM_MapCrToWin32Err(Device_Interface_PropertyW, 0x507u);
    v14 = (unsigned __int16)v13 | 0x80070000;
    if ( v13 <= 0 )
      v14 = v13;
    if ( v14 < 0 )
    {
      v15 = 71LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"onecoreuap\\analog\\input\\common\\inc\\devicepropertyhelpers.h",
        (const char *)(unsigned int)v14);
      goto LABEL_16;
    }
  }
  if ( PropertyType != 18 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x49,
      (__int64)"onecoreuap\\analog\\input\\common\\inc\\devicepropertyhelpers.h",
      v12);
    JUMPOUT(0x18009B178LL);
  }
  DevNodeW = CM_Locate_DevNodeW(pdnDevInst, PropertyBuffer, 0);
  if ( DevNodeW )
  {
    v17 = CM_MapCrToWin32Err(DevNodeW, 0x507u);
    v14 = (unsigned __int16)v17 | 0x80070000;
    if ( v17 <= 0 )
      v14 = v17;
    if ( v14 < 0 )
    {
      v15 = 75LL;
      goto LABEL_8;
    }
  }
  v30 = 1;
  v14 = 0;
LABEL_16:
  if ( v14 < 0 )
  {
    v18 = 76LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\spatialinteractiondevice.h",
      (const char *)(unsigned int)v14);
    goto LABEL_25;
  }
  phkDevice = 0LL;
  v19 = CM_Open_DevNode_Key(pdnDevInst[0], 0x20019u, 0, 1u, &phkDevice, 0);
  if ( v19 )
  {
    v20 = CM_MapCrToWin32Err(v19, 0x507u);
    v14 = (unsigned __int16)v20 | 0x80070000;
    if ( v20 <= 0 )
      v14 = v20;
    if ( v14 < 0 )
    {
      v18 = 77LL;
      goto LABEL_18;
    }
  }
  v14 = 0;
LABEL_25:
  std::wstring::_Tidy_deallocate((unsigned __int64 *)pszDeviceInterface);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x65,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\spatialinteractiondevice.h",
      (const char *)(unsigned int)v14);
LABEL_35:
    v22 = phkDevice;
    goto LABEL_37;
  }
  if ( a5 == 1 )
  {
    v21 = L"Left";
  }
  else if ( a5 == 2 )
  {
    v21 = L"Right";
  }
  else
  {
    v21 = L"Unspecified";
  }
  LODWORD(PropertyBufferSize) = a4;
  swprintf_s<64>(SubKey, L"%04x_%04x_%04x_%ws", a2, v8, PropertyBufferSize, v21);
  if ( !RegOpenKeyExW(phkDevice, SubKey, 0, 0x20019u, phkResult)
    || (swprintf_s<64>(SubKey, L"%04x_%04x_%ws", a2, v8, v21), !RegOpenKeyExW(phkDevice, SubKey, 0, 0x20019u, phkResult)) )
  {
    v14 = 0;
    *a7 = 1;
    goto LABEL_35;
  }
  v23 = phkDevice;
  v22 = 0LL;
  phkDevice = 0LL;
  *phkResult = v23;
  v14 = 0;
LABEL_37:
  if ( v22 )
    RegCloseKey(v22);
  return (unsigned int)v14;
}
