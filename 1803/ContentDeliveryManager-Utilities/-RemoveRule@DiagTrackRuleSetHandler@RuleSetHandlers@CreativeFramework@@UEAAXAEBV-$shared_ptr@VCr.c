/*
 * XREFs of ?RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x180075070
 * Callers:
 *     ?UnregisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18005F8D0 (-UnregisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInte.c)
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x180060AF0 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180004050 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001B314 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x1800298C0 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ??1?$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18005CFC8 (--1-$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@_ea_18005CFC8.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180062B1C (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?StartActivity@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_WIPEBD@Z @ 0x180074388 (-StartActivity@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@Cont.c)
 *     ?Stop@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x180074560 (-Stop@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDelive.c)
 *     ??$CallAndWaitForCompletion@UIStorageFolderStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@3@$$ZPEAU4@@wil@@YA?AV?$ComPtr@UIStorageFolder@Storage@Windows@@@WRL@Microsoft@@PEAUIStorageFolderStatics@Storage@Windows@@P8456@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@6@@Z$$QEAPEAU7@@Z @ 0x180074EC4 (--$CallAndWaitForCompletion@UIStorageFolderStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU-$IAsy.c)
 *     ??$CallAndWaitForCompletion@UIStorageFolder@Storage@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@3@$$ZPEAU4@@wil@@YA?AV?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@PEAUIStorageFolder@Storage@Windows@@P8456@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@6@@Z$$QEAPEAU7@@Z @ 0x180075634 (--$CallAndWaitForCompletion@UIStorageFolder@Storage@Windows@@PEAUHSTRING__@@PEAPEAU-$IAsyncOpera.c)
 *     ??$CallAndWaitForCompletion@UIStorageItem@Storage@Windows@@W4StorageDeleteOption@23@PEAPEAUIAsyncAction@Foundation@3@$$ZW4423@@wil@@YAXPEAUIStorageItem@Storage@Windows@@P8123@EAAJW4StorageDeleteOption@23@PEAPEAUIAsyncAction@Foundation@3@@Z$$QEAW4423@@Z @ 0x1800756B4 (--$CallAndWaitForCompletion@UIStorageItem@Storage@Windows@@W4StorageDeleteOption@23@PEAPEAUIAsyn.c)
 *     ?GetFileNameForRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@AEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVCreativeRule@23@@Z @ 0x18007579C (-GetFileNameForRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@AEAA-AV-$basic_st.c)
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180075938 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0.c)
 *     ??$GetActivationFactory@UIStorageFolderStatics@Storage@Windows@@@wil@@YA?AV?$com_ptr_t@UIStorageFolderStatics@Storage@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180075D48 (--$GetActivationFactory@UIStorageFolderStatics@Storage@Windows@@@wil@@YA-AV-$com_ptr_t@UIStorage.c)
 *     ?GetSoftLandingFolderForUser@@YAJPEAXPEA_W_K@Z @ 0x18009F740 (-GetSoftLandingFolderForUser@@YAJPEAXPEA_W_K@Z.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C1147 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16 #try_helpers=1
void __fastcall CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::RemoveRule(__int64 a1, void ***a2)
{
  __int64 v4; // rdi
  const wchar_t *v5; // rbx
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  int SoftLandingFolderForUser; // eax
  unsigned __int64 v9; // r8
  unsigned int v10; // r9d
  unsigned int v11; // eax
  Microsoft::WRL::Details *v12; // rcx
  UINT32 v13; // edx
  HRESULT v14; // eax
  const WCHAR *v15; // rax
  __int64 v16; // r8
  wil::details::in1diag3 *v17; // rcx
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  __int64 v20; // rcx
  __int64 (__fastcall ***v21)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v22; // rcx
  volatile signed __int32 *v23; // rbx
  __int64 v24; // [rsp+20h] [rbp-4C8h] BYREF
  __int64 (__fastcall ***v25)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-4C0h] BYREF
  int v26; // [rsp+30h] [rbp-4B8h] BYREF
  __int64 v27; // [rsp+38h] [rbp-4B0h] BYREF
  int v28; // [rsp+40h] [rbp-4A8h]
  unsigned int v29; // [rsp+44h] [rbp-4A4h]
  unsigned int v30; // [rsp+48h] [rbp-4A0h]
  HRESULT v31; // [rsp+4Ch] [rbp-49Ch]
  int v32; // [rsp+50h] [rbp-498h]
  HSTRING v33; // [rsp+58h] [rbp-490h] BYREF
  __int64 v34; // [rsp+60h] [rbp-488h] BYREF
  const WCHAR *v35; // [rsp+68h] [rbp-480h] BYREF
  _QWORD v36[4]; // [rsp+70h] [rbp-478h] BYREF
  __int64 *v37; // [rsp+90h] [rbp-458h]
  __int64 v38; // [rsp+98h] [rbp-450h]
  __int64 v39; // [rsp+A0h] [rbp-448h]
  __int64 v40; // [rsp+A8h] [rbp-440h]
  wil::details::in1diag3 *v41; // [rsp+B0h] [rbp-438h]
  __int64 v42; // [rsp+B8h] [rbp-430h]
  wil::details::in1diag3 *v43; // [rsp+C0h] [rbp-428h]
  __int64 v44; // [rsp+C8h] [rbp-420h]
  __int64 (__fastcall ***v45)(_QWORD, GUID *, _QWORD *); // [rsp+D0h] [rbp-418h]
  __int64 v46; // [rsp+D8h] [rbp-410h]
  wchar_t *v47[2]; // [rsp+E0h] [rbp-408h] BYREF
  __int64 v48; // [rsp+F0h] [rbp-3F8h]
  unsigned __int64 v49; // [rsp+F8h] [rbp-3F0h]
  void *v50[3]; // [rsp+100h] [rbp-3E8h] BYREF
  unsigned __int64 v51; // [rsp+118h] [rbp-3D0h]
  HSTRING_HEADER hstringHeader; // [rsp+120h] [rbp-3C8h] BYREF
  HSTRING string; // [rsp+138h] [rbp-3B0h] BYREF
  void **v54; // [rsp+140h] [rbp-3A8h] BYREF
  _QWORD v55[3]; // [rsp+148h] [rbp-3A0h] BYREF
  int v56; // [rsp+160h] [rbp-388h]
  int *v57; // [rsp+168h] [rbp-380h]
  int *v58; // [rsp+170h] [rbp-378h]
  int v59; // [rsp+178h] [rbp-370h] BYREF
  char v60; // [rsp+17Ch] [rbp-36Ch]
  int v61; // [rsp+1A0h] [rbp-348h] BYREF
  const char *v62; // [rsp+1A8h] [rbp-340h]
  __int64 v63; // [rsp+1B0h] [rbp-338h]
  char v64; // [rsp+1B8h] [rbp-330h]
  __int64 v65; // [rsp+1C0h] [rbp-328h]
  _BYTE v66[144]; // [rsp+1C8h] [rbp-320h] BYREF
  __int64 v67; // [rsp+258h] [rbp-290h]
  __int64 v68; // [rsp+260h] [rbp-288h]
  __int64 v69; // [rsp+268h] [rbp-280h]
  volatile signed __int32 *v70; // [rsp+270h] [rbp-278h]
  _BYTE v71[24]; // [rsp+280h] [rbp-268h] BYREF
  __int64 v72; // [rsp+298h] [rbp-250h]
  WCHAR sourceString[264]; // [rsp+2A0h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4E8h] [rbp+0h]

  v36[2] = -2LL;
  v36[1] = a1;
  v4 = *(_QWORD *)(a1 + 8);
  v49 = 7LL;
  v48 = 0LL;
  LOWORD(v47[0]) = 0;
  std::wstring::assign((void **)v47, *a2, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  v5 = (const wchar_t *)v47;
  if ( v49 >= 8 )
    v5 = v47[0];
  v54 = &wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v55[0] = 0LL;
  v55[1] = &v54;
  v55[2] = 0LL;
  v56 = 0;
  v57 = &v61;
  v58 = &v59;
  v59 = 0;
  v60 = 0;
  v64 = 0;
  v61 = 0;
  v62 = "DiagTrackRuleSetHandlerRemoveRule";
  v63 = 0LL;
  v65 = 1LL;
  v67 = 0LL;
  memset_0(v66, 0, sizeof(v66));
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v54 = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule::`vftable';
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule::StartActivity(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule *)&v54,
    v5,
    0,
    (const char *)(v4 + 8));
  if ( v49 >= 8 )
    operator delete(v47[0]);
  v49 = 7LL;
  v48 = 0LL;
  LOWORD(v47[0]) = 0;
  CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::GetFileNameForRule(v6, v50, *a2);
  SoftLandingFolderForUser = GetSoftLandingFolderForUser((HANDLE)0xFFFFFFFFFFFFFFFALL, sourceString, v7);
  if ( SoftLandingFolderForUser < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x70,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\diagtrackrulesethandler.cpp",
      (const char *)(unsigned int)SoftLandingFolderForUser);
LABEL_36:
    Microsoft::WRL::Details::RaiseException(v12);
LABEL_37:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14);
LABEL_38:
    wil::details::in1diag3::Throw_Hr(
      v17,
      (void *)0x4F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\diagtrackrulesethandler.cpp",
      (const char *)0x80070490LL);
    goto LABEL_39;
  }
  v9 = -1LL;
  do
    ++v9;
  while ( sourceString[v9] );
  v36[3] = v9;
  v10 = -1;
  if ( v9 > 0xFFFFFFFF )
  {
LABEL_40:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    JUMPOUT(0x18007562FLL);
  }
  v28 = v9;
  v11 = v9 + 1;
  if ( (int)v9 + 1 >= (unsigned int)v9 )
    v10 = v9 + 1;
  v29 = v10;
  v12 = v11 < (unsigned int)v9 ? (Microsoft::WRL::Details *)0x80070216LL : 0LL;
  v30 = v11 < (unsigned int)v9 ? 0x80070216 : 0;
  if ( v11 < (unsigned int)v9 )
    goto LABEL_36;
  v13 = v10 - 1;
  if ( (unsigned int)v9 < v10 )
    v13 = v9;
  v14 = WindowsCreateStringReference(sourceString, v13, &hstringHeader, &string);
  v31 = v14;
  if ( v14 < 0 )
    goto LABEL_37;
  v33 = string;
  v37 = (__int64 *)wil::GetActivationFactory<Windows::Storage::IStorageFolderStatics>(&v34);
  v38 = *v37;
  ___CallAndWaitForCompletion_UIStorageFolderStatics_Storage_Windows__PEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_3___ZPEAU4__wil__YA_AV__ComPtr_UIStorageFolder_Storage_Windows___WRL_Microsoft__PEAUIStorageFolderStatics_Storage_Windows__P8456_EAAJPEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_6__Z__QEAPEAU7__Z(
    (__int64)&v27,
    v38,
    (__int64 (__fastcall *)(__int64, _QWORD, __int64 *)) Windows::Storage::IStorageFileStatics::`vcall'{48,{flat}},
    &v33);
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  string = 0LL;
  v15 = (const WCHAR *)v50;
  if ( v51 >= 8 )
    v15 = (const WCHAR *)v50[0];
  v35 = v15;
  v39 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v71, &v35);
  v40 = *(_QWORD *)(v39 + 24);
  v36[0] = v40;
  ___CallAndWaitForCompletion_UIStorageFolder_Storage_Windows__PEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFile_Storage_Windows___Foundation_3___ZPEAU4__wil__YA_AV__ComPtr_UIStorageFile_Storage_Windows___WRL_Microsoft__PEAUIStorageFolder_Storage_Windows__P8456_EAAJPEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFile_Storage_Windows___Foundation_6__Z__QEAPEAU7__Z(
    &v25,
    v27,
    v16,
    v36);
  v72 = 0LL;
  v17 = retaddr;
  v41 = retaddr;
  if ( !v25 )
    goto LABEL_38;
  v24 = 0LL;
  v42 = 0LL;
  v18 = (**v25)(v25, &GUID_4207a996_ca2f_42f7_bde8_8b10457a7f30, &v24);
  v32 = v18;
  v19 = retaddr;
  v43 = retaddr;
  if ( v18 < 0 )
  {
LABEL_39:
    wil::details::in1diag3::Throw_Hr(
      v19,
      (void *)0x52,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\diagtrackrulesethandler.cpp",
      (const char *)(unsigned int)v18);
    goto LABEL_40;
  }
  v26 = 1;
  ___CallAndWaitForCompletion_UIStorageItem_Storage_Windows__W4StorageDeleteOption_23_PEAPEAUIAsyncAction_Foundation_3___ZW4423__wil__YAXPEAUIStorageItem_Storage_Windows__P8123_EAAJW4StorageDeleteOption_23_PEAPEAUIAsyncAction_Foundation_3__Z__QEAW4423__Z(
    v24,
     Windows::Storage::IStorageItem::`vcall'{72,{flat}},
    &v26);
  v20 = v24;
  v44 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = v25;
  v45 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v21)[2])(v21);
  }
  v22 = v27;
  v46 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  *(_BYTE *)(a1 + 24) = 1;
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule::Stop(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule *)&v54,
    (const char *)(*(_QWORD *)(a1 + 8) + 8LL));
  if ( v51 >= 8 )
    operator delete(v50[0]);
  v51 = 7LL;
  v50[2] = 0LL;
  LOWORD(v50[0]) = 0;
  v54 = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v54);
  if ( v70 )
  {
    if ( _InterlockedExchangeAdd(v70, 0xFFFFFFFF) == 1 )
    {
      v23 = v70;
      if ( v70 )
      {
        wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)(v70 + 2));
        operator delete((void *)v23);
      }
    }
    v70 = 0LL;
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)&v59);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v55);
}
