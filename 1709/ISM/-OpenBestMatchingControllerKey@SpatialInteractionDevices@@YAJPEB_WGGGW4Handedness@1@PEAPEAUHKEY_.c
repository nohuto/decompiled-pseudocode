/*
 * XREFs of ?OpenBestMatchingControllerKey@SpatialInteractionDevices@@YAJPEB_WGGGW4Handedness@1@PEAPEAUHKEY__@@PEA_N@Z @ 0x180073BDC
 * Callers:
 *     _anonymous_namespace_::GetPoseData @ 0x180074550 (_anonymous_namespace_--GetPoseData.c)
 *     ?GetRenderableModelPath@SpatialInteractionDevice@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180075120 (-GetRenderableModelPath@SpatialInteractionDevice@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180028C80 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?Initialize@DevicePropertyHelper@DevicePropertyHelpers@@QEAAJXZ @ 0x180073B2C (-Initialize@DevicePropertyHelper@DevicePropertyHelpers@@QEAAJXZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18007595C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     ??$swprintf_s@$0EA@@@YAHAEAY0EA@_WPEB_WZZ @ 0x1800759E4 (--$swprintf_s@$0EA@@@YAHAEAY0EA@_WPEB_WZZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialInteractionDevices::OpenBestMatchingControllerKey(
        void *a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        int a5,
        PHKEY phkResult,
        _BYTE *a7)
{
  signed int v10; // eax
  signed int v11; // ebx
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  CONFIGRET v14; // eax
  signed int v15; // eax
  const wchar_t *v16; // rbx
  HKEY v17; // rcx
  HKEY v18; // rax
  PHKEY phkDevice; // [rsp+20h] [rbp-D1h]
  HKEY hKey[2]; // [rsp+30h] [rbp-C1h] BYREF
  DEVNODE v22; // [rsp+40h] [rbp-B1h] BYREF
  unsigned __int64 v23[4]; // [rsp+48h] [rbp-A9h] BYREF
  DEVINST dnDevNode; // [rsp+68h] [rbp-89h]
  WCHAR SubKey[64]; // [rsp+70h] [rbp-81h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+47h]

  hKey[1] = HKEY_DYN_DATA|0x7FFFFFF8LL;
  *phkResult = 0LL;
  *a7 = 0;
  hKey[0] = 0LL;
  v22 = 0;
  std::wstring::wstring(v23, a1);
  dnDevNode = 0;
  v10 = DevicePropertyHelpers::DevicePropertyHelper::Initialize(&v22);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = (unsigned int)v10;
    v13 = 76LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\spatialinteractiondevice.h",
      (const char *)v12);
    std::wstring::_Tidy_deallocate(v23);
    goto LABEL_10;
  }
  hKey[0] = 0LL;
  v14 = CM_Open_DevNode_Key(dnDevNode, 0x20019u, 0, 1u, hKey, 0);
  if ( v14 )
  {
    v15 = CM_MapCrToWin32Err(v14, 0x507u);
    v11 = (unsigned __int16)v15 | 0x80070000;
    if ( v15 <= 0 )
      v11 = v15;
    if ( v11 < 0 )
    {
      v12 = (unsigned int)v11;
      v13 = 77LL;
      goto LABEL_3;
    }
  }
  std::wstring::_Tidy_deallocate(v23);
  v11 = 0;
LABEL_10:
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x65,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\spatialinteractiondevice.h",
      (const char *)(unsigned int)v11);
LABEL_20:
    v17 = hKey[0];
    goto LABEL_22;
  }
  if ( a5 == 1 )
  {
    v16 = L"Left";
  }
  else if ( a5 == 2 )
  {
    v16 = L"Right";
  }
  else
  {
    v16 = L"Unspecified";
  }
  LODWORD(phkDevice) = a4;
  swprintf_s<64>(SubKey, L"%04x_%04x_%04x_%ws", a2, a3, phkDevice, v16);
  if ( !RegOpenKeyExW(hKey[0], SubKey, 0, 0x20019u, phkResult)
    || (swprintf_s<64>(SubKey, L"%04x_%04x_%ws", a2, a3, v16), !RegOpenKeyExW(hKey[0], SubKey, 0, 0x20019u, phkResult)) )
  {
    v11 = 0;
    *a7 = 1;
    goto LABEL_20;
  }
  v18 = hKey[0];
  v17 = 0LL;
  hKey[0] = 0LL;
  *phkResult = v18;
  v11 = 0;
LABEL_22:
  if ( v17 )
    RegCloseKey(v17);
  return (unsigned int)v11;
}
