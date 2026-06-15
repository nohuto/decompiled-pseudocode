/*
 * XREFs of ??1CAudioStream@@MEAA@XZ @ 0x180044320
 * Callers:
 *     ??_GCPerStreamVolumeAudioStream@@EEAAPEAXI@Z @ 0x180044194 (--_GCPerStreamVolumeAudioStream@@EEAAPEAXI@Z.c)
 *     ??_GCAudioStream@@MEAAPEAXI@Z @ 0x1800B5484 (--_GCAudioStream@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x180042D04 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x180060310 (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009B6D0 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVAudioEffectsWatcher@@V?$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800A7514 (-FreeNode@-$CAtlList@PEAVAudioEffectsWatcher@@V-$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioStream::~CAudioStream(CAudioStream *this)
{
  char *v2; // rcx
  __int64 v3; // rcx
  _QWORD **v4; // rdi
  void *v5; // rcx
  const char *v6; // r9
  ATL::CAtlPlex **v7; // rcx
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  void *v10; // rsi
  unsigned __int64 v11; // rax
  HANDLE ProcessHeap; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  void *v22; // rdi
  HANDLE v23; // rax
  void *v24; // rdi
  HANDLE v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v30; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v32; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)this = &CAudioStream::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 1) = &CAudioStream::`vftable'{for `IAudioStreamInfo'};
  *((_QWORD *)this + 2) = &CPerStreamVolumeAudioStream::`vftable'{for `IAudioStreamPolicyVolumeClient'};
  *((_QWORD *)this + 3) = &CAudioStream::`vftable'{for `CUnknown'};
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_5e836fd19f4d307bbf2f3e70e4c30d13_Traceguids, this);
  }
  v2 = (char *)*((_QWORD *)this + 66);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 66) = 0LL;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 424);
  v30 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = (_QWORD **)((char *)this + 464);
  v32 = *((_QWORD *)this + 58);
  while ( v32 )
  {
    v3 = *(_QWORD *)ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
                      v3,
                      &v32);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( v30 )
    LeaveCriticalSection(lpCriticalSection);
  v5 = (void *)*((_QWORD *)this + 67);
  if ( v5 && !CloseHandle(v5) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x879,
      (unsigned int)"internal\\sdk\\inc\\wil\\Resource.h",
      v6);
  }
  else if ( !*((_QWORD *)this + 60) )
  {
    goto LABEL_11;
  }
  do
  {
    if ( !*v4 )
      ATL::AtlThrowImpl(-2147467259);
    *v4 = (_QWORD *)**v4;
    ATL::CAtlList<AudioEffectsWatcher *,ATL::CElementTraits<AudioEffectsWatcher *>>::FreeNode((char *)this + 464);
  }
  while ( *((_QWORD *)this + 60) );
LABEL_11:
  *v4 = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  v7 = (ATL::CAtlPlex **)*((_QWORD *)this + 61);
  if ( v7 )
  {
    ATL::CAtlPlex::FreeDataChain(v7);
    *((_QWORD *)this + 61) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 424));
  *((_QWORD *)this + 29) = &AudioSrvVolumeTelemetryStreamVolume::`vftable';
  if ( *((_QWORD *)this + 30) )
  {
    v8 = *((_QWORD *)this + 30);
    if ( GetTickCount64() - v8 > 0x3E8 )
      (**((void (__fastcall ***)(char *, __int64, _QWORD))this + 29))(
        (char *)this + 232,
        v8 - *((_QWORD *)this + 31),
        *((unsigned int *)this + 64));
  }
  v9 = *((_QWORD *)this + 50);
  if ( v9 < 8 )
  {
LABEL_20:
    *((_QWORD *)this + 49) = 0LL;
    *((_QWORD *)this + 50) = 7LL;
    *((_WORD *)this + 188) = 0;
    v13 = *((_QWORD *)this + 45);
    if ( v13 < 8 )
      goto LABEL_21;
    goto LABEL_62;
  }
  v10 = (void *)*((_QWORD *)this + 47);
  v11 = v9 + 1;
  if ( v11 <= 0x7FFFFFFFFFFFFFFFLL )
  {
    if ( 2 * v11 < 0x1000 )
    {
LABEL_19:
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v10);
      goto LABEL_20;
    }
    if ( ((unsigned __int8)v10 & 0x1F) == 0 )
    {
      v28 = *((_QWORD *)v10 - 1);
      if ( v28 < (unsigned __int64)v10 && (unsigned __int64)v10 - v28 - 8 <= 0x1F )
      {
        v10 = (void *)*((_QWORD *)v10 - 1);
        goto LABEL_19;
      }
    }
  }
  _o__invalid_parameter_noinfo_noreturn(0x7FFFFFFFFFFFFFFFLL);
LABEL_62:
  std::_Deallocate(*((_QWORD **)this + 42), v13 + 1, 2uLL);
LABEL_21:
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 7LL;
  *((_WORD *)this + 168) = 0;
  v14 = *((_QWORD *)this + 41);
  if ( v14 >= 0x10 )
    std::_Deallocate(*((_QWORD **)this + 38), v14 + 1, 1uLL);
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 15LL;
  *((_BYTE *)this + 304) = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v15 = *((_QWORD *)this + 28);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v16 = *((_QWORD *)this + 27);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  v17 = *((_QWORD *)this + 26);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  v18 = *((_QWORD *)this + 25);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  v19 = *((_QWORD *)this + 24);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  v20 = *((_QWORD *)this + 23);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  v21 = *((_QWORD *)this + 22);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  v22 = (void *)*((_QWORD *)this + 15);
  if ( v22 )
  {
    v23 = GetProcessHeap();
    HeapFree(v23, 0, v22);
  }
  v24 = (void *)*((_QWORD *)this + 14);
  if ( v24 )
  {
    v25 = GetProcessHeap();
    HeapFree(v25, 0, v24);
  }
  v26 = *((_QWORD *)this + 10);
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  v27 = *((_QWORD *)this + 8);
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  *((_QWORD *)this + 3) = &CUnknown::`vftable';
}
