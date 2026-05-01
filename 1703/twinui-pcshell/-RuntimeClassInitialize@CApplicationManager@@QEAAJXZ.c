/*
 * XREFs of ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x18000FBE4
 * Callers:
 *     ??$MakeAndInitialize@VCApplicationManager@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18001AE4C (--$MakeAndInitialize@VCApplicationManager@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z @ 0x1800066DC (-VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z.c)
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x180010198 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x180023C8C (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180023DD8 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ??0CIAMGlobals@@QEAA@XZ @ 0x180023E48 (--0CIAMGlobals@@QEAA@XZ.c)
 *     ?CIAMSpecialWindow_CreateInstance@@YAJQEBUSPECIAL_WINDOW_INIT_DATA@@AEBU_GUID@@PEAPEAX@Z @ 0x18002CBF8 (-CIAMSpecialWindow_CreateInstance@@YAJQEBUSPECIAL_WINDOW_INIT_DATA@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperationsConsumer@@@Z @ 0x1800D096C (-InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperation.c)
 *     _Init_thread_footer @ 0x180193FE8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180194048 (_Init_thread_header.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
         (const unsigned __int16 *)0x10E1,
         v3) )
  {
    if ( PrivilegedOperationsService::s_this )
    {
      v8 = PrivilegedOperationsService::InitializePrivilegedOperationsForIam(
             (PrivilegedOperationsService *)&this[34],
             (struct IPrivilegedOperationsConsumer *)((unsigned __int64)&this[34] & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
      v5 = v8;
      if ( v8 >= 0 )
      {
LABEL_9:
        LODWORD(v25) = v5;
        CRVPrivate::VerifyCriticalResult(
          (unsigned __int64)&v25,
          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const unsigned __int16 *)0x10E4,
          v9);
        goto LABEL_10;
      }
      v7 = (unsigned int)v8;
      v6 = 811LL;
    }
    else
    {
      v5 = -2147467259;
      v6 = 810LL;
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
         (const unsigned __int16 *)0x10E7,
         v4) )
  {
    LODWORD(v25) = CObjectWithThreadUseDetection::InitApartmentId((CObjectWithThreadUseDetection *)&this[41]);
  }
  if ( CRVPrivate::VerifyCriticalResult(
         (unsigned __int64)&v25,
         L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
         (const unsigned __int16 *)0x10EF,
         v10) )
  {
    v22[0] = L"ApplicationManager_DesktopShellWindow";
    v12 = (const struct _GUID *)&this[20];
    v23 = 1;
    v13 = this + 86;
    v22[1] = (unsigned __int64)&this[20] & -(__int64)(this != 0LL);
    lpVtbl = this[86].lpVtbl;
    if ( lpVtbl )
    {
      v13->lpVtbl = 0LL;
      (*((void (__fastcall **)(struct IUnknownVtbl *))lpVtbl->QueryInterface + 2))(lpVtbl);
    }
    LODWORD(v25) = CIAMSpecialWindow_CreateInstance(
                     (const struct SPECIAL_WINDOW_INIT_DATA *const)v22,
                     v12,
                     (void **)&this[86].lpVtbl);
    if ( CRVPrivate::VerifyCriticalResult(
           (unsigned __int64)&v25,
           L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
           (const unsigned __int16 *)0x10FE,
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
      this[91].lpVtbl = v17;
      LODWORD(v25) = v17 == 0LL ? 0x8007000E : 0;
      if ( CRVPrivate::VerifyCriticalResult(
             (unsigned __int64)&v25,
             L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
             (const unsigned __int16 *)0x1107,
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
         (const unsigned __int16 *)0x1127,
         v11) )
  {
    LODWORD(v25) = CApplicationManager::_InitializeIAMSubcomponents(this);
  }
  if ( CRVPrivate::VerifyCriticalResult(
         (unsigned __int64)&v25,
         L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
         (const unsigned __int16 *)0x112D,
         v19) )
  {
    if ( dword_180244F60 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                     + 4LL) )
    {
      Init_thread_header(&dword_180244F60);
      if ( dword_180244F60 == -1 )
      {
        qword_180244500 = 0LL;
        xmmword_1802444F0 = IID_IImmersiveApplicationManager;
        qword_180244508 = 0LL;
        qword_180244520 = 0LL;
        qword_180244528 = 0LL;
        xmmword_180244510 = *(_OWORD *)&SID_ImmersiveApplicationArrayService.Revision;
        qword_180244540 = 0LL;
        qword_180244548 = 0LL;
        qword_180244560 = 0LL;
        xmmword_180244530 = (__int128)IID_IImmersiveApplicationNotificationService;
        qword_180244568 = 0LL;
        qword_180244580 = 0LL;
        qword_180244588 = 0LL;
        xmmword_180244550 = (__int128)IID_IRequestTrustedComponentForegroundControlInitialization;
        qword_1802445A0 = 0LL;
        qword_1802445A8 = 0LL;
        qword_1802445C0 = 0LL;
        xmmword_180244570 = (__int128)IID_IImmersiveApplicationVisibilityOverride;
        qword_1802445C8 = 0LL;
        qword_1802445E0 = 0LL;
        qword_1802445E8 = 0LL;
        xmmword_180244590 = (__int128)IID_IAppSwitchingTestability;
        xmmword_1802445B0 = xmmword_1801C75E0;
        xmmword_1802445D0 = xmmword_1801C75D0;
        xmmword_1802445F0 = (__int128)IID_IClassicWindowManager;
        qword_180244600 = (__int64)this[59].lpVtbl;
        qword_180244608 = 0LL;
        xmmword_180244610 = (__int128)IID_IImmersiveSystemMode;
        qword_180244620 = (__int64)this[58].lpVtbl;
        qword_180244628 = 0LL;
        xmmword_180244630 = (__int128)IID_IActiveZBand;
        qword_180244640 = (__int64)this[58].lpVtbl;
        qword_180244648 = 0LL;
        xmmword_180244650 = *(_OWORD *)&SID_GlobalDesktopVisibilityService.Revision;
        qword_180244660 = (__int64)this[58].lpVtbl;
        qword_180244668 = 0LL;
        xmmword_180244670 = (__int128)IID_IImmersiveCharmsWindowManager;
        qword_180244680 = (__int64)this[66].lpVtbl;
        qword_180244688 = 0LL;
        xmmword_180244690 = (__int128)IID_IAppViewManager;
        qword_1802446A0 = (__int64)this[67].lpVtbl;
        qword_1802446A8 = 0LL;
        xmmword_1802446B0 = (__int128)GUID_cdc15432_c344_4d81_a416_b5fdeec8cb04;
        qword_1802446C0 = (__int64)this[67].lpVtbl;
        qword_1802446C8 = 0LL;
        xmmword_1802446D0 = (__int128)IID_IRealmActivationHistory;
        qword_1802446E0 = (__int64)this[57].lpVtbl;
        qword_1802446E8 = 0LL;
        xmmword_1802446F0 = (__int128)GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e;
        qword_180244700 = (__int64)this[69].lpVtbl;
        qword_180244708 = 0LL;
        xmmword_180244710 = (__int128)GUID_6fdc29fe_42bd_4dc0_b783_b7854dcba425;
        qword_180244720 = (__int64)this[60].lpVtbl;
        qword_180244728 = 0LL;
        Init_thread_footer(&dword_180244F60);
      }
    }
    LODWORD(v25) = CImmersiveShellComponent::RegisterServiceInformation(
                     (CImmersiveShellComponent *)&this[9],
                     (const struct CImmersiveShellComponent::ISC_SERVICE *)&xmmword_1802444F0,
                     0x12u);
  }
  CRVPrivate::VerifyCriticalResult(
    (unsigned __int64)&v25,
    L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const unsigned __int16 *)0x1149,
    v20);
  return (unsigned int)v25;
}
