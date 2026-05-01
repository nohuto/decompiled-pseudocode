/*
 * XREFs of ?GetOriginatingActivationPropertySet@Holographic@Shell@Internal@Windows@@YAJPEAUIPropertySet@Collections@Foundation@4@PEAPEAU5674@@Z @ 0x1800FA194
 * Callers:
 *     ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800FB720 (-ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?_HandleAppActivationResponse@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FF5F4 (-_HandleAppActivationResponse@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::Shell::Holographic::GetOriginatingActivationPropertySet(
        Windows::Internal::Shell::Holographic *this,
        struct Windows::Foundation::Collections::IPropertySet *a2,
        struct Windows::Foundation::Collections::IPropertySet **a3)
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rbx
  HRESULT v7; // eax
  int v8; // eax
  __int64 (__fastcall ***v9)(_QWORD, GUID *, struct Windows::Foundation::Collections::IPropertySet *); // rcx
  __int64 v10; // rcx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, struct Windows::Foundation::Collections::IPropertySet *); // [rsp+20h] [rbp-40h] BYREF
  _QWORD v13[2]; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  HSTRING string; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v13[1] = -2LL;
  *(_QWORD *)a2 = 0LL;
  v13[0] = 0LL;
  v4 = (**(__int64 (__fastcall ***)(Windows::Internal::Shell::Holographic *, GUID *, _QWORD *))this)(
         this,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         v13);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v12 = 0LL;
    v6 = v13[0];
    string = 0LL;
    v7 = WindowsCreateStringReference(L"ActivationPropertySet", 0x15u, &hstringHeader, &string);
    if ( v7 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
    v5 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v6 + 48LL))(v6, string, &v12);
    if ( v5 >= 0 )
    {
      v8 = (**v12)(v12, &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c, a2);
      v5 = v8;
      if ( v8 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2C,
          (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\holographicpropertysethelpers.h",
          (const char *)(unsigned int)v8);
    }
    v9 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct Windows::Foundation::Collections::IPropertySet *)))(*v9)[2])(v9);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x27,
      (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\holographicpropertysethelpers.h",
      (const char *)(unsigned int)v4);
  }
  v10 = v13[0];
  if ( v13[0] )
  {
    v13[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return (unsigned int)v5;
}
