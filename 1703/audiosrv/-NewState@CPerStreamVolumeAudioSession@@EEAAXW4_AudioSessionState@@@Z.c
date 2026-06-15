/*
 * XREFs of ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x18001D5D0
 * Callers:
 *     ?StateCheckExpired@CAudioSession@@AEAAXXZ @ 0x180014734 (-StateCheckExpired@CAudioSession@@AEAAXXZ.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180014D50 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180014FA0 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180013D40 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?CancelInactiveTimer@CAudioSession@@AEAAXXZ @ 0x180014400 (-CancelInactiveTimer@CAudioSession@@AEAAXXZ.c)
 *     ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18001D484 (-StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x1800207F0 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z @ 0x180024230 (-SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z.c)
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180030D5C (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180031018 (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Sdd @ 0x1800907E8 (WPP_SF_Sdd.c)
 */

void __fastcall CPerStreamVolumeAudioSession::NewState(CPerStreamVolumeAudioSession *this, enum _AudioSessionState a2)
{
  int v4; // esi
  struct _TP_TIMER *v5; // rdx
  void (__fastcall *v6)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int); // rax
  __int64 (__fastcall *v7)(CAudioSession *); // rax
  struct _FILETIME v8; // [rsp+70h] [rbp+8h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)this + 10);
  v4 = *((_DWORD *)this + 120);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      95,
      (unsigned int)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
      *((_QWORD *)this + 108),
      v4,
      a2);
  }
  if ( !v4 )
  {
    if ( a2 != AudioSessionStateActive )
      goto LABEL_24;
    CAudioSession::CancelInactiveTimer((struct _TP_TIMER **)this);
    GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 484));
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        96LL,
        &WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
        *((_QWORD *)this + 108));
    }
    *((_BYTE *)this + 1048) = 1;
  }
  if ( v4 == 1 && a2 == AudioSessionStateInactive )
  {
    GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 492));
    *((_QWORD *)this + 58) = GetTickCount64();
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        97LL,
        &WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
        *((_QWORD *)this + 108));
    }
    *((_BYTE *)this + 1048) = 0;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 103LL, &WPP_0c5ff841e5503cc39024c97173620901_Traceguids, this);
    }
    v5 = (struct _TP_TIMER *)*((_QWORD *)this + 92);
    v8 = (struct _FILETIME)(-10000LL * *((unsigned int *)this + 96));
    v6 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int))(*(_QWORD *)ThreadPool + 24LL);
    if ( v6 == CAudioThreadPool::SetTimer )
      CAudioThreadPool::SetTimer(ThreadPool, v5, &v8, 0, 0x64u);
    else
      v6(ThreadPool, v5, &v8, 0, 100u);
  }
LABEL_24:
  *((_DWORD *)this + 120) = a2;
  if ( v4 != a2 )
  {
    (*(void (__fastcall **)(CPerStreamVolumeAudioSession *))(*(_QWORD *)this + 8LL))(this);
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 632));
    v7 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL);
    if ( v7 == CAudioSession::Release )
      CAudioSession::Release(this);
    else
      v7(this);
  }
  if ( a2 == AudioSessionStateExpired )
  {
    CPerStreamVolumeAudioSession::StopSessionPersistanceTimer(this);
    if ( *((_BYTE *)this + 1056) )
    {
      CPerStreamVolumeAudioSession::PersistSessionConfiguration(this);
      CPerStreamVolumeAudioSession::CloseSessionPropertyStore(this);
    }
  }
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 91LL, &WPP_0c5ff841e5503cc39024c97173620901_Traceguids, this);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 10, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 4) + 32LL))((char *)this + 32);
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 4) + 24LL))((char *)this + 32, 1LL);
  }
}
