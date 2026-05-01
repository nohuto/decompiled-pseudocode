/*
 * XREFs of ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x180110654
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x18010AA28 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCAppViewManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC88 (-InternalRelease@-$ComPtr@VCAppViewManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VFrameFactory@@UIApplicationFrameFactory@@PEAUIPrivilegedPresentationOperations@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationFrameFactory@@$$QEAPEAUIPrivilegedPresentationOperations@@@Z @ 0x180102AF0 (--$MakeAndInitialize@VFrameFactory@@UIApplicationFrameFactory@@PEAUIPrivilegedPresentationOperat.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18010618C (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VCFallbackWindow@@UIFallbackWindow@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIFallbackWindow@@@Z @ 0x180113F90 (--$MakeAndInitialize@VCFallbackWindow@@UIFallbackWindow@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIF.c)
 *     ??$MakeAndInitialize@VCImmersiveWindowManager@@UIImmersiveWindowManager@@AEAPEAUIIAMServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIImmersiveWindowManager@@AEAPEAUIIAMServiceProvider@@@Z @ 0x1801153D8 (--$MakeAndInitialize@VCImmersiveWindowManager@@UIImmersiveWindowManager@@AEAPEAUIIAMServiceProvi.c)
 *     ?s_CreateInstance@CImmersiveMode@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180118B60 (-s_CreateInstance@CImmersiveMode@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VCClassicWindowManager@@UIClassicWindowManagerPrivate@@AEAPEAUIImmersiveSystemModeInternal@@@Details@WRL@Microsoft@@YAJPEAPEAUIClassicWindowManagerPrivate@@AEAPEAUIImmersiveSystemModeInternal@@@Z @ 0x1801192D0 (--$MakeAndInitialize@VCClassicWindowManager@@UIClassicWindowManagerPrivate@@AEAPEAUIImmersiveSys.c)
 *     ?s_CreateInstance@CRotationManagerSync@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x18011BB0C (-s_CreateInstance@CRotationManagerSync@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CreateInstance@CImmersiveApplicationTransitionHelper@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x18011BDA0 (-CreateInstance@CImmersiveApplicationTransitionHelper@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VCCharmsWindowManager@@UICharmWindowManagerInternal@@AEAPEAUIImmersiveApplicationTransitionHelper@@@Details@WRL@Microsoft@@YAJPEAPEAUICharmWindowManagerInternal@@AEAPEAUIImmersiveApplicationTransitionHelper@@@Z @ 0x18011C580 (--$MakeAndInitialize@VCCharmsWindowManager@@UICharmWindowManagerInternal@@AEAPEAUIImmersiveAppli.c)
 *     ??$MakeAndInitialize@VCAppViewManager@@V1@AEAPEAUIImmersiveApplicationManagerInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVCAppViewManager@@AEAPEAUIImmersiveApplicationManagerInternal@@@Z @ 0x18011CDB8 (--$MakeAndInitialize@VCAppViewManager@@V1@AEAPEAUIImmersiveApplicationManagerInternal@@@Details@.c)
 *     ?s_CreateInstance@CRealmActivationHistory@@SAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x180128AA4 (-s_CreateInstance@CRealmActivationHistory@@SAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUI.c)
 *     ?CApplicationFrameService_CreateInstance@@YAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x180129A78 (-CApplicationFrameService_CreateInstance@@YAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1802FF250 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1802FF2BC (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::_InitializeIAMSubcomponents(IUnknown *punkSite)
{
  IUnknown *v2; // rsi
  const struct _GUID *v3; // rdx
  __int64 v4; // rcx
  CCriticalFailureHandler *v5; // rcx
  int Instance; // ebx
  CCriticalFailureHandler *v7; // rcx
  CCriticalFailureHandler *v8; // rcx
  CCriticalFailureHandler *v9; // rcx
  CCriticalFailureHandler *v10; // rcx
  IUnknown **v11; // rsi
  const struct _GUID *v12; // rcx
  CCriticalFailureHandler *v13; // rcx
  CCriticalFailureHandler *v14; // rcx
  CCriticalFailureHandler *v15; // rcx
  CCriticalFailureHandler *v16; // rcx
  const struct _GUID *v17; // rcx
  CCriticalFailureHandler *v18; // rcx
  const struct _GUID *v19; // rcx
  CCriticalFailureHandler *v20; // rcx
  CCriticalFailureHandler *v21; // rcx
  CCriticalFailureHandler *v22; // rcx
  CCriticalFailureHandler *v23; // rcx
  const struct _GUID *v24; // rdx
  const struct _GUID *v25; // rdx
  unsigned __int64 *v27; // [rsp+20h] [rbp-38h]
  unsigned __int64 *v28; // [rsp+28h] [rbp-30h]
  __int64 (__fastcall ***v29)(_QWORD, GUID *, IUnknown *); // [rsp+30h] [rbp-28h] BYREF
  __int64 (__fastcall ***v30)(_QWORD, GUID *, IUnknown *); // [rsp+38h] [rbp-20h] BYREF
  __int64 v31[3]; // [rsp+40h] [rbp-18h] BYREF
  IUnknown *lpVtbl; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v33; // [rsp+A8h] [rbp+50h] BYREF
  __int64 (__fastcall ***v34)(_QWORD, GUID *, __int64 *); // [rsp+B0h] [rbp+58h] BYREF
  __int64 (__fastcall ***v35)(_QWORD, GUID *, IUnknown *); // [rsp+B8h] [rbp+60h] BYREF

  v31[1] = -2LL;
  v2 = punkSite + 71;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[71]);
  Instance = CEnumerableObjectCollection::CreateInstance(v4, v3, (void **)&v2->lpVtbl);
  LODWORD(lpVtbl) = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v5, (int *)&lpVtbl);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = (int)lpVtbl;
  }
  if ( Instance >= 0 )
    goto LABEL_8;
  if ( Instance != -2147024882 && Instance != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v5,
      (int *)&lpVtbl,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x1250u,
      v27,
      v28);
    Instance = (int)lpVtbl;
  }
  if ( Instance >= 0 )
  {
LABEL_8:
    v33 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
    lpVtbl = (IUnknown *)((unsigned __int64)&punkSite[24] & -(__int64)(punkSite != 0LL));
    v33 = 0LL;
    v34 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
    Instance = Microsoft::WRL::Details::MakeAndInitialize<CImmersiveWindowManager,IImmersiveWindowManager,IIAMServiceProvider * &>(
                 &v34,
                 &lpVtbl);
    if ( Instance >= 0 )
      Instance = (**v34)(v34, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, &v33);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
    LODWORD(lpVtbl) = Instance;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v7, (int *)&lpVtbl);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      Instance = (int)lpVtbl;
    }
    if ( Instance >= 0 )
      goto LABEL_17;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v7,
        (int *)&lpVtbl,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0x1256u,
        v27,
        v28);
      Instance = (int)lpVtbl;
    }
    if ( Instance >= 0 )
    {
LABEL_17:
      Instance = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, __int64))v2->lpVtbl->QueryInterface + 5))(
                   v2->lpVtbl,
                   v33);
      LODWORD(lpVtbl) = Instance;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v8, (int *)&lpVtbl);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        Instance = (int)lpVtbl;
      }
      if ( Instance >= 0 )
        goto LABEL_24;
      if ( Instance != -2147024882 && Instance != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v8,
          (int *)&lpVtbl,
          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          0x1259u,
          v27,
          v28);
        Instance = (int)lpVtbl;
      }
      if ( Instance >= 0 )
      {
LABEL_24:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[70]);
        punkSite[70].lpVtbl = 0LL;
        v35 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
        Instance = Microsoft::WRL::Details::MakeAndInitialize<CFallbackWindow,IFallbackWindow,>(&v35);
        if ( Instance >= 0 )
          Instance = (**v35)(v35, &GUID_743bc0bd_69f0_4f28_8401_047ae0c0ffee, punkSite + 70);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
        LODWORD(lpVtbl) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v9, (int *)&lpVtbl);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)lpVtbl;
        }
        if ( Instance >= 0 )
          goto LABEL_33;
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v9,
            (int *)&lpVtbl,
            L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            0x1260u,
            v27,
            v28);
          Instance = (int)lpVtbl;
        }
        if ( Instance >= 0 )
        {
LABEL_33:
          Instance = IUnknown_SetSite((IUnknown *)punkSite[70].lpVtbl, punkSite);
          LODWORD(lpVtbl) = Instance;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v10, (int *)&lpVtbl);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            Instance = (int)lpVtbl;
          }
          if ( Instance >= 0 )
            goto LABEL_40;
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v10,
              (int *)&lpVtbl,
              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              0x1263u,
              v27,
              v28);
            Instance = (int)lpVtbl;
          }
          if ( Instance >= 0 )
          {
LABEL_40:
            v11 = (IUnknown **)&punkSite[65];
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[65]);
            Instance = CImmersiveMode::s_CreateInstance(v12, (void **)&punkSite[65].lpVtbl);
            LODWORD(lpVtbl) = Instance;
            if ( !CRVPrivate::cfhImmersiveShellStartup )
            {
              CCriticalFailureHandler::GetFakeFailure(v13, (int *)&lpVtbl);
              CRVPrivate::cfhImmersiveShellStartup = 1;
              Instance = (int)lpVtbl;
            }
            if ( Instance >= 0 )
              goto LABEL_47;
            if ( Instance != -2147024882 && Instance != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v13,
                (int *)&lpVtbl,
                L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                0x126Bu,
                v27,
                v28);
              Instance = (int)lpVtbl;
            }
            if ( Instance >= 0 )
            {
LABEL_47:
              Instance = IUnknown_SetSite(*v11, punkSite);
              LODWORD(lpVtbl) = Instance;
              if ( !CRVPrivate::cfhImmersiveShellStartup )
              {
                CCriticalFailureHandler::GetFakeFailure(v14, (int *)&lpVtbl);
                CRVPrivate::cfhImmersiveShellStartup = 1;
                Instance = (int)lpVtbl;
              }
              if ( Instance >= 0 )
                goto LABEL_54;
              if ( Instance != -2147024882 && Instance != -2144862209 )
              {
                CCriticalFailureHandler::HandleFailure(
                  v14,
                  (int *)&lpVtbl,
                  L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                  0x126Eu,
                  v27,
                  v28);
                Instance = (int)lpVtbl;
              }
              if ( Instance >= 0 )
              {
LABEL_54:
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[66]);
                lpVtbl = *v11;
                punkSite[66].lpVtbl = 0LL;
                v29 = 0LL;
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
                Instance = Microsoft::WRL::Details::MakeAndInitialize<CClassicWindowManager,IClassicWindowManagerPrivate,IImmersiveSystemModeInternal * &>(
                             &v29,
                             &lpVtbl);
                if ( Instance >= 0 )
                  Instance = (**v29)(v29, &GUID_226276c7_ca53_498c_b0be_ad1ea9c0ffee, punkSite + 66);
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
                LODWORD(lpVtbl) = Instance;
                if ( !CRVPrivate::cfhImmersiveShellStartup )
                {
                  CCriticalFailureHandler::GetFakeFailure(v15, (int *)&lpVtbl);
                  CRVPrivate::cfhImmersiveShellStartup = 1;
                  Instance = (int)lpVtbl;
                }
                if ( Instance >= 0 )
                  goto LABEL_63;
                if ( Instance != -2147024882 && Instance != -2144862209 )
                {
                  CCriticalFailureHandler::HandleFailure(
                    v15,
                    (int *)&lpVtbl,
                    L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                    0x1276u,
                    v27,
                    v28);
                  Instance = (int)lpVtbl;
                }
                if ( Instance >= 0 )
                {
LABEL_63:
                  Instance = IUnknown_SetSite((IUnknown *)punkSite[66].lpVtbl, punkSite);
                  LODWORD(lpVtbl) = Instance;
                  if ( !CRVPrivate::cfhImmersiveShellStartup )
                  {
                    CCriticalFailureHandler::GetFakeFailure(v16, (int *)&lpVtbl);
                    CRVPrivate::cfhImmersiveShellStartup = 1;
                    Instance = (int)lpVtbl;
                  }
                  if ( Instance >= 0 )
                    goto LABEL_70;
                  if ( Instance != -2147024882 && Instance != -2144862209 )
                  {
                    CCriticalFailureHandler::HandleFailure(
                      v16,
                      (int *)&lpVtbl,
                      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                      0x1279u,
                      v27,
                      v28);
                    Instance = (int)lpVtbl;
                  }
                  if ( Instance >= 0 )
                  {
LABEL_70:
                    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[67]);
                    Instance = CRotationManagerSync::s_CreateInstance(v17, (void **)&punkSite[67].lpVtbl);
                    LODWORD(lpVtbl) = Instance;
                    if ( !CRVPrivate::cfhImmersiveShellStartup )
                    {
                      CCriticalFailureHandler::GetFakeFailure(v18, (int *)&lpVtbl);
                      CRVPrivate::cfhImmersiveShellStartup = 1;
                      Instance = (int)lpVtbl;
                    }
                    if ( Instance >= 0 )
                      goto LABEL_77;
                    if ( Instance != -2147024882 && Instance != -2144862209 )
                    {
                      CCriticalFailureHandler::HandleFailure(
                        v18,
                        (int *)&lpVtbl,
                        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                        0x1281u,
                        v27,
                        v28);
                      Instance = (int)lpVtbl;
                    }
                    if ( Instance >= 0 )
                    {
LABEL_77:
                      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[68]);
                      Instance = CImmersiveApplicationTransitionHelper::CreateInstance(
                                   v19,
                                   (void **)&punkSite[68].lpVtbl);
                      LODWORD(lpVtbl) = Instance;
                      if ( !CRVPrivate::cfhImmersiveShellStartup )
                      {
                        CCriticalFailureHandler::GetFakeFailure(v20, (int *)&lpVtbl);
                        CRVPrivate::cfhImmersiveShellStartup = 1;
                        Instance = (int)lpVtbl;
                      }
                      if ( Instance >= 0 )
                        goto LABEL_84;
                      if ( Instance != -2147024882 && Instance != -2144862209 )
                      {
                        CCriticalFailureHandler::HandleFailure(
                          v20,
                          (int *)&lpVtbl,
                          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                          0x128Bu,
                          v27,
                          v28);
                        Instance = (int)lpVtbl;
                      }
                      if ( Instance >= 0 )
                      {
LABEL_84:
                        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[73]);
                        lpVtbl = (IUnknown *)punkSite[68].lpVtbl;
                        punkSite[73].lpVtbl = 0LL;
                        v30 = 0LL;
                        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
                        Instance = Microsoft::WRL::Details::MakeAndInitialize<CCharmsWindowManager,ICharmWindowManagerInternal,IImmersiveApplicationTransitionHelper * &>(
                                     &v30,
                                     &lpVtbl);
                        if ( Instance >= 0 )
                          Instance = (**v30)(v30, &GUID_abda261c_6cda_4269_9160_4a16fbc0ffee, punkSite + 73);
                        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
                        LODWORD(lpVtbl) = Instance;
                        if ( !CRVPrivate::cfhImmersiveShellStartup )
                        {
                          CCriticalFailureHandler::GetFakeFailure(v21, (int *)&lpVtbl);
                          CRVPrivate::cfhImmersiveShellStartup = 1;
                          Instance = (int)lpVtbl;
                        }
                        if ( Instance >= 0 )
                          goto LABEL_93;
                        if ( Instance != -2147024882 && Instance != -2144862209 )
                        {
                          CCriticalFailureHandler::HandleFailure(
                            v21,
                            (int *)&lpVtbl,
                            L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                            0x1292u,
                            v27,
                            v28);
                          Instance = (int)lpVtbl;
                        }
                        if ( Instance >= 0 )
                        {
LABEL_93:
                          Instance = IUnknown_SetSite((IUnknown *)punkSite[73].lpVtbl, punkSite);
                          LODWORD(lpVtbl) = Instance;
                          if ( !CRVPrivate::cfhImmersiveShellStartup )
                          {
                            CCriticalFailureHandler::GetFakeFailure(v22, (int *)&lpVtbl);
                            CRVPrivate::cfhImmersiveShellStartup = 1;
                            Instance = (int)lpVtbl;
                          }
                          if ( Instance >= 0 )
                            goto LABEL_100;
                          if ( Instance != -2147024882 && Instance != -2144862209 )
                          {
                            CCriticalFailureHandler::HandleFailure(
                              v22,
                              (int *)&lpVtbl,
                              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                              0x1295u,
                              v27,
                              v28);
                            Instance = (int)lpVtbl;
                          }
                          if ( Instance >= 0 )
                          {
LABEL_100:
                            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[74]);
                            lpVtbl = punkSite + 30;
                            punkSite[74].lpVtbl = 0LL;
                            v31[0] = 0LL;
                            Microsoft::WRL::ComPtr<CAppViewManager>::InternalRelease(v31);
                            Instance = Microsoft::WRL::Details::MakeAndInitialize<CAppViewManager,CAppViewManager,IImmersiveApplicationManagerInternal * &>(
                                         v31,
                                         &lpVtbl);
                            if ( Instance >= 0 )
                              Instance = (**(__int64 (__fastcall ***)(__int64, GUID *, IUnknown *))v31[0])(
                                           v31[0],
                                           &GUID_f89b0985_7620_4f91_ad6d_a2ab45c0ffee,
                                           punkSite + 74);
                            Microsoft::WRL::ComPtr<CAppViewManager>::InternalRelease(v31);
                            LODWORD(lpVtbl) = Instance;
                            if ( !CRVPrivate::cfhImmersiveShellStartup )
                            {
                              CCriticalFailureHandler::GetFakeFailure(v23, (int *)&lpVtbl);
                              CRVPrivate::cfhImmersiveShellStartup = 1;
                              Instance = (int)lpVtbl;
                            }
                            if ( Instance >= 0 )
                              goto LABEL_109;
                            if ( Instance != -2147024882 && Instance != -2144862209 )
                            {
                              CCriticalFailureHandler::HandleFailure(
                                v23,
                                (int *)&lpVtbl,
                                L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                                0x129Du,
                                v27,
                                v28);
                              Instance = (int)lpVtbl;
                            }
                            if ( Instance >= 0 )
                            {
LABEL_109:
                              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[64]);
                              Instance = CRealmActivationHistory::s_CreateInstance(
                                           (struct IImmersiveApplicationManagerInternal *)&punkSite[30],
                                           v24,
                                           (void **)&punkSite[64].lpVtbl);
                              if ( Instance >= 0 )
                              {
                                Instance = IUnknown_SetSite((IUnknown *)punkSite[64].lpVtbl, punkSite);
                                if ( Instance >= 0 )
                                {
                                  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[75]);
                                  Instance = CApplicationFrameService_CreateInstance(
                                               (struct IImmersiveApplicationManagerInternal *)&punkSite[30],
                                               v25,
                                               (void **)&punkSite[75].lpVtbl);
                                  if ( Instance >= 0 )
                                  {
                                    Instance = IUnknown_SetSite((IUnknown *)punkSite[75].lpVtbl, punkSite);
                                    if ( Instance >= 0 )
                                    {
                                      lpVtbl = (IUnknown *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr;
                                      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[76]);
                                      Instance = Microsoft::WRL::Details::MakeAndInitialize<FrameFactory,IApplicationFrameFactory,IPrivilegedPresentationOperations *>(
                                                   &punkSite[76].lpVtbl,
                                                   (struct IPrivilegedPresentationOperations **)&lpVtbl);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
  }
  return (unsigned int)Instance;
}
