/*
 * XREFs of ?RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ @ 0x18011C054
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VViewEventDispatcher@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18012A150 (-CreateInstance@-$SimpleClassFactory@VViewEventDispatcher@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z @ 0x18000671C (-VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800245AC (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??0ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@XZ @ 0x180118238 (--0ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801287A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIComponentRelatio.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180128810 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIComponent.c)
 *     ??$MakeAndInitialize@VViewManagerBridge@@V1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@@012@$$QEAPEAVViewEventDispatcher@@@Z @ 0x180129078 (--$MakeAndInitialize@VViewManagerBridge@@V1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJ.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_CUIPopupHelper@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18012C6BC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_CUIPopupHelper@@@wil@@CA-AW4.c)
 *     _Init_thread_footer @ 0x1801E2048 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801E20A8 (_Init_thread_header.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewEventDispatcher::RuntimeClassInitialize(ViewEventDispatcher *this)
{
  void **v2; // rdi
  __int64 v3; // rcx
  char *v4; // rax
  __int64 v5; // r9
  int Interface; // edi
  RTL_SRWLOCK *v7; // rsi
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v11; // r9
  _QWORD *v12; // rsi
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  char *v17; // [rsp+70h] [rbp+30h] BYREF
  char *v18; // [rsp+78h] [rbp+38h] BYREF
  char *v19; // [rsp+80h] [rbp+40h]

  v2 = (void **)((char *)this + 528);
  v3 = *((_QWORD *)this + 66);
  if ( v3 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  *v2 = 0LL;
  v4 = (char *)operator new(0x120uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v4;
  v18 = v4;
  if ( v4 )
  {
    v19 = v4;
    v7 = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentRelationshipStore((RTL_SRWLOCK *)v4);
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Microsoft::WRL::FtmBase>::QueryInterface(
                  (Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *)v7,
                  &GUID_998b4eac_6ac8_4db4_a28d_cf69c0d23e4b,
                  v2);
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Microsoft::WRL::FtmBase>::Release((Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *)v7);
  }
  else
  {
    Interface = -2147024882;
  }
  LODWORD(v17) = Interface;
  CRVPrivate::VerifyCriticalResult(
    (unsigned __int64)&v17,
    L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const unsigned __int16 *)0x1DA,
    v5);
  v8 = (unsigned int)v17;
  if ( (int)v17 < 0 )
  {
    v9 = 475LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)v8);
    return v8;
  }
  if ( (`wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetCachedFeatureEnabledState();
  LODWORD(v17) = 0;
  BYTE4(v17) = 3;
  LODWORD(v18) = 0;
  WORD2(v18) = WORD2(v17);
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data,
    0x84350Cu,
    (const struct FEATURE_LOGGED_TRAITS *)&v18,
    1,
    3);
  if ( dword_1802BAFF0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1802BAFF0);
    if ( dword_1802BAFF0 == -1 )
    {
      xmmword_1802BA8F0 = SID_ViewEventDispatcher;
      qword_1802BA900 = 0LL;
      qword_1802BA908 = 0LL;
      xmmword_1802BA910 = (__int128)GUID_998b4eac_6ac8_4db4_a28d_cf69c0d23e4b;
      qword_1802BA920 = 0LL;
      qword_1802BA928 = 0LL;
      xmmword_1802BA930 = xmmword_18022BED8;
      qword_1802BA940 = 0LL;
      qword_1802BA948 = 0LL;
      xmmword_1802BA950 = (__int128)SID_ForegroundViewManager;
      qword_1802BA960 = 0LL;
      qword_1802BA968 = 0LL;
      Init_thread_footer(&dword_1802BAFF0);
    }
  }
  LODWORD(v17) = CImmersiveShellComponent::RegisterServiceInformation(
                   (ViewEventDispatcher *)((char *)this + 112),
                   (__int64)&xmmword_1802BA8F0,
                   4uLL);
  CRVPrivate::VerifyCriticalResult(
    (unsigned __int64)&v17,
    L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const unsigned __int16 *)0x1F3,
    v11);
  v8 = (unsigned int)v17;
  if ( (int)v17 < 0 )
  {
    v9 = 500LL;
    goto LABEL_9;
  }
  v17 = (char *)this;
  v12 = (_QWORD *)((char *)this + 512);
  LODWORD(v17) = Microsoft::WRL::Details::MakeAndInitialize<ViewManagerBridge,ViewManagerBridge,ViewEventDispatcher *>(
                   (char *)this + 512,
                   &v17);
  CRVPrivate::VerifyCriticalResult(
    (unsigned __int64)&v17,
    L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const unsigned __int16 *)0x1F9,
    v13);
  v8 = (unsigned int)v17;
  if ( (int)v17 < 0 )
  {
    v9 = 506LL;
    goto LABEL_9;
  }
  v14 = *v12;
  if ( *v12 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14 + 8LL))(*v12);
  v15 = *((_QWORD *)this + 65);
  *((_QWORD *)this + 65) = v14;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return 0LL;
}
