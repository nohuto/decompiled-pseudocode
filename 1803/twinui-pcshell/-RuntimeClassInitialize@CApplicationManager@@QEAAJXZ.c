/*
 * XREFs of ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x18010AA28
 * Callers:
 *     ??$MakeAndInitialize@VCApplicationManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18010294C (--$MakeAndInitialize@VCApplicationManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x18008FFB0 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     _Init_thread_footer @ 0x180098368 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800983C8 (_Init_thread_header.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0CIAMGlobals@@QEAA@XZ @ 0x180103EA0 (--0CIAMGlobals@@QEAA@XZ.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18010A094 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?_CloakRogueWindow@CApplicationManager@@AEAAXPEAUHWND__@@@Z @ 0x18010ED28 (-_CloakRogueWindow@CApplicationManager@@AEAAXPEAUHWND__@@@Z.c)
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x180110654 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 *     ??$MakeAndInitialize@VCIAMSpecialWindow@@V1@AEBQEBUSPECIAL_WINDOW_INIT_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAVCIAMSpecialWindow@@AEBQEBUSPECIAL_WINDOW_INIT_DATA@@@Z @ 0x18011404C (--$MakeAndInitialize@VCIAMSpecialWindow@@V1@AEBQEBUSPECIAL_WINDOW_INIT_DATA@@@Details@WRL@Micros.c)
 *     ?InitializePrivilegedOperationsForIam@@YAJPEAUIPrivilegedOperationsConsumer@@@Z @ 0x18019F368 (-InitializePrivilegedOperationsForIam@@YAJPEAUIPrivilegedOperationsConsumer@@@Z.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1802FF250 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1802FF2BC (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::RuntimeClassInitialize(CApplicationManager *this)
{
  CIAMGlobals *v2; // rax
  CCriticalFailureHandler *v3; // rcx
  RTL_SRWLOCK *v4; // rax
  signed int inited; // ebx
  HWND v6; // rsi
  CApplicationManager *v7; // rcx
  CIAMGlobals *v8; // rax
  unsigned __int64 *v10; // [rsp+20h] [rbp-30h]
  unsigned __int64 *v11; // [rsp+28h] [rbp-28h]
  _QWORD v12[2]; // [rsp+38h] [rbp-18h] BYREF
  int v13; // [rsp+48h] [rbp-8h]
  CIAMGlobals *v14; // [rsp+98h] [rbp+48h] BYREF
  _QWORD *v15; // [rsp+A0h] [rbp+50h] BYREF

  v2 = (CIAMGlobals *)operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v2;
  if ( v2 )
    v4 = (RTL_SRWLOCK *)CIAMGlobals::CIAMGlobals(v2);
  else
    v4 = 0LL;
  CApplicationManagerUtility::g_pIAMGlobals = v4;
  inited = v4 == 0LL ? 0x8007000E : 0;
  LODWORD(v14) = inited;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v14);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    inited = (int)v14;
  }
  if ( inited >= 0 )
    goto LABEL_11;
  if ( inited != -2147024882 && inited != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v3,
      (int *)&v14,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x11DDu,
      v10,
      v11);
    inited = (int)v14;
  }
  if ( inited >= 0 )
  {
LABEL_11:
    inited = InitializePrivilegedOperationsForIam((struct IPrivilegedOperationsConsumer *)(((unsigned __int64)this + 320) & -(__int64)(this != 0LL)));
    LODWORD(v14) = inited;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v14);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      inited = (int)v14;
    }
    if ( inited < 0 && inited != -2147024882 && inited != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v3,
        (int *)&v14,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0x11E0u,
        v10,
        v11);
      inited = (int)v14;
    }
  }
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v14);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    inited = (int)v14;
  }
  if ( inited >= 0 )
    goto LABEL_24;
  if ( inited != -2147024882 && inited != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v3,
      (int *)&v14,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x11E3u,
      v10,
      v11);
    inited = (int)v14;
  }
  if ( inited >= 0 )
  {
LABEL_24:
    inited = CObjectWithThreadUseDetection::InitApartmentId((CApplicationManager *)((char *)this + 384));
    LODWORD(v14) = inited;
  }
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v14);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    inited = (int)v14;
  }
  if ( inited >= 0 )
    goto LABEL_32;
  if ( inited != -2147024882 && inited != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v3,
      (int *)&v14,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x11EBu,
      v10,
      v11);
    inited = (int)v14;
  }
  if ( inited >= 0 )
  {
LABEL_32:
    v12[0] = L"ApplicationManager_DesktopShellWindow";
    v12[1] = ((unsigned __int64)this + 200) & -(__int64)(this != 0LL);
    v13 = 1;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 93);
    v15 = v12;
    *((_QWORD *)this + 93) = 0LL;
    v14 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    inited = Microsoft::WRL::Details::MakeAndInitialize<CIAMSpecialWindow,CIAMSpecialWindow,SPECIAL_WINDOW_INIT_DATA const * const &>(
               &v14,
               &v15);
    if ( inited >= 0 )
      inited = (**(__int64 (__fastcall ***)(CIAMGlobals *, GUID *, char *))v14)(
                 v14,
                 &GUID_fdcff85f_e2e4_4465_a2c5_810d6ec0ffee,
                 (char *)this + 744);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    LODWORD(v14) = inited;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v14);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      inited = (int)v14;
    }
    if ( inited >= 0 )
      goto LABEL_41;
    if ( inited != -2147024882 && inited != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v3,
        (int *)&v14,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0x11FAu,
        v10,
        v11);
      inited = (int)v14;
    }
    if ( inited >= 0 )
    {
LABEL_41:
      v6 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 93) + 24LL))(*((_QWORD *)this + 93));
      CApplicationManager::_CloakRogueWindow(v7, v6);
      v8 = (CIAMGlobals *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      v14 = v8;
      if ( v8 )
      {
        *(_DWORD *)v8 = 1;
        *((_QWORD *)v8 + 1) = 0LL;
        *((_QWORD *)v8 + 2) = v6;
        *((_QWORD *)v8 + 3) = 0LL;
        *((_QWORD *)v8 + 4) = 0LL;
        *((_QWORD *)v8 + 5) = 0LL;
        *((_QWORD *)v8 + 6) = 0LL;
        *((_DWORD *)v8 + 14) = 0;
      }
      else
      {
        v8 = 0LL;
      }
      *((_QWORD *)this + 99) = v8;
      inited = v8 == 0LL ? 0x8007000E : 0;
      LODWORD(v14) = inited;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v14);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        inited = (int)v14;
      }
      if ( inited >= 0 )
        goto LABEL_51;
      if ( inited != -2147024882 && inited != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v3,
          (int *)&v14,
          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          0x1203u,
          v10,
          v11);
        inited = (int)v14;
      }
      if ( inited >= 0 )
      {
LABEL_51:
        CApplicationManager::_uMsgWindowServiceRegister = RegisterWindowMessageW(L"WindowServiceRegistered");
        if ( CApplicationManager::_uMsgWindowServiceRegister )
        {
          CApplicationManager::_uMsgWindowServiceUnregister = RegisterWindowMessageW(L"WindowServiceUnregistered");
          if ( CApplicationManager::_uMsgWindowServiceUnregister )
          {
            ChangeWindowMessageFilterEx(v6, CApplicationManager::_uMsgWindowServiceRegister, 1u, 0LL);
            ChangeWindowMessageFilterEx(v6, CApplicationManager::_uMsgWindowServiceUnregister, 1u, 0LL);
          }
        }
        SetPropW(v6, L"AllowConsentToStealFocus", HANDLE_FLAG_INHERIT);
      }
    }
  }
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v14);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    inited = (int)v14;
  }
  if ( inited >= 0 )
    goto LABEL_62;
  if ( inited != -2147024882 && inited != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v3,
      (int *)&v14,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x1223u,
      v10,
      v11);
    inited = (int)v14;
  }
  if ( inited >= 0 )
  {
LABEL_62:
    inited = CApplicationManager::_InitializeIAMSubcomponents((IUnknown *)this);
    LODWORD(v14) = inited;
  }
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v14);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    inited = (int)v14;
  }
  if ( inited >= 0 )
    goto LABEL_83;
  if ( inited != -2147024882 && inited != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v3,
      (int *)&v14,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x1229u,
      v10,
      v11);
    inited = (int)v14;
  }
  if ( inited >= 0 )
  {
LABEL_83:
    if ( dword_180439B00 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                     + 4LL) )
    {
      Init_thread_header(&dword_180439B00);
      if ( dword_180439B00 == -1 )
      {
        xmmword_180438F10 = IID_IImmersiveApplicationManager;
        qword_180438F20 = 0LL;
        qword_180438F28 = 0LL;
        xmmword_180438F30 = *(_OWORD *)&SID_ImmersiveApplicationArrayService.Revision;
        qword_180438F40 = 0LL;
        qword_180438F48 = 0LL;
        xmmword_180438F50 = (__int128)IID_IImmersiveApplicationNotificationService;
        qword_180438F60 = 0LL;
        qword_180438F68 = 0LL;
        xmmword_180438F70 = (__int128)IID_IRequestTrustedComponentForegroundControlInitialization;
        qword_180438F80 = 0LL;
        qword_180438F88 = 0LL;
        xmmword_180438F90 = (__int128)IID_IImmersiveApplicationVisibilityOverride;
        qword_180438FA0 = 0LL;
        qword_180438FA8 = 0LL;
        xmmword_180438FB0 = (__int128)IID_IAppSwitchingTestability;
        qword_180438FC0 = 0LL;
        qword_180438FC8 = 0LL;
        xmmword_180438FD0 = xmmword_1803A1D78;
        qword_180438FE0 = 0LL;
        qword_180438FE8 = 0LL;
        xmmword_180438FF0 = xmmword_1803A1D68;
        qword_180439000 = 0LL;
        qword_180439008 = 0LL;
        xmmword_180439010 = xmmword_1803A1D58;
        qword_180439020 = 0LL;
        qword_180439028 = 0LL;
        xmmword_180439030 = (__int128)IID_IClassicWindowManager;
        qword_180439040 = *((_QWORD *)this + 66);
        qword_180439048 = 0LL;
        xmmword_180439050 = (__int128)IID_IImmersiveSystemMode;
        qword_180439060 = *((_QWORD *)this + 65);
        qword_180439068 = 0LL;
        xmmword_180439070 = (__int128)IID_IActiveZBand;
        qword_180439080 = *((_QWORD *)this + 65);
        qword_180439088 = 0LL;
        xmmword_180439090 = *(_OWORD *)&SID_GlobalDesktopVisibilityService.Revision;
        qword_1804390A0 = *((_QWORD *)this + 65);
        qword_1804390A8 = 0LL;
        xmmword_1804390B0 = (__int128)IID_IImmersiveCharmsWindowManager;
        qword_1804390C0 = *((_QWORD *)this + 73);
        qword_1804390C8 = 0LL;
        xmmword_1804390D0 = (__int128)IID_IAppViewManager;
        qword_1804390E0 = *((_QWORD *)this + 74);
        qword_1804390E8 = 0LL;
        xmmword_1804390F0 = (__int128)GUID_cdc15432_c344_4d81_a416_b5fdeec8cb04;
        qword_180439100 = *((_QWORD *)this + 74);
        qword_180439108 = 0LL;
        xmmword_180439110 = (__int128)IID_IRealmActivationHistory;
        qword_180439120 = *((_QWORD *)this + 64);
        qword_180439128 = 0LL;
        xmmword_180439130 = (__int128)GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e;
        qword_180439140 = *((_QWORD *)this + 76);
        qword_180439148 = 0LL;
        xmmword_180439150 = (__int128)GUID_6fdc29fe_42bd_4dc0_b783_b7854dcba425;
        qword_180439160 = *((_QWORD *)this + 67);
        qword_180439168 = 0LL;
        Init_thread_footer(&dword_180439B00);
      }
    }
    inited = CImmersiveShellComponent::RegisterServiceInformation(
               (CApplicationManager *)((char *)this + 88),
               (const struct CImmersiveShellComponent::ISC_SERVICE *)&xmmword_180438F10,
               19LL);
    LODWORD(v14) = inited;
  }
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v14);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    inited = (int)v14;
  }
  if ( inited < 0 && inited != -2147024882 && inited != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v3,
      (int *)&v14,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x1246u,
      v10,
      v11);
    return (unsigned int)v14;
  }
  return (unsigned int)inited;
}
