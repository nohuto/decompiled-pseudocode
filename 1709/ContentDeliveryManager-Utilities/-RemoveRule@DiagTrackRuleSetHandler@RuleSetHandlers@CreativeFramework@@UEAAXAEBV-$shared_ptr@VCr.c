/*
 * XREFs of ?RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x18006ADE0
 * Callers:
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x18005968C (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x180002708 (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003CE0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18004B9E4 (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ??_9IStorageItem@Storage@Windows@@$BEI@AA @ 0x18004C5B0 (--_9IStorageItem@Storage@Windows@@$BEI@AA.c)
 *     ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180055F80 (--1-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04U.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18005B1D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180065040 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?StartActivity@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_WIPEBD@Z @ 0x18006A0C0 (-StartActivity@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@Cont.c)
 *     ?Stop@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x18006A290 (-Stop@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDelive.c)
 *     ??$CallAndWaitForCompletion@UIStorageFolderStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@3@$$ZPEAU4@@wil@@YA?AV?$ComPtr@UIStorageFolder@Storage@Windows@@@WRL@Microsoft@@PEAUIStorageFolderStatics@Storage@Windows@@P8456@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@6@@Z$$QEAPEAU7@@Z @ 0x18006AD08 (--$CallAndWaitForCompletion@UIStorageFolderStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU-$IAsy.c)
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006B598 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0.c)
 *     ??$GetActivationFactory@UIStorageFolderStatics@Storage@Windows@@@wil@@YA?AV?$com_ptr_t@UIStorageFolderStatics@Storage@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18006B9A8 (--$GetActivationFactory@UIStorageFolderStatics@Storage@Windows@@@wil@@YA-AV-$com_ptr_t@UIStorage.c)
 *     ??$WaitForCompletion@PEAVStorageFile@Storage@Windows@@V?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x18006BA68 (--$WaitForCompletion@PEAVStorageFile@Storage@Windows@@V-$ComPtr@UIStorageFile@Storage@Windows@@@.c)
 *     ??_9IStorageFolder@Storage@Windows@@$BFA@AA @ 0x18006C10C (--_9IStorageFolder@Storage@Windows@@$BFA@AA.c)
 *     ?GetSoftLandingFolderForUser@@YAJPEAXPEA_W_K@Z @ 0x1800920E0 (-GetSoftLandingFolderForUser@@YAJPEAXPEA_W_K@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B4307 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15 #try_helpers=1
__int64 *__fastcall CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::RemoveRule(__int64 a1, void ***a2)
{
  __int64 v3; // r13
  __int64 v4; // rdi
  unsigned __int64 v5; // r14
  const wchar_t *p_hstringHeader; // rbx
  void **v7; // rdx
  unsigned __int64 v8; // r8
  int SoftLandingFolderForUser; // eax
  unsigned int v10; // r8d
  unsigned int v11; // eax
  UINT32 v12; // edx
  HRESULT v13; // eax
  __int64 *v14; // rax
  __int64 v15; // r8
  const WCHAR *v16; // rax
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  int v21; // eax
  DWORD v22; // edx
  int v23; // r8d
  int v24; // eax
  void (__fastcall ***v25)(__int64, GUID *, __int64 *); // rcx
  __int64 v26; // rcx
  __int64 (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v28; // rcx
  int v30[2]; // [rsp+20h] [rbp-448h] BYREF
  int v31; // [rsp+28h] [rbp-440h]
  __int64 v32; // [rsp+30h] [rbp-438h] BYREF
  __int64 v33; // [rsp+38h] [rbp-430h] BYREF
  __int64 (__fastcall ***v34)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-428h] BYREF
  __int64 v35; // [rsp+48h] [rbp-420h] BYREF
  HSTRING v36; // [rsp+50h] [rbp-418h] BYREF
  const WCHAR *v37; // [rsp+58h] [rbp-410h] BYREF
  __int64 v38; // [rsp+60h] [rbp-408h]
  __int64 v39; // [rsp+68h] [rbp-400h]
  unsigned __int64 v40; // [rsp+70h] [rbp-3F8h]
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-3F0h] BYREF
  HSTRING string; // [rsp+90h] [rbp-3D8h] BYREF
  void *Src[2]; // [rsp+98h] [rbp-3D0h] BYREF
  __int64 v44; // [rsp+A8h] [rbp-3C0h]
  unsigned __int64 v45; // [rsp+B0h] [rbp-3B8h]
  _QWORD v46[4]; // [rsp+C0h] [rbp-3A8h] BYREF
  int v47; // [rsp+E0h] [rbp-388h]
  int *v48; // [rsp+E8h] [rbp-380h]
  int *v49; // [rsp+F0h] [rbp-378h]
  int v50; // [rsp+F8h] [rbp-370h] BYREF
  char v51; // [rsp+FCh] [rbp-36Ch]
  int v52; // [rsp+120h] [rbp-348h] BYREF
  const char *v53; // [rsp+128h] [rbp-340h]
  __int64 v54; // [rsp+130h] [rbp-338h]
  char v55; // [rsp+138h] [rbp-330h]
  __int64 v56; // [rsp+140h] [rbp-328h]
  _BYTE v57[144]; // [rsp+148h] [rbp-320h] BYREF
  __int64 v58; // [rsp+1D8h] [rbp-290h]
  __int64 v59; // [rsp+1E0h] [rbp-288h]
  __int64 v60; // [rsp+1E8h] [rbp-280h]
  __int64 v61; // [rsp+1F0h] [rbp-278h]
  _BYTE v62[24]; // [rsp+200h] [rbp-268h] BYREF
  __int64 v63; // [rsp+218h] [rbp-250h]
  WCHAR sourceString[264]; // [rsp+220h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+468h] [rbp+0h]

  v39 = -2LL;
  v3 = a1;
  v38 = a1;
  v31 = 0;
  v4 = *(_QWORD *)(a1 + 8);
  string = (HSTRING)7;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
  LOWORD(hstringHeader.Reserved.Reserved1) = 0;
  v5 = -1LL;
  std::wstring::assign(&hstringHeader.Reserved.Reserved1, *a2, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  v31 = 1;
  p_hstringHeader = (const wchar_t *)&hstringHeader;
  if ( (unsigned __int64)string >= 8 )
    p_hstringHeader = (const wchar_t *)hstringHeader.Reserved.Reserved1;
  v46[0] = &wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v46[1] = 0LL;
  v46[2] = v46;
  v46[3] = 0LL;
  v47 = 0;
  v48 = &v52;
  v49 = &v50;
  v50 = 0;
  v51 = 0;
  v55 = 0;
  v52 = 0;
  v53 = "DiagTrackRuleSetHandlerRemoveRule";
  v54 = 0LL;
  v56 = 1LL;
  v58 = 0LL;
  v59 = 0LL;
  memset_0(v57, 0, sizeof(v57));
  v60 = 0LL;
  v61 = 0LL;
  v46[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule::`vftable';
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule::StartActivity(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule *)v46,
    p_hstringHeader,
    0,
    (const char *)(v4 + 8));
  if ( (unsigned __int64)string >= 8 )
    operator delete(hstringHeader.Reserved.Reserved1);
  string = (HSTRING)7;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
  LOWORD(hstringHeader.Reserved.Reserved1) = 0;
  v7 = *a2;
  v45 = 7LL;
  v44 = 0LL;
  LOWORD(Src[0]) = 0;
  std::wstring::assign(Src, v7, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  v31 = 7;
  std::wstring::append(Src, (char *)L".xml", 4uLL);
  SoftLandingFolderForUser = GetSoftLandingFolderForUser((HANDLE)0xFFFFFFFFFFFFFFFALL, sourceString, v8);
  if ( SoftLandingFolderForUser < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x70,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\diagtrackrulesethandler.cpp",
      (const char *)(unsigned int)SoftLandingFolderForUser);
  do
    ++v5;
  while ( sourceString[v5] );
  v40 = v5;
  v10 = -1;
  if ( v5 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    v3 = v38;
  }
  else
  {
    v11 = v5 + 1;
    if ( (int)v5 + 1 >= (unsigned int)v5 )
      v10 = v5 + 1;
    if ( v11 < (unsigned int)v5 )
      Microsoft::WRL::Details::RaiseException(v11 < (unsigned int)v5 ? (Microsoft::WRL::Details *)0x80070216LL : 0);
    v12 = v10 - 1;
    if ( (unsigned int)v5 < v10 )
      v12 = v5;
    v13 = WindowsCreateStringReference(sourceString, v12, &hstringHeader, &string);
    if ( v13 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
    v36 = string;
    v14 = (__int64 *)wil::GetActivationFactory<Windows::Storage::IStorageFolderStatics>(v30);
    ___CallAndWaitForCompletion_UIStorageFolderStatics_Storage_Windows__PEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_3___ZPEAU4__wil__YA_AV__ComPtr_UIStorageFolder_Storage_Windows___WRL_Microsoft__PEAUIStorageFolderStatics_Storage_Windows__P8456_EAAJPEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_6__Z__QEAPEAU7__Z(
      &v35,
      *v14,
      v15,
      &v36);
    if ( *(_QWORD *)v30 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v30 + 16LL))(*(_QWORD *)v30);
    string = 0LL;
    v16 = (const WCHAR *)Src;
    if ( v45 >= 8 )
      v16 = (const WCHAR *)Src[0];
    v37 = v16;
    v17 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v62, &v37) + 24);
    v32 = 0LL;
    v18 =  Windows::Storage::IStorageFolder::`vcall'{80,{flat}}(v35, v17, &v32);
    if ( v18 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x650,
        (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
        (const char *)(unsigned int)v18);
    wil::WaitForCompletion<Windows::Storage::StorageFile *,Microsoft::WRL::ComPtr<Windows::Storage::IStorageFile>>(
      &v34,
      v32);
    v31 = 15;
    v19 = v32;
    if ( v32 )
    {
      v32 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v63 = 0LL;
    if ( !v34 )
    {
      wil::details::OriginateError();
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x4F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\diagtrackrulesethandler.cpp",
        (const char *)0x80070490LL);
    }
    v33 = 0LL;
    v20 = (**v34)(v34, &GUID_4207a996_ca2f_42f7_bde8_8b10457a7f30, &v33);
    if ( v20 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x52,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\diagtrackrulesethandler.cpp",
        (const char *)(unsigned int)v20);
    *(_QWORD *)v30 = 0LL;
    v21 =  Windows::Storage::IStorageItem::`vcall'{72,{flat}}(v33);
    if ( v21 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x650,
        (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
        (const char *)(unsigned int)v21);
    v24 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(
            *(void (__fastcall ****)(__int64, GUID *, __int64 *))v30,
            v22,
            v23);
    if ( v24 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x630,
        (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
        (const char *)(unsigned int)v24);
    v25 = *(void (__fastcall ****)(__int64, GUID *, __int64 *))v30;
    if ( *(_QWORD *)v30 )
    {
      *(_QWORD *)v30 = 0LL;
      ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v25)[2])(v25);
    }
    v26 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    v27 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v27)[2])(v27);
    }
    v28 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
  }
  *(_BYTE *)(v3 + 24) = 1;
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule::Stop(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule *)v46,
    (const char *)(*(_QWORD *)(v3 + 8) + 8LL));
  if ( v45 >= 8 )
    operator delete(Src[0]);
  v45 = 7LL;
  v44 = 0LL;
  LOWORD(Src[0]) = 0;
  v46[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v46);
  return wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v46);
}
