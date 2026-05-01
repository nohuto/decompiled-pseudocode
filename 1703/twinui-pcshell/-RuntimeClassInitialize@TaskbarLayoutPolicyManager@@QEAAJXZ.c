/*
 * XREFs of ?RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ @ 0x180086648
 * Callers:
 *     ??$MakeAndInitialize@VTaskbarLayoutPolicyManager@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18008A2D4 (--$MakeAndInitialize@VTaskbarLayoutPolicyManager@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUI.c)
 * Callees:
 *     ?_com_issue_error@@YAXJ@Z @ 0x180004D30 (-_com_issue_error@@YAXJ@Z.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180089840 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFreeString@@YAX0@ZU-$.c)
 *     ?make_bstr@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG@Z @ 0x18008AA48 (-make_bstr@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFre.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskbarLayoutPolicyManager::RuntimeClassInitialize(TaskbarLayoutPolicyManager *this)
{
  BSTR v2; // rax
  __int64 bstr; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  const char *v7; // r9
  VARIANTARG pvargSrc; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  BSTR bstrString; // [rsp+58h] [rbp+10h] BYREF

  try
  {
    v2 = SysAllocString(
           L"xmlns:d='http://schemas.microsoft.com/Start/2014/FullDefaultLayout' xmlns:l='http://schemas.microsoft.com/Sta"
            "rt/2014/LayoutModification' xmlns:t='http://schemas.microsoft.com/Start/2014/TaskbarLayout'");
    if ( !v2 )
      _com_issue_error();
    pvargSrc.vt = 8;
    pvargSrc.llVal = (LONGLONG)v2;
    if ( VariantCopy((VARIANTARG *)((char *)this + 64), &pvargSrc) < 0 )
      _com_issue_error();
    if ( VariantClear(&pvargSrc) < 0 )
      _com_issue_error();
    bstr = wil::make_bstr(&bstrString, L"SelectionNamespaces");
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::operator=(
      (char *)this + 88,
      bstr);
    if ( bstrString )
      SysFreeString(bstrString);
    v4 = wil::make_bstr(&bstrString, L"/d:FullDefaultLayoutTemplate/d:TaskbarLayoutCollection");
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::operator=(
      (char *)this + 96,
      v4);
    if ( bstrString )
      SysFreeString(bstrString);
    v5 = wil::make_bstr(&bstrString, L"/l:LayoutModificationTemplate/l:CustomTaskbarLayoutCollection");
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::operator=(
      (char *)this + 104,
      v5);
    if ( bstrString )
      SysFreeString(bstrString);
    v6 = wil::make_bstr(&bstrString, L"PinListPlacement");
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::operator=(
      (char *)this + 112,
      v6);
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
