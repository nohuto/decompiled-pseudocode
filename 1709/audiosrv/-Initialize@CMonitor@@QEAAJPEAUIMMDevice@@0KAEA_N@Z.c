/*
 * XREFs of ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z @ 0x1800A7CDC
 * Callers:
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUIMMDevice@@0@Z @ 0x1800A4E00 (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUIMMDevice@@0@Z.c)
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x1800A6B94 (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     WPP_SF_qd @ 0x180067C30 (WPP_SF_qd.c)
 *     WPP_SF_dg @ 0x18006B9E8 (WPP_SF_dg.c)
 *     WPP_SF_qq @ 0x180077320 (WPP_SF_qq.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 *     ?Create@CEvent@ATL@@QEAAHPEAU_SECURITY_ATTRIBUTES@@HHPEBG@Z @ 0x1800A3244 (-Create@CEvent@ATL@@QEAAHPEAU_SECURITY_ATTRIBUTES@@HHPEBG@Z.c)
 *     ??0?$CComQIPtr@UIAudioSessionControlInternal@@$1?_GUID_c0ef2098_bf0d_4db3_9d9f_ccb41279db98@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1800A73F4 (--0-$CComQIPtr@UIAudioSessionControlInternal@@$1-_GUID_c0ef2098_bf0d_4db3_9d9f_ccb41279db98@@3U_.c)
 *     ?Attach@?$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXPEAVCMonitorNotification@CMonitor@@@Z @ 0x1800A7850 (-Attach@-$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXPEAVCMonitorNotification@CMonit.c)
 *     ?MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z @ 0x1800A8F80 (-MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z.c)
 *     ?SetSessionTitleAndIcon@CMonitor@@AEAAJPEAUIMMDevice@@@Z @ 0x1800AA6D0 (-SetSessionTitleAndIcon@CMonitor@@AEAAJPEAUIMMDevice@@@Z.c)
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
  int v8; // ebx
  PTP_WORK ThreadpoolWork; // rax
  signed int LastError; // eax
  _QWORD *v11; // r13
  int v12; // eax
  LPVOID v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // r13
  CAudioDGProcess *v16; // rcx
  LPVOID v17; // rcx
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
  LPVOID v31; // [rsp+40h] [rbp-98h] BYREF
  PROPVARIANT pvar; // [rsp+48h] [rbp-90h] BYREF
  LPCOLESTR lpsz; // [rsp+50h] [rbp-88h]
  __int64 v34; // [rsp+58h] [rbp-80h]
  void *v35; // [rsp+60h] [rbp-78h] BYREF
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
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids, v7);
  }
  if ( *((_DWORD *)v7 + 14) && *((_DWORD *)v7 + 14) != 6 )
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids);
    }
    v8 = -2147467259;
    goto LABEL_114;
  }
  *a5 = 1;
  *((_DWORD *)v7 + 14) = 1;
  *((_QWORD *)v7 + 54) = 600000LL;
  ThreadpoolWork = CreateThreadpoolWork(CMonitor::TerminateMonitorInWorkerThread, v7, 0LL);
  *((_QWORD *)v7 + 61) = ThreadpoolWork;
  if ( !ThreadpoolWork )
  {
    LastError = GetLastError();
    v8 = LastError;
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids, v8);
    }
    goto LABEL_113;
  }
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xDu,
      (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
      v7,
      ThreadpoolWork);
  }
  v11 = (_QWORD *)((char *)v7 + 72);
  ppv = (LPVOID *)((char *)v7 + 72);
  v8 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a2->lpVtbl->Activate)(a2, &IID_IAudioClient, 1LL);
  if ( v8 < 0 )
    goto LABEL_114;
  ppv = (LPVOID *)((char *)v7 + 176);
  v8 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a3->lpVtbl->Activate)(a3, &IID_IAudioClient, 1LL);
  if ( v8 < 0 )
    goto LABEL_114;
  *a5 = 0;
  v12 = CMonitor::MuteInputLineControls(a2, a3);
  if ( v12 < 0
    && WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids, v12);
  }
  v8 = ((__int64 (__fastcall *)(struct IMMDevice *, char *))a2->lpVtbl->GetId)(a2, (char *)v7 + 64);
  if ( v8 < 0 )
    goto LABEL_114;
  v8 = ((__int64 (__fastcall *)(struct IMMDevice *, char *))a3->lpVtbl->GetId)(a3, (char *)v7 + 168);
  if ( v8 < 0 )
    goto LABEL_114;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v11 + 64LL))(*v11, (__int64)v7 + 96);
  if ( v8 < 0 )
    goto LABEL_114;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v7 + 22) + 64LL))(
         *((_QWORD *)v7 + 22),
         (__int64)v7 + 200);
  if ( v8 < 0 )
    goto LABEL_114;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)*v11 + 24LL))(
         *v11,
         0LL,
         0x40000LL,
         *((_QWORD *)v7 + 54) / 2LL,
         0LL,
         *((_QWORD *)v7 + 12),
         0LL);
  if ( v8 == -2004287485 )
    *a5 = 1;
  if ( v8 < 0 )
    goto LABEL_114;
  v8 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(*(_QWORD *)*v11 + 112LL))(
         *v11,
         &GUID_c8adbd64_e71e_48a0_a4de_185c395cd317,
         (__int64)v7 + 80);
  if ( v8 < 0 )
    goto LABEL_114;
  v8 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(*(_QWORD *)*v11 + 112LL))(
         *v11,
         &GUID_cd63314f_3fba_4a1b_812c_ef96358728e7,
         (__int64)v7 + 88);
  if ( v8 < 0 )
    goto LABEL_114;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v11 + 32LL))(*v11, (__int64)v7 + 120);
  if ( v8 < 0 )
    goto LABEL_114;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v7 + 11) + 24LL))(
         *((_QWORD *)v7 + 11),
         (__int64)v7 + 128);
  if ( v8 < 0 )
    goto LABEL_114;
  v31 = 0LL;
  v8 = CoCreateInstance(
         &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
         0LL,
         0x17u,
         &GUID_5731289f_3e89_4209_86be_6599a8e05e67,
         &v31);
  if ( v8 < 0 )
    goto LABEL_42;
  v8 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD, void **, _QWORD **))(*(_QWORD *)v31 + 56LL))(
         v31,
         *((_QWORD *)v7 + 8),
         0LL,
         &v35,
         &v36);
  if ( v8 < 0 )
    goto LABEL_42;
  *((double *)v7 + 17) = (double)(int)v35 / 10000.0;
  if ( v31 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v31 + 16LL))(v31);
  v8 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(*(_QWORD *)*v11 + 112LL))(
         *v11,
         &GUID_f4b1a599_7266_4319_a8ca_e70acb11e8cd,
         (__int64)v7 + 104);
  if ( v8 < 0 )
    goto LABEL_114;
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
    goto LABEL_53;
  v31 = 0LL;
  v8 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, LPVOID *))a2->lpVtbl->OpenPropertyStore)(a2, 0LL, &v31);
  if ( v8 < 0 )
    goto LABEL_42;
  pvar = 0LL;
  lpsz = 0LL;
  v34 = 0LL;
  v8 = (*(__int64 (__fastcall **)(LPVOID, void *, PROPVARIANT *))(*(_QWORD *)v31 + 40LL))(
         v31,
         &PKEY_MonitorPauseOnBattery,
         &pvar);
  if ( v8 < 0 )
    goto LABEL_42;
  if ( (_WORD)pvar == 11 )
    *((_BYTE *)v7 + 61) = (_WORD)lpsz == 0xFFFF;
  PropVariantClear(&pvar);
  pvar = 0LL;
  lpsz = 0LL;
  v34 = 0LL;
  v8 = (*(__int64 (__fastcall **)(LPVOID, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v31 + 40LL))(
         v31,
         &PKEY_AudioEndpoint_GUID,
         &pvar);
  if ( v8 < 0 || (_WORD)pvar == 31 && (v8 = CLSIDFromString(lpsz, (LPCLSID)v7 + 9), v8 < 0) )
  {
LABEL_42:
    v13 = v31;
LABEL_43:
    if ( v13 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v13 + 16LL))(v13);
    goto LABEL_113;
  }
  PropVariantClear(&pvar);
  if ( v31 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v31 + 16LL))(v31);
  v15 = (_QWORD *)((char *)v7 + 176);
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _QWORD, _QWORD, __int64))(**((_QWORD **)v7 + 22)
                                                                                            + 24LL))(
         *((_QWORD *)v7 + 22),
         0LL,
         3624140800LL,
         *((_QWORD *)v7 + 54) / 2LL,
         0LL,
         *((_QWORD *)v7 + 12),
         (__int64)v7 + 144);
  if ( v8 == -2004287485 )
    *a5 = 1;
  if ( v8 < 0 )
    goto LABEL_114;
  v8 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(*(_QWORD *)*v15 + 112LL))(
         *v15,
         &GUID_f294acfc_3146_4483_a7bf_addca7c260e2,
         (__int64)v7 + 184);
  if ( v8 < 0 )
    goto LABEL_114;
  v8 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(*(_QWORD *)*v15 + 112LL))(
         *v15,
         &GUID_cd63314f_3fba_4a1b_812c_ef96358728e7,
         (__int64)v7 + 192);
  if ( v8 < 0 )
    goto LABEL_114;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v7 + 22) + 32LL))(
         *((_QWORD *)v7 + 22),
         (__int64)v7 + 240);
  if ( v8 < 0 )
    goto LABEL_114;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v7 + 24) + 24LL))(
         *((_QWORD *)v7 + 24),
         (__int64)v7 + 248);
  if ( v8 < 0 )
    goto LABEL_114;
  v16 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      ppv = (LPVOID *)*((_QWORD *)v7 + 16);
      WPP_SF_dg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xFu,
        (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
        *((_DWORD *)v7 + 30));
      v16 = WPP_GLOBAL_Control;
    }
    if ( v16 != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v16 + 7) & 0x800000) != 0
      && *((_BYTE *)v16 + 25) >= 4u )
    {
      ppv = (LPVOID *)*((_QWORD *)v7 + 31);
      WPP_SF_dg(
        *((_QWORD *)v16 + 2),
        0x10u,
        (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
        *((_DWORD *)v7 + 60));
    }
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(**((_QWORD **)v7 + 22) + 112LL))(
         *((_QWORD *)v7 + 22),
         &GUID_f4b1a599_7266_4319_a8ca_e70acb11e8cd,
         (__int64)v7 + 216);
  if ( v8 < 0 )
    goto LABEL_114;
  ATL::CComQIPtr<IAudioSessionControlInternal,&__s_GUID const _GUID_c0ef2098_bf0d_4db3_9d9f_ccb41279db98>::CComQIPtr<IAudioSessionControlInternal,&__s_GUID const _GUID_c0ef2098_bf0d_4db3_9d9f_ccb41279db98>(
    &v35,
    *((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))v7 + 27));
  v31 = 0LL;
  pvar = 0LL;
  lpsz = 0LL;
  v34 = 0LL;
  v8 = (*(__int64 (__fastcall **)(void *, LPVOID *))(*(_QWORD *)v35 + 168LL))(v35, &v31);
  if ( v8 < 0
    || (LOWORD(pvar) = 11,
        LOWORD(lpsz) = -1,
        v8 = (*(__int64 (__fastcall **)(LPVOID, void *, PROPVARIANT *))(*(_QWORD *)v31 + 48LL))(
               v31,
               &PKEY_AudioSession_IsCaptureMonitorSession,
               &pvar),
        v8 < 0) )
  {
    v17 = v31;
LABEL_81:
    if ( v17 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v17 + 16LL))(v17);
    v13 = v35;
    goto LABEL_43;
  }
  pvar = (PROPVARIANT)31;
  v34 = 0LL;
  lpsz = (LPCOLESTR)*((_QWORD *)v7 + 8);
  v8 = (*(__int64 (__fastcall **)(LPVOID, void *, PROPVARIANT *))(*(_QWORD *)v31 + 48LL))(
         v31,
         &PKEY_AudioSession_CaptureMonitorEndpointId,
         &pvar);
  v17 = v31;
  if ( v8 < 0 )
    goto LABEL_81;
  if ( v31 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v31 + 16LL))(v31);
  if ( v35 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v35 + 16LL))(v35);
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
LABEL_53:
    v8 = -2147024882;
    goto LABEL_114;
  }
  v8 = CMonitor::SetSessionTitleAndIcon(v7, a2);
  if ( v8 >= 0 )
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
      v8 = *(_DWORD *)v27;
      v7 = this;
      if ( v45 < 0 )
        goto LABEL_114;
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 9) + 104LL))(
           *((_QWORD *)v7 + 9),
           *((_QWORD *)v7 + 14));
    if ( v8 >= 0 )
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
        v8 = *(_DWORD *)v28;
        v7 = this;
        if ( v46 < 0 )
          goto LABEL_114;
      }
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 22) + 104LL))(
             *((_QWORD *)v7 + 22),
             *((_QWORD *)v7 + 29));
      if ( v8 >= 0 )
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
          v8 = *(_DWORD *)v29;
          v7 = this;
          if ( v47 < 0 )
            goto LABEL_114;
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
          v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 13) + 80LL))(
                 *((_QWORD *)v7 + 13),
                 *((_QWORD *)v7 + 20));
          if ( v8 < 0 )
            goto LABEL_114;
          v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 27) + 80LL))(
                 *((_QWORD *)v7 + 27),
                 *((_QWORD *)v7 + 28));
          if ( v8 < 0 )
            goto LABEL_114;
          if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x11u,
              (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids);
          }
          *((_DWORD *)v7 + 14) = 2;
          *((_BYTE *)v7 + 60) = 0;
        }
        else
        {
          v25 = GetLastError();
          v8 = v25;
          if ( v25 > 0 )
            v8 = (unsigned __int16)v25 | 0x80070000;
        }
LABEL_113:
        if ( v8 >= 0 )
          goto LABEL_120;
      }
    }
  }
LABEL_114:
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    LODWORD(ppv) = v8;
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x12u,
      (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
      v7,
      ppv);
  }
  *((_BYTE *)v7 + 60) = 1;
  if ( *a5 )
    *((_DWORD *)v7 + 14) = 7;
LABEL_120:
  if ( v38 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v8;
}
