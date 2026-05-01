/*
 * XREFs of ?_IsPropertySetContextHolographic@HolographicPositioner@@AEAA?AW4HolographicDetermination@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180020BD0
 * Callers:
 *     ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180020958 (-_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@C.c)
 *     ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180020F50 (-ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?IsWindowManaged@HolographicPositioner@@UEAAJPEAUHWND__@@PEAH@Z @ 0x180020EA0 (-IsWindowManaged@HolographicPositioner@@UEAAJPEAUHWND__@@PEAH@Z.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x18006D160 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionOptions@1234@PEAW4UserDisplayContext@1234@@Z @ 0x1800905E8 (-GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionO.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall HolographicPositioner::_IsPropertySetContextHolographic(__int64 a1, __int64 a2)
{
  int v2; // esi
  __int64 v3; // rbx
  unsigned int v5; // edi
  HRESULT v6; // eax
  HSTRING v7; // r15
  int v8; // eax
  int v9; // r14d
  HWND v10; // rcx
  char v11; // al
  HRESULT v12; // eax
  HSTRING v13; // r14
  int v14; // eax
  HWND v15; // rcx
  char v16; // al
  HRESULT v17; // eax
  __int64 v18; // r8
  unsigned __int64 v20; // rax
  HRESULT v21; // eax
  __int64 v22; // r8
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r8
  int v27; // [rsp+20h] [rbp-60h] BYREF
  HWND v28; // [rsp+28h] [rbp-58h] BYREF
  int v29; // [rsp+30h] [rbp-50h] BYREF
  __int64 v30; // [rsp+38h] [rbp-48h] BYREF
  int v31; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v32; // [rsp+44h] [rbp-3Ch] BYREF
  __int64 v33; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v33 = -2LL;
  v3 = a2;
  v5 = 0;
  v29 = 0;
  v30 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  string = 0LL;
  v6 = WindowsCreateStringReference(L"AppInstanceId", 0xDu, &hstringHeader, &string);
  if ( v6 < 0 )
  {
    RaiseException(v6, 1u, 0, 0LL);
    goto LABEL_38;
  }
  v7 = string;
  v28 = 0LL;
  v2 = -2147467261;
  if ( !v3 )
  {
LABEL_38:
    v9 = v2;
    goto LABEL_42;
  }
  v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, HWND *))v3)(v3, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v28);
  v9 = v8;
  if ( v8 < 0 )
  {
    v24 = 27LL;
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(HWND, HSTRING, int *))(*(_QWORD *)v28 + 64LL))(v28, v7, &v27);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = v28;
      if ( v28 )
      {
        v28 = 0LL;
        (*(void (__fastcall **)(HWND))(*(_QWORD *)v10 + 16LL))(v10);
      }
      goto LABEL_9;
    }
    v24 = 148LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v24,
    (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
    (const char *)(unsigned int)v8,
    v27);
LABEL_42:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
  if ( v9 < 0 )
    goto LABEL_10;
LABEL_9:
  if ( !(_BYTE)v27 )
  {
LABEL_10:
    v11 = 0;
    goto LABEL_11;
  }
  v11 = 1;
LABEL_11:
  if ( v11 )
  {
LABEL_61:
    v5 = 2;
    goto LABEL_32;
  }
  string = 0LL;
  v12 = WindowsCreateStringReference(L"DesignatedHolographicLaunch", 0x1Bu, &hstringHeader, &string);
  if ( v12 < 0 )
  {
    RaiseException(v12, 1u, 0, 0LL);
  }
  else
  {
    v13 = string;
    v28 = 0LL;
    if ( !v3 )
      goto LABEL_49;
    v14 = (**(__int64 (__fastcall ***)(__int64, GUID *, HWND *))v3)(
            v3,
            &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
            &v28);
    v2 = v14;
    if ( v14 >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(HWND, HSTRING, int *))(*(_QWORD *)v28 + 64LL))(v28, v13, &v27);
      v2 = v14;
      if ( v14 >= 0 )
      {
        v15 = v28;
        if ( v28 )
        {
          v28 = 0LL;
          (*(void (__fastcall **)(HWND))(*(_QWORD *)v15 + 16LL))(v15);
        }
        goto LABEL_18;
      }
      v25 = 148LL;
      goto LABEL_48;
    }
  }
  v25 = 27LL;
LABEL_48:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v25,
    (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
    (const char *)(unsigned int)v14,
    v27);
LABEL_49:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
  if ( v2 < 0 )
    goto LABEL_19;
LABEL_18:
  if ( !(_BYTE)v27 )
  {
LABEL_19:
    v16 = 0;
    goto LABEL_20;
  }
  v16 = 1;
LABEL_20:
  if ( v16 )
    goto LABEL_61;
  string = 0LL;
  v17 = WindowsCreateStringReference(L"ClientRequestedNavigationType", 0x1Du, &hstringHeader, &string);
  if ( v17 < 0 )
  {
    RaiseException(v17, 1u, 0, 0LL);
    JUMPOUT(0x1800C16F6LL);
  }
  v29 = 1;
  if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v30, string, v18, &v31) >= 0
    && v31 == 1 )
  {
    string = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdTo", 0x11u, 0x10u);
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v30, string, v26, &v28) >= 0 )
    {
      v29 = 0;
      if ( (int)HolographicPositioner::IsWindowManaged(
                  (HolographicPositioner *)(a1 + 136),
                  (HWND)(unsigned int)v28,
                  &v29) >= 0 )
      {
        LOBYTE(v5) = v29 != 0;
        ++v5;
LABEL_31:
        v3 = v30;
        goto LABEL_32;
      }
    }
  }
  string = 0LL;
  v20 = -1LL;
  do
    ++v20;
  while ( aViewsizeprefer_2[v20] );
  if ( v20 > 0xFFFFFFFF )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800C1776LL);
  }
  if ( (int)v20 + 1 < (unsigned int)v20 )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800C17D3LL);
  }
  v21 = WindowsCreateStringReference(L"ViewSizePreferences.SourceWindow", v20, &hstringHeader, &string);
  if ( v21 < 0 )
  {
    RaiseException(v21, 1u, 0, 0LL);
    JUMPOUT(0x1800C1791LL);
  }
  if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v30, string, v22, &v32) < 0
    || (int)Windows::Internal::Shell::Holographic::GetWindowDisplayContext(v32, 1LL, &v28) < 0 )
  {
    goto LABEL_31;
  }
  LOBYTE(v5) = (_DWORD)v28 == 1;
  ++v5;
  v3 = v30;
LABEL_32:
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return v5;
}
