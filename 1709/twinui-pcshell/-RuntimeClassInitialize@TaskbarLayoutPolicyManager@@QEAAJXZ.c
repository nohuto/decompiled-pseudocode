/*
 * XREFs of ?RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ @ 0x180088954
 * Callers:
 *     ??$MakeAndInitialize@VTaskbarLayoutPolicyManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18008C658 (--$MakeAndInitialize@VTaskbarLayoutPolicyManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPE.c)
 * Callees:
 *     ?_com_issue_error@@YAXJ@Z @ 0x18000506C (-_com_issue_error@@YAXJ@Z.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18008BD48 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFreeString@@YAX0@ZU-$.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008CDC4 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TaskbarLayoutPolicyManager::RuntimeClassInitialize(TaskbarLayoutPolicyManager *this)
{
  BSTR v2; // rax
  const char *v3; // r9
  const char *v4; // r9
  const char *v5; // r9
  const char *v6; // r9
  const char *v7; // r9
  VARIANTARG pvargSrc; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  BSTR bstrString; // [rsp+60h] [rbp+18h] BYREF

  try
  {
    v2 = SysAllocString(
           L"xmlns:d='http://schemas.microsoft.com/Start/2014/FullDefaultLayout' xmlns:l='http://schemas.microsoft.com/Sta"
            "rt/2014/LayoutModification' xmlns:t='http://schemas.microsoft.com/Start/2014/TaskbarLayout'");
    if ( !v2 )
      _com_issue_error();
    pvargSrc.vt = 8;
    pvargSrc.llVal = (LONGLONG)v2;
    if ( VariantCopy((VARIANTARG *)((char *)this + 80), &pvargSrc) < 0 )
      _com_issue_error();
    if ( VariantClear(&pvargSrc) < 0 )
      _com_issue_error();
    bstrString = SysAllocString(L"SelectionNamespaces");
    if ( !bstrString )
      wil::details::in1diag3::_Throw_NullAlloc(
        retaddr,
        (void *)0x10E3,
        (unsigned int)"internal\\sdk\\inc\\wil\\Resource.h",
        v3);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::operator=(
      (char *)this + 104,
      &bstrString);
    if ( bstrString )
      SysFreeString(bstrString);
    bstrString = SysAllocString(L"/d:FullDefaultLayoutTemplate/d:TaskbarLayoutCollection");
    if ( !bstrString )
      wil::details::in1diag3::_Throw_NullAlloc(
        retaddr,
        (void *)0x10E3,
        (unsigned int)"internal\\sdk\\inc\\wil\\Resource.h",
        v4);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::operator=(
      (char *)this + 112,
      &bstrString);
    if ( bstrString )
      SysFreeString(bstrString);
    bstrString = SysAllocString(L"/l:LayoutModificationTemplate/l:CustomTaskbarLayoutCollection");
    if ( !bstrString )
      wil::details::in1diag3::_Throw_NullAlloc(
        retaddr,
        (void *)0x10E3,
        (unsigned int)"internal\\sdk\\inc\\wil\\Resource.h",
        v5);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::operator=(
      (char *)this + 120,
      &bstrString);
    if ( bstrString )
      SysFreeString(bstrString);
    bstrString = SysAllocString(L"PinListPlacement");
    if ( !bstrString )
      wil::details::in1diag3::_Throw_NullAlloc(
        retaddr,
        (void *)0x10E3,
        (unsigned int)"internal\\sdk\\inc\\wil\\Resource.h",
        v6);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::operator=(
      (char *)this + 128,
      &bstrString);
    if ( bstrString )
      SysFreeString(bstrString);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x6C,
                           (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
                           v7);
  }
  return 0LL;
}
