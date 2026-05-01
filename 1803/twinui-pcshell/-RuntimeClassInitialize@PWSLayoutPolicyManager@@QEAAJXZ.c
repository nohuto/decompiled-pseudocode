/*
 * XREFs of ?RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ @ 0x18019B3F8
 * Callers:
 *     ??$MakeAndInitialize@VPWSLayoutPolicyManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18019A294 (--$MakeAndInitialize@VPWSLayoutPolicyManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIU.c)
 * Callees:
 *     ?_com_issue_error@@YAXJ@Z @ 0x180100340 (-_com_issue_error@@YAXJ@Z.c)
 *     ??0_variant_t@@QEAA@PEBG@Z @ 0x180145994 (--0_variant_t@@QEAA@PEBG@Z.c)
 *     ?make_bstr@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG@Z @ 0x180149A68 (-make_bstr@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFre.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180149B38 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFreeString@@YAX0@ZU-$integral_con.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PWSLayoutPolicyManager::RuntimeClassInitialize(
        PWSLayoutPolicyManager *this,
        const unsigned __int16 *a2)
{
  const VARIANTARG *v3; // rax
  HRESULT v4; // eax
  HRESULT v5; // eax
  OLECHAR **bstr; // rax
  OLECHAR **v7; // rbx
  OLECHAR **v8; // rax
  const char *v9; // r9
  OLECHAR **v10; // rbx
  VARIANTARG pvarg; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  BSTR bstrString; // [rsp+58h] [rbp+10h] BYREF

  try
  {
    v3 = (const VARIANTARG *)_variant_t::_variant_t((_variant_t *)&pvarg, a2);
    v4 = VariantCopy((VARIANTARG *)((char *)this + 80), v3);
    if ( v4 < 0 )
      _com_issue_error((char *)(unsigned int)v4);
    v5 = VariantClear(&pvarg);
    if ( v5 < 0 )
      _com_issue_error((char *)(unsigned int)v5);
    bstr = wil::make_bstr(&bstrString, L"SelectionNamespaces");
    v7 = bstr;
    if ( (OLECHAR **)((char *)this + 104) != bstr )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        (OLECHAR **)this + 13,
        *bstr);
      *v7 = 0LL;
    }
    if ( bstrString )
      SysFreeString(bstrString);
    v8 = wil::make_bstr(&bstrString, L"/l:LayoutModificationTemplate/l:InkWorkspaceTopApps");
    v10 = v8;
    if ( (OLECHAR **)((char *)this + 120) != v8 )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        (OLECHAR **)this + 15,
        *v8);
      *v10 = 0LL;
    }
    if ( bstrString )
      SysFreeString(bstrString);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x55,
                           (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
                           v9);
  }
  return 0LL;
}
