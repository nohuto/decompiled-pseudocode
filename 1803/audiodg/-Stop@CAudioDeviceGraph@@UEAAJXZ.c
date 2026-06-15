/*
 * XREFs of ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x14000E090
 * Callers:
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x14000F8F0 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 *     ?OnLeftSubmixDisconnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x1400120F0 (-OnLeftSubmixDisconnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140001970 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140002DA0 (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140003CF0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?UnregisterDevice@GraphStreamingResourceManager@@UEAAXPEAUDeviceRegistrationToken__@@@Z @ 0x140004030 (-UnregisterDevice@GraphStreamingResourceManager@@UEAAXPEAUDeviceRegistrationToken__@@@Z.c)
 *     ?RemoveFromCpuManager@GraphStreamingResourceManager@@UEAAXXZ @ 0x140004710 (-RemoveFromCpuManager@GraphStreamingResourceManager@@UEAAXXZ.c)
 *     ?ResetAPOs@CPipeInstance@@QEBAXXZ @ 0x140007F30 (-ResetAPOs@CPipeInstance@@QEBAXXZ.c)
 *     ?Stop@CPipeInstance@@QEAAJXZ @ 0x140008800 (-Stop@CPipeInstance@@QEAAJXZ.c)
 *     ?Stop@DurationTracker@CAudioDeviceGraph@@QEAA?AUDurationInformation@2@XZ @ 0x14001AA30 (-Stop@DurationTracker@CAudioDeviceGraph@@QEAA-AUDurationInformation@2@XZ.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_ @ 0x140034B74 (WPP_SF_.c)
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14003A72C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::Stop(CAudioDeviceGraph *this)
{
  unsigned __int64 v2; // rcx
  double v3; // xmm0_8
  double v4; // xmm0_8
  double v5; // xmm1_8
  __int64 v6; // rcx
  __int64 v7; // rcx
  GraphStreamingResourceManager *v8; // rbx
  GraphStreamingResourceManager *v9; // r15
  struct DeviceRegistrationToken__ *v10; // rdx
  void (__fastcall *v11)(GraphStreamingResourceManager *, struct DeviceRegistrationToken__ *); // rax
  int v12; // r12d
  _QWORD *v13; // rsi
  _QWORD *v14; // rcx
  CPipeInstance *v15; // r15
  int v16; // eax
  int v17; // r15d
  int v18; // r15d
  unsigned int v19; // esi
  void (__fastcall *v20)(GraphStreamingResourceManager *); // rax
  __int64 v21; // rcx
  __int64 v22; // r10
  __int64 v23; // rcx
  int v25; // [rsp+20h] [rbp-99h]
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-89h] BYREF
  GraphStreamingResourceManager *v27; // [rsp+38h] [rbp-81h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-79h] BYREF
  char v29; // [rsp+48h] [rbp-71h]
  _DWORD v30[2]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v31; // [rsp+58h] [rbp-61h]
  _QWORD v32[2]; // [rsp+60h] [rbp-59h] BYREF
  _BYTE v33[8]; // [rsp+70h] [rbp-49h] BYREF
  char v34; // [rsp+78h] [rbp-41h] BYREF
  char v35; // [rsp+80h] [rbp-39h] BYREF
  unsigned __int16 *v36; // [rsp+90h] [rbp-29h] BYREF
  int v37; // [rsp+98h] [rbp-21h]
  int v38; // [rsp+9Ch] [rbp-1Dh]
  void *v39; // [rsp+A0h] [rbp-19h]
  int v40; // [rsp+A8h] [rbp-11h]
  int v41; // [rsp+ACh] [rbp-Dh]
  _BYTE *v42; // [rsp+B0h] [rbp-9h]
  __int64 v43; // [rsp+B8h] [rbp-1h]
  char *v44; // [rsp+C0h] [rbp+7h]
  __int64 v45; // [rsp+C8h] [rbp+Fh]
  char *v46; // [rsp+D0h] [rbp+17h]
  __int64 v47; // [rsp+D8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 32LL, &WPP_3dcabf6e46fe37d8e2cf6f9c2f959793_Traceguids);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  if ( *((_DWORD *)this + 64) )
  {
    if ( *((_QWORD *)this + 39) )
    {
      PerformanceCount.QuadPart = 0LL;
      QueryPerformanceCounter(&PerformanceCount);
      v2 = *((_QWORD *)this + 38);
      if ( v2 && PerformanceCount.QuadPart > v2 )
      {
        v3 = (double)(PerformanceCount.LowPart - (int)v2);
        if ( (__int64)(PerformanceCount.QuadPart - v2) < 0 )
          v3 = v3 + 1.844674407370955e19;
        v4 = v3 * 10000000.0;
        v5 = (double)(int)g_u64QPCFrequency;
        if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
          v5 = v5 + 1.844674407370955e19;
        _InterlockedExchangeAdd(&dword_140087F10, (int)(v4 / v5) / 0x2710u);
        v6 = *((_QWORD *)this + 39);
        v32[0] = &g_EndpointStatistics;
        v32[1] = (char *)this + 384;
        (*(void (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v6 + 24LL))(v6, 2LL, v32);
        _InterlockedIncrement((_DWORD *)&g_EndpointStatistics + 1);
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            33LL,
            &WPP_3dcabf6e46fe37d8e2cf6f9c2f959793_Traceguids,
            g_EndpointStatistics);
        }
      }
      v7 = *((_QWORD *)this + 39);
      if ( v7 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        *((_QWORD *)this + 39) = 0LL;
      }
    }
    v8 = 0LL;
    v27 = 0LL;
    if ( *((_QWORD *)this + 50)
      || (v9 = 0LL, (int)CreateStreamingResourceManager((struct IAudioStreamingResourceRegistration **)this + 50) >= 0) )
    {
      v8 = (GraphStreamingResourceManager *)*((_QWORD *)this + 50);
      v27 = v8;
      v9 = v8;
      if ( v8 )
        (*(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)v8 + 8LL))(v8);
    }
    v10 = (struct DeviceRegistrationToken__ *)*((_QWORD *)this + 51);
    if ( v10 && v9 )
    {
      v11 = *(void (__fastcall **)(GraphStreamingResourceManager *, struct DeviceRegistrationToken__ *))(*(_QWORD *)v8 + 64LL);
      if ( v11 == GraphStreamingResourceManager::UnregisterDevice )
        GraphStreamingResourceManager::UnregisterDevice(v8, v10);
      else
        ((void (__fastcall *)(GraphStreamingResourceManager *))v11)(v8);
      *((_QWORD *)this + 51) = 0LL;
    }
    v12 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
    v29 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v13 = (_QWORD *)*((_QWORD *)this + 21);
    v14 = WPP_GLOBAL_Control;
    while ( v13 )
    {
      v15 = (CPipeInstance *)v13[2];
      v13 = (_QWORD *)*v13;
      if ( v14 != &WPP_GLOBAL_Control && (*((_DWORD *)v14 + 7) & 0x20000) != 0 && *((_BYTE *)v14 + 25) >= 4u )
        WPP_SF_(v14[2], 34LL, &WPP_3dcabf6e46fe37d8e2cf6f9c2f959793_Traceguids);
      v16 = CPipeInstance::Stop(v15);
      v17 = v16;
      if ( v16 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3DB,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
          (const char *)(unsigned int)v16,
          v25);
      v14 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 35LL, &WPP_3dcabf6e46fe37d8e2cf6f9c2f959793_Traceguids);
        v14 = WPP_GLOBAL_Control;
      }
      if ( v17 < 0 )
        v12 = v17;
    }
    if ( v29 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v14 = WPP_GLOBAL_Control;
    }
    if ( v14 != &WPP_GLOBAL_Control && (*((_DWORD *)v14 + 7) & 0x20000) != 0 && *((_BYTE *)v14 + 25) >= 4u )
      WPP_SF_(v14[2], 36LL, &WPP_3dcabf6e46fe37d8e2cf6f9c2f959793_Traceguids);
    v18 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 40LL))(*((_QWORD *)this + 19));
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_3dcabf6e46fe37d8e2cf6f9c2f959793_Traceguids);
    }
    v19 = -2005139433;
    if ( v18 < 0 )
    {
      v12 = v18;
      if ( v18 != -2005139433 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3EE,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
          (const char *)(unsigned int)v18,
          v25);
    }
    CPipeInstance::ResetAPOs(*((CPipeInstance **)this + 20));
    if ( v8 )
    {
      v20 = *(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)v8 + 80LL);
      if ( v20 == GraphStreamingResourceManager::RemoveFromCpuManager )
        GraphStreamingResourceManager::RemoveFromCpuManager(v8);
      else
        v20(v8);
    }
    if ( v12 != -2005139433 )
    {
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3FA,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
          (const char *)(unsigned int)v12,
          v25);
        v19 = v12;
      }
      else
      {
        CAudioDeviceGraph::DurationTracker::Stop((char *)this + 80, v33);
        v22 = wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                v21,
                lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)[1];
        if ( *(_DWORD *)v22 > 4u
          && (*(_QWORD *)(v22 + 16) & 0x400000000001LL) != 0
          && (*(_QWORD *)(v22 + 24) & 0x400000000001LL) == *(_QWORD *)(v22 + 24) )
        {
          v43 = 4LL;
          v42 = v33;
          v44 = &v34;
          v46 = &v35;
          v45 = 8LL;
          v47 = 8LL;
          v30[1] = 4;
          v36 = *(unsigned __int16 **)(v22 + 8);
          v30[0] = ((unsigned int)&unk_14006FFA3 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
          v23 = *(_QWORD *)(v22 + 32);
          v31 = 0x400000000001LL;
          v37 = *v36;
          v39 = &unk_14006FFAE;
          v38 = 2;
          v40 = 73;
          v41 = 1;
          EtwEventWriteTransfer(v23, v30, (char *)this + 368, 0LL, 5, &v36);
          v8 = v27;
        }
        v19 = 0;
      }
    }
    if ( v8 )
      (*(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    v19 = -2005139437;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3AD,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)0x887C0013LL,
      v25);
  }
  if ( this != (CAudioDeviceGraph *)-264LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  return v19;
}
