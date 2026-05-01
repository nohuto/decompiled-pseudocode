/*
 * XREFs of ?_HandleAppActivationResponse@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800DAE34
 * Callers:
 *     ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1800D8600 (-ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?GetGuid@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAU_GUID@@@Z @ 0x18003C2CC (-GetGuid@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAU_GUID@@@Z.c)
 *     ?SetGuid@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@U_GUID@@@Z @ 0x1800B53DC (-SetGuid@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@U_GUID@@@Z.c)
 *     ?GetOriginatingActivationPropertySet@Holographic@Shell@Internal@Windows@@YAJPEAUIPropertySet@Collections@Foundation@4@PEAPEAU5674@@Z @ 0x1800D6DBC (-GetOriginatingActivationPropertySet@Holographic@Shell@Internal@Windows@@YAJPEAUIPropertySet@Col.c)
 *     ?RemoveClientRequestedNavigationTypeFromPropertySet@Holographic@Shell@Internal@Windows@@YAJPEAUIPropertySet@Collections@Foundation@4@@Z @ 0x1800D6F28 (-RemoveClientRequestedNavigationTypeFromPropertySet@Holographic@Shell@Internal@Windows@@YAJPEAUI.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall HolographicPositioner::_HandleAppActivationResponse(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  struct Windows::Foundation::Collections::IPropertySet *v4; // rbx
  HRESULT v5; // eax
  int Guid; // eax
  int v7; // edi
  HRESULT v8; // eax
  int v9; // eax
  int v10; // edi
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  HRESULT v13; // eax
  struct Windows::Foundation::Collections::IPropertySet *v14; // rdx
  HSTRING v15; // r14
  PVOID Reserved1; // rcx
  int v17; // edi
  int v18; // eax
  int v19; // eax
  PVOID v20; // rcx
  int v22; // eax
  __int64 v23; // rcx
  _BYTE v25[8]; // [rsp+28h] [rbp-49h] BYREF
  __int64 v26; // [rsp+30h] [rbp-41h] BYREF
  __int64 v27; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v28[3]; // [rsp+40h] [rbp-31h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-19h] BYREF
  HSTRING string; // [rsp+70h] [rbp-1h] BYREF
  HSTRING_HEADER v31; // [rsp+78h] [rbp+7h] BYREF
  HSTRING v32; // [rsp+90h] [rbp+1Fh] BYREF
  struct _GUID v33; // [rsp+98h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v28[1] = -2LL;
  v26 = 0LL;
  v33 = GUID_NULL;
  if ( (int)Windows::Internal::Shell::Holographic::GetOriginatingActivationPropertySet(
              a3,
              (struct Windows::Foundation::Collections::IPropertySet *)&v26,
              (struct Windows::Foundation::Collections::IPropertySet **)a3) < 0 )
  {
LABEL_49:
    v10 = 0;
    goto LABEL_50;
  }
  v4 = a3;
  v28[0] = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a3 + 8LL))(a3);
  v27 = v26;
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
  v33 = GUID_NULL;
  string = 0LL;
  v5 = WindowsCreateStringReference(L"AppInstanceId", 0xDu, &hstringHeader, &string);
  if ( v5 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
  Guid = Windows::Internal::ShellHelpers::PropertySetHelper::GetGuid(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)&v27,
           string,
           &v33);
  v7 = Guid;
  string = 0LL;
  if ( Guid >= 0 )
    v7 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x12,
      (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\holographicpropertysethelpers.h",
      (const char *)(unsigned int)Guid);
  if ( v7 < 0 )
  {
LABEL_45:
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    if ( v4 )
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v4 + 16LL))(v4);
    goto LABEL_49;
  }
  *(struct _GUID *)&hstringHeader.Reserved.Reserved1 = v33;
  v32 = 0LL;
  v8 = WindowsCreateStringReference(L"AppInstanceId", 0xDu, &v31, &v32);
  if ( v8 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8);
  v9 = Windows::Internal::ShellHelpers::PropertySetHelper::SetGuid(
         (Windows::Internal::ShellHelpers::PropertySetHelper *)v28,
         v32,
         (struct _GUID *)&hstringHeader);
  v10 = v9;
  v32 = 0LL;
  if ( v9 >= 0 )
    v10 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1A,
      (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\holographicpropertysethelpers.h",
      (const char *)(unsigned int)v9);
  v4 = (struct Windows::Foundation::Collections::IPropertySet *)v28[0];
  if ( v10 >= 0 )
  {
    v32 = 0LL;
    v13 = WindowsCreateStringReference(L"ClientRequestedNavigationType", 0x1Du, &v31, &v32);
    if ( v13 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
    v15 = v32;
    Reserved1 = 0LL;
    hstringHeader.Reserved.Reserved1 = 0LL;
    if ( v4 )
    {
      v18 = (**(__int64 (__fastcall ***)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, HSTRING_HEADER *))v4)(
              v4,
              &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
              &hstringHeader);
      v17 = v18;
      if ( v18 >= 0 )
        v17 = 0;
      else
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x14,
          (__int64)"internal\\shell\\inc\\propertysethelpers.h",
          (const char *)(unsigned int)v18);
      Reserved1 = hstringHeader.Reserved.Reserved1;
      if ( v17 >= 0 )
      {
        v19 = (*(__int64 (__fastcall **)(PVOID, HSTRING, _BYTE *))(*(_QWORD *)hstringHeader.Reserved.Reserved1 + 64LL))(
                hstringHeader.Reserved.Reserved1,
                v15,
                v25);
        v17 = v19;
        if ( v19 >= 0 )
        {
          v20 = hstringHeader.Reserved.Reserved1;
          if ( hstringHeader.Reserved.Reserved1 )
          {
            hstringHeader.Reserved.Reserved1 = 0LL;
            (*(void (__fastcall **)(PVOID))(*(_QWORD *)v20 + 16LL))(v20);
          }
          v17 = 0;
LABEL_34:
          if ( v17 >= 0 && v25[0] )
          {
            v22 = Windows::Internal::Shell::Holographic::RemoveClientRequestedNavigationTypeFromPropertySet(a3, v14);
            v10 = v22;
            if ( v22 < 0 )
            {
              v11 = (unsigned int)v22;
              v12 = 1313LL;
              goto LABEL_41;
            }
          }
          goto LABEL_45;
        }
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x5D,
          (__int64)"internal\\shell\\inc\\propertysethelpers.h",
          (const char *)(unsigned int)v19);
        Reserved1 = hstringHeader.Reserved.Reserved1;
      }
    }
    else
    {
      v17 = -2147467261;
    }
    if ( Reserved1 )
    {
      hstringHeader.Reserved.Reserved1 = 0LL;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Reserved1 + 16LL))(Reserved1);
    }
    goto LABEL_34;
  }
  v11 = (unsigned int)v10;
  v12 = 1308LL;
LABEL_41:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)v11);
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  if ( v4 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v4 + 16LL))(v4);
LABEL_50:
  v23 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  return (unsigned int)v10;
}
