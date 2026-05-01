/*
 * XREFs of ?RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ @ 0x1800F15E0
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VViewEventDispatcher@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800FF820 (-CreateInstance@-$SimpleClassFactory@VViewEventDispatcher@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z @ 0x1800066DC (-VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x180023C8C (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??0ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@XZ @ 0x1800ED6D8 (--0ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@U?$InterfaceList@UIViewCUIEventStore@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800FD5A0 (-Release@-$RuntimeClass@U-$InterfaceList@UIComponentRelationshipStore@ViewEventHandlers@OneCore@.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@U?$InterfaceList@UIViewCUIEventStore@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FD650 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIComponentRelationshipStore@ViewEventHandlers@O.c)
 *     ??$MakeAndInitialize@VViewManagerBridge@@V1@QEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@@012@$$QEBQEAVViewEventDispatcher@@@Z @ 0x1800FE284 (--$MakeAndInitialize@VViewManagerBridge@@V1@QEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJ.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_CUIPopupHelper@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180101F0C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_CUIPopupHelper@@@wil@@CA-AW4.c)
 *     _Init_thread_footer @ 0x180193FE8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180194048 (_Init_thread_header.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewEventDispatcher::RuntimeClassInitialize(ViewEventDispatcher *this)
{
  void **v2; // rdi
  __int64 v3; // rcx
  RTL_SRWLOCK *v4; // rax
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
  __int16 v16; // [rsp+3Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  char *v18; // [rsp+80h] [rbp+30h] BYREF
  RTL_SRWLOCK *v19; // [rsp+88h] [rbp+38h]
  RTL_SRWLOCK *v20; // [rsp+90h] [rbp+40h]
  RTL_SRWLOCK *v21; // [rsp+98h] [rbp+48h]

  v2 = (void **)((char *)this + 456);
  v3 = *((_QWORD *)this + 57);
  if ( v3 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  *v2 = 0LL;
  v18 = 0LL;
  v4 = (RTL_SRWLOCK *)operator new(0x110uLL, (const struct std::nothrow_t *)&std::nothrow);
  v19 = v4;
  v20 = v4;
  if ( v4 )
  {
    v21 = v4;
    v7 = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentRelationshipStore(v4);
    Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,Microsoft::WRL::Details::InterfaceList<IViewCUIEventStore,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                  (Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *)v7,
                  &GUID_f07c78aa_32b6_4f71_9cca_05b43394d316,
                  v2);
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,Microsoft::WRL::Details::InterfaceList<IViewCUIEventStore,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release((Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *)v7);
  }
  else
  {
    Interface = -2147024882;
  }
  LODWORD(v18) = Interface;
  CRVPrivate::VerifyCriticalResult(
    (unsigned __int64)&v18,
    L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const unsigned __int16 *)0x1D9,
    v5);
  v8 = (unsigned int)v18;
  if ( (int)v18 < 0 )
  {
    v9 = 474LL;
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
  LOBYTE(v16) = 3;
  LODWORD(v18) = 0;
  WORD2(v18) = v16;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data,
    0x84350Cu,
    (const struct FEATURE_LOGGED_TRAITS *)&v18,
    1,
    3);
  if ( dword_180245168 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_180245168);
    if ( dword_180245168 == -1 )
    {
      xmmword_180244BE0 = *(_OWORD *)&SID_ViewEventDispatcher.Revision;
      qword_180244BF0 = 0LL;
      qword_180244BF8 = 0LL;
      xmmword_180244C00 = (__int128)GUID_f07c78aa_32b6_4f71_9cca_05b43394d316;
      qword_180244C10 = 0LL;
      qword_180244C18 = 0LL;
      xmmword_180244C20 = xmmword_1801D0D50;
      qword_180244C30 = 0LL;
      qword_180244C38 = 0LL;
      Init_thread_footer(&dword_180245168);
    }
  }
  LODWORD(v18) = CImmersiveShellComponent::RegisterServiceInformation(
                   (ViewEventDispatcher *)((char *)this + 80),
                   (__int64)&xmmword_180244BE0,
                   3uLL);
  CRVPrivate::VerifyCriticalResult(
    (unsigned __int64)&v18,
    L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const unsigned __int16 *)0x1F1,
    v11);
  v8 = (unsigned int)v18;
  if ( (int)v18 < 0 )
  {
    v9 = 498LL;
    goto LABEL_9;
  }
  v18 = (char *)this;
  v12 = (_QWORD *)((char *)this + 440);
  LODWORD(v18) = Microsoft::WRL::Details::MakeAndInitialize<ViewManagerBridge,ViewManagerBridge,ViewEventDispatcher * const>(
                   (char *)this + 440,
                   &v18);
  CRVPrivate::VerifyCriticalResult(
    (unsigned __int64)&v18,
    L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const unsigned __int16 *)0x1F7,
    v13);
  v8 = (unsigned int)v18;
  if ( (int)v18 < 0 )
  {
    v9 = 504LL;
    goto LABEL_9;
  }
  v14 = *v12;
  if ( *v12 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14 + 8LL))(*v12);
  v15 = *((_QWORD *)this + 56);
  *((_QWORD *)this + 56) = v14;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return 0LL;
}
