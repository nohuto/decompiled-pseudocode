/*
 * XREFs of ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z @ 0x1800E292C
 * Callers:
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUIMMDevice@@0@Z @ 0x1800DFAE8 (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUIMMDevice@@0@Z.c)
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x1800E17B4 (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@CPolicyConfig@@UEAAKXZ @ 0x18004A730 (-Release@CPolicyConfig@@UEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     WPP_SF_qd @ 0x1800A1B30 (WPP_SF_qd.c)
 *     WPP_SF_qq @ 0x1800AE49C (WPP_SF_qq.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 *     WPP_SF_dg @ 0x1800D3DD4 (WPP_SF_dg.c)
 *     ?Create@CEvent@ATL@@QEAAHPEAU_SECURITY_ATTRIBUTES@@HHPEBG@Z @ 0x1800DE490 (-Create@CEvent@ATL@@QEAAHPEAU_SECURITY_ATTRIBUTES@@HHPEBG@Z.c)
 *     ??0?$CComQIPtr@UIAudioSessionControlInternal@@$1?_GUID_1167b081_0746_45f0_9ecd_97cc50de3a1f@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1800E2014 (--0-$CComQIPtr@UIAudioSessionControlInternal@@$1-_GUID_1167b081_0746_45f0_9ecd_97cc50de3a1f@@3U_.c)
 *     ?Attach@?$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXPEAVCMonitorNotification@CMonitor@@@Z @ 0x1800E24A4 (-Attach@-$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXPEAVCMonitorNotification@CMonit.c)
 *     ?MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z @ 0x1800E39F8 (-MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z.c)
 *     ?SetSessionTitleAndIcon@CMonitor@@AEAAJPEAUIMMDevice@@@Z @ 0x1800E5140 (-SetSessionTitleAndIcon@CMonitor@@AEAAJPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CMonitor::Initialize(
        CMonitor *this,
        struct IMMDevice *a2,
        struct IMMDevice *a3,
        __int64 a4,
        bool *a5)
{
  CMonitor *v7; // rsi
  int Instance; // ebx
  PTP_WORK ThreadpoolWork; // rax
  signed int LastError; // eax
  _QWORD *v11; // r13
  int v12; // eax
  CPolicyConfig *v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // r13
  CAudioSessionManager *v16; // rcx
  CPolicyConfig *v17; // rcx
  _QWORD *v18; // rax
  struct _SECURITY_ATTRIBUTES *v19; // rdx
  struct _SECURITY_ATTRIBUTES *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r8
  struct _SECURITY_ATTRIBUTES *v23; // rdx
  HANDLE Thread; // rax
  signed int v25; // eax
  ATL::CAtlException *v27; // rbx
  ATL::CAtlException *v28; // rbx
  ATL::CAtlException *v29; // rbx
  LPVOID *ppv; // [rsp+20h] [rbp-B8h]
  CPolicyConfig *v31; // [rsp+40h] [rbp-98h] BYREF
  PROPVARIANT pvar; // [rsp+48h] [rbp-90h] BYREF
  LPCOLESTR lpsz; // [rsp+50h] [rbp-88h]
  __int64 v34; // [rsp+58h] [rbp-80h]
  CPolicyConfig *v35; // [rsp+60h] [rbp-78h] BYREF
  _QWORD *v36; // [rsp+68h] [rbp-70h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+70h] [rbp-68h] BYREF
  char v38; // [rsp+78h] [rbp-60h]
  __int64 v39; // [rsp+80h] [rbp-58h]
  ATL::CAtlException *v40; // [rsp+88h] [rbp-50h] BYREF
  ATL::CAtlException *v41; // [rsp+90h] [rbp-48h] BYREF
  ATL::CAtlException *v42; // [rsp+98h] [rbp-40h] BYREF
  int v45; // [rsp+F8h] [rbp+20h]
  int v46; // [rsp+F8h] [rbp+20h]
  int v47; // [rsp+F8h] [rbp+20h]

  v39 = -2LL;
  v7 = this;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v38 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_298f35db72853edc559b812a776cab31_Traceguids, v7);
  }
  if ( *((_DWORD *)v7 + 14) && *((_DWORD *)v7 + 14) != 6 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_298f35db72853edc559b812a776cab31_Traceguids);
    }
    Instance = -2147467259;
    goto LABEL_120;
  }
  *a5 = 1;
  *((_DWORD *)v7 + 14) = 1;
  *((_QWORD *)v7 + 54) = 600000LL;
  ThreadpoolWork = CreateThreadpoolWork(CMonitor::TerminateMonitorInWorkerThread, v7, 0LL);
  *((_QWORD *)v7 + 61) = ThreadpoolWork;
  if ( !ThreadpoolWork )
  {
    LastError = GetLastError();
    Instance = LastError;
    if ( LastError > 0 )
      Instance = (unsigned __int16)LastError | 0x80070000;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xCu,
        (__int64)&WPP_298f35db72853edc559b812a776cab31_Traceguids,
        Instance);
    }
    goto LABEL_119;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xDu,
      (__int64)&WPP_298f35db72853edc559b812a776cab31_Traceguids,
      v7,
      ThreadpoolWork);
  }
  v11 = (_QWORD *)((char *)v7 + 72);
  ppv = (LPVOID *)((char *)v7 + 72);
  Instance = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a2->lpVtbl->Activate)(
               a2,
               &IID_IAudioClient,
               1LL);
  if ( Instance < 0 )
    goto LABEL_120;
  ppv = (LPVOID *)((char *)v7 + 176);
  Instance = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a3->lpVtbl->Activate)(
               a3,
               &IID_IAudioClient,
               1LL);
  if ( Instance < 0 )
    goto LABEL_120;
  *a5 = 0;
  v12 = CMonitor::MuteInputLineControls(a2, a3);
  if ( v12 < 0
    && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, (__int64)&WPP_298f35db72853edc559b812a776cab31_Traceguids, v12);
  }
  Instance = ((__int64 (__fastcall *)(struct IMMDevice *, char *))a2->lpVtbl->GetId)(a2, (char *)v7 + 64);
  if ( Instance < 0 )
    goto LABEL_120;
  Instance = ((__int64 (__fastcall *)(struct IMMDevice *, char *))a3->lpVtbl->GetId)(a3, (char *)v7 + 168);
  if ( Instance < 0 )
    goto LABEL_120;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v11 + 64LL))(*v11, (__int64)v7 + 96);
  if ( Instance < 0 )
    goto LABEL_120;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v7 + 22) + 64LL))(
               *((_QWORD *)v7 + 22),
               (__int64)v7 + 200);
  if ( Instance < 0 )
    goto LABEL_120;
  Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)*v11 + 24LL))(
               *v11,
               0LL,
               0x40000LL,
               *((_QWORD *)v7 + 54) / 2LL,
               0LL,
               *((_QWORD *)v7 + 12),
               0LL);
  if ( Instance == -2004287485 )
    *a5 = 1;
  if ( Instance < 0 )
    goto LABEL_120;
  Instance = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(*(_QWORD *)*v11 + 112LL))(
               *v11,
               &GUID_c8adbd64_e71e_48a0_a4de_185c395cd317,
               (__int64)v7 + 80);
  if ( Instance < 0 )
    goto LABEL_120;
  Instance = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(*(_QWORD *)*v11 + 112LL))(
               *v11,
               &GUID_cd63314f_3fba_4a1b_812c_ef96358728e7,
               (__int64)v7 + 88);
  if ( Instance < 0 )
    goto LABEL_120;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v11 + 32LL))(*v11, (__int64)v7 + 120);
  if ( Instance < 0 )
    goto LABEL_120;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v7 + 11) + 24LL))(
               *((_QWORD *)v7 + 11),
               (__int64)v7 + 128);
  if ( Instance < 0 )
    goto LABEL_120;
  v31 = 0LL;
  Instance = CoCreateInstance(
               &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
               0LL,
               0x17u,
               &GUID_b61b8d33_3fb5_46e8_ad0c_4753a8d148a5,
               (LPVOID *)&v31);
  if ( Instance < 0
    || (Instance = (*(__int64 (__fastcall **)(CPolicyConfig *, _QWORD, _QWORD, CPolicyConfig **, _QWORD **))(*(_QWORD *)v31 + 56LL))(
                     v31,
                     *((_QWORD *)v7 + 8),
                     0LL,
                     &v35,
                     &v36),
        Instance < 0) )
  {
    v13 = v31;
    if ( !v31 )
      goto LABEL_119;
    if ( *(__int64 (__fastcall **)(CPolicyConfig *))(*(_QWORD *)v31 + 16LL) == CPolicyConfig::Release )
    {
      CPolicyConfig::Release(v31);
      goto LABEL_119;
    }
    goto LABEL_45;
  }
  *((double *)v7 + 17) = (double)(int)v35 / 10000.0;
  if ( v31 )
  {
    if ( *(__int64 (__fastcall **)(CPolicyConfig *))(*(_QWORD *)v31 + 16LL) == CPolicyConfig::Release )
      CPolicyConfig::Release(v31);
    else
      (*(void (__fastcall **)(CPolicyConfig *))(*(_QWORD *)v31 + 16LL))(v31);
  }
  Instance = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(*(_QWORD *)*v11 + 112LL))(
               *v11,
               &GUID_f4b1a599_7266_4319_a8ca_e70acb11e8cd,
               (__int64)v7 + 104);
  if ( Instance < 0 )
    goto LABEL_120;
  v14 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v36 = v14;
  if ( v14 )
  {
    *v14 = &CMonitor::CMonitorNotification::`vftable';
    v14[1] = v7;
    *((_DWORD *)v14 + 4) = 1;
    *((_DWORD *)v14 + 5) = 1;
  }
  else
  {
    v14 = 0LL;
  }
  ATL::CComPtrBase<CMonitor::CMonitorNotification>::Attach(
    (CMonitor::CMonitorNotification **)v7 + 20,
    (CMonitor::CMonitorNotification *)v14);
  if ( !*((_QWORD *)v7 + 20) )
    goto LABEL_56;
  v31 = 0LL;
  Instance = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, CPolicyConfig **))a2->lpVtbl->OpenPropertyStore)(
               a2,
               0LL,
               &v31);
  if ( Instance < 0 )
    goto LABEL_58;
  pvar = 0LL;
  lpsz = 0LL;
  v34 = 0LL;
  Instance = (*(__int64 (__fastcall **)(CPolicyConfig *, void *, PROPVARIANT *))(*(_QWORD *)v31 + 40LL))(
               v31,
               &PKEY_MonitorPauseOnBattery,
               &pvar);
  if ( Instance < 0 )
    goto LABEL_58;
  if ( (_WORD)pvar == 11 )
    *((_BYTE *)v7 + 61) = (_WORD)lpsz == 0xFFFF;
  PropVariantClear(&pvar);
  pvar = 0LL;
  lpsz = 0LL;
  v34 = 0LL;
  Instance = (*(__int64 (__fastcall **)(CPolicyConfig *, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v31 + 40LL))(
               v31,
               &PKEY_AudioEndpoint_GUID,
               &pvar);
  if ( Instance < 0 || (_WORD)pvar == 31 && (Instance = CLSIDFromString(lpsz, (LPCLSID)v7 + 9), Instance < 0) )
  {
LABEL_58:
    v13 = v31;
    goto LABEL_59;
  }
  PropVariantClear(&pvar);
  if ( v31 )
    (*(void (__fastcall **)(CPolicyConfig *))(*(_QWORD *)v31 + 16LL))(v31);
  v15 = (_QWORD *)((char *)v7 + 176);
  Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _QWORD, _QWORD, __int64))(**((_QWORD **)v7 + 22)
                                                                                                  + 24LL))(
               *((_QWORD *)v7 + 22),
               0LL,
               3624140800LL,
               *((_QWORD *)v7 + 54) / 2LL,
               0LL,
               *((_QWORD *)v7 + 12),
               (__int64)v7 + 144);
  if ( Instance == -2004287485 )
    *a5 = 1;
  if ( Instance < 0 )
    goto LABEL_120;
  Instance = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(*(_QWORD *)*v15 + 112LL))(
               *v15,
               &GUID_f294acfc_3146_4483_a7bf_addca7c260e2,
               (__int64)v7 + 184);
  if ( Instance < 0 )
    goto LABEL_120;
  Instance = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(*(_QWORD *)*v15 + 112LL))(
               *v15,
               &GUID_cd63314f_3fba_4a1b_812c_ef96358728e7,
               (__int64)v7 + 192);
  if ( Instance < 0 )
    goto LABEL_120;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v7 + 22) + 32LL))(
               *((_QWORD *)v7 + 22),
               (__int64)v7 + 240);
  if ( Instance < 0 )
    goto LABEL_120;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v7 + 24) + 24LL))(
               *((_QWORD *)v7 + 24),
               (__int64)v7 + 248);
  if ( Instance < 0 )
    goto LABEL_120;
  v16 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      ppv = (LPVOID *)*((_QWORD *)v7 + 16);
      WPP_SF_dg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xFu,
        (__int64)&WPP_298f35db72853edc559b812a776cab31_Traceguids,
        *((_DWORD *)v7 + 30));
      v16 = WPP_GLOBAL_Control;
    }
    if ( v16 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v16 + 7) & 0x800000) != 0
      && *((_BYTE *)v16 + 25) >= 4u )
    {
      ppv = (LPVOID *)*((_QWORD *)v7 + 31);
      WPP_SF_dg(
        *((_QWORD *)v16 + 2),
        0x10u,
        (__int64)&WPP_298f35db72853edc559b812a776cab31_Traceguids,
        *((_DWORD *)v7 + 60));
    }
  }
  Instance = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(**((_QWORD **)v7 + 22) + 112LL))(
               *((_QWORD *)v7 + 22),
               &GUID_f4b1a599_7266_4319_a8ca_e70acb11e8cd,
               (__int64)v7 + 216);
  if ( Instance < 0 )
    goto LABEL_120;
  ATL::CComQIPtr<IAudioSessionControlInternal,&__s_GUID const _GUID_1167b081_0746_45f0_9ecd_97cc50de3a1f>::CComQIPtr<IAudioSessionControlInternal,&__s_GUID const _GUID_1167b081_0746_45f0_9ecd_97cc50de3a1f>(
    &v35,
    *((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))v7 + 27));
  v31 = 0LL;
  pvar = 0LL;
  lpsz = 0LL;
  v34 = 0LL;
  Instance = (*(__int64 (__fastcall **)(CPolicyConfig *, CPolicyConfig **))(*(_QWORD *)v35 + 168LL))(v35, &v31);
  if ( Instance < 0
    || (LOWORD(pvar) = 11,
        LOWORD(lpsz) = -1,
        Instance = (*(__int64 (__fastcall **)(CPolicyConfig *, void *, PROPVARIANT *))(*(_QWORD *)v31 + 48LL))(
                     v31,
                     &PKEY_AudioSession_IsCaptureMonitorSession,
                     &pvar),
        Instance < 0) )
  {
    v17 = v31;
LABEL_87:
    if ( v17 )
      (*(void (__fastcall **)(CPolicyConfig *))(*(_QWORD *)v17 + 16LL))(v17);
    v13 = v35;
LABEL_59:
    if ( !v13 )
      goto LABEL_119;
LABEL_45:
    (*(void (__fastcall **)(CPolicyConfig *))(*(_QWORD *)v13 + 16LL))(v13);
    goto LABEL_119;
  }
  pvar = (PROPVARIANT)31;
  v34 = 0LL;
  lpsz = (LPCOLESTR)*((_QWORD *)v7 + 8);
  Instance = (*(__int64 (__fastcall **)(CPolicyConfig *, void *, PROPVARIANT *))(*(_QWORD *)v31 + 48LL))(
               v31,
               &PKEY_AudioSession_CaptureMonitorEndpointId,
               &pvar);
  v17 = v31;
  if ( Instance < 0 )
    goto LABEL_87;
  if ( v31 )
    (*(void (__fastcall **)(CPolicyConfig *))(*(_QWORD *)v31 + 16LL))(v31);
  if ( v35 )
    (*(void (__fastcall **)(CPolicyConfig *))(*(_QWORD *)v35 + 16LL))(v35);
  v18 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v36 = v18;
  if ( v18 )
  {
    *v18 = &CMonitor::CMonitorNotification::`vftable';
    v18[1] = v7;
    *((_DWORD *)v18 + 4) = 0;
    *((_DWORD *)v18 + 5) = 1;
  }
  else
  {
    v18 = 0LL;
  }
  ATL::CComPtrBase<CMonitor::CMonitorNotification>::Attach(
    (CMonitor::CMonitorNotification **)v7 + 28,
    (CMonitor::CMonitorNotification *)v18);
  if ( !*((_QWORD *)v7 + 28) )
  {
LABEL_56:
    Instance = -2147024882;
    goto LABEL_120;
  }
  Instance = CMonitor::SetSessionTitleAndIcon(v7, a2);
  if ( Instance >= 0 )
  {
    try
    {
      ATL::CEvent::Create((CMonitor *)((char *)v7 + 112), v19);
    }
    catch ( ATL::CAtlException *v40 )
    {
      v27 = v40;
      if ( *(_DWORD *)v40 == -1073741571 )
        o__resetstkoflw_0();
      v45 = *(_DWORD *)v27;
      Instance = *(_DWORD *)v27;
      v7 = this;
      if ( v45 < 0 )
        goto LABEL_120;
    }
    Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 9) + 104LL))(
                 *((_QWORD *)v7 + 9),
                 *((_QWORD *)v7 + 14));
    if ( Instance >= 0 )
    {
      try
      {
        ATL::CEvent::Create((CMonitor *)((char *)v7 + 232), v20);
      }
      catch ( ATL::CAtlException *v41 )
      {
        v28 = v41;
        if ( *(_DWORD *)v41 == -1073741571 )
          o__resetstkoflw_0();
        v46 = *(_DWORD *)v28;
        Instance = *(_DWORD *)v28;
        v7 = this;
        if ( v46 < 0 )
          goto LABEL_120;
      }
      Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 22) + 104LL))(
                   *((_QWORD *)v7 + 22),
                   *((_QWORD *)v7 + 29));
      if ( Instance >= 0 )
      {
        v21 = *((_QWORD *)v7 + 12);
        v22 = *(unsigned __int16 *)(v21 + 2) * (*(unsigned __int16 *)(v21 + 14) >> 3);
        *((_QWORD *)v7 + 55) = v22;
        v23 = (struct _SECURITY_ATTRIBUTES *)(v22 * (*((_QWORD *)v7 + 54) * *(unsigned int *)(v21 + 4) / 10000LL));
        *((_QWORD *)v7 + 56) = v23;
        try
        {
          ATL::CEvent::Create((CMonitor *)((char *)v7 + 288), v23);
        }
        catch ( ATL::CAtlException *v42 )
        {
          v29 = v42;
          if ( *(_DWORD *)v42 == -1073741571 )
            o__resetstkoflw_0();
          v47 = *(_DWORD *)v29;
          Instance = *(_DWORD *)v29;
          v7 = this;
          if ( v47 < 0 )
            goto LABEL_120;
        }
        Thread = CreateThread(
                   0LL,
                   0LL,
                   (LPTHREAD_START_ROUTINE)CMonitor::CaptureMonitorThreadWrapper,
                   v7,
                   0,
                   (LPDWORD)v7 + 70);
        *((_QWORD *)v7 + 34) = Thread;
        if ( Thread )
        {
          Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 13) + 80LL))(
                       *((_QWORD *)v7 + 13),
                       *((_QWORD *)v7 + 20));
          if ( Instance < 0 )
            goto LABEL_120;
          Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 27) + 80LL))(
                       *((_QWORD *)v7 + 27),
                       *((_QWORD *)v7 + 28));
          if ( Instance < 0 )
            goto LABEL_120;
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x11u,
              (__int64)&WPP_298f35db72853edc559b812a776cab31_Traceguids);
          }
          *((_DWORD *)v7 + 14) = 2;
          *((_BYTE *)v7 + 60) = 0;
        }
        else
        {
          v25 = GetLastError();
          Instance = v25;
          if ( v25 > 0 )
            Instance = (unsigned __int16)v25 | 0x80070000;
        }
LABEL_119:
        if ( Instance >= 0 )
          goto LABEL_126;
      }
    }
  }
LABEL_120:
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    LODWORD(ppv) = Instance;
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x12u,
      (__int64)&WPP_298f35db72853edc559b812a776cab31_Traceguids,
      v7,
      ppv);
  }
  *((_BYTE *)v7 + 60) = 1;
  if ( *a5 )
    *((_DWORD *)v7 + 14) = 7;
LABEL_126:
  if ( v38 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)Instance;
}
