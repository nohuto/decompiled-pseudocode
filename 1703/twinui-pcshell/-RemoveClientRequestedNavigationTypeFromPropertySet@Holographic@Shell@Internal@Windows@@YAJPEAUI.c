/*
 * XREFs of ?RemoveClientRequestedNavigationTypeFromPropertySet@Holographic@Shell@Internal@Windows@@YAJPEAUIPropertySet@Collections@Foundation@4@@Z @ 0x1800D6F28
 * Callers:
 *     ?_HandleAppActivationResponse@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800DAE34 (-_HandleAppActivationResponse@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::Shell::Holographic::RemoveClientRequestedNavigationTypeFromPropertySet(
        Windows::Internal::Shell::Holographic *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rbx
  HRESULT v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-48h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-38h] BYREF
  HSTRING string; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v9[1] = -2LL;
  v9[0] = 0LL;
  v2 = (**(__int64 (__fastcall ***)(Windows::Internal::Shell::Holographic *, GUID *, _QWORD *))this)(
         this,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         v9);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = v9[0];
    string = 0LL;
    v5 = WindowsCreateStringReference(L"ClientRequestedNavigationType", 0x1Du, &hstringHeader, &string);
    if ( v5 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
    v6 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v4 + 88LL))(v4, string);
    v3 = v6;
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x42,
        (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\holographicpropertysethelpers.h",
        (const char *)(unsigned int)v6);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x41,
      (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\holographicpropertysethelpers.h",
      (const char *)(unsigned int)v2);
  }
  v7 = v9[0];
  if ( v9[0] )
  {
    v9[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v3;
}
