/*
 * XREFs of ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x1800106D8
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x180010124 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 * Callees:
 *     ?VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z @ 0x18000671C (-VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??$MakeAndInitialize@VFrameFactory@@UIApplicationFrameFactory@@PEAUIPrivilegedPresentationOperations@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationFrameFactory@@@WRL@Microsoft@@@012@$$QEAPEAUIPrivilegedPresentationOperations@@@Z @ 0x180019A10 (--$MakeAndInitialize@VFrameFactory@@UIApplicationFrameFactory@@PEAUIPrivilegedPresentationOperat.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180024440 (-CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x1800246F8 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ?CFallbackWindow_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18002F2DC (-CFallbackWindow_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CImmWindowManager_CreateInstance@@YAJPEAUIIAMServiceProvider@@AEBU_GUID@@PEAPEAX@Z @ 0x180030DD4 (-CImmWindowManager_CreateInstance@@YAJPEAUIIAMServiceProvider@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ??0CImmersiveMode@@QEAA@XZ @ 0x180031A60 (--0CImmersiveMode@@QEAA@XZ.c)
 *     ?CClassicWindowManager_CreateInstance@@YAJPEAUIImmersiveSystemModeInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x180039090 (-CClassicWindowManager_CreateInstance@@YAJPEAUIImmersiveSystemModeInternal@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ??0CRotationManagerSync@@QEAA@XZ @ 0x18003A850 (--0CRotationManagerSync@@QEAA@XZ.c)
 *     ?CImmersiveApplicationTransitionHelper_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18003C4DC (-CImmersiveApplicationTransitionHelper_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CCharmsWindowManager_CreateInstance@@YAJPEAUIImmersiveApplicationTransitionHelper@@AEBU_GUID@@PEAPEAX@Z @ 0x18003CD78 (-CCharmsWindowManager_CreateInstance@@YAJPEAUIImmersiveApplicationTransitionHelper@@AEBU_GUID@@P.c)
 *     ?CAppViewManager_CreateInstance@@YAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x180045AAC (-CAppViewManager_CreateInstance@@YAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID@@PEAPEAX.c)
 *     ??0CRealmActivationHistory@@QEAA@PEAUIImmersiveApplicationManagerInternal@@@Z @ 0x18004C52C (--0CRealmActivationHistory@@QEAA@PEAUIImmersiveApplicationManagerInternal@@@Z.c)
 *     ?CApplicationFrameService_CreateInstance@@YAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x18005013C (-CApplicationFrameService_CreateInstance@@YAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::_InitializeIAMSubcomponents(IUnknown *punkSite)
{
  IUnknown *v2; // rbx
  void **v3; // rax
  const struct _GUID *v4; // rcx
  __int64 v5; // r9
  void **v6; // rax
  __int64 v7; // r9
  __int64 v8; // r9
  HRESULT Instance; // edi
  IUnknown **v10; // rbx
  struct IUnknownVtbl *lpVtbl; // rcx
  __int64 v12; // r9
  __int64 v13; // r9
  IUnknown **v14; // r14
  struct IUnknownVtbl *v15; // rcx
  CImmersiveMode *v16; // rbx
  CImmersiveMode *v17; // rax
  __int64 v18; // r9
  signed int inited; // edi
  const struct _GUID *v20; // rdx
  __int64 v21; // r9
  IUnknown **v22; // rbx
  struct IUnknownVtbl *v23; // rcx
  __int64 v24; // r9
  __int64 v25; // r9
  IUnknown *v26; // r14
  struct IUnknownVtbl *v27; // rcx
  CRotationManagerSync *v28; // rbx
  CRotationManagerSync *v29; // rax
  __int64 v30; // r9
  __int64 v31; // rbx
  unsigned int v32; // edi
  struct IImmersiveApplicationTransitionHelper **v33; // rbx
  struct IUnknownVtbl *v34; // rcx
  __int64 v35; // r9
  const struct _GUID *v36; // rdx
  IUnknown **v37; // rdi
  struct IUnknownVtbl *v38; // rcx
  __int64 v39; // r9
  const struct _GUID *v40; // rdx
  __int64 v41; // r9
  struct IUnknownVtbl *v42; // rcx
  __int64 v43; // r9
  IUnknown **v44; // r14
  struct IUnknownVtbl *v45; // rcx
  CRealmActivationHistory *v46; // rbx
  CRealmActivationHistory *v47; // rax
  const struct _GUID *v48; // rdx
  IUnknown **v49; // rbx
  struct IUnknownVtbl *v50; // rcx
  __int64 v51; // rcx
  PVOID Ptr; // [rsp+70h] [rbp+40h] BYREF
  __int64 v54; // [rsp+78h] [rbp+48h] BYREF

  v2 = punkSite + 73;
  v3 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&punkSite[73]);
  LODWORD(Ptr) = CEnumerableObjectCollection::CreateInstance(v4, v3);
  if ( CRVPrivate::VerifyCriticalResult(
         (unsigned __int64)&Ptr,
         L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
         (const unsigned __int16 *)0x11BC,
         v5) )
  {
    v54 = 0LL;
    v6 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v54);
    LODWORD(Ptr) = CImmWindowManager_CreateInstance(
                     (struct IIAMServiceProvider *)((unsigned __int64)&punkSite[24] & -(__int64)(punkSite != 0LL)),
                     (const struct _GUID *)&punkSite[24],
                     v6);
    if ( CRVPrivate::VerifyCriticalResult(
           (unsigned __int64)&Ptr,
           L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
           (const unsigned __int16 *)0x11C2,
           v7) )
    {
      LODWORD(Ptr) = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, __int64))v2->lpVtbl->QueryInterface + 5))(
                       v2->lpVtbl,
                       v54);
      CRVPrivate::VerifyCriticalResult(
        (unsigned __int64)&Ptr,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const unsigned __int16 *)0x11C5,
        v8);
    }
    Instance = (int)Ptr;
    if ( (int)Ptr >= 0 )
    {
      v10 = (IUnknown **)&punkSite[72];
      lpVtbl = punkSite[72].lpVtbl;
      if ( lpVtbl )
      {
        *v10 = 0LL;
        (*((void (__fastcall **)(struct IUnknownVtbl *))lpVtbl->QueryInterface + 2))(lpVtbl);
      }
      LODWORD(Ptr) = CFallbackWindow_CreateInstance((const struct _GUID *)lpVtbl, (void **)&punkSite[72].lpVtbl);
      if ( CRVPrivate::VerifyCriticalResult(
             (unsigned __int64)&Ptr,
             L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
             (const unsigned __int16 *)0x11CC,
             v12) )
      {
        LODWORD(Ptr) = IUnknown_SetSite(*v10, punkSite);
        CRVPrivate::VerifyCriticalResult(
          (unsigned __int64)&Ptr,
          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const unsigned __int16 *)0x11CF,
          v13);
      }
      Instance = (int)Ptr;
      if ( (int)Ptr >= 0 )
      {
        v14 = (IUnknown **)&punkSite[67];
        v15 = punkSite[67].lpVtbl;
        if ( v15 )
        {
          *v14 = 0LL;
          (*((void (__fastcall **)(struct IUnknownVtbl *))v15->QueryInterface + 2))(v15);
        }
        *v14 = 0LL;
        v16 = 0LL;
        v17 = (CImmersiveMode *)operator new(0x1D8uLL, (const struct std::nothrow_t *)&std::nothrow);
        if ( v17 )
          v16 = CImmersiveMode::CImmersiveMode(v17);
        inited = v16 == 0LL ? 0x8007000E : 0;
        if ( v16 )
        {
          inited = CObjectWithThreadUseDetection::InitApartmentId((CImmersiveMode *)((char *)v16 + 192));
          if ( inited >= 0 )
            inited = (**(__int64 (__fastcall ***)(CImmersiveMode *, GUID *, IUnknown *))v16)(
                       v16,
                       &GUID_64aa042d_4144_4c88_afb9_aed881c0ffee,
                       punkSite + 67);
          (*(void (__fastcall **)(CImmersiveMode *))(*(_QWORD *)v16 + 16LL))(v16);
        }
        LODWORD(Ptr) = inited;
        if ( CRVPrivate::VerifyCriticalResult(
               (unsigned __int64)&Ptr,
               L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
               (const unsigned __int16 *)0x11D7,
               v18) )
        {
          LODWORD(Ptr) = IUnknown_SetSite(*v14, punkSite);
          CRVPrivate::VerifyCriticalResult(
            (unsigned __int64)&Ptr,
            L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const unsigned __int16 *)0x11DA,
            v21);
        }
        Instance = (int)Ptr;
        if ( (int)Ptr >= 0 )
        {
          v22 = (IUnknown **)&punkSite[68];
          v23 = punkSite[68].lpVtbl;
          if ( v23 )
          {
            *v22 = 0LL;
            (*((void (__fastcall **)(struct IUnknownVtbl *))v23->QueryInterface + 2))(v23);
          }
          LODWORD(Ptr) = CClassicWindowManager_CreateInstance(
                           (struct IImmersiveSystemModeInternal *)*v14,
                           v20,
                           (void **)&punkSite[68].lpVtbl);
          if ( CRVPrivate::VerifyCriticalResult(
                 (unsigned __int64)&Ptr,
                 L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                 (const unsigned __int16 *)0x11E2,
                 v24) )
          {
            LODWORD(Ptr) = IUnknown_SetSite(*v22, punkSite);
            CRVPrivate::VerifyCriticalResult(
              (unsigned __int64)&Ptr,
              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const unsigned __int16 *)0x11E5,
              v25);
          }
          Instance = (int)Ptr;
          if ( (int)Ptr >= 0 )
          {
            v26 = punkSite + 69;
            v27 = punkSite[69].lpVtbl;
            if ( v27 )
            {
              v26->lpVtbl = 0LL;
              (*((void (__fastcall **)(struct IUnknownVtbl *))v27->QueryInterface + 2))(v27);
            }
            v26->lpVtbl = 0LL;
            v28 = 0LL;
            v29 = (CRotationManagerSync *)operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
            if ( v29 )
              v28 = CRotationManagerSync::CRotationManagerSync(v29);
            v31 = ((unsigned __int64)v28 + 80) & -(__int64)(v28 != 0LL);
            v32 = v31 == 0 ? 0x8007000E : 0;
            if ( v31 )
            {
              v32 = (**(__int64 (__fastcall ***)(__int64, GUID *, IUnknown *))v31)(
                      v31,
                      &GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee,
                      punkSite + 69);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
            }
            LODWORD(Ptr) = v32;
            CRVPrivate::VerifyCriticalResult(
              (unsigned __int64)&Ptr,
              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const unsigned __int16 *)0x11ED,
              v30);
            Instance = (int)Ptr;
            if ( (int)Ptr >= 0 )
            {
              v33 = (struct IImmersiveApplicationTransitionHelper **)&punkSite[70];
              v34 = punkSite[70].lpVtbl;
              if ( v34 )
              {
                *v33 = 0LL;
                (*((void (__fastcall **)(struct IUnknownVtbl *))v34->QueryInterface + 2))(v34);
              }
              LODWORD(Ptr) = CImmersiveApplicationTransitionHelper_CreateInstance(
                               (const struct _GUID *)v34,
                               (void **)&punkSite[70].lpVtbl);
              CRVPrivate::VerifyCriticalResult(
                (unsigned __int64)&Ptr,
                L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                (const unsigned __int16 *)0x11F7,
                v35);
              Instance = (int)Ptr;
              if ( (int)Ptr >= 0 )
              {
                v37 = (IUnknown **)&punkSite[75];
                v38 = punkSite[75].lpVtbl;
                if ( v38 )
                {
                  *v37 = 0LL;
                  (*((void (__fastcall **)(struct IUnknownVtbl *))v38->QueryInterface + 2))(v38);
                }
                LODWORD(Ptr) = CCharmsWindowManager_CreateInstance(*v33, v36, (void **)&punkSite[75].lpVtbl);
                if ( CRVPrivate::VerifyCriticalResult(
                       (unsigned __int64)&Ptr,
                       L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                       (const unsigned __int16 *)0x11FE,
                       v39) )
                {
                  LODWORD(Ptr) = IUnknown_SetSite(*v37, punkSite);
                  CRVPrivate::VerifyCriticalResult(
                    (unsigned __int64)&Ptr,
                    L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                    (const unsigned __int16 *)0x1201,
                    v41);
                }
                Instance = (int)Ptr;
                if ( (int)Ptr >= 0 )
                {
                  v42 = punkSite[76].lpVtbl;
                  if ( v42 )
                  {
                    punkSite[76].lpVtbl = 0LL;
                    (*((void (__fastcall **)(struct IUnknownVtbl *))v42->QueryInterface + 2))(v42);
                  }
                  LODWORD(Ptr) = CAppViewManager_CreateInstance(
                                   (struct IImmersiveApplicationManagerInternal *)&punkSite[31],
                                   v40,
                                   (void **)&punkSite[76].lpVtbl);
                  CRVPrivate::VerifyCriticalResult(
                    (unsigned __int64)&Ptr,
                    L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                    (const unsigned __int16 *)0x1209,
                    v43);
                  Instance = (int)Ptr;
                  if ( (int)Ptr >= 0 )
                  {
                    v44 = (IUnknown **)&punkSite[66];
                    v45 = punkSite[66].lpVtbl;
                    if ( v45 )
                    {
                      *v44 = 0LL;
                      (*((void (__fastcall **)(struct IUnknownVtbl *))v45->QueryInterface + 2))(v45);
                    }
                    *v44 = 0LL;
                    v46 = 0LL;
                    v47 = (CRealmActivationHistory *)operator new(
                                                       0x1A8uLL,
                                                       (const struct std::nothrow_t *)&std::nothrow);
                    if ( v47 )
                      v46 = CRealmActivationHistory::CRealmActivationHistory(
                              v47,
                              (struct IImmersiveApplicationManagerInternal *)&punkSite[31]);
                    Instance = v46 == 0LL ? 0x8007000E : 0;
                    if ( v46 )
                    {
                      Instance = (**(__int64 (__fastcall ***)(CRealmActivationHistory *, GUID *, IUnknown *))v46)(
                                   v46,
                                   &GUID_a98c0472_db38_4f6d_ba6f_6bf60514f600,
                                   punkSite + 66);
                      (*(void (__fastcall **)(CRealmActivationHistory *))(*(_QWORD *)v46 + 16LL))(v46);
                    }
                    if ( Instance >= 0 )
                    {
                      Instance = IUnknown_SetSite(*v44, punkSite);
                      if ( Instance >= 0 )
                      {
                        v49 = (IUnknown **)&punkSite[77];
                        v50 = punkSite[77].lpVtbl;
                        if ( v50 )
                        {
                          *v49 = 0LL;
                          (*((void (__fastcall **)(struct IUnknownVtbl *))v50->QueryInterface + 2))(v50);
                        }
                        Instance = CApplicationFrameService_CreateInstance(
                                     (struct IImmersiveApplicationManagerInternal *)&punkSite[31],
                                     v48,
                                     (void **)&punkSite[77].lpVtbl);
                        if ( Instance >= 0 )
                        {
                          Instance = IUnknown_SetSite(*v49, punkSite);
                          if ( Instance >= 0 )
                          {
                            Ptr = CApplicationManagerUtility::g_pIAMGlobals[15].Ptr;
                            Instance = Microsoft::WRL::Details::MakeAndInitialize<FrameFactory,IApplicationFrameFactory,IPrivilegedPresentationOperations *>(
                                         &punkSite[78],
                                         &Ptr);
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
    v51 = v54;
    if ( v54 )
    {
      v54 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
    }
  }
  else
  {
    return (unsigned int)Ptr;
  }
  return (unsigned int)Instance;
}
