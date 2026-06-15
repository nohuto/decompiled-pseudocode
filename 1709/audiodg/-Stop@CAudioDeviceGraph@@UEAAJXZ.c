/*
 * XREFs of ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x14000C200
 * Callers:
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x14000DA94 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 *     ?OnLeftSubmixDisconnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x14000F100 (-OnLeftSubmixDisconnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 * Callees:
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140002278 (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     ?UnregisterDevice@GraphStreamingResourceManager@@UEAAXPEAUDeviceRegistrationToken__@@@Z @ 0x140002A90 (-UnregisterDevice@GraphStreamingResourceManager@@UEAAXPEAUDeviceRegistrationToken__@@@Z.c)
 *     ?RemoveFromCpuManager@GraphStreamingResourceManager@@UEAAXXZ @ 0x140003160 (-RemoveFromCpuManager@GraphStreamingResourceManager@@UEAAXXZ.c)
 *     ?ResetAPOs@CPipeInstance@@QEBAXXZ @ 0x140005A90 (-ResetAPOs@CPipeInstance@@QEBAXXZ.c)
 *     ?Stop@CPipeInstance@@QEAAJXZ @ 0x1400063C0 (-Stop@CPipeInstance@@QEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     TraceLoggingRegisterEx @ 0x14001BFBC (TraceLoggingRegisterEx.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     atexit @ 0x14001D22C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x140035F54 (WPP_SF_.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 */

__int64 __fastcall CAudioDeviceGraph::Stop(CAudioDeviceGraph *this)
{
  GraphStreamingResourceManager *v2; // rbx
  int v3; // r14d
  unsigned __int64 v4; // rcx
  double v5; // xmm0_8
  double v6; // xmm0_8
  double v7; // xmm1_8
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct DeviceRegistrationToken__ *v10; // rdx
  void (__fastcall *v11)(GraphStreamingResourceManager *, struct DeviceRegistrationToken__ *); // rax
  _QWORD *v12; // rsi
  _QWORD *v13; // rcx
  CPipeInstance *v14; // r15
  int v15; // r15d
  int v16; // esi
  void (__fastcall *v17)(GraphStreamingResourceManager *); // rax
  _QWORD *v18; // rcx
  __int64 v19; // r10
  __int64 v20; // rcx
  TLG_PENABLECALLBACK v22; // rdx
  PVOID v23; // r8
  int v24; // [rsp+30h] [rbp-89h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-81h] BYREF
  int v26; // [rsp+40h] [rbp-79h] BYREF
  GraphStreamingResourceManager *v27; // [rsp+48h] [rbp-71h]
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-69h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-61h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp-59h] BYREF
  char v31; // [rsp+68h] [rbp-51h]
  _DWORD v32[2]; // [rsp+70h] [rbp-49h] BYREF
  __int64 v33; // [rsp+78h] [rbp-41h]
  _QWORD v34[2]; // [rsp+80h] [rbp-39h] BYREF
  unsigned __int16 *v35; // [rsp+90h] [rbp-29h] BYREF
  int v36; // [rsp+98h] [rbp-21h]
  int v37; // [rsp+9Ch] [rbp-1Dh]
  void *v38; // [rsp+A0h] [rbp-19h]
  int v39; // [rsp+A8h] [rbp-11h]
  int v40; // [rsp+ACh] [rbp-Dh]
  const char *v41; // [rsp+B0h] [rbp-9h]
  __int64 v42; // [rsp+B8h] [rbp-1h]
  int *v43; // [rsp+C0h] [rbp+7h]
  __int64 v44; // [rsp+C8h] [rbp+Fh]
  int *v45; // [rsp+D0h] [rbp+17h]
  __int64 v46; // [rsp+D8h] [rbp+1Fh]

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 44LL, &WPP_6080fe2713ce397b188bf80ec1d83326_Traceguids);
  }
  v2 = 0LL;
  v27 = 0LL;
  v3 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( *((_DWORD *)this + 56) )
  {
    if ( *((_QWORD *)this + 35) )
    {
      PerformanceCount.QuadPart = 0LL;
      QueryPerformanceCounter(&PerformanceCount);
      v4 = *((_QWORD *)this + 34);
      if ( v4 && PerformanceCount.QuadPart > v4 )
      {
        v5 = (double)(PerformanceCount.LowPart - (int)v4);
        if ( (__int64)(PerformanceCount.QuadPart - v4) < 0 )
          v5 = v5 + 1.844674407370955e19;
        v6 = v5 * 10000000.0;
        v7 = (double)(int)g_u64QPCFrequency;
        if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
          v7 = v7 + 1.844674407370955e19;
        _InterlockedExchangeAdd(&dword_140089F10, (int)(v6 / v7) / 0x2710u);
        v8 = *((_QWORD *)this + 35);
        v34[0] = &g_EndpointStatistics;
        v34[1] = (char *)this + 352;
        (*(void (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v8 + 24LL))(v8, 2LL, v34);
        _InterlockedIncrement((_DWORD *)&g_EndpointStatistics + 1);
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            45LL,
            &WPP_6080fe2713ce397b188bf80ec1d83326_Traceguids,
            g_EndpointStatistics);
        }
      }
      v9 = *((_QWORD *)this + 35);
      if ( v9 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        *((_QWORD *)this + 35) = 0LL;
      }
    }
    v27 = 0LL;
    if ( *((_QWORD *)this + 46)
      || (int)CreateStreamingResourceManager((struct IAudioStreamingResourceRegistration **)this + 46) >= 0 )
    {
      v2 = (GraphStreamingResourceManager *)*((_QWORD *)this + 46);
      v27 = v2;
      if ( v2 )
        (*(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)v2 + 8LL))(v2);
    }
    v10 = (struct DeviceRegistrationToken__ *)*((_QWORD *)this + 47);
    if ( v10 && v2 )
    {
      v11 = *(void (__fastcall **)(GraphStreamingResourceManager *, struct DeviceRegistrationToken__ *))(*(_QWORD *)v2 + 64LL);
      if ( v11 == GraphStreamingResourceManager::UnregisterDevice )
        GraphStreamingResourceManager::UnregisterDevice(v2, v10);
      else
        ((void (__fastcall *)(GraphStreamingResourceManager *))v11)(v2);
      *((_QWORD *)this + 47) = 0LL;
    }
    v31 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    v12 = (_QWORD *)*((_QWORD *)this + 17);
    v13 = WPP_GLOBAL_Control;
    while ( v12 )
    {
      v14 = (CPipeInstance *)v12[2];
      v12 = (_QWORD *)*v12;
      if ( v13 != &WPP_GLOBAL_Control && (*((_DWORD *)v13 + 7) & 0x20000) != 0 && *((_BYTE *)v13 + 25) >= 4u )
        WPP_SF_(v13[2], 46LL, &WPP_6080fe2713ce397b188bf80ec1d83326_Traceguids);
      v15 = CPipeInstance::Stop(v14);
      v13 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 47LL, &WPP_6080fe2713ce397b188bf80ec1d83326_Traceguids);
        v13 = WPP_GLOBAL_Control;
      }
      if ( v15 < 0 )
        v3 = v15;
    }
    if ( v31 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v13 = WPP_GLOBAL_Control;
    }
    if ( v13 != &WPP_GLOBAL_Control && (*((_DWORD *)v13 + 7) & 0x20000) != 0 && *((_BYTE *)v13 + 25) >= 4u )
      WPP_SF_(v13[2], 48LL, &WPP_6080fe2713ce397b188bf80ec1d83326_Traceguids);
    v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 40LL))(*((_QWORD *)this + 15));
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 49LL, &WPP_6080fe2713ce397b188bf80ec1d83326_Traceguids);
    }
    if ( v16 < 0 )
      v3 = v16;
    CPipeInstance::ResetAPOs(*((CPipeInstance **)this + 16));
    if ( v2 )
    {
      v17 = *(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)v2 + 80LL);
      if ( v17 == GraphStreamingResourceManager::RemoveFromCpuManager )
        GraphStreamingResourceManager::RemoveFromCpuManager(v2);
      else
        v17(v2);
    }
  }
  else
  {
    v16 = v24;
    v3 = -2005139437;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  v18 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 50LL, &WPP_6080fe2713ce397b188bf80ec1d83326_Traceguids);
    v18 = WPP_GLOBAL_Control;
  }
  if ( v3 < 0 )
  {
    if ( v18 != &WPP_GLOBAL_Control && (*((_DWORD *)v18 + 7) & 0x20000) != 0 && *((_BYTE *)v18 + 25) >= 2u )
      WPP_SF_D(v18[2], 51LL, &WPP_6080fe2713ce397b188bf80ec1d83326_Traceguids, (unsigned int)v3);
    v24 = v16;
    v26 = 1069;
    InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
    if ( fPending )
    {
      Context = &qword_14008A158;
      qword_14008A158 = (__int64)&AudioDgTelemetryProvider::`vftable';
      qword_14008A170 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
      qword_14008A160 = (__int64)qword_14008A170;
      byte_14008A168 = 1;
      TraceLoggingRegisterEx(qword_14008A170, v22, v23);
      dword_14008A16C = 1;
      (*(void (__fastcall **)(__int64 *))(qword_14008A158 + 8))(&qword_14008A158);
      InitOnceComplete(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_14008A158);
    }
    v19 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v19 > 2u )
    {
      v42 = 24LL;
      v41 = "CAudioDeviceGraph::Stop";
      v43 = &v26;
      v45 = &v24;
      v44 = 4LL;
      v46 = 4LL;
      v32[1] = 2;
      v35 = *(unsigned __int16 **)(v19 + 8);
      v32[0] = ((unsigned int)&unk_140072585 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v20 = *(_QWORD *)(v19 + 32);
      v33 = 0LL;
      v36 = *v35;
      v38 = &unk_140072590;
      v37 = 2;
      v39 = 35;
      v40 = 1;
      EtwEventWriteTransfer(v20, v32, 0LL, 0LL, 5, &v35);
      v2 = v27;
    }
  }
  if ( v2 )
    (*(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)v2 + 16LL))(v2);
  return (unsigned int)v3;
}
