/*
 * XREFs of ?_IsPropertySetContextHolographic@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800D9AA0
 * Callers:
 *     ?EvaluateHolographicContext@HolographicPositioner@@UEAAJPEAUIUnknown@@PEAH@Z @ 0x1800D7F00 (-EvaluateHolographicContext@HolographicPositioner@@UEAAJPEAUIUnknown@@PEAH@Z.c)
 *     ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800D9A50 (-_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@C.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionOptions@1234@PEAW4UserDisplayContext@1234@@Z @ 0x1800D565C (-GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionO.c)
 *     ?GetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z @ 0x1800D6CF0 (-GetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z.c)
 *     ?IsWindowManaged@HolographicPositioner@@UEAAJPEAUHWND__@@PEAH@Z @ 0x1800D9870 (-IsWindowManaged@HolographicPositioner@@UEAAJPEAUHWND__@@PEAH@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
char __fastcall HolographicPositioner::_IsPropertySetContextHolographic(
        HolographicPositioner *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  struct Windows::Foundation::Collections::IPropertySet *v2; // rbx
  HRESULT v4; // eax
  HSTRING v5; // rdi
  HWND v6; // rcx
  int v7; // esi
  int v8; // r14d
  int v9; // eax
  int v10; // eax
  HWND v11; // rcx
  char v12; // di
  char v13; // al
  HRESULT v14; // eax
  HSTRING v15; // r14
  HWND v16; // rcx
  int v17; // eax
  int v18; // eax
  HWND v19; // rcx
  char v20; // al
  HRESULT v21; // eax
  __int64 v22; // rdx
  HRESULT v23; // eax
  char v24; // al
  HRESULT v25; // eax
  _BYTE v27[8]; // [rsp+20h] [rbp-60h] BYREF
  HWND v28; // [rsp+28h] [rbp-58h] BYREF
  int v29; // [rsp+30h] [rbp-50h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v30; // [rsp+38h] [rbp-48h] BYREF
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
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a2 + 8LL))(a2);
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
  v9 = (**(__int64 (__fastcall ***)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, HWND *))v2)(
         v2,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v28);
  v8 = v9;
  if ( v9 >= 0 )
    v8 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x14,
      (__int64)"internal\\shell\\inc\\propertysethelpers.h",
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
      (void *)0x5D,
      (__int64)"internal\\shell\\inc\\propertysethelpers.h",
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
  v12 = 1;
  if ( v8 < 0 || (v13 = 1, !v27[0]) )
    v13 = 0;
  if ( !v13 )
  {
    string = 0LL;
    v14 = WindowsCreateStringReference(L"DesignatedHolographicLaunch", 0x1Bu, &hstringHeader, &string);
    if ( v14 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14);
    v15 = string;
    v16 = 0LL;
    v28 = 0LL;
    if ( v2 )
    {
      v17 = (**(__int64 (__fastcall ***)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, HWND *))v2)(
              v2,
              &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
              &v28);
      v7 = v17;
      if ( v17 >= 0 )
        v7 = 0;
      else
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x14,
          (__int64)"internal\\shell\\inc\\propertysethelpers.h",
          (const char *)(unsigned int)v17);
      v16 = v28;
      if ( v7 >= 0 )
      {
        v18 = (*(__int64 (__fastcall **)(HWND, HSTRING, _BYTE *))(*(_QWORD *)v28 + 64LL))(v28, v15, v27);
        v7 = v18;
        if ( v18 >= 0 )
        {
          v19 = v28;
          if ( v28 )
          {
            v28 = 0LL;
            (*(void (__fastcall **)(HWND))(*(_QWORD *)v19 + 16LL))(v19);
          }
          v7 = 0;
          goto LABEL_36;
        }
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x5D,
          (__int64)"internal\\shell\\inc\\propertysethelpers.h",
          (const char *)(unsigned int)v18);
        v16 = v28;
      }
    }
    if ( v16 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(HWND))(*(_QWORD *)v16 + 16LL))(v16);
    }
LABEL_36:
    if ( v7 < 0 || (v20 = 1, !v27[0]) )
      v20 = 0;
    if ( !v20 )
    {
      string = 0LL;
      v21 = WindowsCreateStringReference(L"ViewSizePreferences.SourceWindow", 0x20u, &hstringHeader, &string);
      if ( v21 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v21);
      if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
                  string,
                  &v31) < 0
        || (int)Windows::Internal::Shell::Holographic::GetWindowDisplayContext(v31, v22, (__int64)&v29) < 0
        || v29 != 1 )
      {
        string = 0LL;
        v23 = WindowsCreateStringReference(L"ClientRequestedNavigationType", 0x1Du, &hstringHeader, &string);
        if ( v23 < 0 )
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v23);
        v29 = 1;
        if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
                    (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
                    string,
                    &v32) < 0
          || (v24 = 1, v32 != 1) )
        {
          v24 = 0;
        }
        if ( !v24 )
          goto LABEL_56;
        string = 0LL;
        v25 = WindowsCreateStringReference(L"SwitchAsync_IdTo", 0x10u, &hstringHeader, &string);
        if ( v25 < 0 )
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v25);
        if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
                    (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
                    string,
                    (unsigned int *)&v28) < 0
          || (v29 = 0,
              (int)HolographicPositioner::IsWindowManaged(
                     (HolographicPositioner *)((char *)this + 112),
                     (HWND)(unsigned int)v28,
                     &v29) < 0)
          || !v29 )
        {
LABEL_56:
          v12 = 0;
        }
      }
      v2 = v30;
    }
  }
  if ( v2 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v2 + 16LL))(v2);
  return v12;
}
