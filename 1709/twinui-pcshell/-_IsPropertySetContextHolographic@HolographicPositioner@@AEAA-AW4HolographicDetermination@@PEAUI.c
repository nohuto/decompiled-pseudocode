/*
 * XREFs of ?_IsPropertySetContextHolographic@HolographicPositioner@@AEAA?AW4HolographicDetermination@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FD3E0
 * Callers:
 *     ?EvaluateHolographicContext@HolographicPositioner@@UEAAJPEAUIUnknown@@PEAH@Z @ 0x1800FB340 (-EvaluateHolographicContext@HolographicPositioner@@UEAAJPEAUIUnknown@@PEAH@Z.c)
 *     ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FD218 (-_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@C.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionOptions@1234@PEAW4UserDisplayContext@1234@@Z @ 0x1800F892C (-GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionO.c)
 *     ?GetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z @ 0x1800FA0C8 (-GetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z.c)
 *     ?IsWindowManaged@HolographicPositioner@@UEAAJPEAUHWND__@@PEAH@Z @ 0x1800FD000 (-IsWindowManaged@HolographicPositioner@@UEAAJPEAUHWND__@@PEAH@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall HolographicPositioner::_IsPropertySetContextHolographic(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  HRESULT v4; // eax
  HSTRING v5; // r14
  HWND v6; // rcx
  int v7; // edi
  int v8; // esi
  int v9; // eax
  int v10; // eax
  HWND v11; // rcx
  char v12; // al
  HRESULT v13; // eax
  HSTRING v14; // rsi
  HWND v15; // rcx
  int v16; // eax
  int v17; // eax
  HWND v18; // rcx
  char v19; // al
  HRESULT v20; // eax
  BOOL v21; // edi
  HRESULT v22; // eax
  char v23; // al
  HRESULT v24; // eax
  unsigned int v25; // edi
  _BYTE v27[8]; // [rsp+20h] [rbp-60h] BYREF
  HWND v28; // [rsp+28h] [rbp-58h] BYREF
  int v29; // [rsp+30h] [rbp-50h] BYREF
  __int64 v30; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v31; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v32; // [rsp+44h] [rbp-3Ch] BYREF
  __int64 v33; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v33 = -2LL;
  v2 = a2;
  v29 = 0;
  v30 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  string = 0LL;
  v4 = WindowsCreateStringReference(L"AppInstanceId", 0xDu, &hstringHeader, &string);
  if ( v4 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4);
  v5 = string;
  v6 = 0LL;
  v28 = 0LL;
  v7 = -2147467261;
  if ( !v2 )
  {
    v8 = -2147467261;
    goto LABEL_11;
  }
  v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, HWND *))v2)(v2, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v28);
  v8 = v9;
  if ( v9 >= 0 )
    v8 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1B,
      (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v9);
  v6 = v28;
  if ( v8 < 0 )
  {
LABEL_11:
    if ( v6 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(HWND))(*(_QWORD *)v6 + 16LL))(v6);
    }
    goto LABEL_18;
  }
  v10 = (*(__int64 (__fastcall **)(HWND, HSTRING, _BYTE *))(*(_QWORD *)v28 + 64LL))(v28, v5, v27);
  v8 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x64,
      (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v10);
    v6 = v28;
    goto LABEL_11;
  }
  v11 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(HWND))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v8 = 0;
LABEL_18:
  if ( v8 < 0 || (v12 = 1, !v27[0]) )
    v12 = 0;
  if ( v12 )
    goto LABEL_59;
  string = 0LL;
  v13 = WindowsCreateStringReference(L"DesignatedHolographicLaunch", 0x1Bu, &hstringHeader, &string);
  if ( v13 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
  v14 = string;
  v15 = 0LL;
  v28 = 0LL;
  if ( !v2 )
    goto LABEL_29;
  v16 = (**(__int64 (__fastcall ***)(__int64, GUID *, HWND *))v2)(v2, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v28);
  v7 = v16;
  if ( v16 >= 0 )
    v7 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1B,
      (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v16);
  v15 = v28;
  if ( v7 < 0 )
    goto LABEL_29;
  v17 = (*(__int64 (__fastcall **)(HWND, HSTRING, _BYTE *))(*(_QWORD *)v28 + 64LL))(v28, v14, v27);
  v7 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x64,
      (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v17);
    v15 = v28;
LABEL_29:
    if ( v15 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(HWND))(*(_QWORD *)v15 + 16LL))(v15);
    }
    goto LABEL_36;
  }
  v18 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(HWND))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v7 = 0;
LABEL_36:
  if ( v7 < 0 || (v19 = 1, !v27[0]) )
    v19 = 0;
  if ( !v19 )
  {
    string = 0LL;
    v20 = WindowsCreateStringReference(L"ViewSizePreferences.SourceWindow", 0x20u, &hstringHeader, &string);
    if ( v20 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v20);
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
                string,
                &v31) < 0
      || (int)Windows::Internal::Shell::Holographic::GetWindowDisplayContext(v31, 1u, (__int64)&v29) < 0 )
    {
      string = 0LL;
      v22 = WindowsCreateStringReference(L"ClientRequestedNavigationType", 0x1Du, &hstringHeader, &string);
      if ( v22 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v22);
      v29 = 1;
      if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
                  string,
                  &v32) < 0
        || (v23 = 1, v32 != 1) )
      {
        v23 = 0;
      }
      if ( !v23 )
        goto LABEL_57;
      string = 0LL;
      v24 = WindowsCreateStringReference(L"SwitchAsync_IdTo", 0x10u, &hstringHeader, &string);
      if ( v24 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v24);
      if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
                  string,
                  (unsigned int *)&v28) < 0
        || (v29 = 0,
            (int)HolographicPositioner::IsWindowManaged(
                   (HolographicPositioner *)(a1 + 136),
                   (HWND)(unsigned int)v28,
                   &v29) < 0) )
      {
LABEL_57:
        v25 = 0;
        goto LABEL_58;
      }
      v21 = v29 != 0;
    }
    else
    {
      v21 = v29 == 1;
    }
    v25 = v21 + 1;
LABEL_58:
    v2 = v30;
    goto LABEL_60;
  }
LABEL_59:
  v25 = 2;
LABEL_60:
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return v25;
}
