/*
 * XREFs of ?SubscribeToServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x18011EC50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z @ 0x18000671C (-VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Reset0@?$_Ptr_base@VConnectedStandbyHelper@@@std@@QEAAXPEAVConnectedStandbyHelper@@PEAV_Ref_count_base@2@@Z @ 0x18012B3C8 (-_Reset0@-$_Ptr_base@VConnectedStandbyHelper@@@std@@QEAAXPEAVConnectedStandbyHelper@@PEAV_Ref_co.c)
 *     ?Initialize@ConnectedStandbyHelper@@QEAAJPEAVViewEventDispatcher@@@Z @ 0x180139CBC (-Initialize@ConnectedStandbyHelper@@QEAAJPEAVViewEventDispatcher@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801E2A80 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewEventDispatcher::SubscribeToServices(ViewEventDispatcher *this, struct IServiceProvider *a2)
{
  struct IServiceProviderVtbl *lpVtbl; // rbx
  __int64 *v5; // rax
  __int64 v6; // r9
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r9
  struct IServiceProviderVtbl *v14; // rbx
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
  char *v26; // rbx
  const char *v27; // r9
  volatile signed __int32 *v28; // rcx
  volatile signed __int32 *v29; // rbx
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // [rsp+30h] [rbp-68h] BYREF
  __int64 v36[2]; // [rsp+38h] [rbp-60h] BYREF
  __int128 v37[5]; // [rsp+48h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  char *v39; // [rsp+A0h] [rbp+8h] BYREF
  char *v40; // [rsp+A8h] [rbp+10h] BYREF
  int v41; // [rsp+B0h] [rbp+18h] BYREF
  char *v42; // [rsp+B8h] [rbp+20h] BYREF

  v36[1] = -2LL;
  lpVtbl = a2->lpVtbl;
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)this + 47);
  LODWORD(v39) = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))lpVtbl->QueryService)(
                   a2,
                   &SID_ProcessLifetimeManagerControl,
                   &GUID_69c083b1_7f6f_490d_9d77_c0219a95b25d,
                   v5);
  CRVPrivate::VerifyCriticalResult(
    (unsigned __int64)&v39,
    L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const unsigned __int16 *)0x4CB,
    v6);
  v7 = (unsigned int)v39;
  if ( (int)v39 < 0 )
  {
    v8 = 1228LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)v7);
    return v7;
  }
  v10 = *((_QWORD *)this + 48);
  if ( v10 )
  {
    *((_QWORD *)this + 48) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  LODWORD(v39) = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
                   a2,
                   &CLSID_ImmersivePlaybackManager,
                   &GUID_1fc98738_e0bf_4cb2_9de2_20ab31b23ce4,
                   (char *)this + 384);
  CRVPrivate::VerifyCriticalResult(
    (unsigned __int64)&v39,
    L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const unsigned __int16 *)0x4D1,
    v11);
  v7 = (unsigned int)v39;
  if ( (int)v39 < 0 )
  {
    v8 = 1234LL;
    goto LABEL_3;
  }
  v12 = *((_QWORD *)this + 49);
  if ( v12 )
  {
    *((_QWORD *)this + 49) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  LODWORD(v39) = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
                   a2,
                   &SID_VirtualDesktopManager,
                   &GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
                   (char *)this + 392);
  CRVPrivate::VerifyCriticalResult(
    (unsigned __int64)&v39,
    L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const unsigned __int16 *)0x4D7,
    v13);
  v7 = (unsigned int)v39;
  if ( (int)v39 < 0 )
  {
    v8 = 1240LL;
    goto LABEL_3;
  }
  v35 = 0LL;
  v14 = a2->lpVtbl;
  v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v35);
  LODWORD(v40) = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v14->QueryService)(
                   a2,
                   &IID_IImmersiveSessionIdleDetector,
                   &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
                   v15);
  if ( !CRVPrivate::VerifyCriticalResult(
          (unsigned __int64)&v40,
          L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const unsigned __int16 *)0x4DC,
          v16) )
  {
    v7 = (unsigned int)v40;
    if ( (int)v40 >= 0 )
      goto LABEL_17;
    v17 = 1244LL;
    goto LABEL_16;
  }
  v41 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v35 + 32LL))(
          v35,
          ((unsigned __int64)this + 72) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 112) >> 64),
          (char *)this + 172);
  if ( !CRVPrivate::VerifyCriticalResult(
          (unsigned __int64)&v41,
          L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const unsigned __int16 *)0x4DE,
          v19) )
  {
    v7 = v41;
    if ( v41 >= 0 )
    {
LABEL_17:
      v18 = v35;
      if ( v35 )
      {
        v35 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      return v7;
    }
    v17 = 1246LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)v7);
    goto LABEL_17;
  }
  v36[0] = 0LL;
  v20 = a2->lpVtbl;
  v21 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v36);
  LODWORD(v39) = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v20->QueryService)(
                   a2,
                   &SID_ImmersiveShellHookService,
                   &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
                   v21);
  CRVPrivate::VerifyCriticalResult(
    (unsigned __int64)&v39,
    L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const unsigned __int16 *)0x4E6,
    v22);
  v7 = (unsigned int)v39;
  if ( (int)v39 < 0 )
  {
    v23 = 1255LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v23,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)v7);
LABEL_25:
    v24 = v36[0];
    if ( v36[0] )
    {
      v36[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    goto LABEL_17;
  }
  LODWORD(v39) = (*(__int64 (__fastcall **)(__int64, void *, __int64, unsigned __int64, char *))(*(_QWORD *)v36[0] + 24LL))(
                   v36[0],
                   &unk_18022BE30,
                   11LL,
                   ((unsigned __int64)this - 48) & -(__int64)(this != (ViewEventDispatcher *)112),
                   (char *)this + 168);
  CRVPrivate::VerifyCriticalResult(
    (unsigned __int64)&v39,
    L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const unsigned __int16 *)0x4FD,
    v25);
  v7 = (unsigned int)v39;
  if ( (int)v39 < 0 )
  {
    v23 = 1278LL;
    goto LABEL_24;
  }
  try
  {
    v26 = (char *)operator new(0x40uLL);
    *((_DWORD *)v26 + 2) = 1;
    *((_DWORD *)v26 + 3) = 1;
    *(_QWORD *)v26 = &std::_Ref_count_obj<ConnectedStandbyHelper>::`vftable';
    if ( v26 != (char *)-16LL )
    {
      memset(v26 + 16, 0, 0x30uLL);
      *((_QWORD *)v26 + 2) = 0LL;
      *((_QWORD *)v26 + 3) = 0LL;
      *((_DWORD *)v26 + 8) = _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext);
      *((_QWORD *)v26 + 5) = 0LL;
      *((_QWORD *)v26 + 6) = 0LL;
      v26[56] = 0;
    }
    v37[0] = 0LL;
    std::_Ptr_base<ConnectedStandbyHelper>::_Reset0(v37, v26 + 16, v26);
    if ( v26 != (char *)-16LL )
    {
      _InterlockedIncrement((volatile signed __int32 *)v26 + 3);
      v28 = (volatile signed __int32 *)*((_QWORD *)v26 + 3);
      if ( v28 && _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
      *((_QWORD *)v26 + 3) = v26;
      *((_QWORD *)v26 + 2) = v26 + 16;
    }
    v29 = (volatile signed __int32 *)*((_QWORD *)this + 54);
    *(_OWORD *)((char *)this + 424) = v37[0];
    if ( v29 )
    {
      if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v29)(v29);
        if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
      }
    }
  }
  catch ( ... )
  {
    LODWORD(v39) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x504,
                     (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                     v27);
    v33 = v36[0];
    if ( v36[0] )
    {
      v36[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    }
    v34 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
    }
    return (unsigned int)v39;
  }
  LODWORD(v42) = ConnectedStandbyHelper::Initialize(
                   *((ConnectedStandbyHelper **)this + 53),
                   (ViewEventDispatcher *)((char *)this - 112));
  if ( !CRVPrivate::VerifyCriticalResult(
          (unsigned __int64)&v42,
          L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const unsigned __int16 *)0x505,
          v30) )
  {
    v7 = (unsigned int)v42;
    if ( (int)v42 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x505,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v42);
    goto LABEL_25;
  }
  v31 = v36[0];
  if ( v36[0] )
  {
    v36[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  v32 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  return 0LL;
}
