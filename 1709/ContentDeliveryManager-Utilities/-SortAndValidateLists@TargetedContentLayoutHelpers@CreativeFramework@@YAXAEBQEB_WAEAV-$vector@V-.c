/*
 * XREFs of ?SortAndValidateLists@TargetedContentLayoutHelpers@CreativeFramework@@YAXAEBQEB_WAEAV?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@1AEAV?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@4@@Z @ 0x18008F26C
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18008B76C (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800166CC (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18005B1D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180071D78 (-Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0_J@Z @ 0x18008F92C (--$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedCo.c)
 *     ??1?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAA@XZ @ 0x18008FC6C (--1-$_Temp_iterator@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@s.c)
 *     ??$_Stable_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x180090044 (--$_Stable_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV.c)
 *     ??$_Stable_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x180090138 (--$_Stable_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramewo_ea_180090138.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::SortAndValidateLists(
        const char **a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  unsigned __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v16; // rbx
  double v17; // xmm0_8
  unsigned int v18; // eax
  int v19; // edx
  int v20; // r8d
  __int128 v21; // [rsp+58h] [rbp-59h] BYREF
  __int64 v22; // [rsp+68h] [rbp-49h]
  unsigned __int64 v23; // [rsp+70h] [rbp-41h]
  __int128 v24; // [rsp+78h] [rbp-39h]
  char v25; // [rsp+88h] [rbp-29h]
  void *v26[3]; // [rsp+90h] [rbp-21h] BYREF
  unsigned __int64 v27; // [rsp+A8h] [rbp-9h]
  __int128 v28; // [rsp+B0h] [rbp-1h]
  char v29; // [rsp+C0h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  std::_Sort<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64>(*a4, a4[1], (a4[1] - *a4) / 56LL);
  v8 = *a3;
  if ( *a3 != a3[1] )
  {
    v9 = (a3[1] - v8) >> 4;
    v21 = 0LL;
    v22 = 0LL;
    v23 = (v9 + 1) / 2;
    *(_QWORD *)&v24 = &v21;
    std::_Stable_sort<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,__int64,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>,CreativeFramework::TargetedContentLayoutHelpers::less_than_special_bindings>(
      v8,
      a3[1],
      v9,
      (unsigned int)&v21);
    std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::~_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(&v21);
  }
  v10 = *a2;
  if ( *a2 != a2[1] )
  {
    v11 = (a2[1] - v10) >> 4;
    v21 = 0LL;
    v22 = 0LL;
    v23 = (v11 + 1) / 2;
    *(_QWORD *)&v24 = &v21;
    std::_Stable_sort<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,__int64,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>,CreativeFramework::TargetedContentLayoutHelpers::less_than_rank>(
      v10,
      a2[1],
      v11,
      (unsigned int)&v21);
    std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::~_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(&v21);
  }
  v12 = *a4;
  v27 = 7LL;
  v26[2] = 0LL;
  LOWORD(v26[0]) = 0;
  std::wstring::assign(v26, (void **)v12, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  v28 = *(_OWORD *)(v12 + 32);
  v29 = *(_BYTE *)(v12 + 48);
  v13 = 1LL;
  v14 = *a4;
  if ( (unsigned __int64)((a4[1] - *a4) / 56LL) > 1 )
  {
    v15 = 56LL;
    while ( 1 )
    {
      v16 = v15 + v14;
      v23 = 7LL;
      v22 = 0LL;
      LOWORD(v21) = 0;
      std::wstring::assign((void **)&v21, (void **)(v15 + v14), 0LL, 0xFFFFFFFFFFFFFFFFuLL);
      *(_QWORD *)&v24 = *(_QWORD *)(v16 + 32);
      v17 = *(double *)(v16 + 40);
      *((double *)&v24 + 1) = v17;
      v25 = *(_BYTE *)(v16 + 48);
      if ( *(double *)&v24 == *(double *)&v28 && v17 == *((double *)&v28 + 1) )
        break;
      std::wstring::assign(v26, (void **)&v21, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
      v28 = v24;
      v29 = v25;
      if ( v23 >= 8 )
        operator delete((void *)v21);
      ++v13;
      v15 += 56LL;
      v14 = *a4;
      if ( v13 >= (a4[1] - *a4) / 56LL )
        goto LABEL_14;
    }
    v18 = wil::verify_hresult<long>(0x8007139F);
    wil::details::in1diag3::Throw_HrMsg(
      retaddr,
      (void *)0x58,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\tilebinder.cpp",
      (const char *)v18,
      (__int64)"Duplicate found. SubscriptionId: %ls Collection:%ul Index:%ul",
      *a1,
      v20,
      v19);
  }
LABEL_14:
  if ( v27 >= 8 )
    operator delete(v26[0]);
}
