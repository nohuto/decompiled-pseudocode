/*
 * XREFs of ?SubscribeToServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800F3FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z @ 0x1800066DC (-VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??$make_shared@VConnectedStandbyHelper@@$$V@std@@YA?AV?$shared_ptr@VConnectedStandbyHelper@@@0@XZ @ 0x1800FEA94 (--$make_shared@VConnectedStandbyHelper@@$$V@std@@YA-AV-$shared_ptr@VConnectedStandbyHelper@@@0@X.c)
 *     ?Initialize@ConnectedStandbyHelper@@QEAAJPEAVViewEventDispatcher@@@Z @ 0x18010F8AC (-Initialize@ConnectedStandbyHelper@@QEAAJPEAVViewEventDispatcher@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewEventDispatcher::SubscribeToServices(ViewEventDispatcher *this, struct IServiceProvider *a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r9
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r9
  struct IServiceProviderVtbl *lpVtbl; // rbx
  __int64 *v15; // rax
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r9
  struct IServiceProviderVtbl *v20; // rbx
  __int64 *v21; // rax
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 *v26; // rax
  const char *v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rbx
  volatile signed __int32 *v32; // rbx
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // [rsp+30h] [rbp-78h] BYREF
  __int64 v39[3]; // [rsp+38h] [rbp-70h] BYREF
  __int64 v40; // [rsp+50h] [rbp-58h]
  __int64 v41; // [rsp+58h] [rbp-50h]
  _BYTE v42[8]; // [rsp+60h] [rbp-48h] BYREF
  volatile signed __int32 *v43; // [rsp+68h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  char *v45; // [rsp+B0h] [rbp+8h] BYREF
  char *v46; // [rsp+B8h] [rbp+10h] BYREF
  int v47; // [rsp+C0h] [rbp+18h] BYREF
  char *v48; // [rsp+C8h] [rbp+20h] BYREF

  v39[1] = -2LL;
  v4 = (_QWORD *)((char *)this + 336);
  v5 = *((_QWORD *)this + 42);
  if ( v5 )
  {
    *v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  LODWORD(v45) = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, _QWORD *))a2->lpVtbl->QueryService)(
                   a2,
                   &SID_ProcessLifetimeManagerControl,
                   &GUID_69c083b1_7f6f_490d_9d77_c0219a95b25d,
                   v4);
  CRVPrivate::VerifyCriticalResult(
    (unsigned __int64)&v45,
    L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const unsigned __int16 *)0x4C5,
    v6);
  v7 = (unsigned int)v45;
  if ( (int)v45 < 0 )
  {
    v8 = 1222LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)v7);
    return v7;
  }
  v10 = *((_QWORD *)this + 43);
  if ( v10 )
  {
    *((_QWORD *)this + 43) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  LODWORD(v45) = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
                   a2,
                   &CLSID_ImmersivePlaybackManager,
                   &GUID_1fc98738_e0bf_4cb2_9de2_20ab31b23ce4,
                   (char *)this + 344);
  CRVPrivate::VerifyCriticalResult(
    (unsigned __int64)&v45,
    L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const unsigned __int16 *)0x4CB,
    v11);
  v7 = (unsigned int)v45;
  if ( (int)v45 < 0 )
  {
    v8 = 1228LL;
    goto LABEL_5;
  }
  v12 = *((_QWORD *)this + 44);
  if ( v12 )
  {
    *((_QWORD *)this + 44) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  LODWORD(v45) = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
                   a2,
                   &SID_VirtualDesktopManager,
                   &GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
                   (char *)this + 352);
  CRVPrivate::VerifyCriticalResult(
    (unsigned __int64)&v45,
    L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const unsigned __int16 *)0x4D1,
    v13);
  v7 = (unsigned int)v45;
  if ( (int)v45 < 0 )
  {
    v8 = 1234LL;
    goto LABEL_5;
  }
  v38 = 0LL;
  lpVtbl = a2->lpVtbl;
  v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v38);
  LODWORD(v46) = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))lpVtbl->QueryService)(
                   a2,
                   &IID_IImmersiveSessionIdleDetector,
                   &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
                   v15);
  if ( !CRVPrivate::VerifyCriticalResult(
          (unsigned __int64)&v46,
          L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const unsigned __int16 *)0x4D6,
          v16) )
  {
    v7 = (unsigned int)v46;
    if ( (int)v46 >= 0 )
      goto LABEL_19;
    v17 = 1238LL;
    goto LABEL_18;
  }
  v47 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v38 + 32LL))(
          v38,
          ((unsigned __int64)this + 56) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 80) >> 64),
          (char *)this + 132);
  if ( !CRVPrivate::VerifyCriticalResult(
          (unsigned __int64)&v47,
          L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const unsigned __int16 *)0x4D8,
          v19) )
  {
    v7 = v47;
    if ( v47 >= 0 )
    {
LABEL_19:
      v18 = v38;
      if ( v38 )
      {
        v38 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      return v7;
    }
    v17 = 1240LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)v7);
    goto LABEL_19;
  }
  v39[0] = 0LL;
  v20 = a2->lpVtbl;
  v21 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v39);
  LODWORD(v45) = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v20->QueryService)(
                   a2,
                   &SID_ImmersiveShellHookService,
                   &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
                   v21);
  CRVPrivate::VerifyCriticalResult(
    (unsigned __int64)&v45,
    L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const unsigned __int16 *)0x4E0,
    v22);
  v7 = (unsigned int)v45;
  if ( (int)v45 < 0 )
  {
    v23 = 1249LL;
LABEL_26:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v23,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)v7);
LABEL_27:
    v24 = v39[0];
    if ( v39[0] )
    {
      v39[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    goto LABEL_19;
  }
  LODWORD(v45) = (*(__int64 (__fastcall **)(__int64, void *, __int64, unsigned __int64, char *))(*(_QWORD *)v39[0] + 24LL))(
                   v39[0],
                   &unk_1801D0CA0,
                   11LL,
                   ((unsigned __int64)this - 40) & -(__int64)(this != (ViewEventDispatcher *)80),
                   (char *)this + 128);
  CRVPrivate::VerifyCriticalResult(
    (unsigned __int64)&v45,
    L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const unsigned __int16 *)0x4F7,
    v25);
  v7 = (unsigned int)v45;
  if ( (int)v45 < 0 )
  {
    v23 = 1272LL;
    goto LABEL_26;
  }
  try
  {
    v26 = (__int64 *)std::make_shared<ConnectedStandbyHelper,>(v42);
    v40 = *v26;
    v28 = v40;
    v29 = v26[1];
    *v26 = 0LL;
    v26[1] = 0LL;
    v39[2] = v29;
    v41 = *((_QWORD *)this + 49);
    v30 = v41;
    *((_QWORD *)this + 49) = v29;
    *((_QWORD *)this + 48) = v28;
    if ( v30 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v30 + 8), 0xFFFFFFFF) == 1 )
      {
        v31 = v41;
        (**(void (__fastcall ***)(__int64))v41)(v41);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v31 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 8LL))(v41);
      }
    }
    v32 = v43;
    if ( v43 )
    {
      if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v32)(v32);
        if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
      }
    }
  }
  catch ( ... )
  {
    LODWORD(v45) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x4FE,
                     (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                     v27);
    v36 = v39[0];
    if ( v39[0] )
    {
      v39[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    }
    v37 = v38;
    if ( v38 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
    }
    return (unsigned int)v45;
  }
  LODWORD(v48) = ConnectedStandbyHelper::Initialize(
                   *((ConnectedStandbyHelper **)this + 48),
                   (ViewEventDispatcher *)((char *)this - 80));
  if ( !CRVPrivate::VerifyCriticalResult(
          (unsigned __int64)&v48,
          L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const unsigned __int16 *)0x4FF,
          v33) )
  {
    v7 = (unsigned int)v48;
    if ( (int)v48 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4FF,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v48);
    goto LABEL_27;
  }
  v34 = v39[0];
  if ( v39[0] )
  {
    v39[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
  v35 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  return 0LL;
}
