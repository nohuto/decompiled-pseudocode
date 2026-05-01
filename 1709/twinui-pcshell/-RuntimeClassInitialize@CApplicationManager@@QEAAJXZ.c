/*
 * XREFs of ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x180010124
 * Callers:
 *     ??$MakeAndInitialize@VCApplicationManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18001C0E0 (--$MakeAndInitialize@VCApplicationManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkn.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z @ 0x18000671C (-VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z.c)
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x1800106D8 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800245AC (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x1800246F8 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ??0CIAMGlobals@@QEAA@XZ @ 0x180024768 (--0CIAMGlobals@@QEAA@XZ.c)
 *     ?CIAMSpecialWindow_CreateInstance@@YAJQEBUSPECIAL_WINDOW_INIT_DATA@@AEBU_GUID@@PEAPEAX@Z @ 0x18002E4F8 (-CIAMSpecialWindow_CreateInstance@@YAJQEBUSPECIAL_WINDOW_INIT_DATA@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperationsConsumer@@@Z @ 0x1800F3BE0 (-InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperation.c)
 *     _Init_thread_footer @ 0x1801E2048 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801E20A8 (_Init_thread_header.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationManager::RuntimeClassInitialize(IUnknown *this)
{
  CIAMGlobals *v2; // rax
  __int64 v3; // r9
  __int64 v4; // r9
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // r9
  __int64 v10; // r9
  __int64 v11; // r9
  const struct _GUID *v12; // rdx
  IUnknown *v13; // rdi
  struct IUnknownVtbl *lpVtbl; // rcx
  __int64 v15; // r9
  HWND v16; // rdi
  struct IUnknownVtbl *v17; // rax
  __int64 v18; // r9
  __int64 v19; // r9
  __int64 v20; // r9
  _QWORD v22[2]; // [rsp+20h] [rbp-20h] BYREF
  int v23; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  CIAMGlobals *v25; // [rsp+68h] [rbp+28h] BYREF

  v2 = (CIAMGlobals *)operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v25 = v2;
  if ( v2 )
    v2 = CIAMGlobals::CIAMGlobals(v2);
  CApplicationManagerUtility::g_pIAMGlobals = (PSRWLOCK)v2;
  LODWORD(v25) = v2 == 0LL ? 0x8007000E : 0;
  if ( CRVPrivate::VerifyCriticalResult(
         (unsigned __int64)&v25,
         L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
         (const unsigned __int16 *)0x114A,
         v3) )
  {
    if ( PrivilegedOperationsService::s_this )
    {
      v8 = PrivilegedOperationsService::InitializePrivilegedOperationsForIam(
             (PrivilegedOperationsService *)&this[41],
             (struct IPrivilegedOperationsConsumer *)((unsigned __int64)&this[41] & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
      v5 = v8;
      if ( v8 >= 0 )
      {
LABEL_9:
        LODWORD(v25) = v5;
        CRVPrivate::VerifyCriticalResult(
          (unsigned __int64)&v25,
          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const unsigned __int16 *)0x114D,
          v9);
        goto LABEL_10;
      }
      v7 = (unsigned int)v8;
      v6 = 803LL;
    }
    else
    {
      v5 = -2147467259;
      v6 = 802LL;
      v7 = 2147500037LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)v7);
    goto LABEL_9;
  }
LABEL_10:
  if ( CRVPrivate::VerifyCriticalResult(
         (unsigned __int64)&v25,
         L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
         (const unsigned __int16 *)0x1150,
         v4) )
  {
    LODWORD(v25) = CObjectWithThreadUseDetection::InitApartmentId((CObjectWithThreadUseDetection *)&this[50]);
  }
  if ( CRVPrivate::VerifyCriticalResult(
         (unsigned __int64)&v25,
         L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
         (const unsigned __int16 *)0x1158,
         v10) )
  {
    v22[0] = L"ApplicationManager_DesktopShellWindow";
    v12 = (const struct _GUID *)&this[25];
    v23 = 1;
    v13 = this + 95;
    v22[1] = (unsigned __int64)&this[25] & -(__int64)(this != 0LL);
    lpVtbl = this[95].lpVtbl;
    if ( lpVtbl )
    {
      v13->lpVtbl = 0LL;
      (*((void (__fastcall **)(struct IUnknownVtbl *))lpVtbl->QueryInterface + 2))(lpVtbl);
    }
    LODWORD(v25) = CIAMSpecialWindow_CreateInstance(
                     (const struct SPECIAL_WINDOW_INIT_DATA *const)v22,
                     v12,
                     (void **)&this[95].lpVtbl);
    if ( CRVPrivate::VerifyCriticalResult(
           (unsigned __int64)&v25,
           L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
           (const unsigned __int16 *)0x1167,
           v15) )
    {
      v16 = (HWND)(*((__int64 (__fastcall **)(struct IUnknownVtbl *))v13->lpVtbl->QueryInterface + 3))(v13->lpVtbl);
      (*(void (__fastcall **)(PVOID, HWND, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[15].Ptr + 24LL))(
        CApplicationManagerUtility::g_pIAMGlobals[15].Ptr,
        v16,
        1LL);
      v17 = (struct IUnknownVtbl *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      v25 = (CIAMGlobals *)v17;
      if ( v17 )
      {
        LODWORD(v17->QueryInterface) = 1;
        v17->AddRef = 0LL;
        v17->Release = (ULONG (__stdcall *)(IUnknown *))v16;
        v17[1].QueryInterface = 0LL;
        v17[1].AddRef = 0LL;
        v17[1].Release = 0LL;
        v17[2].QueryInterface = 0LL;
        LODWORD(v17[2].AddRef) = 0;
      }
      this[101].lpVtbl = v17;
      LODWORD(v25) = v17 == 0LL ? 0x8007000E : 0;
      if ( CRVPrivate::VerifyCriticalResult(
             (unsigned __int64)&v25,
             L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
             (const unsigned __int16 *)0x1170,
             v18) )
      {
        CApplicationManager::_uMsgWindowServiceRegister = RegisterWindowMessageW(L"WindowServiceRegistered");
        if ( CApplicationManager::_uMsgWindowServiceRegister )
        {
          CApplicationManager::_uMsgWindowServiceUnregister = RegisterWindowMessageW(L"WindowServiceUnregistered");
          if ( CApplicationManager::_uMsgWindowServiceUnregister )
          {
            ChangeWindowMessageFilterEx(v16, CApplicationManager::_uMsgWindowServiceRegister, 1u, 0LL);
            ChangeWindowMessageFilterEx(v16, CApplicationManager::_uMsgWindowServiceUnregister, 1u, 0LL);
          }
        }
        SetPropW(v16, L"AllowConsentToStealFocus", HANDLE_FLAG_INHERIT);
      }
    }
  }
  if ( CRVPrivate::VerifyCriticalResult(
         (unsigned __int64)&v25,
         L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
         (const unsigned __int16 *)0x1190,
         v11) )
  {
    LODWORD(v25) = CApplicationManager::_InitializeIAMSubcomponents(this);
  }
  if ( CRVPrivate::VerifyCriticalResult(
         (unsigned __int64)&v25,
         L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
         (const unsigned __int16 *)0x1196,
         v19) )
  {
    if ( dword_1802BAD50 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                     + 4LL) )
    {
      Init_thread_header(&dword_1802BAD50);
      if ( dword_1802BAD50 == -1 )
      {
        qword_1802B9D80 = 0LL;
        xmmword_1802B9D70 = IID_IImmersiveApplicationManager;
        qword_1802B9D88 = 0LL;
        qword_1802B9DA0 = 0LL;
        qword_1802B9DA8 = 0LL;
        xmmword_1802B9D90 = *(_OWORD *)&SID_ImmersiveApplicationArrayService.Revision;
        qword_1802B9DC0 = 0LL;
        qword_1802B9DC8 = 0LL;
        qword_1802B9DE0 = 0LL;
        xmmword_1802B9DB0 = (__int128)IID_IImmersiveApplicationNotificationService;
        qword_1802B9DE8 = 0LL;
        qword_1802B9E00 = 0LL;
        qword_1802B9E08 = 0LL;
        xmmword_1802B9DD0 = (__int128)IID_IRequestTrustedComponentForegroundControlInitialization;
        qword_1802B9E20 = 0LL;
        qword_1802B9E28 = 0LL;
        qword_1802B9E40 = 0LL;
        xmmword_1802B9DF0 = (__int128)IID_IImmersiveApplicationVisibilityOverride;
        qword_1802B9E48 = 0LL;
        qword_1802B9E60 = 0LL;
        qword_1802B9E68 = 0LL;
        xmmword_1802B9E10 = (__int128)IID_IAppSwitchingTestability;
        xmmword_1802B9E30 = xmmword_18021FF20;
        xmmword_1802B9E50 = xmmword_18021FF10;
        xmmword_1802B9E70 = (__int128)IID_IClassicWindowManager;
        qword_1802B9E80 = (__int64)this[68].lpVtbl;
        qword_1802B9E88 = 0LL;
        xmmword_1802B9E90 = (__int128)IID_IImmersiveSystemMode;
        qword_1802B9EA0 = (__int64)this[67].lpVtbl;
        qword_1802B9EA8 = 0LL;
        xmmword_1802B9EB0 = (__int128)IID_IActiveZBand;
        qword_1802B9EC0 = (__int64)this[67].lpVtbl;
        qword_1802B9EC8 = 0LL;
        xmmword_1802B9ED0 = *(_OWORD *)&SID_GlobalDesktopVisibilityService.Revision;
        qword_1802B9EE0 = (__int64)this[67].lpVtbl;
        qword_1802B9EE8 = 0LL;
        xmmword_1802B9EF0 = (__int128)IID_IImmersiveCharmsWindowManager;
        qword_1802B9F00 = (__int64)this[75].lpVtbl;
        qword_1802B9F08 = 0LL;
        xmmword_1802B9F10 = (__int128)IID_IAppViewManager;
        qword_1802B9F20 = (__int64)this[76].lpVtbl;
        qword_1802B9F28 = 0LL;
        xmmword_1802B9F30 = (__int128)GUID_cdc15432_c344_4d81_a416_b5fdeec8cb04;
        qword_1802B9F40 = (__int64)this[76].lpVtbl;
        qword_1802B9F48 = 0LL;
        xmmword_1802B9F50 = (__int128)IID_IRealmActivationHistory;
        qword_1802B9F60 = (__int64)this[66].lpVtbl;
        qword_1802B9F68 = 0LL;
        xmmword_1802B9F70 = (__int128)GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e;
        qword_1802B9F80 = (__int64)this[78].lpVtbl;
        qword_1802B9F88 = 0LL;
        xmmword_1802B9F90 = (__int128)GUID_6fdc29fe_42bd_4dc0_b783_b7854dcba425;
        qword_1802B9FA0 = (__int64)this[69].lpVtbl;
        qword_1802B9FA8 = 0LL;
        Init_thread_footer(&dword_1802BAD50);
      }
    }
    LODWORD(v25) = CImmersiveShellComponent::RegisterServiceInformation(
                     (CImmersiveShellComponent *)&this[12],
                     (const struct CImmersiveShellComponent::ISC_SERVICE *)&xmmword_1802B9D70,
                     0x12u);
  }
  CRVPrivate::VerifyCriticalResult(
    (unsigned __int64)&v25,
    L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const unsigned __int16 *)0x11B2,
    v20);
  return (unsigned int)v25;
}
