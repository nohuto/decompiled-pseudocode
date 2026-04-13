/*
 * XREFs of ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18008CAD0
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18008B76C (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??_9ITargetedContentAction@TargetedContent@Services@Windows@@$BDA@AA @ 0x18006C0FC (--_9ITargetedContentAction@TargetedContent@Services@Windows@@$BDA@AA.c)
 *     ??1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x180089B10 (--1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ.c)
 *     ?ActivateSubscription@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ @ 0x18008BD8C (-ActivateSubscription@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ.c)
 *     ?GetSubscriptionContainer@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AV?$com_ptr_t@UITargetedContentContainer@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUHSTRING__@@@Z @ 0x18008BF30 (-GetSubscriptionContainer@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA-AV.c)
 *     ?FindLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@PEAUITargetedContentIdAliasStore@Internal@567@@Z @ 0x18008C130 (-FindLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedCon.c)
 *     ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x18008C4D4 (-RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA.c)
 *     ??$ContentIdsReceived@AEAI@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXAEAI@Z @ 0x18008E5CC (--$ContentIdsReceived@AEAI@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEA.c)
 *     ??$end@PEAUHSTRING__@@@Collections@Foundation@Windows@@YA?AVVectorIterator@?$VectorRange@U?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@PEAU?$IVectorView@PEAUHSTRING__@@@012@@Z @ 0x18008E650 (--$end@PEAUHSTRING__@@@Collections@Foundation@Windows@@YA-AVVectorIterator@-$VectorRange@U-$IVec.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18008E900 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAU-$IVectorView@PEAUHSTRING__@@@Collections@Foundat.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17 #try_helpers=1
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems(
        CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *a1,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStore *a2,
        CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *a3)
{
  HSTRING *v3; // rsi
  __int64 v4; // rbx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v8; // rbx
  int v9; // eax
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v10; // rcx
  const WCHAR *v11; // rbx
  int v12; // eax
  bool v13; // r14
  int i; // eax
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  int j; // eax
  int v20; // eax
  wil::details::in1diag3 *v21; // rcx
  __int64 v22; // rcx
  HSTRING v23; // r14
  int v24; // eax
  HSTRING v25; // rbx
  const char *StringRawBuffer; // rax
  const char *v27; // rax
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v28; // [rsp+38h] [rbp-C0h] BYREF
  int v29; // [rsp+40h] [rbp-B8h] BYREF
  const WCHAR *v30; // [rsp+48h] [rbp-B0h] BYREF
  const WCHAR *v31; // [rsp+50h] [rbp-A8h]
  unsigned int v32; // [rsp+58h] [rbp-A0h]
  HSTRING string[2]; // [rsp+60h] [rbp-98h] BYREF
  HSTRING *v34; // [rsp+70h] [rbp-88h]
  const WCHAR *v35; // [rsp+80h] [rbp-78h] BYREF
  _BYTE v36[8]; // [rsp+88h] [rbp-70h] BYREF
  __int64 v37; // [rsp+90h] [rbp-68h] BYREF
  struct Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStore *v38; // [rsp+98h] [rbp-60h]
  __int64 v39; // [rsp+A0h] [rbp-58h]
  CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *v40; // [rsp+A8h] [rbp-50h]
  _BYTE v41[8]; // [rsp+B0h] [rbp-48h] BYREF
  int v42; // [rsp+B8h] [rbp-40h]
  HSTRING v43; // [rsp+C0h] [rbp-38h]
  __int64 v44; // [rsp+C8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v39 = -2LL;
  v3 = (HSTRING *)a1;
  v34 = (HSTRING *)a1;
  v38 = a2;
  v40 = a3;
  v29 = 0;
  try
  {
    CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ActivateSubscription(a1);
    v35 = L"Windows.Services.TargetedContent.Internal.TargetedContentSubscriptionInternal";
    v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v41, &v35);
    v28 = 0LL;
    v5 = RoActivateInstance(*(_QWORD *)(v4 + 24), &v28);
    if ( v5 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x667,
        (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
        (const char *)(unsigned int)v5);
    v44 = 0LL;
    v6 = (**(__int64 (__fastcall ***)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, GUID *, __int64 *))v28)(
           v28,
           &GUID_1547dcdf_43fb_4ea7_b3c0_d10f3b1f34ff,
           &v37);
    if ( v6 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x15FD,
        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
        (const char *)(unsigned int)v6);
    v29 = 3;
    if ( v28 )
      (*(void (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *))(*(_QWORD *)v28 + 16LL))(v28);
    v28 = 0LL;
    v7 =  Windows::Services::TargetedContent::ITargetedContentAction::`vcall'{48,{flat}}(v37);
    if ( v7 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x650,
        (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
        (const char *)(unsigned int)v7);
    v8 = v28;
    v30 = 0LL;
    v29 = 11;
    v9 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<HSTRING__ *> *> *>(v28);
    if ( v9 >= 0 )
      v9 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, const WCHAR **))(*(_QWORD *)v8 + 64LL))(
             v8,
             &v30);
    if ( v9 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x638,
        (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
        (const char *)(unsigned int)v9);
    v29 = 7;
    v10 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v11 = v30;
    v30 = 0LL;
    v35 = v11;
    if ( v37 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
    v12 = (*(__int64 (__fastcall **)(const WCHAR *, _BYTE *))(*(_QWORD *)v11 + 56LL))(v11, v36);
    if ( v12 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x195,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
        (const char *)(unsigned int)v12);
    CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::ContentIdsReceived<unsigned int &>(v40, v36);
    v13 = 1;
    v31 = v11;
    v32 = 0;
    string[0] = 0LL;
    Windows::Foundation::Collections::end<HSTRING__ *>(v41, v11);
    for ( i = v32; i != v42; i = ++v32 )
    {
      WindowsDeleteString(string[0]);
      string[0] = 0LL;
      v15 = (*(__int64 (__fastcall **)(const WCHAR *, _QWORD, HSTRING *))(*(_QWORD *)v31 + 48LL))(v31, v32, string);
      v16 = retaddr;
      if ( v15 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x15FD,
          (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
          (const char *)(unsigned int)v15);
      CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::GetSubscriptionContainer(
        (__int64)v16,
        (__int64 *)&v30,
        string[0]);
      v17 = (__int64)v30;
      if ( v30 )
      {
        v18 = (*(__int64 (__fastcall **)(const WCHAR *, int *))(*(_QWORD *)v30 + 64LL))(v30, &v29);
        if ( v18 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x1A1,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
            (const char *)(unsigned int)v18);
        v13 = v29 == 2;
        if ( v29 != 2 )
        {
          if ( v30 )
            (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v30 + 16LL))(v30);
          break;
        }
        v17 = (__int64)v30;
      }
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    WindowsDeleteString(v43);
    v43 = 0LL;
    WindowsDeleteString(string[0]);
    if ( v13 )
    {
      v31 = v11;
      v32 = 0;
      string[0] = 0LL;
      Windows::Foundation::Collections::end<HSTRING__ *>(v41, v11);
      for ( j = v32; j != v42; j = ++v32 )
      {
        WindowsDeleteString(string[0]);
        string[0] = 0LL;
        v20 = (*(__int64 (__fastcall **)(const WCHAR *, _QWORD, HSTRING *))(*(_QWORD *)v31 + 48LL))(v31, v32, string);
        v21 = retaddr;
        if ( v20 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x15FD,
            (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
            (const char *)(unsigned int)v20);
        try
        {
          CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::GetSubscriptionContainer(
            (__int64)v21,
            (__int64 *)&v30,
            string[0]);
          v22 = (__int64)v30;
          if ( v30 )
          {
            v23 = string[0];
            v28 = 0LL;
            v24 = (*(__int64 (__fastcall **)(const WCHAR *, struct Windows::Services::TargetedContent::ITargetedContentCollection **))(*(_QWORD *)v30 + 72LL))(
                    v30,
                    &v28);
            if ( v24 < 0 )
              wil::details::in1diag3::_Throw_Hr(
                retaddr,
                (void *)0x17D,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
                (const char *)(unsigned int)v24);
            if ( !*v3 )
              CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::FindLayout(v3, v28, v23, v38);
            CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection(
              (CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *)v3,
              v28,
              v23,
              0);
            if ( v28 )
              (*(void (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *))(*(_QWORD *)v28 + 16LL))(v28);
            v22 = (__int64)v30;
          }
          if ( v22 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        }
        catch ( ... )
        {
          v25 = string[0];
          StringRawBuffer = (const char *)WindowsGetStringRawBuffer(v34[1], 0LL);
          wil::details::in1diag3::Log_CaughtExceptionMsg(
            retaddr,
            (void *)0x1B7,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
            "Subscription ID: %ls, Content ID: %ls",
            StringRawBuffer,
            v25);
          v11 = v35;
          v3 = v34;
        }
      }
      WindowsDeleteString(v43);
      v43 = 0LL;
      WindowsDeleteString(string[0]);
    }
    if ( v11 )
      (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  catch ( ... )
  {
    v27 = (const char *)WindowsGetStringRawBuffer(v34[1], 0LL);
    wil::details::in1diag3::Log_CaughtExceptionMsg(
      retaddr,
      (void *)0x1BB,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      "Subscription ID: %ls",
      v27);
  }
  CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::~LayoutResolver(v40);
}
