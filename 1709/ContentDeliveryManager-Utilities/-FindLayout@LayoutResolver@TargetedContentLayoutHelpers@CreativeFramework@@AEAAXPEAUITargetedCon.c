/*
 * XREFs of ?FindLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@PEAUITargetedContentIdAliasStore@Internal@567@@Z @ 0x18008C130
 * Callers:
 *     ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18008CAD0 (-RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAU.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::FindLayout(
        HSTRING *this,
        struct Windows::Services::TargetedContent::ITargetedContentCollection *a2,
        HSTRING a3,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStore *a4)
{
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  _BYTE v21[8]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v22; // [rsp+38h] [rbp-21h] BYREF
  HSTRING string; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v24[2]; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v25[32]; // [rsp+58h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v24[1] = -2LL;
  v24[0] = 0LL;
  v7 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, _QWORD *))(*(_QWORD *)a2 + 80LL))(
         a2,
         v24);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x127,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v21[0] = 0;
  v8 = v24[0];
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v25, (const WCHAR **)off_1800DAC28);
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)v8 + 64LL))(v8, *(_QWORD *)(v9 + 24), v21);
  if ( v10 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x12A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v10);
  if ( v21[0] )
  {
    v22 = 0LL;
    v11 = v24[0];
    v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v25, (const WCHAR **)off_1800DAC28);
    v13 = v22;
    v22 = 0LL;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 48LL))(
            v11,
            *(_QWORD *)(v12 + 24),
            &v22);
    if ( v14 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x12E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
        (const char *)(unsigned int)v14);
    v15 = v22;
    WindowsDeleteString(*this);
    *this = 0LL;
    v16 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v15 + 64LL))(v15, this);
    if ( v16 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x12F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
        (const char *)(unsigned int)v16);
      __debugbreak();
    }
    string = 0LL;
    v17 = v22;
    WindowsDeleteString(0LL);
    string = 0LL;
    v18 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v17 + 56LL))(v17, &string);
    if ( v18 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x132,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
        (const char *)(unsigned int)v18);
      __debugbreak();
    }
    v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v25, (const WCHAR **)&off_1800DAC30);
    v20 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStore *, _QWORD, HSTRING, HSTRING))(*(_QWORD *)a4 + 48LL))(
            a4,
            *(_QWORD *)(v19 + 24),
            a3,
            string);
    if ( v20 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x133,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
        (const char *)(unsigned int)v20);
    WindowsDeleteString(string);
    string = 0LL;
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  if ( v24[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v24[0] + 16LL))(v24[0]);
}
