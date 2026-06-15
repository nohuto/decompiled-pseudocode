/*
 * XREFs of ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x14000F8B0
 * Callers:
 *     ?OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140005240 (-OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 * Callees:
 *     ?RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x140004190 (-RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegis.c)
 *     ?AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z @ 0x140004810 (-AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Start@CPipeInstance@@QEAAJXZ @ 0x140009770 (-Start@CPipeInstance@@QEAAJXZ.c)
 *     ?GetTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140015368 (-GetTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     ?GetProcessingQuantum@CAudioDeviceGraph@@UEAA_JXZ @ 0x14001BBA0 (-GetProcessingQuantum@CAudioDeviceGraph@@UEAA_JXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140036A78 (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
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
  struct DeviceRegistrationToken__ **v15; // r8
  __int64 (__fastcall *v16)(GraphStreamingResourceManager *, struct IAudioDeviceEndpoint *, struct DeviceRegistrationToken__ **); // rax
  int v17; // ebp
  _QWORD *v18; // rsi
  CPipeInstance *v19; // rcx
  LARGE_INTEGER v21; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-48h] BYREF
  char v23; // [rsp+38h] [rbp-40h]
  __int64 v24; // [rsp+80h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+90h] [rbp+18h] BYREF
  __int64 v26; // [rsp+98h] [rbp+20h] BYREF

  v26 = 0LL;
  v3 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( !*((_DWORD *)this + 56) )
  {
    v17 = -2005139437;
    goto LABEL_33;
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
  v24 = 0LL;
  Tail = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetTail(v10);
  v12 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)Tail + 32LL))(
          **(_QWORD **)(*(_QWORD *)Tail + 32LL),
          &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
          &v24);
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
        &WPP_4aa9f3a5c249328694bb02b83da61cfa_Traceguids,
        (unsigned int)v12);
    }
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::Start", 0x37Cu, v13);
  }
  else
  {
    v14 = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v24)(
            v24,
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
          &WPP_4aa9f3a5c249328694bb02b83da61cfa_Traceguids,
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
      PerformanceCount.QuadPart = 0LL;
      if ( !v24 )
        goto LABEL_20;
      (**(void (__fastcall ***)(__int64, GUID *, LARGE_INTEGER *))v24)(
        v24,
        &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
        &PerformanceCount);
      if ( PerformanceCount.QuadPart )
      {
        v15 = (struct DeviceRegistrationToken__ **)((char *)this + 376);
        v16 = (__int64 (__fastcall *)(GraphStreamingResourceManager *, struct IAudioDeviceEndpoint *, struct DeviceRegistrationToken__ **))*((_QWORD *)*v3 + 7);
        if ( v16 == GraphStreamingResourceManager::RegisterDevice )
          GraphStreamingResourceManager::RegisterDevice(
            (GraphStreamingResourceManager *)v3,
            (struct IAudioDeviceEndpoint *)PerformanceCount.QuadPart,
            v15);
        else
          v16((GraphStreamingResourceManager *)v3, (struct IAudioDeviceEndpoint *)PerformanceCount.QuadPart, v15);
        if ( PerformanceCount.QuadPart )
          (*(void (__fastcall **)(LARGE_INTEGER))(*(_QWORD *)PerformanceCount.QuadPart + 16LL))(PerformanceCount);
      }
    }
  }
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
LABEL_20:
  v17 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, struct ISaDeviceCallback *, struct CpuManager **))(**((_QWORD **)this + 15) + 32LL))(
          *((_QWORD *)this + 15),
          &v26,
          a2,
          v3);
  if ( v17 >= 0 )
  {
    v23 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v18 = (_QWORD *)*((_QWORD *)this + 17);
    if ( v18 )
    {
      while ( 1 )
      {
        v19 = (CPipeInstance *)v18[2];
        v18 = (_QWORD *)*v18;
        v17 = CPipeInstance::Start(v19);
        if ( v17 < 0 )
          break;
        if ( !v18 )
          goto LABEL_24;
      }
      if ( !v23 )
      {
LABEL_26:
        if ( v17 >= 0 )
          goto LABEL_27;
        goto LABEL_33;
      }
    }
    else
    {
LABEL_24:
      if ( !v23 )
        goto LABEL_26;
    }
    LeaveCriticalSection(lpCriticalSection);
    goto LABEL_26;
  }
LABEL_33:
  v21 = *(LARGE_INTEGER *)this;
  *((_QWORD *)this + 34) = 0LL;
  (*(void (__fastcall **)(CAudioDeviceGraph *))(v21.QuadPart + 120))(this);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      43LL,
      &WPP_4aa9f3a5c249328694bb02b83da61cfa_Traceguids,
      (unsigned int)v17);
  }
  AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::Start", 0x3B3u, v17);
LABEL_27:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( v3 )
    (*((void (__fastcall **)(struct CpuManager **))*v3 + 2))(v3);
  return (unsigned int)v17;
}
