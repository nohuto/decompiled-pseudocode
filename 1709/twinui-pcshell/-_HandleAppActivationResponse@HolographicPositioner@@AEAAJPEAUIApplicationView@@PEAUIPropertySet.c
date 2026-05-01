/*
 * XREFs of ?_HandleAppActivationResponse@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FF5F4
 * Callers:
 *     ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1800FB940 (-ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAU_GUID@@@Z1@Z @ 0x180018BA4 (--$_GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPr.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?SetGuid@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@U_GUID@@@Z @ 0x1800C970C (-SetGuid@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@U_GUID@@@Z.c)
 *     ?GetOriginatingActivationPropertySet@Holographic@Shell@Internal@Windows@@YAJPEAUIPropertySet@Collections@Foundation@4@PEAPEAU5674@@Z @ 0x1800FA194 (-GetOriginatingActivationPropertySet@Holographic@Shell@Internal@Windows@@YAJPEAUIPropertySet@Col.c)
 *     ?RemoveClientRequestedNavigationTypeFromPropertySet@Holographic@Shell@Internal@Windows@@YAJPEAUIPropertySet@Collections@Foundation@4@@Z @ 0x1800FA300 (-RemoveClientRequestedNavigationTypeFromPropertySet@Holographic@Shell@Internal@Windows@@YAJPEAUI.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall HolographicPositioner::_HandleAppActivationResponse(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  struct Windows::Foundation::Collections::IPropertySet *v4; // rbx
  HRESULT v5; // eax
  struct Windows::Foundation::IPropertyValue *v6; // r8
  int v7; // eax
  int v8; // edi
  HRESULT v9; // eax
  int v10; // eax
  int v11; // edi
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  HRESULT v14; // eax
  struct Windows::Foundation::Collections::IPropertySet *v15; // rdx
  HSTRING v16; // r14
  PVOID Reserved1; // rcx
  int v18; // edi
  int v19; // eax
  int v20; // eax
  PVOID v21; // rcx
  int v23; // eax
  __int64 v24; // rcx
  _BYTE v26[8]; // [rsp+28h] [rbp-49h] BYREF
  __int64 v27; // [rsp+30h] [rbp-41h] BYREF
  __int64 v28; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v29[3]; // [rsp+40h] [rbp-31h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-19h] BYREF
  HSTRING string; // [rsp+70h] [rbp-1h] BYREF
  HSTRING_HEADER v32; // [rsp+78h] [rbp+7h] BYREF
  HSTRING v33; // [rsp+90h] [rbp+1Fh] BYREF
  GUID v34; // [rsp+98h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v29[1] = -2LL;
  v27 = 0LL;
  v34 = GUID_NULL;
  if ( (int)Windows::Internal::Shell::Holographic::GetOriginatingActivationPropertySet(
              a3,
              (struct Windows::Foundation::Collections::IPropertySet *)&v27,
              (struct Windows::Foundation::Collections::IPropertySet **)a3) < 0 )
  {
LABEL_49:
    v11 = 0;
    goto LABEL_50;
  }
  v4 = a3;
  v29[0] = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a3 + 8LL))(a3);
  v28 = v27;
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
  v34 = GUID_NULL;
  string = 0LL;
  v5 = WindowsCreateStringReference(L"AppInstanceId", 0xDu, &hstringHeader, &string);
  if ( v5 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
  v7 = Windows::Internal::ShellHelpers::PropertySetHelper::_GetValue<_GUID>(
         (Windows::Internal::ShellHelpers::PropertySetHelper *)&v28,
         string,
         v6,
         (__int64)&v34);
  v8 = v7;
  string = 0LL;
  if ( v7 >= 0 )
    v8 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x12,
      (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\holographicpropertysethelpers.h",
      (const char *)(unsigned int)v7);
  if ( v8 < 0 )
  {
LABEL_45:
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    if ( v4 )
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v4 + 16LL))(v4);
    goto LABEL_49;
  }
  *(GUID *)&hstringHeader.Reserved.Reserved1 = v34;
  v33 = 0LL;
  v9 = WindowsCreateStringReference(L"AppInstanceId", 0xDu, &v32, &v33);
  if ( v9 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
  v10 = Windows::Internal::ShellHelpers::PropertySetHelper::SetGuid(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)v29,
          v33,
          (struct _GUID *)&hstringHeader);
  v11 = v10;
  v33 = 0LL;
  if ( v10 >= 0 )
    v11 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1A,
      (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\holographicpropertysethelpers.h",
      (const char *)(unsigned int)v10);
  v4 = (struct Windows::Foundation::Collections::IPropertySet *)v29[0];
  if ( v11 >= 0 )
  {
    v33 = 0LL;
    v14 = WindowsCreateStringReference(L"ClientRequestedNavigationType", 0x1Du, &v32, &v33);
    if ( v14 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14);
    v16 = v33;
    Reserved1 = 0LL;
    hstringHeader.Reserved.Reserved1 = 0LL;
    if ( v4 )
    {
      v19 = (**(__int64 (__fastcall ***)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, HSTRING_HEADER *))v4)(
              v4,
              &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
              &hstringHeader);
      v18 = v19;
      if ( v19 >= 0 )
        v18 = 0;
      else
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x1B,
          (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
          (const char *)(unsigned int)v19);
      Reserved1 = hstringHeader.Reserved.Reserved1;
      if ( v18 >= 0 )
      {
        v20 = (*(__int64 (__fastcall **)(PVOID, HSTRING, _BYTE *))(*(_QWORD *)hstringHeader.Reserved.Reserved1 + 64LL))(
                hstringHeader.Reserved.Reserved1,
                v16,
                v26);
        v18 = v20;
        if ( v20 >= 0 )
        {
          v21 = hstringHeader.Reserved.Reserved1;
          if ( hstringHeader.Reserved.Reserved1 )
          {
            hstringHeader.Reserved.Reserved1 = 0LL;
            (*(void (__fastcall **)(PVOID))(*(_QWORD *)v21 + 16LL))(v21);
          }
          v18 = 0;
LABEL_34:
          if ( v18 >= 0 && v26[0] )
          {
            v23 = Windows::Internal::Shell::Holographic::RemoveClientRequestedNavigationTypeFromPropertySet(a3, v15);
            v11 = v23;
            if ( v23 < 0 )
            {
              v12 = (unsigned int)v23;
              v13 = 1656LL;
              goto LABEL_41;
            }
          }
          goto LABEL_45;
        }
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x64,
          (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
          (const char *)(unsigned int)v20);
        Reserved1 = hstringHeader.Reserved.Reserved1;
      }
    }
    else
    {
      v18 = -2147467261;
    }
    if ( Reserved1 )
    {
      hstringHeader.Reserved.Reserved1 = 0LL;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Reserved1 + 16LL))(Reserved1);
    }
    goto LABEL_34;
  }
  v12 = (unsigned int)v11;
  v13 = 1651LL;
LABEL_41:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)v12);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v4 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v4 + 16LL))(v4);
LABEL_50:
  v24 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  return (unsigned int)v11;
}
