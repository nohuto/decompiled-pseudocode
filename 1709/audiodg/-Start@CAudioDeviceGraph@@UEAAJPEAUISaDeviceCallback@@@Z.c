/*
 * XREFs of ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x14000C710
 * Callers:
 *     ?OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x14000F410 (-OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 * Callees:
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140002278 (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     ?RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x140002B20 (-RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegis.c)
 *     ?AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z @ 0x1400031B0 (-AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z.c)
 *     ?GetTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x1400059FC (-GetTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?Start@CPipeInstance@@QEAAJXZ @ 0x140006480 (-Start@CPipeInstance@@QEAAJXZ.c)
 *     ?GetProcessingQuantum@CAudioDeviceGraph@@UEAA_JXZ @ 0x14000D780 (-GetProcessingQuantum@CAudioDeviceGraph@@UEAA_JXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044BC0 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::Start(CAudioDeviceGraph *this, struct ISaDeviceCallback *a2)
{
  struct CpuManager **v3; // rbx
  CAudioDeviceGraph *v5; // rcx
  __int64 (__fastcall *v6)(CAudioDeviceGraph *__hidden); // rax
  __int64 ProcessingQuantum; // rax
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(struct CpuManager **, __int64); // rax
  __int64 v10; // rcx
  __int64 Tail; // rax
  int v12; // eax
  int v13; // esi
  int v14; // eax
  LARGE_INTEGER v15; // rcx
  struct DeviceRegistrationToken__ **v16; // r8
  __int64 (__fastcall *v17)(GraphStreamingResourceManager *, struct IAudioDeviceEndpoint *, struct DeviceRegistrationToken__ **); // rax
  int v18; // ebp
  _QWORD *v19; // rsi
  CPipeInstance *v20; // rcx
  LARGE_INTEGER v22; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-48h] BYREF
  char v24; // [rsp+38h] [rbp-40h]
  LARGE_INTEGER PerformanceCount; // [rsp+80h] [rbp+8h] BYREF
  __int64 v26; // [rsp+90h] [rbp+18h] BYREF
  __int64 v27; // [rsp+98h] [rbp+20h] BYREF

  v27 = 0LL;
  v3 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( !*((_DWORD *)this + 56) )
  {
    v18 = -2005139437;
    goto LABEL_34;
  }
  if ( *((_QWORD *)this + 46)
    || (int)CreateStreamingResourceManager((struct IAudioStreamingResourceRegistration **)this + 46) >= 0 )
  {
    v3 = (struct CpuManager **)*((_QWORD *)this + 46);
    if ( v3 )
    {
      (*((void (__fastcall **)(_QWORD))*v3 + 1))(*((_QWORD *)this + 46));
      v5 = (CAudioDeviceGraph *)((char *)this + 16);
      v6 = *(__int64 (__fastcall **)(CAudioDeviceGraph *__hidden))(*((_QWORD *)this + 2) + 56LL);
      if ( v6 == CAudioDeviceGraph::GetProcessingQuantum )
        ProcessingQuantum = CAudioDeviceGraph::GetProcessingQuantum(v5);
      else
        ProcessingQuantum = v6(v5);
      v8 = ProcessingQuantum;
      v9 = (__int64 (__fastcall *)(struct CpuManager **, __int64))*((_QWORD *)*v3 + 9);
      if ( v9 == GraphStreamingResourceManager::AddToCpuManager )
        GraphStreamingResourceManager::AddToCpuManager(v3, v8);
      else
        v9(v3, v8);
    }
  }
  v10 = *((_QWORD *)this + 16) + 16LL;
  v26 = 0LL;
  Tail = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetTail(v10);
  v12 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)Tail + 32LL))(
          **(_QWORD **)(*(_QWORD *)Tail + 32LL),
          &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
          &v26);
  v13 = v12;
  if ( v12 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        41LL,
        &WPP_6080fe2713ce397b188bf80ec1d83326_Traceguids,
        (unsigned int)v12);
    }
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::Start", 0x37Fu, v13);
  }
  else
  {
    v14 = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v26)(
            v26,
            &GUID_8470a266_1068_4032_a9c7_69a3081e7b62,
            (char *)this + 280);
    if ( v14 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          42LL,
          &WPP_6080fe2713ce397b188bf80ec1d83326_Traceguids,
          (unsigned int)v14);
      }
      *((_QWORD *)this + 34) = 0LL;
    }
    else
    {
      PerformanceCount.QuadPart = 0LL;
      QueryPerformanceCounter(&PerformanceCount);
      *((LARGE_INTEGER *)this + 34) = PerformanceCount;
    }
    if ( v3 )
    {
      v15.QuadPart = 0LL;
      PerformanceCount.QuadPart = 0LL;
      if ( v26 )
      {
        (**(void (__fastcall ***)(__int64, GUID *, LARGE_INTEGER *))v26)(
          v26,
          &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
          &PerformanceCount);
        if ( !PerformanceCount.QuadPart )
          goto LABEL_19;
        v16 = (struct DeviceRegistrationToken__ **)((char *)this + 376);
        v17 = (__int64 (__fastcall *)(GraphStreamingResourceManager *, struct IAudioDeviceEndpoint *, struct DeviceRegistrationToken__ **))*((_QWORD *)*v3 + 7);
        if ( v17 == GraphStreamingResourceManager::RegisterDevice )
          GraphStreamingResourceManager::RegisterDevice(
            (GraphStreamingResourceManager *)v3,
            (struct IAudioDeviceEndpoint *)PerformanceCount.QuadPart,
            v16);
        else
          v17((GraphStreamingResourceManager *)v3, (struct IAudioDeviceEndpoint *)PerformanceCount.QuadPart, v16);
        v15 = PerformanceCount;
      }
      if ( v15.QuadPart )
        (*(void (__fastcall **)(LARGE_INTEGER))(*(_QWORD *)v15.QuadPart + 16LL))(v15);
    }
  }
LABEL_19:
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  v18 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, struct ISaDeviceCallback *, struct CpuManager **))(**((_QWORD **)this + 15) + 32LL))(
          *((_QWORD *)this + 15),
          &v27,
          a2,
          v3);
  if ( v18 >= 0 )
  {
    v24 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    v19 = (_QWORD *)*((_QWORD *)this + 17);
    if ( v19 )
    {
      while ( 1 )
      {
        v20 = (CPipeInstance *)v19[2];
        v19 = (_QWORD *)*v19;
        v18 = CPipeInstance::Start(v20);
        if ( v18 < 0 )
          break;
        if ( !v19 )
          goto LABEL_25;
      }
      if ( !v24 )
      {
LABEL_27:
        if ( v18 >= 0 )
          goto LABEL_28;
        goto LABEL_34;
      }
    }
    else
    {
LABEL_25:
      if ( !v24 )
        goto LABEL_27;
    }
    LeaveCriticalSection(lpCriticalSection);
    goto LABEL_27;
  }
LABEL_34:
  v22 = *(LARGE_INTEGER *)this;
  *((_QWORD *)this + 34) = 0LL;
  (*(void (__fastcall **)(CAudioDeviceGraph *))(v22.QuadPart + 120))(this);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      43LL,
      &WPP_6080fe2713ce397b188bf80ec1d83326_Traceguids,
      (unsigned int)v18);
  }
  AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::Start", 0x3B6u, v18);
LABEL_28:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( v3 )
    (*((void (__fastcall **)(struct CpuManager **))*v3 + 2))(v3);
  return (unsigned int)v18;
}
