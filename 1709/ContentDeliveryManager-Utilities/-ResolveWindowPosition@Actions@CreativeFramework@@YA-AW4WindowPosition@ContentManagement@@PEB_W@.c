/*
 * XREFs of ?ResolveWindowPosition@Actions@CreativeFramework@@YA?AW4WindowPosition@ContentManagement@@PEB_W@Z @ 0x180079848
 * Callers:
 *     ?GetPositionParameters@Actions@CreativeFramework@@YA?AV?$com_ptr_t@U?$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x180079F54 (-GetPositionParameters@Actions@CreativeFramework@@YA-AV-$com_ptr_t@U-$IMapView@W4WindowPosition@.c)
 * Callees:
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800166CC (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DB1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CreativeFramework::Actions::ResolveWindowPosition(const WCHAR *a1)
{
  wchar_t **v2; // rbx
  unsigned int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = &off_18015C7D0;
  while ( CompareStringOrdinal(a1, -1, *v2, -1, 1) != 2 )
  {
    v2 += 2;
    if ( v2 == (wchar_t **)&unk_18015C810 )
    {
      v4 = wil::verify_hresult<long>(0x80070057);
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5B,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
        (const char *)v4);
      __debugbreak();
    }
  }
  return *((unsigned int *)v2 + 2);
}
