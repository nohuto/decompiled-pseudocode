/*
 * XREFs of ?RuntimeClassInitialize@TaskbarLayoutParser@@QEAAJXZ @ 0x18008D550
 * Callers:
 *     ?TaskbarLayoutParser_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18008E728 (-TaskbarLayoutParser_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18008BD48 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFreeString@@YAX0@ZU-$.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008CDC4 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TaskbarLayoutParser::RuntimeClassInitialize(OLECHAR **this)
{
  const char *v2; // r9
  const char *v3; // r9
  const char *v4; // r9
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  BSTR bstrString; // [rsp+50h] [rbp+18h] BYREF

  try
  {
    bstrString = SysAllocString(L"AppUserModelID");
    if ( !bstrString )
      wil::details::in1diag3::_Throw_NullAlloc(
        retaddr,
        (void *)0x10E3,
        (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
        v2);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::operator=(
      this + 2,
      &bstrString);
    if ( bstrString )
      SysFreeString(bstrString);
    bstrString = SysAllocString(L"DesktopApplicationID");
    if ( !bstrString )
      wil::details::in1diag3::_Throw_NullAlloc(
        retaddr,
        (void *)0x10E3,
        (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
        v3);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::operator=(
      this + 3,
      &bstrString);
    if ( bstrString )
      SysFreeString(bstrString);
    bstrString = SysAllocString(L"DesktopApplicationLinkPath");
    if ( !bstrString )
      wil::details::in1diag3::_Throw_NullAlloc(
        retaddr,
        (void *)0x10E3,
        (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
        v4);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::operator=(
      this + 4,
      &bstrString);
    if ( bstrString )
      SysFreeString(bstrString);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x52,
                           (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
                           v5);
  }
  return 0LL;
}
