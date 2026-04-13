/*
 * XREFs of ?AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x18006A720
 * Callers:
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x180058824 (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003CE0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180055F80 (--1-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04U.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18005B1D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180065040 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?StartActivity@DiagTrackRuleSetHandlerAddRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_WIPEBD@Z @ 0x180069630 (-StartActivity@DiagTrackRuleSetHandlerAddRule@ContentDeliveryManagerTelemetry@Background@Content.c)
 *     ?Stop@DiagTrackRuleSetHandlerAddRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x180069800 (-Stop@DiagTrackRuleSetHandlerAddRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryM.c)
 *     ??$CallAndWaitForCompletion@UIStorageFolderStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@3@$$ZPEAU4@@wil@@YA?AV?$ComPtr@UIStorageFolder@Storage@Windows@@@WRL@Microsoft@@PEAUIStorageFolderStatics@Storage@Windows@@P8456@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@6@@Z$$QEAPEAU7@@Z @ 0x18006AD08 (--$CallAndWaitForCompletion@UIStorageFolderStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU-$IAsy.c)
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006B598 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0.c)
 *     ??$GetActivationFactory@UIStorageFolderStatics@Storage@Windows@@@wil@@YA?AV?$com_ptr_t@UIStorageFolderStatics@Storage@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18006B9A8 (--$GetActivationFactory@UIStorageFolderStatics@Storage@Windows@@@wil@@YA-AV-$com_ptr_t@UIStorage.c)
 *     ??$WaitForCompletion@PEAVStorageFile@Storage@Windows@@V?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x18006BA68 (--$WaitForCompletion@PEAVStorageFile@Storage@Windows@@V-$ComPtr@UIStorageFile@Storage@Windows@@@.c)
 *     ??_9ITargetedContentAction@TargetedContent@Services@Windows@@$BDA@AA @ 0x18006C0FC (--_9ITargetedContentAction@TargetedContent@Services@Windows@@$BDA@AA.c)
 *     ??_9IStorageFile@Storage@Windows@@$BGA@AA @ 0x18006C11C (--_9IStorageFile@Storage@Windows@@$BGA@AA.c)
 *     ?GetSoftLandingFolderForUser@@YAJPEAXPEA_W_K@Z @ 0x1800920E0 (-GetSoftLandingFolderForUser@@YAJPEAXPEA_W_K@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B4307 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=21
__int64 *__fastcall CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::AddRule(__int64 a1, void ***a2)
{
  __int64 v4; // rdi
  const wchar_t *v5; // rbx
  void **v6; // rdx
  unsigned __int64 v7; // r8
  int SoftLandingFolderForUser; // eax
  unsigned __int64 v9; // rax
  unsigned int v10; // r9d
  unsigned int v11; // r8d
  unsigned int v12; // eax
  UINT32 v13; // edx
  HRESULT v14; // eax
  _QWORD *v15; // rax
  __int64 v16; // r8
  void **v17; // rdx
  const WCHAR *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rbx
  HSTRING v21; // rcx
  int ActivationFactory; // eax
  int v23; // eax
  const WCHAR *v24; // rcx
  const WCHAR *v25; // rax
  __int64 v26; // rbx
  int v27; // eax
  const WCHAR *v28; // rcx
  HSTRING v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  const WCHAR *v33; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+40h] [rbp-C8h]
  HSTRING v35; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v37[2]; // [rsp+58h] [rbp-B0h] BYREF
  wchar_t *v38; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+78h] [rbp-90h]
  unsigned __int64 v40; // [rsp+80h] [rbp-88h]
  void *Src[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v42; // [rsp+98h] [rbp-70h]
  unsigned __int64 v43; // [rsp+A0h] [rbp-68h]
  HSTRING_HEADER hstringHeader; // [rsp+A8h] [rbp-60h] BYREF
  HSTRING string; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v46[24]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v47; // [rsp+E0h] [rbp-28h]
  _QWORD v48[4]; // [rsp+E8h] [rbp-20h] BYREF
  int v49; // [rsp+108h] [rbp+0h]
  int *v50; // [rsp+110h] [rbp+8h]
  int *v51; // [rsp+118h] [rbp+10h]
  int v52; // [rsp+120h] [rbp+18h] BYREF
  char v53; // [rsp+124h] [rbp+1Ch]
  int v54; // [rsp+148h] [rbp+40h] BYREF
  const char *v55; // [rsp+150h] [rbp+48h]
  __int64 v56; // [rsp+158h] [rbp+50h]
  char v57; // [rsp+160h] [rbp+58h]
  __int64 v58; // [rsp+168h] [rbp+60h]
  _BYTE v59[144]; // [rsp+170h] [rbp+68h] BYREF
  __int64 v60; // [rsp+200h] [rbp+F8h]
  __int64 v61; // [rsp+208h] [rbp+100h]
  __int64 v62; // [rsp+210h] [rbp+108h]
  __int64 v63; // [rsp+218h] [rbp+110h]
  WCHAR sourceString[264]; // [rsp+228h] [rbp+120h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+480h] [rbp+378h]

  v37[1] = -2LL;
  LODWORD(v34) = 0;
  v4 = *(_QWORD *)(a1 + 8);
  v40 = 7LL;
  v39 = 0LL;
  LOWORD(v38) = 0;
  std::wstring::assign((void **)&v38, *a2, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  LODWORD(v34) = 1;
  v5 = (const wchar_t *)&v38;
  if ( v40 >= 8 )
    v5 = v38;
  v48[0] = &wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v48[1] = 0LL;
  v48[2] = v48;
  v48[3] = 0LL;
  v49 = 0;
  v50 = &v54;
  v51 = &v52;
  v52 = 0;
  v53 = 0;
  v57 = 0;
  v54 = 0;
  v55 = "DiagTrackRuleSetHandlerAddRule";
  v56 = 0LL;
  v58 = 1LL;
  v60 = 0LL;
  v61 = 0LL;
  memset_0(v59, 0, sizeof(v59));
  v62 = 0LL;
  v63 = 0LL;
  v48[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerAddRule::`vftable';
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerAddRule::StartActivity(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerAddRule *)v48,
    v5,
    0,
    (const char *)(v4 + 8));
  if ( v40 >= 8 )
    operator delete(v38);
  v40 = 7LL;
  v39 = 0LL;
  LOWORD(v38) = 0;
  v6 = *a2;
  v43 = 7LL;
  v42 = 0LL;
  LOWORD(Src[0]) = 0;
  std::wstring::assign(Src, v6, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  LODWORD(v34) = 7;
  std::wstring::append(Src, (char *)L".xml", 4uLL);
  SoftLandingFolderForUser = GetSoftLandingFolderForUser((HANDLE)0xFFFFFFFFFFFFFFFALL, sourceString, v7);
  if ( SoftLandingFolderForUser < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x70,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\diagtrackrulesethandler.cpp",
      (const char *)(unsigned int)SoftLandingFolderForUser);
    __debugbreak();
  }
  v9 = -1LL;
  do
    ++v9;
  while ( sourceString[v9] );
  v10 = -1;
  if ( v9 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException(v9 > 0xFFFFFFFF ? (Microsoft::WRL::Details *)0x80070216LL : 0);
    __debugbreak();
  }
  v11 = v9;
  v12 = v9 + 1;
  if ( v11 + 1 >= v11 )
    v10 = v11 + 1;
  if ( v12 < v11 )
  {
    Microsoft::WRL::Details::RaiseException(v12 < v11 ? (Microsoft::WRL::Details *)0x80070216LL : 0);
    __debugbreak();
  }
  v13 = v10 - 1;
  if ( v11 < v10 )
    v13 = v11;
  v14 = WindowsCreateStringReference(sourceString, v13, &hstringHeader, &string);
  if ( v14 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14);
  v35 = string;
  v15 = (_QWORD *)wil::GetActivationFactory<Windows::Storage::IStorageFolderStatics>(&v33);
  ___CallAndWaitForCompletion_UIStorageFolderStatics_Storage_Windows__PEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_3___ZPEAU4__wil__YA_AV__ComPtr_UIStorageFolder_Storage_Windows___WRL_Microsoft__PEAUIStorageFolderStatics_Storage_Windows__P8456_EAAJPEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_6__Z__QEAPEAU7__Z(
    v37,
    *v15,
    v16,
    &v35);
  if ( v33 )
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v33 + 16LL))(v33);
  string = 0LL;
  v17 = *a2;
  v40 = 7LL;
  v39 = 0LL;
  LOWORD(v38) = 0;
  std::wstring::assign((void **)&v38, v17 + 4, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  LODWORD(v34) = 15;
  v18 = (const WCHAR *)&v38;
  if ( v40 >= 8 )
    v18 = v38;
  v33 = v18;
  v19 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v46, &v33) + 24);
  v33 = L"Windows.Storage.StorageFile";
  v35 = 0LL;
  LODWORD(v34) = 31;
  v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&hstringHeader, &v33);
  v21 = v35;
  v35 = 0LL;
  if ( v21 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v21 + 16LL))(v21);
  ActivationFactory = RoGetActivationFactory(*(_QWORD *)(v20 + 24), &GUID_5984c710_daf2_43c8_8bb4_a4d3eacfd03f, &v35);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x65E,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)ActivationFactory);
  string = 0LL;
  v33 = 0LL;
  v23 =  Windows::Services::TargetedContent::ITargetedContentAction::`vcall'{48,{flat}}(v35, v19, &v33);
  if ( v23 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x650,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v23);
    __debugbreak();
  }
  wil::WaitForCompletion<Windows::Storage::StorageFile *,Microsoft::WRL::ComPtr<Windows::Storage::IStorageFile>>(
    &v36,
    v33);
  LODWORD(v34) = 63;
  v24 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v24 + 16LL))(v24);
  }
  if ( v35 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v35 + 16LL))(v35);
  v47 = 0LL;
  if ( v40 >= 8 )
    operator delete(v38);
  v40 = 7LL;
  v39 = 0LL;
  LOWORD(v38) = 0;
  v25 = (const WCHAR *)Src;
  if ( v43 >= 8 )
    v25 = (const WCHAR *)Src[0];
  v33 = v25;
  v26 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v46, &v33) + 24);
  v33 = 0LL;
  v27 =  Windows::Storage::IStorageFile::`vcall'{96,{flat}}(v36, v37[0], v26, 1LL, &v33);
  if ( v27 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x650,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v27);
    __debugbreak();
  }
  wil::WaitForCompletion<Windows::Storage::StorageFile *,Microsoft::WRL::ComPtr<Windows::Storage::IStorageFile>>(
    &v35,
    v33);
  LODWORD(v34) = 127;
  v28 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v28 + 16LL))(v28);
  }
  v29 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v29 + 16LL))(v29);
  }
  v47 = 0LL;
  *(_BYTE *)(a1 + 24) = 1;
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerAddRule::Stop(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerAddRule *)v48,
    (const char *)(*(_QWORD *)(a1 + 8) + 8LL));
  v30 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  v31 = v37[0];
  if ( v37[0] )
  {
    v37[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  if ( v43 >= 8 )
    operator delete(Src[0]);
  v43 = 7LL;
  v42 = 0LL;
  LOWORD(Src[0]) = 0;
  v48[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerAddRule::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v48);
  return wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v48);
}
