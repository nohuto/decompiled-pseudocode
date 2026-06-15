/*
 * XREFs of ??1CAudioStream@@MEAA@XZ @ 0x180019880
 * Callers:
 *     ??_GCPerStreamVolumeAudioStream@@EEAAPEAXI@Z @ 0x180016894 (--_GCPerStreamVolumeAudioStream@@EEAAPEAXI@Z.c)
 *     ??_GCAudioStream@@MEAAPEAXI@Z @ 0x180095914 (--_GCAudioStream@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x180025818 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?Fire@AudioSrvVolumeTelemetryStreamVolume@@EEAAX_KI@Z @ 0x18002CC40 (-Fire@AudioSrvVolumeTelemetryStreamVolume@@EEAAX_KI@Z.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVAudioEffectsWatcher@@V?$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180082AE8 (-FreeNode@-$CAtlList@PEAVAudioEffectsWatcher@@V-$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x1800B2928 (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 */

// Hidden C++ exception states: #wind=19
void __fastcall CAudioStream::~CAudioStream(CAudioStream *this)
{
  char *v2; // rcx
  char *v3; // rcx
  __int64 v4; // rcx
  _QWORD **v5; // rbx
  ATL::CAtlPlex *v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // r8
  void (__fastcall *v9)(AudioSrvVolumeTelemetryStreamVolume *__hidden, unsigned __int64, unsigned int); // rax
  unsigned __int64 v10; // rdx
  AudioSrvVolumeTelemetryStreamVolume *v11; // rcx
  unsigned __int64 v12; // rax
  char *v13; // rsi
  unsigned __int64 v14; // rax
  HANDLE ProcessHeap; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  void *v23; // rbx
  HANDLE v24; // rax
  void *v25; // rbx
  HANDLE v26; // rax
  char *v27; // rcx
  __int64 v28; // rcx
  char *v29; // rax
  unsigned __int64 v30; // rsi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v32; // [rsp+30h] [rbp-28h]
  char *v33; // [rsp+68h] [rbp+10h] BYREF

  *(_QWORD *)this = &CAudioStream::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 1) = &CAudioStream::`vftable'{for `IAudioStreamInfo'};
  *((_QWORD *)this + 2) = &CAudioStream::`vftable'{for `CUnknown'};
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_c45047042f6d344739c91af1a021533b_Traceguids, this);
  }
  v2 = (char *)*((_QWORD *)this + 64);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 64) = 0LL;
  }
  v3 = (char *)*((_QWORD *)this + 65);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v3);
    *((_QWORD *)this + 65) = 0LL;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 408);
  v32 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v5 = (_QWORD **)((char *)this + 448);
  v33 = (char *)*((_QWORD *)this + 56);
  while ( v33 )
  {
    v4 = *(_QWORD *)ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
                      v4,
                      &v33);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( v32 )
    LeaveCriticalSection(lpCriticalSection);
  while ( *((_QWORD *)this + 58) )
  {
    if ( !*v5 )
      ATL::AtlThrowImpl(-2147467259);
    *v5 = (_QWORD *)**v5;
    ATL::CAtlList<AudioEffectsWatcher *,ATL::CElementTraits<AudioEffectsWatcher *>>::FreeNode((char *)this + 448);
  }
  *v5 = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  v6 = (ATL::CAtlPlex *)*((_QWORD *)this + 59);
  if ( v6 )
  {
    ATL::CAtlPlex::FreeDataChain(v6);
    *((_QWORD *)this + 59) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 408));
  v33 = (char *)this + 216;
  *((_QWORD *)this + 27) = &AudioSrvVolumeTelemetryStreamVolume::`vftable';
  if ( *((_QWORD *)this + 28) )
  {
    v7 = *((_QWORD *)this + 28);
    if ( GetTickCount64() - v7 > 0x3E8 )
    {
      v8 = *((unsigned int *)this + 60);
      v9 = (void (__fastcall *)(AudioSrvVolumeTelemetryStreamVolume *__hidden, unsigned __int64, unsigned int))**((_QWORD **)this + 27);
      v10 = v7 - *((_QWORD *)this + 29);
      v11 = (CAudioStream *)((char *)this + 216);
      if ( v9 == AudioSrvVolumeTelemetryStreamVolume::Fire )
        AudioSrvVolumeTelemetryStreamVolume::Fire(v11, v10, v8);
      else
        v9(v11, v10, v8);
    }
  }
  v12 = *((_QWORD *)this + 48);
  if ( v12 >= 8 )
  {
    v13 = (char *)*((_QWORD *)this + 45);
    v14 = v12 + 1;
    if ( v14 > 0x7FFFFFFFFFFFFFFFLL )
    {
      _o__invalid_parameter_noinfo_noreturn(0x7FFFFFFFFFFFFFFFLL);
      JUMPOUT(0x18006B321LL);
    }
    if ( 2 * v14 >= 0x1000 )
    {
      if ( ((unsigned __int8)v13 & 0x1F) != 0 )
      {
        _o__invalid_parameter_noinfo_noreturn(0x7FFFFFFFFFFFFFFFLL);
        JUMPOUT(0x18006B32ELL);
      }
      v29 = (char *)*((_QWORD *)v13 - 1);
      if ( v29 >= v13 )
      {
        _o__invalid_parameter_noinfo_noreturn(0x7FFFFFFFFFFFFFFFLL);
        JUMPOUT(0x18006B33ELL);
      }
      v30 = v13 - v29;
      if ( v30 < 8 )
      {
        _o__invalid_parameter_noinfo_noreturn(0x7FFFFFFFFFFFFFFFLL);
        JUMPOUT(0x18006B34ELL);
      }
      if ( v30 > 0x27 )
      {
        _o__invalid_parameter_noinfo_noreturn(0x7FFFFFFFFFFFFFFFLL);
        JUMPOUT(0x18006B35BLL);
      }
      v13 = v29;
    }
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v13);
  }
  v16 = *((_QWORD *)this + 43);
  if ( v16 >= 8 )
    std::_Deallocate(*((void **)this + 40), v16 + 1, 2uLL);
  v17 = *((_QWORD *)this + 39);
  if ( v17 >= 0x10 )
    std::_Deallocate(*((void **)this + 36), v17 + 1, 1uLL);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  v18 = *((_QWORD *)this + 26);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  v19 = *((_QWORD *)this + 25);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  v20 = *((_QWORD *)this + 24);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  v21 = *((_QWORD *)this + 23);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  v22 = *((_QWORD *)this + 22);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  v23 = (void *)*((_QWORD *)this + 15);
  if ( v23 )
  {
    v24 = GetProcessHeap();
    HeapFree(v24, 0, v23);
  }
  v25 = (void *)*((_QWORD *)this + 14);
  if ( v25 )
  {
    v26 = GetProcessHeap();
    HeapFree(v26, 0, v25);
  }
  v27 = (char *)*((_QWORD *)this + 9);
  if ( (unsigned __int64)(v27 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v27);
  v28 = *((_QWORD *)this + 7);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  *((_QWORD *)this + 2) = &CUnknown::`vftable';
}
