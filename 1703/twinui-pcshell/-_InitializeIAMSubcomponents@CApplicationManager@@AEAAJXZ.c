/*
 * XREFs of ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x180010198
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x18000FBE4 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 * Callees:
 *     ?VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z @ 0x1800066DC (-VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??$MakeAndInitialize@VFrameFactory@@UIApplicationFrameFactory@@PEAUIPrivilegedPresentationOperations@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationFrameFactory@@@WRL@Microsoft@@@012@$$QEAPEAUIPrivilegedPresentationOperations@@@Z @ 0x1800188B4 (--$MakeAndInitialize@VFrameFactory@@UIApplicationFrameFactory@@PEAUIPrivilegedPresentationOperat.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180023B20 (-CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180023DD8 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ?CFallbackWindow_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18002D9CC (-CFallbackWindow_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CImmWindowManager_CreateInstance@@YAJPEAUIIAMServiceProvider@@AEBU_GUID@@PEAPEAX@Z @ 0x18002F608 (-CImmWindowManager_CreateInstance@@YAJPEAUIIAMServiceProvider@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ??$Make@VCImmersiveMode@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCImmersiveMode@@@12@XZ @ 0x180032860 (--$Make@VCImmersiveMode@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCImmersiveMode@@@12@XZ.c)
 *     ?CClassicWindowManager_CreateInstance@@YAJPEAUIImmersiveSystemModeInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x18003787C (-CClassicWindowManager_CreateInstance@@YAJPEAUIImmersiveSystemModeInternal@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?CRotationManagerSync_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180039508 (-CRotationManagerSync_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$Make@VCImmersiveApplicationTransitionHelper@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCImmersiveApplicationTransitionHelper@@@12@XZ @ 0x18003B32C (--$Make@VCImmersiveApplicationTransitionHelper@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCImmersiv.c)
 *     ?CCharmsWindowManager_CreateInstance@@YAJPEAUIImmersiveApplicationTransitionHelper@@AEBU_GUID@@PEAPEAX@Z @ 0x18003BAD8 (-CCharmsWindowManager_CreateInstance@@YAJPEAUIImmersiveApplicationTransitionHelper@@AEBU_GUID@@P.c)
 *     ?CAppViewManager_CreateInstance@@YAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x180043538 (-CAppViewManager_CreateInstance@@YAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID@@PEAPEAX.c)
 *     ??$Make@VCRealmActivationHistory@@AEAPEAUIImmersiveApplicationManagerInternal@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCRealmActivationHistory@@@12@AEAPEAUIImmersiveApplicationManagerInternal@@@Z @ 0x18004A8F4 (--$Make@VCRealmActivationHistory@@AEAPEAUIImmersiveApplicationManagerInternal@@@Details@WRL@Micr.c)
 *     ?CApplicationFrameService_CreateInstance@@YAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x18004DB48 (-CApplicationFrameService_CreateInstance@@YAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
  __int64 v16; // r9
  IUnknown *v17; // rbx
  signed int inited; // edi
  const struct _GUID *v19; // rdx
  __int64 v20; // r9
  IUnknown **v21; // rbx
  struct IUnknownVtbl *v22; // rcx
  __int64 v23; // r9
  __int64 v24; // r9
  struct IUnknownVtbl *v25; // rcx
  __int64 v26; // r9
  struct IImmersiveApplicationTransitionHelper **v27; // r14
  struct IUnknownVtbl *v28; // rcx
  __int64 v29; // r9
  IUnknown *v30; // rbx
  unsigned int v31; // edi
  const struct _GUID *v32; // rdx
  IUnknown **v33; // rbx
  struct IUnknownVtbl *v34; // rcx
  __int64 v35; // r9
  const struct _GUID *v36; // rdx
  __int64 v37; // r9
  struct IUnknownVtbl *v38; // rcx
  __int64 v39; // r9
  IUnknown **v40; // r14
  struct IUnknownVtbl *v41; // rcx
  __int64 (__fastcall ***v42)(_QWORD, GUID *, IUnknown *); // rbx
  const struct _GUID *v43; // rdx
  IUnknown **v44; // rbx
  struct IUnknownVtbl *v45; // rcx
  __int64 v46; // rcx
  IUnknown *Ptr; // [rsp+70h] [rbp+40h] BYREF
  __int64 v49; // [rsp+78h] [rbp+48h] BYREF
  __int64 (__fastcall ***v50)(_QWORD, GUID *, IUnknown *); // [rsp+80h] [rbp+50h] BYREF

  v2 = punkSite + 64;
  v3 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&punkSite[64]);
  LODWORD(Ptr) = CEnumerableObjectCollection::CreateInstance(v4, v3);
  if ( CRVPrivate::VerifyCriticalResult(
         (unsigned __int64)&Ptr,
         L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
         (const unsigned __int16 *)0x1153,
         v5) )
  {
    v49 = 0LL;
    v6 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v49);
    LODWORD(Ptr) = CImmWindowManager_CreateInstance(
                     (struct IIAMServiceProvider *)((unsigned __int64)&punkSite[19] & -(__int64)(punkSite != 0LL)),
                     (const struct _GUID *)&punkSite[19],
                     v6);
    if ( CRVPrivate::VerifyCriticalResult(
           (unsigned __int64)&Ptr,
           L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
           (const unsigned __int16 *)0x1159,
           v7) )
    {
      LODWORD(Ptr) = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, __int64))v2->lpVtbl->QueryInterface + 5))(
                       v2->lpVtbl,
                       v49);
      CRVPrivate::VerifyCriticalResult(
        (unsigned __int64)&Ptr,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const unsigned __int16 *)0x115C,
        v8);
    }
    Instance = (int)Ptr;
    if ( (int)Ptr >= 0 )
    {
      v10 = (IUnknown **)&punkSite[63];
      lpVtbl = punkSite[63].lpVtbl;
      if ( lpVtbl )
      {
        *v10 = 0LL;
        (*((void (__fastcall **)(struct IUnknownVtbl *))lpVtbl->QueryInterface + 2))(lpVtbl);
      }
      LODWORD(Ptr) = CFallbackWindow_CreateInstance((const struct _GUID *)lpVtbl, (void **)&punkSite[63].lpVtbl);
      if ( CRVPrivate::VerifyCriticalResult(
             (unsigned __int64)&Ptr,
             L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
             (const unsigned __int16 *)0x1163,
             v12) )
      {
        LODWORD(Ptr) = IUnknown_SetSite(*v10, punkSite);
        CRVPrivate::VerifyCriticalResult(
          (unsigned __int64)&Ptr,
          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const unsigned __int16 *)0x1166,
          v13);
      }
      Instance = (int)Ptr;
      if ( (int)Ptr >= 0 )
      {
        v14 = (IUnknown **)&punkSite[58];
        v15 = punkSite[58].lpVtbl;
        if ( v15 )
        {
          *v14 = 0LL;
          (*((void (__fastcall **)(struct IUnknownVtbl *))v15->QueryInterface + 2))(v15);
        }
        *v14 = 0LL;
        Microsoft::WRL::Details::Make<CImmersiveMode>(&Ptr);
        v17 = Ptr;
        inited = Ptr == 0LL ? 0x8007000E : 0;
        if ( Ptr )
        {
          inited = CObjectWithThreadUseDetection::InitApartmentId((CObjectWithThreadUseDetection *)&Ptr[17]);
          if ( inited >= 0 )
            inited = ((__int64 (__fastcall *)(IUnknown *, GUID *, IUnknown *))v17->lpVtbl->QueryInterface)(
                       v17,
                       &GUID_64aa042d_4144_4c88_afb9_aed881c0ffee,
                       punkSite + 58);
        }
        if ( v17 )
          ((void (__fastcall *)(IUnknown *))v17->lpVtbl->Release)(v17);
        LODWORD(Ptr) = inited;
        if ( CRVPrivate::VerifyCriticalResult(
               (unsigned __int64)&Ptr,
               L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
               (const unsigned __int16 *)0x116E,
               v16) )
        {
          LODWORD(Ptr) = IUnknown_SetSite(*v14, punkSite);
          CRVPrivate::VerifyCriticalResult(
            (unsigned __int64)&Ptr,
            L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const unsigned __int16 *)0x1171,
            v20);
        }
        Instance = (int)Ptr;
        if ( (int)Ptr >= 0 )
        {
          v21 = (IUnknown **)&punkSite[59];
          v22 = punkSite[59].lpVtbl;
          if ( v22 )
          {
            *v21 = 0LL;
            (*((void (__fastcall **)(struct IUnknownVtbl *))v22->QueryInterface + 2))(v22);
          }
          LODWORD(Ptr) = CClassicWindowManager_CreateInstance(
                           (struct IImmersiveSystemModeInternal *)*v14,
                           v19,
                           (void **)&punkSite[59].lpVtbl);
          if ( CRVPrivate::VerifyCriticalResult(
                 (unsigned __int64)&Ptr,
                 L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                 (const unsigned __int16 *)0x1179,
                 v23) )
          {
            LODWORD(Ptr) = IUnknown_SetSite(*v21, punkSite);
            CRVPrivate::VerifyCriticalResult(
              (unsigned __int64)&Ptr,
              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const unsigned __int16 *)0x117C,
              v24);
          }
          Instance = (int)Ptr;
          if ( (int)Ptr >= 0 )
          {
            v25 = punkSite[60].lpVtbl;
            if ( v25 )
            {
              punkSite[60].lpVtbl = 0LL;
              (*((void (__fastcall **)(struct IUnknownVtbl *))v25->QueryInterface + 2))(v25);
            }
            LODWORD(Ptr) = CRotationManagerSync_CreateInstance((const struct _GUID *)v25, (void **)&punkSite[60].lpVtbl);
            CRVPrivate::VerifyCriticalResult(
              (unsigned __int64)&Ptr,
              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const unsigned __int16 *)0x1184,
              v26);
            Instance = (int)Ptr;
            if ( (int)Ptr >= 0 )
            {
              v27 = (struct IImmersiveApplicationTransitionHelper **)&punkSite[61];
              v28 = punkSite[61].lpVtbl;
              if ( v28 )
              {
                *v27 = 0LL;
                (*((void (__fastcall **)(struct IUnknownVtbl *))v28->QueryInterface + 2))(v28);
              }
              *v27 = 0LL;
              Microsoft::WRL::Details::Make<CImmersiveApplicationTransitionHelper>(&Ptr);
              v30 = Ptr;
              v31 = Ptr == 0LL ? 0x8007000E : 0;
              if ( Ptr )
                v31 = ((__int64 (__fastcall *)(IUnknown *, GUID *, IUnknown *))Ptr->lpVtbl->QueryInterface)(
                        Ptr,
                        &GUID_e4c1a137_9674_4fb6_8dd2_ce9400c0ffee,
                        punkSite + 61);
              if ( v30 )
                ((void (__fastcall *)(IUnknown *))v30->lpVtbl->Release)(v30);
              LODWORD(Ptr) = v31;
              CRVPrivate::VerifyCriticalResult(
                (unsigned __int64)&Ptr,
                L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                (const unsigned __int16 *)0x118E,
                v29);
              Instance = (int)Ptr;
              if ( (int)Ptr >= 0 )
              {
                v33 = (IUnknown **)&punkSite[66];
                v34 = punkSite[66].lpVtbl;
                if ( v34 )
                {
                  *v33 = 0LL;
                  (*((void (__fastcall **)(struct IUnknownVtbl *))v34->QueryInterface + 2))(v34);
                }
                LODWORD(Ptr) = CCharmsWindowManager_CreateInstance(*v27, v32, (void **)&punkSite[66].lpVtbl);
                if ( CRVPrivate::VerifyCriticalResult(
                       (unsigned __int64)&Ptr,
                       L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                       (const unsigned __int16 *)0x1195,
                       v35) )
                {
                  LODWORD(Ptr) = IUnknown_SetSite(*v33, punkSite);
                  CRVPrivate::VerifyCriticalResult(
                    (unsigned __int64)&Ptr,
                    L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                    (const unsigned __int16 *)0x1198,
                    v37);
                }
                Instance = (int)Ptr;
                if ( (int)Ptr >= 0 )
                {
                  v38 = punkSite[67].lpVtbl;
                  if ( v38 )
                  {
                    punkSite[67].lpVtbl = 0LL;
                    (*((void (__fastcall **)(struct IUnknownVtbl *))v38->QueryInterface + 2))(v38);
                  }
                  LODWORD(Ptr) = CAppViewManager_CreateInstance(
                                   (struct IImmersiveApplicationManagerInternal *)&punkSite[25],
                                   v36,
                                   (void **)&punkSite[67].lpVtbl);
                  CRVPrivate::VerifyCriticalResult(
                    (unsigned __int64)&Ptr,
                    L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                    (const unsigned __int16 *)0x11A0,
                    v39);
                  Instance = (int)Ptr;
                  if ( (int)Ptr >= 0 )
                  {
                    v40 = (IUnknown **)&punkSite[57];
                    v41 = punkSite[57].lpVtbl;
                    if ( v41 )
                    {
                      *v40 = 0LL;
                      (*((void (__fastcall **)(struct IUnknownVtbl *))v41->QueryInterface + 2))(v41);
                    }
                    Ptr = punkSite + 25;
                    *v40 = 0LL;
                    Microsoft::WRL::Details::Make<CRealmActivationHistory,IImmersiveApplicationManagerInternal * &>(
                      &v50,
                      &Ptr);
                    v42 = v50;
                    Instance = v50 == 0LL ? 0x8007000E : 0;
                    if ( v50 )
                      Instance = (**v50)(v50, &GUID_a98c0472_db38_4f6d_ba6f_6bf60514f600, punkSite + 57);
                    if ( v42 )
                      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, IUnknown *)))(*v42)[2])(v42);
                    if ( Instance >= 0 )
                    {
                      Instance = IUnknown_SetSite(*v40, punkSite);
                      if ( Instance >= 0 )
                      {
                        v44 = (IUnknown **)&punkSite[68];
                        v45 = punkSite[68].lpVtbl;
                        if ( v45 )
                        {
                          *v44 = 0LL;
                          (*((void (__fastcall **)(struct IUnknownVtbl *))v45->QueryInterface + 2))(v45);
                        }
                        Instance = CApplicationFrameService_CreateInstance(
                                     (struct IImmersiveApplicationManagerInternal *)&punkSite[25],
                                     v43,
                                     (void **)&punkSite[68].lpVtbl);
                        if ( Instance >= 0 )
                        {
                          Instance = IUnknown_SetSite(*v44, punkSite);
                          if ( Instance >= 0 )
                          {
                            Ptr = (IUnknown *)CApplicationManagerUtility::g_pIAMGlobals[15].Ptr;
                            Instance = Microsoft::WRL::Details::MakeAndInitialize<FrameFactory,IApplicationFrameFactory,IPrivilegedPresentationOperations *>(
                                         &punkSite[69],
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
    v46 = v49;
    if ( v49 )
    {
      v49 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
    }
  }
  else
  {
    return (unsigned int)Ptr;
  }
  return (unsigned int)Instance;
}
