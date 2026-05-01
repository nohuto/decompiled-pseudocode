/*
 * XREFs of ?_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z @ 0x18004F740
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_96e0e644045a5df6c639af1253b871cf__&___ptr64_::Run @ 0x180051020 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_96e0e644045a5df6c639af1253b871cf__-___ptr64.c)
 * Callees:
 *     ?VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z @ 0x18000671C (-VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18002026C (-Stop@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180020D0C (--1-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180020F30 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ?IUnknown_GetServerProcessHandle@@YAJPEAUIUnknown@@KPEAPEAX@Z @ 0x18004CE4C (-IUnknown_GetServerProcessHandle@@YAJPEAUIUnknown@@KPEAPEAX@Z.c)
 *     ?StartActivity@AppFrameHostStartup@CAppManagerTelemetry@@QEAAXXZ @ 0x1800511DC (-StartActivity@AppFrameHostStartup@CAppManagerTelemetry@@QEAAXXZ.c)
 *     ?_TakeOwnershipOfHandleAndStartMonitoring@CCrashDetector@@AEAAJPEAXPEAVCHandler@1@@Z @ 0x180051464 (-_TakeOwnershipOfHandleAndStartMonitoring@CCrashDetector@@AEAAJPEAXPEAVCHandler@1@@Z.c)
 *     ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1800517B8 (-Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationFrameService::_CreateFrameManager(unsigned __int64 a1, int a2)
{
  struct _TP_WAIT *v4; // rcx
  char *v5; // rcx
  char *v6; // rbx
  int Instance; // edi
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v10; // r9
  HANDLE v11; // rdi
  struct CCrashDetector::CHandler *v12; // rax
  __int64 v13; // r9
  struct IUnknown *v14; // rsi
  __int64 v15; // rcx
  struct IUnknown *v16; // rcx
  const char *v18; // [rsp+30h] [rbp-D8h]
  const char *v19; // [rsp+30h] [rbp-D8h]
  const char *v20; // [rsp+30h] [rbp-D8h]
  const char *v21; // [rsp+30h] [rbp-D8h]
  struct CCrashDetector::CHandler *v22; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C8h] BYREF
  struct IUnknown *ppv; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE hObject[3]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v26[4]; // [rsp+68h] [rbp-A0h] BYREF
  int v27; // [rsp+88h] [rbp-80h]
  int *v28; // [rsp+90h] [rbp-78h]
  int *v29; // [rsp+98h] [rbp-70h]
  int v30; // [rsp+A0h] [rbp-68h] BYREF
  char v31; // [rsp+A4h] [rbp-64h]
  int v32; // [rsp+C8h] [rbp-40h] BYREF
  const char *v33; // [rsp+D0h] [rbp-38h]
  __int64 v34; // [rsp+D8h] [rbp-30h]
  char v35; // [rsp+E0h] [rbp-28h]
  __int64 v36; // [rsp+E8h] [rbp-20h]
  _BYTE v37[144]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v38; // [rsp+180h] [rbp+78h]
  __int64 v39; // [rsp+188h] [rbp+80h]
  __int64 v40; // [rsp+190h] [rbp+88h]
  __int64 v41; // [rsp+198h] [rbp+90h]
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  hObject[1] = (HANDLE)-2LL;
  v26[1] = 0LL;
  v26[2] = v26;
  v26[3] = 0LL;
  v27 = 0;
  v28 = &v32;
  v29 = &v30;
  v30 = 0;
  v31 = 0;
  v35 = 0;
  v32 = 0;
  v33 = "AppFrameHostStartup";
  v34 = 0LL;
  v36 = 1LL;
  v38 = 0LL;
  v39 = 0LL;
  memset(v37, 0, sizeof(v37));
  v40 = 0LL;
  v41 = 0LL;
  v26[0] = &CAppManagerTelemetry::AppFrameHostStartup::`vftable';
  CAppManagerTelemetry::AppFrameHostStartup::StartActivity((CAppManagerTelemetry::AppFrameHostStartup *)v26);
  v4 = *(struct _TP_WAIT **)(a1 + 224);
  if ( v4 )
  {
    SetThreadpoolWait(v4, 0LL, 0LL);
    WaitForThreadpoolWaitCallbacks(*(PTP_WAIT *)(a1 + 224), 0);
    CloseThreadpoolWait(*(PTP_WAIT *)(a1 + 224));
    *(_QWORD *)(a1 + 224) = 0LL;
    v5 = *(char **)(a1 + 216);
    *(_QWORD *)(a1 + 216) = 0LL;
    if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v5);
  }
  LODWORD(v23) = 0;
  ppv = 0LL;
  v6 = 0LL;
  hObject[0] = 0LL;
  Instance = CoCreateInstance(
               &GUID_b9b05098_3e30_483f_87f7_027ca78da287,
               0LL,
               0x404u,
               &GUID_d6defab3_dbb9_4413_8af9_554586fdff94,
               (LPVOID *)&ppv);
  LODWORD(v22) = Instance;
  wil::details::in1diag3::Log_IfFailedMsg(
    retaddr,
    (void *)0x506,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
    (const char *)(unsigned int)Instance,
    (int)"Failed to connect to the application frame host server",
    v18);
  if ( !a2 )
  {
    CRVPrivate::VerifyCriticalResult(
      (unsigned __int64)&v22,
      L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
      (const unsigned __int16 *)0x507,
      v8);
    Instance = (int)v22;
  }
  if ( Instance >= 0 )
  {
    Instance = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, __int64 *))ppv->lpVtbl[2].QueryInterface)(
                 ppv,
                 (a1 + 48) & ((unsigned __int128)-(__int128)a1 >> 64),
                 &v23);
    LODWORD(v22) = Instance;
    wil::details::in1diag3::Log_IfFailedMsg(
      retaddr,
      (void *)0x50E,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
      (const char *)(unsigned int)Instance,
      (int)"Failed to register for application frame events",
      v19);
    if ( !a2 )
    {
      CRVPrivate::VerifyCriticalResult(
        (unsigned __int64)&v22,
        L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
        (const unsigned __int16 *)0x50F,
        v9);
      Instance = (int)v22;
    }
    if ( Instance >= 0 )
    {
      Instance = IUnknown_GetServerProcessHandle(ppv, 0x100000u, hObject);
      LODWORD(v22) = Instance;
      wil::details::in1diag3::Log_IfFailedMsg(
        retaddr,
        (void *)0x515,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
        (const char *)(unsigned int)Instance,
        (int)"Failed to open a handle on the application frame host server for waiting purposes",
        v20);
      if ( !a2 )
      {
        CRVPrivate::VerifyCriticalResult(
          (unsigned __int64)&v22,
          L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          (const unsigned __int16 *)0x516,
          v10);
        Instance = (int)v22;
      }
      if ( Instance < 0 )
      {
        v6 = (char *)hObject[0];
      }
      else
      {
        v11 = hObject[0];
        v6 = 0LL;
        hObject[0] = 0LL;
        v12 = (struct CCrashDetector::CHandler *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
        v22 = v12;
        if ( v12 )
        {
          *(_QWORD *)v12 = off_1801FCDB0;
          *((_QWORD *)v12 + 1) = a1;
        }
        else
        {
          v12 = 0LL;
        }
        Instance = CCrashDetector::_TakeOwnershipOfHandleAndStartMonitoring((PVOID)(a1 + 208), v11, v12);
        LODWORD(v22) = Instance;
        wil::details::in1diag3::Log_IfFailedMsg(
          retaddr,
          (void *)0x521,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          (const char *)(unsigned int)Instance,
          (int)"Failed to monitor the frame process for crash recovery purposes",
          v21);
        if ( !a2 )
        {
          CRVPrivate::VerifyCriticalResult(
            (unsigned __int64)&v22,
            L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
            (const unsigned __int16 *)0x522,
            v13);
          Instance = (int)v22;
        }
        if ( Instance >= 0 )
        {
          AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
          v14 = ppv;
          if ( *(struct IUnknown **)(a1 + 184) != ppv )
          {
            if ( ppv )
              ((void (__fastcall *)(struct IUnknown *))ppv->lpVtbl->AddRef)(ppv);
            v15 = *(_QWORD *)(a1 + 184);
            *(_QWORD *)(a1 + 184) = v14;
            if ( v15 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          }
          *(_DWORD *)(a1 + 200) = v23;
          ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
          goto LABEL_28;
        }
      }
    }
  }
  if ( (_DWORD)v23 )
    ((void (__fastcall *)(struct IUnknown *))ppv->lpVtbl[2].AddRef)(ppv);
LABEL_28:
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)v26,
    Instance);
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v6);
  v16 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    ((void (__fastcall *)(struct IUnknown *))v16->lpVtbl->Release)(v16);
  }
  v26[0] = &CAppManagerTelemetry::AppFrameHostStartup::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v26);
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v26);
  return (unsigned int)Instance;
}
