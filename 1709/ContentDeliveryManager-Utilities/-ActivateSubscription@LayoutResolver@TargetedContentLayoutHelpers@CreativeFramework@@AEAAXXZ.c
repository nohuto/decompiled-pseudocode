/*
 * XREFs of ?ActivateSubscription@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ @ 0x18008BD8C
 * Callers:
 *     ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18008CAD0 (-RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAU.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??_9ITargetedContentAction@TargetedContent@Services@Windows@@$BDA@AA @ 0x18006C0FC (--_9ITargetedContentAction@TargetedContent@Services@Windows@@$BDA@AA.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@Services@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@Services@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18008E6E0 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@Servi.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ActivateSubscription(
        CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *this)
{
  __int64 v1; // rdi
  __int64 v2; // rcx
  int ActivationFactory; // eax
  int v4; // eax
  const WCHAR *v5; // rbx
  int v6; // eax
  const char *v7; // r9
  const WCHAR *v8; // rcx
  __int64 v9; // rcx
  const WCHAR *v10; // [rsp+28h] [rbp-50h] BYREF
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v12[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v13; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v12[1] = -2LL;
  try
  {
    v10 = L"Windows.Services.TargetedContent.TargetedContentSubscription";
    v11 = 0LL;
    v1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v13, &v10);
    v2 = v11;
    v11 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    ActivationFactory = RoGetActivationFactory(*(_QWORD *)(v1 + 24), &GUID_faddfe80_360d_4916_b53c_7ea27090d02a, &v11);
    if ( ActivationFactory < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x65E,
        (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
        (const char *)(unsigned int)ActivationFactory);
    v10 = 0LL;
    v4 =  Windows::Services::TargetedContent::ITargetedContentAction::`vcall'{48,{flat}}(v11);
    if ( v4 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x650,
        (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
        (const char *)(unsigned int)v4);
    v5 = v10;
    v12[0] = 0LL;
    v6 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentSubscription *> *>(v10);
    if ( v6 >= 0 )
      v6 = (*(__int64 (__fastcall **)(const WCHAR *, _QWORD *))(*(_QWORD *)v5 + 64LL))(v5, v12);
    if ( v6 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x638,
        (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
        (const char *)(unsigned int)v6);
    v8 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = v12[0];
    if ( v12[0] )
    {
      v12[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x112,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      v7);
  }
}
