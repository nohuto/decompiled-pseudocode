/*
 * XREFs of ?GetTargetedContentNodes@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AV?$vector@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x1800973BC
 * Callers:
 *     ?ExtractTargetedContentTilesInLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ @ 0x18009A678 (-ExtractTargetedContentTilesInLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramewo.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Xlen@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEBAXXZ @ 0x180036DEC (-_Xlen@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$all.c)
 *     ?_Reallocate@?$vector@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@IEAAX_K@Z @ 0x18009B6CC (-_Reallocate@-$vector@V-$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
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
  unsigned int i; // esi
  int v9; // eax
  unsigned __int64 v10; // rdx
  char v11; // al
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rcx
  _QWORD *v15; // r8
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r8
  __int64 v20; // rcx
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // r8
  __int64 v27; // [rsp+20h] [rbp-60h] BYREF
  unsigned int v28; // [rsp+28h] [rbp-58h] BYREF
  __int64 v29; // [rsp+30h] [rbp-50h] BYREF
  int v30; // [rsp+38h] [rbp-48h]
  __int64 v31; // [rsp+40h] [rbp-40h]
  _QWORD *v32; // [rsp+48h] [rbp-38h]
  HSTRING string; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v31 = -2LL;
  v32 = a2;
  v30 = 0;
  v29 = 0LL;
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
  v6 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v3 + 128LL))(v3, string, &v29);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x89,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\targetedcontentlayoutxmlutilities.h",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v29 + 48LL))(v29, &v28);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\targetedcontentlayoutxmlutilities.h",
      (const char *)(unsigned int)v7);
LABEL_43:
    std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Xlen();
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v30 = 1;
  for ( i = 0; i < v28; ++i )
  {
    v27 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v29 + 56LL))(v29, i, &v27);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x93,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\targetedcontentlayoutxmlutilities.h",
        (const char *)(unsigned int)v9);
      JUMPOUT(0x1800976C0LL);
    }
    v10 = a2[1];
    if ( (unsigned __int64)&v27 >= v10 || (v11 = 1, *a2 > (unsigned __int64)&v27) )
      v11 = 0;
    v12 = a2[2];
    if ( v11 )
    {
      v13 = ((__int64)&v27 - *a2) >> 3;
      v14 = *a2;
      v15 = (_QWORD *)a2[1];
      if ( v10 == v12 && !((__int64)(v12 - v10) >> 3) )
      {
        v16 = (__int64)(v10 - v14) >> 3;
        if ( v16 == 0x1FFFFFFFFFFFFFFFLL )
          goto LABEL_43;
        v17 = v16 + 1;
        v18 = (v12 - v14) >> 3;
        v19 = 0LL;
        if ( 0x1FFFFFFFFFFFFFFFLL - (v18 >> 1) >= v18 )
          v19 = v18 + (v18 >> 1);
        if ( v19 >= v17 )
          v17 = v19;
        std::vector<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>::_Reallocate(a2, v17);
        v14 = *a2;
        v15 = (_QWORD *)a2[1];
      }
      v20 = *(_QWORD *)(v14 + 8 * v13);
      *v15 = v20;
      if ( !v20 )
        goto LABEL_34;
    }
    else
    {
      v21 = (_QWORD *)a2[1];
      if ( v10 == v12 && !((__int64)(v12 - v10) >> 3) )
      {
        v22 = (__int64)(v10 - *a2) >> 3;
        if ( v22 == 0x1FFFFFFFFFFFFFFFLL )
          std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Xlen();
        v23 = v22 + 1;
        v24 = (v12 - *a2) >> 3;
        v25 = 0LL;
        if ( 0x1FFFFFFFFFFFFFFFLL - (v24 >> 1) >= v24 )
          v25 = v24 + (v24 >> 1);
        if ( v25 >= v23 )
          v23 = v25;
        std::vector<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>::_Reallocate(a2, v23);
        v21 = (_QWORD *)a2[1];
      }
      *v21 = v27;
      v20 = v27;
      if ( !v27 )
        goto LABEL_35;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
LABEL_34:
    v20 = v27;
LABEL_35:
    a2[1] += 8LL;
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  return a2;
}
