/*
 * XREFs of ?SetOriginatingActivationPropertySet@Holographic@Shell@Internal@Windows@@YAJPEAUIPropertySet@Collections@Foundation@4@0@Z @ 0x18003D838
 * Callers:
 *     _lambda_2e7b32d2edc288bf881b316e628c52db_::operator() @ 0x18003E2C0 (_lambda_2e7b32d2edc288bf881b316e628c52db_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::Shell::Holographic::SetOriginatingActivationPropertySet(
        Windows::Internal::Shell::Holographic *this,
        struct Windows::Foundation::Collections::IPropertySet *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  HRESULT v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  _BYTE v11[8]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v12[2]; // [rsp+38h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-30h] BYREF
  HSTRING string; // [rsp+60h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v12[1] = -2LL;
  v12[0] = 0LL;
  v4 = (**(__int64 (__fastcall ***)(Windows::Internal::Shell::Holographic *, GUID *, _QWORD *))this)(
         this,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         v12);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v11[0] = 0;
    v6 = v12[0];
    string = 0LL;
    v7 = WindowsCreateStringReference(L"ActivationPropertySet", 0x15u, &hstringHeader, &string);
    if ( v7 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
    v8 = (*(__int64 (__fastcall **)(__int64, HSTRING, struct Windows::Foundation::Collections::IPropertySet *, _BYTE *))(*(_QWORD *)v6 + 80LL))(
           v6,
           string,
           a2,
           v11);
    v5 = v8;
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x38,
        (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\holographicpropertysethelpers.h",
        (const char *)(unsigned int)v8);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x35,
      (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\holographicpropertysethelpers.h",
      (const char *)(unsigned int)v4);
  }
  v9 = v12[0];
  if ( v12[0] )
  {
    v12[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v5;
}
