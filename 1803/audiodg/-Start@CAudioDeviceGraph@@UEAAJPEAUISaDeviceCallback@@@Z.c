/*
 * XREFs of ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x14000E540
 * Callers:
 *     ?OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140012400 (-OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140001970 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140002DA0 (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140002F38 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140003CF0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x1400040C0 (-RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegis.c)
 *     ?AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z @ 0x140004760 (-AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z.c)
 *     ?GetTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140007F14 (-GetTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?Start@CPipeInstance@@QEAAJXZ @ 0x1400088C0 (-Start@CPipeInstance@@QEAAJXZ.c)
 *     ?GetProcessingQuantum@CAudioDeviceGraph@@UEAA_JXZ @ 0x14000FBC0 (-GetProcessingQuantum@CAudioDeviceGraph@@UEAA_JXZ.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _TlgWrite @ 0x140034DB0 (_TlgWrite.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14003A72C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::Start(CAudioDeviceGraph *this, struct ISaDeviceCallback *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r15
  struct CpuManager **v5; // rbx
  char v6; // r14
  CAudioDeviceGraph *v7; // rcx
  __int64 (__fastcall *v8)(CAudioDeviceGraph *__hidden); // rax
  __int64 ProcessingQuantum; // rax
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(struct CpuManager **, __int64); // rax
  _QWORD *v12; // rax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  unsigned int v16; // esi
  struct DeviceRegistrationToken__ **v17; // r8
  __int64 (__fastcall *v18)(GraphStreamingResourceManager *, struct IAudioDeviceEndpoint *, struct DeviceRegistrationToken__ **); // rax
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // esi
  __int64 v23; // rcx
  CPipeInstance **Next; // rax
  int v25; // eax
  __int64 v26; // rcx
  const GUID *v27; // r9
  bool v28; // zf
  int StreamingResourceManager; // eax
  int cData; // [rsp+28h] [rbp-29h]
  int cDataa; // [rsp+28h] [rbp-29h]
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp-19h] BYREF
  __int64 v34; // [rsp+40h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR lpCriticalSection[2]; // [rsp+48h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  if ( *((_DWORD *)this + 64) )
  {
    v5 = 0LL;
    v6 = 1;
    if ( *((_QWORD *)this + 50)
      || (StreamingResourceManager = CreateStreamingResourceManager((struct IAudioStreamingResourceRegistration **)this + 50),
          StreamingResourceManager >= 0) )
    {
      v5 = (struct CpuManager **)*((_QWORD *)this + 50);
      if ( v5 )
      {
        (*((void (__fastcall **)(_QWORD))*v5 + 1))(*((_QWORD *)this + 50));
        v7 = (CAudioDeviceGraph *)((char *)this + 16);
        v8 = *(__int64 (__fastcall **)(CAudioDeviceGraph *__hidden))(*((_QWORD *)this + 2) + 56LL);
        if ( v8 == CAudioDeviceGraph::GetProcessingQuantum )
          ProcessingQuantum = CAudioDeviceGraph::GetProcessingQuantum(v7);
        else
          ProcessingQuantum = v8(v7);
        v10 = ProcessingQuantum;
        v11 = (__int64 (__fastcall *)(struct CpuManager **, __int64))*((_QWORD *)*v5 + 9);
        if ( v11 == GraphStreamingResourceManager::AddToCpuManager )
          GraphStreamingResourceManager::AddToCpuManager(v5, v10);
        else
          v11(v5, v10);
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x33D,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)StreamingResourceManager,
        cData);
    }
    v12 = *(_QWORD **)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetTail(*((_QWORD *)this + 20) + 16LL)
                     + 32LL);
    lpCriticalSection[0].Ptr = 0LL;
    v13 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, EVENT_DATA_DESCRIPTOR *))*v12)(
            *v12,
            &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
            lpCriticalSection);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x353,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)v13,
        cData);
    if ( lpCriticalSection[0].Ptr )
    {
      v14 = (**(__int64 (__fastcall ***)(ULONGLONG, GUID *, char *))lpCriticalSection[0].Ptr)(
              lpCriticalSection[0].Ptr,
              &GUID_8470a266_1068_4032_a9c7_69a3081e7b62,
              (char *)this + 312);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x357,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
          (const char *)(unsigned int)v14,
          cData);
      if ( *((_QWORD *)this + 39) )
      {
        PerformanceCount.QuadPart = 0LL;
        QueryPerformanceCounter(&PerformanceCount);
        *((LARGE_INTEGER *)this + 38) = PerformanceCount;
      }
      else
      {
        *((_QWORD *)this + 38) = 0LL;
      }
      if ( v5 )
      {
        PerformanceCount.QuadPart = 0LL;
        v15 = (**(__int64 (__fastcall ***)(ULONGLONG, GUID *, LARGE_INTEGER *))lpCriticalSection[0].Ptr)(
                lpCriticalSection[0].Ptr,
                &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
                &PerformanceCount);
        v16 = v15;
        if ( v15 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x49B,
            (unsigned int)"internal\\sdk\\inc\\wil\\com.h",
            (const char *)(unsigned int)v15,
            cData);
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x368,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
            (const char *)v16,
            cDataa);
        }
        if ( PerformanceCount.QuadPart )
        {
          v17 = (struct DeviceRegistrationToken__ **)((char *)this + 408);
          v18 = (__int64 (__fastcall *)(GraphStreamingResourceManager *, struct IAudioDeviceEndpoint *, struct DeviceRegistrationToken__ **))*((_QWORD *)*v5 + 7);
          if ( v18 == GraphStreamingResourceManager::RegisterDevice )
            v19 = GraphStreamingResourceManager::RegisterDevice(
                    (GraphStreamingResourceManager *)v5,
                    (struct IAudioDeviceEndpoint *)PerformanceCount.QuadPart,
                    v17);
          else
            v19 = v18(
                    (GraphStreamingResourceManager *)v5,
                    (struct IAudioDeviceEndpoint *)PerformanceCount.QuadPart,
                    v17);
          if ( v19 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x36C,
              (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
              (const char *)(unsigned int)v19,
              cData);
          if ( PerformanceCount.QuadPart )
            (*(void (__fastcall **)(LARGE_INTEGER))(*(_QWORD *)PerformanceCount.QuadPart + 16LL))(PerformanceCount);
        }
      }
      if ( lpCriticalSection[0].Ptr )
        (*(void (__fastcall **)(ULONGLONG))(*(_QWORD *)lpCriticalSection[0].Ptr + 16LL))(lpCriticalSection[0].Ptr);
    }
    v20 = *((_QWORD *)this + 19);
    v34 = 0LL;
    v21 = (*(__int64 (__fastcall **)(__int64, __int64 *, struct ISaDeviceCallback *, struct CpuManager **))(*(_QWORD *)v20 + 32LL))(
            v20,
            &v34,
            a2,
            v5);
    v22 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x374,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)v21,
        cData);
    }
    else
    {
      LOBYTE(lpCriticalSection[0].Size) = 0;
      lpCriticalSection[0].Ptr = (ULONGLONG)this + 216;
      ATL::CCritSecLock::Lock((LPCRITICAL_SECTION *)lpCriticalSection);
      PerformanceCount = *(LARGE_INTEGER *)((char *)this + 168);
      if ( PerformanceCount.QuadPart )
      {
        while ( 1 )
        {
          Next = (CPipeInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(
                                     v23,
                                     &PerformanceCount);
          v25 = CPipeInstance::Start(*Next);
          v22 = v25;
          if ( v25 < 0 )
            break;
          if ( !PerformanceCount.QuadPart )
            goto LABEL_31;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x37C,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
          (const char *)(unsigned int)v25,
          cData);
        if ( LOBYTE(lpCriticalSection[0].Size) )
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection[0].Ptr);
      }
      else
      {
LABEL_31:
        if ( LOBYTE(lpCriticalSection[0].Size) )
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection[0].Ptr);
        v6 = 0;
        if ( !*((_BYTE *)this + 80) )
        {
          QueryPerformanceCounter((LARGE_INTEGER *)this + 12);
          *((_BYTE *)this + 80) = 1;
        }
        v26 = wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                v23,
                lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)[1];
        if ( *(_DWORD *)v26 > 4u
          && (*(_BYTE *)(v26 + 16) & 1) != 0
          && (*(_QWORD *)(v26 + 24) & 1LL) == *(_QWORD *)(v26 + 24) )
        {
          TlgWrite((TraceLoggingHProvider)v26, &unk_14006FE20, (LPCGUID)this + 23, v27, 2u, lpCriticalSection);
        }
        v22 = 0;
      }
    }
    if ( v5 )
      (*((void (__fastcall **)(struct CpuManager **))*v5 + 2))(v5);
    v28 = v6 == 0;
    if ( v6 )
    {
      (*(void (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)this + 120LL))(this);
      v28 = v6 == 0;
    }
    if ( !v28 )
      *((_QWORD *)this + 38) = 0LL;
  }
  else
  {
    v22 = -2005139437;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x336,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)0x887C0013LL,
      cData);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v22;
}
