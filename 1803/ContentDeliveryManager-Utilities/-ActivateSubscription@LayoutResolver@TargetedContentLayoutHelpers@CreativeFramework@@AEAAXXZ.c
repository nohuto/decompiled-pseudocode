/*
 * XREFs of ?ActivateSubscription@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ @ 0x180099348
 * Callers:
 *     ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18009A0A8 (-RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAU.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001B314 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??_9IStorageFileStatics@Storage@Windows@@$BDA@AA @ 0x180076670 (--_9IStorageFileStatics@Storage@Windows@@$BDA@AA.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@Services@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@Services@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18009BDD0 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@Servi.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ActivateSubscription(
        CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *this)
{
  __int64 v1; // rdi
  __int64 v2; // rcx
  int ActivationFactory; // eax
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  const WCHAR *v6; // rbx
  int v7; // eax
  const char *v8; // r9
  wil::details::in1diag3 *v9; // rcx
  const WCHAR *v10; // rcx
  __int64 v11; // rcx
  const WCHAR *v12; // [rsp+28h] [rbp-50h] BYREF
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v14[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v15; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v14[1] = -2LL;
  try
  {
    v12 = L"Windows.Services.TargetedContent.TargetedContentSubscription";
    v13 = 0LL;
    v1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v15, &v12);
    v2 = v13;
    v13 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    ActivationFactory = RoGetActivationFactory(*(_QWORD *)(v1 + 24), &GUID_faddfe80_360d_4916_b53c_7ea27090d02a, &v13);
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x666,
        (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
        (const char *)(unsigned int)ActivationFactory);
    }
    else
    {
      v12 = 0LL;
      v4 =  Windows::Storage::IStorageFileStatics::`vcall'{48,{flat}}(v13);
      v5 = retaddr;
      if ( v4 >= 0 )
      {
        v6 = v12;
        v14[0] = 0LL;
        v7 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentSubscription *> *>(v12);
        if ( v7 >= 0 )
          v7 = (*(__int64 (__fastcall **)(const WCHAR *, _QWORD *))(*(_QWORD *)v6 + 64LL))(v6, v14);
        v9 = retaddr;
        if ( v7 >= 0 )
        {
          v10 = v12;
          if ( v12 )
          {
            v12 = 0LL;
            (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v10 + 16LL))(v10);
          }
          v11 = v14[0];
          if ( v14[0] )
          {
            v14[0] = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
          }
          if ( v13 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          return;
        }
LABEL_17:
        wil::details::in1diag3::Throw_Hr(
          v9,
          (void *)0x640,
          (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
          (const char *)(unsigned int)v7);
        JUMPOUT(0x1800994FELL);
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v5,
      (void *)0x658,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v4);
    goto LABEL_17;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x112,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      v8);
  }
}
