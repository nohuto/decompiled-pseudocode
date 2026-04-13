/*
 * XREFs of ?NeedBinding@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA_NPEAUITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18008B4DC
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18008B76C (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18005B3D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??$?8_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@0@Z @ 0x180078124 (--$-8_WU-$char_traits@_W@std@@V-$allocator@_W@1@@std@@YA_NAEBV-$basic_string@_WU-$char_traits@_W.c)
 *     ??1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x180089B10 (--1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ.c)
 *     ?GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUHSTRING__@@PEB_W@Z @ 0x18008AEB0 (-GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA-AV-$basic_string@_WU-.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::NeedBinding(
        __int64 a1,
        __int64 a2,
        CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *a3)
{
  int v6; // eax
  bool v7; // bl
  char v8; // di
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  _BYTE v14[4]; // [rsp+30h] [rbp-69h] BYREF
  int v15; // [rsp+34h] [rbp-65h] BYREF
  __int64 v16; // [rsp+38h] [rbp-61h] BYREF
  _QWORD v17[3]; // [rsp+40h] [rbp-59h] BYREF
  void *v18[2]; // [rsp+58h] [rbp-41h] BYREF
  __int64 v19; // [rsp+68h] [rbp-31h]
  unsigned __int64 v20; // [rsp+70h] [rbp-29h]
  void *v21[2]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v22; // [rsp+88h] [rbp-11h]
  unsigned __int64 v23; // [rsp+90h] [rbp-9h]
  void *v24[3]; // [rsp+98h] [rbp-1h] BYREF
  unsigned __int64 v25; // [rsp+B0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v17[1] = -2LL;
  v17[2] = a3;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)a2 + 56LL))(a2, *(_QWORD *)(a1 + 8), v14);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x95,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = 0;
  v8 = 1;
  if ( v14[0] )
  {
    v17[0] = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)a2 + 64LL))(
           a2,
           *(_QWORD *)(a1 + 8),
           0LL,
           v17);
    if ( v9 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x9E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
        (const char *)(unsigned int)v9);
    v16 = 0LL;
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v17[0] + 72LL))(v17[0], &v16);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xA2,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
        (const char *)(unsigned int)v10);
      __debugbreak();
    }
    v15 = 0;
    v11 = v16;
    if ( v16 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v16 + 56LL))(v16, &v15);
      if ( v12 < 0 )
      {
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0xA7,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
          (const char *)(unsigned int)v12);
        __debugbreak();
      }
      v7 = v15 != 0;
      v11 = v16;
    }
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v17[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17[0] + 16LL))(v17[0]);
  }
  CreativeFramework::TargetedContentLayoutHelpers::Settings::GetLayoutType(
    (CreativeFramework::Policy *)v21,
    *(HSTRING *)(a1 + 8),
    (LPCWSTR)&stru_1801340A0);
  CreativeFramework::TargetedContentLayoutHelpers::Settings::GetLayoutType(
    (CreativeFramework::Policy *)v24,
    *(HSTRING *)(a1 + 8),
    (LPCWSTR)&stru_180134080);
  v20 = 7LL;
  v19 = 0LL;
  LOWORD(v18[0]) = 0;
  std::wstring::assign(v18, (char *)L"cloud", aCloud[0] != 0 ? 5 : 0);
  if ( v14[0]
    && v7
    && v22
    && (!std::operator==<wchar_t>(v21, v18) && !std::operator==<wchar_t>(v24, v18) || std::operator==<wchar_t>(v24, v21)) )
  {
    v8 = 0;
  }
  if ( v20 >= 8 )
    operator delete(v18[0]);
  v20 = 7LL;
  v19 = 0LL;
  LOWORD(v18[0]) = 0;
  if ( v25 >= 8 )
    operator delete(v24[0]);
  v25 = 7LL;
  v24[2] = 0LL;
  LOWORD(v24[0]) = 0;
  if ( v23 >= 8 )
    operator delete(v21[0]);
  v23 = 7LL;
  v22 = 0LL;
  LOWORD(v21[0]) = 0;
  CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::~LayoutResolver(a3);
  return v8;
}
