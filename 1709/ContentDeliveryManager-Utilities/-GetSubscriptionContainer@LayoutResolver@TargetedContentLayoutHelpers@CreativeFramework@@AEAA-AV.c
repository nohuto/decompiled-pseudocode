/*
 * XREFs of ?GetSubscriptionContainer@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AV?$com_ptr_t@UITargetedContentContainer@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUHSTRING__@@@Z @ 0x18008BF30
 * Callers:
 *     ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18008CAD0 (-RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAU.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18004C170 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services.c)
 *     ??_9ITargetedContentAction@TargetedContent@Services@Windows@@$BDA@AA @ 0x18006C0FC (--_9ITargetedContentAction@TargetedContent@Services@Windows@@$BDA@AA.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 *__fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::GetSubscriptionContainer(
        __int64 a1,
        __int64 *a2,
        HSTRING a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rcx
  int ActivationFactory; // eax
  int v7; // eax
  DWORD v8; // edx
  int v9; // r8d
  void (__fastcall ***v10)(__int64, GUID *, __int64 *); // rdi
  int v11; // eax
  void (__fastcall ***v12)(__int64, GUID *, __int64 *); // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  const char *StringRawBuffer; // rax
  void (__fastcall ***v18)(__int64, GUID *, __int64 *); // [rsp+38h] [rbp-60h] BYREF
  __int64 v19; // [rsp+40h] [rbp-58h] BYREF
  __int64 v20; // [rsp+48h] [rbp-50h] BYREF
  HSTRING v21; // [rsp+50h] [rbp-48h]
  __int64 *v22; // [rsp+58h] [rbp-40h]
  __int64 v23; // [rsp+60h] [rbp-38h]
  __int64 v24; // [rsp+68h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v23 = -2LL;
  v3 = a2;
  v22 = a2;
  v21 = a3;
  *a2 = 0LL;
  try
  {
    v18 = (void (__fastcall ***)(__int64, GUID *, __int64 *))L"Windows.Services.TargetedContent.TargetedContentContainer";
    v20 = 0LL;
    v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v24, (const WCHAR **)&v18);
    v5 = v20;
    v20 = 0LL;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    ActivationFactory = RoGetActivationFactory(*(_QWORD *)(v4 + 24), &GUID_5b47e7fb_2140_4c1f_a736_c59583f227d8, &v20);
    if ( ActivationFactory < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x65E,
        (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
        (const char *)(unsigned int)ActivationFactory);
    v18 = 0LL;
    v7 =  Windows::Services::TargetedContent::ITargetedContentAction::`vcall'{48,{flat}}(v20);
    if ( v7 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x650,
        (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
        (const char *)(unsigned int)v7);
    v10 = v18;
    v19 = 0LL;
    v11 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer *> *>(
            v18,
            v8,
            v9);
    if ( v11 >= 0 )
      v11 = ((__int64 (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *), __int64 *))(*v10)[8])(v10, &v19);
    if ( v11 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x638,
        (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
        (const char *)(unsigned int)v11);
    v12 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v12)[2])(v12);
    }
    v13 = v19;
    v14 = 0LL;
    v19 = 0LL;
    v15 = *v3;
    *v3 = v13;
    if ( v15 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      v14 = v19;
    }
    if ( v14 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  catch ( ... )
  {
    StringRawBuffer = (const char *)WindowsGetStringRawBuffer(v21, 0LL);
    wil::details::in1diag3::Log_CaughtExceptionMsg(
      retaddr,
      (void *)0x11F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      "Content ID: %ls",
      StringRawBuffer);
    return v22;
  }
  return v3;
}
