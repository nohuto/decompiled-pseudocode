/*
 * XREFs of ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x14000F250
 * Callers:
 *     ?OnLeftSubmixDisconnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140004EB0 (-OnLeftSubmixDisconnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x140010AA0 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 * Callees:
 *     ?UnregisterDevice@GraphStreamingResourceManager@@UEAAXPEAUDeviceRegistrationToken__@@@Z @ 0x1400040D0 (-UnregisterDevice@GraphStreamingResourceManager@@UEAAXPEAUDeviceRegistrationToken__@@@Z.c)
 *     ?RemoveFromCpuManager@GraphStreamingResourceManager@@UEAAXXZ @ 0x1400047C0 (-RemoveFromCpuManager@GraphStreamingResourceManager@@UEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     TraceLoggingRegisterEx @ 0x14001B678 (TraceLoggingRegisterEx.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     atexit @ 0x14001D4BC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140032784 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x140036454 (WPP_SF_.c)
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140036A78 (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::Stop(CAudioDeviceGraph *this)
{
  int v2; // r15d
  struct _RTL_CRITICAL_SECTION *v3; // r13
  int v4; // r12d
  GraphStreamingResourceManager *v5; // rdi
  unsigned __int64 v6; // rcx
  double v7; // xmm0_8
  double v8; // xmm0_8
  double v9; // xmm1_8
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct DeviceRegistrationToken__ *v12; // rdx
  _QWORD *v13; // r14
  _QWORD *i; // rcx
  __int64 v15; // rbx
  _QWORD *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // r14d
  __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // rbx
  void (__fastcall *v23)(GraphStreamingResourceManager *); // rax
  _QWORD *v24; // rcx
  __int64 v25; // r10
  __int64 v26; // rcx
  int v28; // eax
  void (__fastcall *v29)(GraphStreamingResourceManager *, struct DeviceRegistrationToken__ *); // rax
  TLG_PENABLECALLBACK v30; // rdx
  PVOID v31; // r8
  __int64 v32; // [rsp+30h] [rbp-D0h] BYREF
  int v33; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-C0h] BYREF
  int v35; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B0h] BYREF
  GraphStreamingResourceManager *v37; // [rsp+58h] [rbp-A8h]
  LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID Context; // [rsp+68h] [rbp-98h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+70h] [rbp-90h] BYREF
  char v41; // [rsp+78h] [rbp-88h]
  _DWORD v42[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v43; // [rsp+88h] [rbp-78h]
  _QWORD v44[2]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 *v45; // [rsp+A0h] [rbp-60h] BYREF
  int v46; // [rsp+A8h] [rbp-58h]
  int v47; // [rsp+ACh] [rbp-54h]
  void *v48; // [rsp+B0h] [rbp-50h]
  int v49; // [rsp+B8h] [rbp-48h]
  int v50; // [rsp+BCh] [rbp-44h]
  const char *v51; // [rsp+C0h] [rbp-40h]
  __int64 v52; // [rsp+C8h] [rbp-38h]
  int *v53; // [rsp+D0h] [rbp-30h]
  __int64 v54; // [rsp+D8h] [rbp-28h]
  int *v55; // [rsp+E0h] [rbp-20h]
  __int64 v56; // [rsp+E8h] [rbp-18h]

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 44LL, &WPP_4aa9f3a5c249328694bb02b83da61cfa_Traceguids);
  }
  v2 = 0;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  v37 = 0LL;
  v4 = 0;
  v5 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( *((_DWORD *)this + 56) )
  {
    if ( *((_QWORD *)this + 35) )
    {
      PerformanceCount.QuadPart = 0LL;
      QueryPerformanceCounter(&PerformanceCount);
      v6 = *((_QWORD *)this + 34);
      if ( v6 && PerformanceCount.QuadPart > v6 )
      {
        v7 = (double)(PerformanceCount.LowPart - (int)v6);
        if ( (__int64)(PerformanceCount.QuadPart - v6) < 0 )
          v7 = v7 + 1.844674407370955e19;
        v8 = v7 * 10000000.0;
        v9 = (double)(int)g_u64QPCFrequency;
        if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
          v9 = v9 + 1.844674407370955e19;
        _InterlockedExchangeAdd(&dword_140085F10, (int)(v8 / v9) / 0x2710u);
        v10 = *((_QWORD *)this + 35);
        v44[0] = &g_EndpointStatistics;
        v44[1] = (char *)this + 352;
        (*(void (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v10 + 24LL))(v10, 2LL, v44);
        _InterlockedIncrement((_DWORD *)&g_EndpointStatistics + 1);
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            45LL,
            &WPP_4aa9f3a5c249328694bb02b83da61cfa_Traceguids,
            g_EndpointStatistics);
        }
      }
      v11 = *((_QWORD *)this + 35);
      if ( v11 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        *((_QWORD *)this + 35) = 0LL;
      }
    }
    v37 = 0LL;
    if ( *((_QWORD *)this + 46)
      || (int)CreateStreamingResourceManager((struct IAudioStreamingResourceRegistration **)this + 46) >= 0 )
    {
      v5 = (GraphStreamingResourceManager *)*((_QWORD *)this + 46);
      v37 = v5;
      if ( v5 )
        (*(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)v5 + 8LL))(v5);
    }
    v12 = (struct DeviceRegistrationToken__ *)*((_QWORD *)this + 47);
    if ( v12 && v5 )
    {
      v29 = *(void (__fastcall **)(GraphStreamingResourceManager *, struct DeviceRegistrationToken__ *))(*(_QWORD *)v5 + 64LL);
      if ( v29 == GraphStreamingResourceManager::UnregisterDevice )
        GraphStreamingResourceManager::UnregisterDevice(v5, v12);
      else
        ((void (__fastcall *)(GraphStreamingResourceManager *))v29)(v5);
      *((_QWORD *)this + 47) = 0LL;
    }
    v41 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v13 = (_QWORD *)*((_QWORD *)this + 17);
    for ( i = WPP_GLOBAL_Control; v13; v2 = 0 )
    {
      v15 = v13[2];
      v13 = (_QWORD *)*v13;
      if ( i != &WPP_GLOBAL_Control && (*((_DWORD *)i + 7) & 0x20000) != 0 && *((_BYTE *)i + 25) >= 4u )
      {
        WPP_SF_(i[2], 46LL, &WPP_4aa9f3a5c249328694bb02b83da61cfa_Traceguids);
        i = WPP_GLOBAL_Control;
      }
      v16 = *(_QWORD **)(v15 + 16);
      v17 = 0LL;
      v32 = 0LL;
      if ( v16 )
      {
        do
        {
          v18 = v16[2];
          v16 = (_QWORD *)*v16;
          if ( *(_DWORD *)(v18 + 40) == 1 )
          {
            v28 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(v18 + 32))(
                    **(_QWORD **)(v18 + 32),
                    &GUID_c684b72a_6df4_4774_bdf9_76b77509b653,
                    &v32);
            if ( v28 < 0 || (v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 40LL))(v32), v28 < 0) )
              v2 = v28;
            v17 = v32;
            if ( v32 )
            {
              v32 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
              v17 = v32;
            }
          }
        }
        while ( v16 );
        if ( v2 < 0 )
        {
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              61LL,
              &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids,
              (unsigned int)v2);
          }
          AudDGTraceLoggingErrorHelper("CPipeInstance::Stop", 0xFCCu, v2);
          v17 = v32;
        }
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        i = WPP_GLOBAL_Control;
      }
      if ( i != &WPP_GLOBAL_Control && (*((_DWORD *)i + 7) & 0x20000) != 0 && *((_BYTE *)i + 25) >= 4u )
      {
        WPP_SF_(i[2], 47LL, &WPP_4aa9f3a5c249328694bb02b83da61cfa_Traceguids);
        i = WPP_GLOBAL_Control;
      }
      if ( v2 < 0 )
        v4 = v2;
    }
    if ( v41 )
    {
      LeaveCriticalSection(lpCriticalSection);
      i = WPP_GLOBAL_Control;
    }
    if ( i != &WPP_GLOBAL_Control && (*((_DWORD *)i + 7) & 0x20000) != 0 && *((_BYTE *)i + 25) >= 4u )
      WPP_SF_(i[2], 48LL, &WPP_4aa9f3a5c249328694bb02b83da61cfa_Traceguids);
    v19 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 40LL))(*((_QWORD *)this + 15));
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 49LL, &WPP_4aa9f3a5c249328694bb02b83da61cfa_Traceguids);
    }
    if ( v19 < 0 )
      v4 = v19;
    v20 = *(_QWORD *)(*((_QWORD *)this + 16) + 24LL);
    while ( v20 )
    {
      v21 = *(_QWORD *)(v20 + 16);
      v20 = *(_QWORD *)(v20 + 8);
      if ( *(_DWORD *)(v21 + 40) == 2 )
      {
        v22 = *(_QWORD *)(*(_QWORD *)(v21 + 32) + 40LL);
        if ( v22 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
        v36 = 0LL;
        if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v22)(
               v22,
               &GUID_0ef25615_b134_4fba_80e3_e3ea2f74206e,
               &v36) >= 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 24LL))(v36);
        if ( v36 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
    }
    if ( v5 )
    {
      v23 = *(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)v5 + 80LL);
      if ( v23 == GraphStreamingResourceManager::RemoveFromCpuManager )
        GraphStreamingResourceManager::RemoveFromCpuManager(v5);
      else
        v23(v5);
    }
  }
  else
  {
    v19 = v33;
    v4 = -2005139437;
  }
  LeaveCriticalSection(v3);
  v24 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 50LL, &WPP_4aa9f3a5c249328694bb02b83da61cfa_Traceguids);
    v24 = WPP_GLOBAL_Control;
  }
  if ( v4 < 0 )
  {
    if ( v24 != &WPP_GLOBAL_Control && (*((_DWORD *)v24 + 7) & 0x20000) != 0 && *((_BYTE *)v24 + 25) >= 2u )
      WPP_SF_D(v24[2], 51LL, &WPP_4aa9f3a5c249328694bb02b83da61cfa_Traceguids, (unsigned int)v4);
    v33 = v19;
    v35 = 1066;
    InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
    if ( fPending )
    {
      Context = &qword_140086158;
      qword_140086158 = (__int64)&AudioDgTelemetryProvider::`vftable';
      qword_140086170 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
      qword_140086160 = (__int64)qword_140086170;
      byte_140086168 = 1;
      TraceLoggingRegisterEx(qword_140086170, v30, v31);
      dword_14008616C = 1;
      (*(void (__fastcall **)(__int64 *))(qword_140086158 + 8))(&qword_140086158);
      InitOnceComplete(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_140086158);
    }
    v25 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v25 > 2u )
    {
      v52 = 24LL;
      v51 = "CAudioDeviceGraph::Stop";
      v53 = &v35;
      v55 = &v33;
      v54 = 4LL;
      v56 = 4LL;
      v42[1] = 2;
      v45 = *(unsigned __int16 **)(v25 + 8);
      v42[0] = ((unsigned int)&unk_14006F524 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v26 = *(_QWORD *)(v25 + 32);
      v43 = 0LL;
      v46 = *v45;
      v48 = &unk_14006F52F;
      v47 = 2;
      v49 = 35;
      v50 = 1;
      EtwEventWriteTransfer(v26, v42, 0LL, 0LL, 5, &v45);
      v5 = v37;
    }
  }
  if ( v5 )
    (*(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v4;
}
