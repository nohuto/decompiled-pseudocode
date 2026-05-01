/*
 * XREFs of ?RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ @ 0x1801CCFA0
 * Callers:
 *     ??$MakeAndInitialize@VViewEventDispatcher@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801C713C (--$MakeAndInitialize@VViewEventDispatcher@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_CUIPopupHelper@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180095448 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_CUIPopupHelper@@@wil@@CAX_NW4Reporti.c)
 *     _Init_thread_footer @ 0x180098368 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800983C8 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18010A094 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??$MakeAndInitialize@VComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIComponentRelationshipStore@2345@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@Z @ 0x1801C68F8 (--$MakeAndInitialize@VComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIC.c)
 *     ??$MakeAndInitialize@VViewManagerBridge@@V1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAVViewManagerBridge@@$$QEAPEAVViewEventDispatcher@@@Z @ 0x1801C71E8 (--$MakeAndInitialize@VViewManagerBridge@@V1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJ.c)
 *     ?InternalRelease@?$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@IEAAKXZ @ 0x1801CBA88 (-InternalRelease@-$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1802FF250 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1802FF2BC (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

__int64 __fastcall ViewEventDispatcher::RuntimeClassInitialize(ViewEventDispatcher *this)
{
  __int64 *v1; // rbx
  __int64 v3; // rdx
  CCriticalFailureHandler *v4; // rcx
  int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // rdx
  CCriticalFailureHandler *v9; // rcx
  _QWORD *v10; // rsi
  CCriticalFailureHandler *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned __int64 *v14; // [rsp+20h] [rbp-10h]
  unsigned __int64 *v15; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  struct ViewEventDispatcher *v17; // [rsp+40h] [rbp+10h] BYREF

  v1 = (__int64 *)((char *)this + 528);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 66);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,>(v1);
  LODWORD(v17) = v5;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v4, (int *)&v17);
    v5 = (int)v17;
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( v5 < 0 )
  {
    if ( v5 != -2147024882 && v5 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v4,
        (int *)&v17,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        0x38u,
        v14,
        v15);
      v5 = (int)v17;
    }
    if ( v5 < 0 )
    {
      v7 = 57LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
  }
  wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::ReportUsageToService((__int64)v4, v3, v6);
  if ( dword_180439B14 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_180439B14);
    if ( dword_180439B14 == -1 )
    {
      qword_1804395F0 = 0LL;
      xmmword_1804395E0 = SID_ViewEventDispatcher;
      qword_1804395F8 = 0LL;
      qword_180439610 = 0LL;
      qword_180439618 = 0LL;
      xmmword_180439600 = (__int128)GUID_998b4eac_6ac8_4db4_a28d_cf69c0d23e4b;
      qword_180439630 = 0LL;
      qword_180439638 = 0LL;
      qword_180439650 = 0LL;
      xmmword_180439620 = xmmword_1803A99B8;
      qword_180439658 = 0LL;
      xmmword_180439640 = (__int128)SID_ForegroundViewManager;
      Init_thread_footer(&dword_180439B14);
    }
  }
  v5 = CImmersiveShellComponent::RegisterServiceInformation(
         (ViewEventDispatcher *)((char *)this + 120),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)&xmmword_1804395E0,
         4LL);
  LODWORD(v17) = v5;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v9, (int *)&v17);
    v5 = (int)v17;
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( v5 < 0 )
  {
    if ( v5 != -2147024882 && v5 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v9,
        (int *)&v17,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        0x51u,
        v14,
        v15);
      v5 = (int)v17;
    }
    if ( v5 < 0 )
    {
      v7 = 82LL;
      goto LABEL_9;
    }
  }
  v10 = (_QWORD *)((char *)this + 512);
  v17 = this;
  Microsoft::WRL::ComPtr<ViewManagerBridge>::InternalRelease((volatile int **)this + 64);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<ViewManagerBridge,ViewManagerBridge,ViewEventDispatcher *>(
         (ViewManagerBridge **)this + 64,
         &v17);
  LODWORD(v17) = v5;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v11, (int *)&v17);
    v5 = (int)v17;
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( v5 < 0 )
  {
    if ( v5 != -2147024882 && v5 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v11,
        (int *)&v17,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        0x57u,
        v14,
        v15);
      v5 = (int)v17;
    }
    if ( v5 < 0 )
    {
      v7 = 88LL;
      goto LABEL_9;
    }
  }
  v12 = *v10;
  if ( *v10 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 8LL))(*v10);
  v13 = *((_QWORD *)this + 65);
  *((_QWORD *)this + 65) = v12;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return 0LL;
}
