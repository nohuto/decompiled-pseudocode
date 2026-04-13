/*
 * XREFs of ?GetTargetedContentNodes@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AV?$vector@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x18008A008
 * Callers:
 *     ?ExtractTargetedContentTilesInLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ @ 0x18008D070 (-ExtractTargetedContentTilesInLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramewo.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Xlen@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEBAXXZ @ 0x180033AFC (-_Xlen@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$all.c)
 *     ?_Reallocate@?$vector@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@IEAAX_K@Z @ 0x18008E094 (-_Reallocate@-$vector@V-$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities::GetTargetedContentNodes(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // r14
  unsigned __int64 v4; // rax
  UINT32 v5; // edi
  int v6; // eax
  int v7; // eax
  unsigned int v8; // esi
  int v9; // eax
  unsigned __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // r9
  __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r8
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r8
  _QWORD *v24; // rcx
  __int64 v26; // [rsp+20h] [rbp-60h] BYREF
  unsigned int v27; // [rsp+28h] [rbp-58h] BYREF
  __int64 v28; // [rsp+30h] [rbp-50h] BYREF
  int v29; // [rsp+38h] [rbp-48h]
  __int64 v30; // [rsp+40h] [rbp-40h]
  _QWORD *v31; // [rsp+48h] [rbp-38h]
  HSTRING string; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v30 = -2LL;
  v31 = a2;
  v29 = 0;
  v28 = 0LL;
  v3 = *a1;
  v4 = -1LL;
  do
    ++v4;
  while ( aStartTargetedc[v4] );
  v5 = -1;
  if ( v4 > 0xFFFFFFFF )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  else
    v5 = v4;
  WindowsCreateStringReference(L"start:TargetedContentTile", v5, &hstringHeader, &string);
  v6 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v3 + 128LL))(v3, string, &v28);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x89,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\targetedcontentlayoutxmlutilities.h",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v28 + 48LL))(v28, &v27);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x8D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\targetedcontentlayoutxmlutilities.h",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v29 = 1;
  v8 = 0;
  if ( v27 )
  {
    while ( 1 )
    {
      v26 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v28 + 56LL))(v28, v8, &v26);
      if ( v9 < 0 )
      {
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x93,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\targetedcontentlayoutxmlutilities.h",
          (const char *)(unsigned int)v9);
        goto LABEL_44;
      }
      v10 = a2[1];
      if ( (unsigned __int64)&v26 < v10 && *a2 <= (unsigned __int64)&v26 )
        break;
      v19 = a2[2];
      if ( v10 == v19 && !((__int64)(v19 - v10) >> 3) )
      {
        v20 = (__int64)(v10 - *a2) >> 3;
        if ( v20 == 0x1FFFFFFFFFFFFFFFLL )
          std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Xlen();
        v21 = v20 + 1;
        v22 = (v19 - *a2) >> 3;
        v23 = 0LL;
        if ( 0x1FFFFFFFFFFFFFFFLL - (v22 >> 1) >= v22 )
          v23 = v22 + (v22 >> 1);
        if ( v23 >= v21 )
          v21 = v23;
        std::vector<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>::_Reallocate(a2, v21);
      }
      v24 = (_QWORD *)a2[1];
      if ( !v24 )
        goto LABEL_36;
      *v24 = v26;
      v18 = v26;
      if ( v26 )
        goto LABEL_35;
LABEL_37:
      a2[1] += 8LL;
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      if ( ++v8 >= v27 )
        goto LABEL_44;
    }
    v11 = ((__int64)&v26 - *a2) >> 3;
    v12 = a2[2];
    if ( v10 == v12 && !((__int64)(v12 - v10) >> 3) )
    {
      v13 = (__int64)(v10 - *a2) >> 3;
      if ( v13 == 0x1FFFFFFFFFFFFFFFLL )
        std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Xlen();
      v14 = v13 + 1;
      v15 = (v12 - *a2) >> 3;
      v16 = 0LL;
      if ( 0x1FFFFFFFFFFFFFFFLL - (v15 >> 1) >= v15 )
        v16 = v15 + (v15 >> 1);
      if ( v16 >= v14 )
        v14 = v16;
      std::vector<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>::_Reallocate(a2, v14);
    }
    v17 = (_QWORD *)a2[1];
    if ( v17 )
    {
      v18 = *(_QWORD *)(*a2 + 8 * v11);
      *v17 = v18;
      if ( v18 )
LABEL_35:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    }
LABEL_36:
    v18 = v26;
    goto LABEL_37;
  }
LABEL_44:
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  return a2;
}
