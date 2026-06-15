/*
 * XREFs of ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180035590
 * Callers:
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180034330 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?StateCheckExpired@CAudioSession@@AEAAXXZ @ 0x180046C00 (-StateCheckExpired@CAudioSession@@AEAAXXZ.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180047130 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180031F30 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z @ 0x180035E40 (-SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z.c)
 *     ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x1800418F8 (-StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18004197C (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180041C14 (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x180047790 (-FinalRelease@CAudioSession@@MEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 *     WPP_SF_Sdd @ 0x1800AE008 (WPP_SF_Sdd.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPerStreamVolumeAudioSession::NewState(CPerStreamVolumeAudioSession *this, enum _AudioSessionState a2)
{
  int v4; // ebp
  CAudioSessionManager *v5; // rcx
  struct _TP_TIMER *v6; // r10
  void (__fastcall *v7)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int); // r11
  void (__fastcall *v8)(CAudioThreadPool *__hidden, struct _TP_TIMER *, int); // rax
  int v9; // eax
  __int64 (__fastcall *v10)(CAudioSession *); // rax
  __int64 v11; // rax
  struct _TP_TIMER *v12; // rdx
  void (__fastcall *v13)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int); // r10
  void (__fastcall *v14)(CAudioSession *__hidden); // rax
  CAudioSession *v15; // rcx
  void (__fastcall **v16[2])(_QWORD, __int64 *); // [rsp+38h] [rbp-40h] BYREF
  int v17; // [rsp+48h] [rbp-30h]
  enum _AudioSessionState v18; // [rsp+4Ch] [rbp-2Ch]
  struct _FILETIME v19; // [rsp+80h] [rbp+8h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)this + 10);
  v4 = *((_DWORD *)this + 102);
  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      76,
      (unsigned int)&WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
      *((_QWORD *)this + 91),
      v4,
      a2,
      -2LL);
    v5 = WPP_GLOBAL_Control;
  }
  if ( v4 )
  {
    if ( v4 == 1 && a2 == AudioSessionStateInactive )
    {
      GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 420));
      *((_QWORD *)this + 49) = GetTickCount64();
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          78LL,
          &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
          *((_QWORD *)this + 91));
      }
      *((_BYTE *)this + 976) = 0;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 84LL, &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids, this);
      }
      v11 = -10000LL * *((unsigned int *)this + 78);
      v19.dwLowDateTime = -10000 * *((_DWORD *)this + 78);
      v19.dwHighDateTime = HIDWORD(v11);
      v12 = (struct _TP_TIMER *)*((_QWORD *)this + 75);
      v13 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int))(*(_QWORD *)ThreadPool + 24LL);
      if ( v13 == CAudioThreadPool::SetTimer )
        CAudioThreadPool::SetTimer(ThreadPool, v12, &v19, 0, 0x64u);
      else
        v13(ThreadPool, v12, &v19, 0, 100u);
    }
  }
  else if ( a2 == AudioSessionStateActive )
  {
    if ( *((_QWORD *)this + 75) )
    {
      v6 = (struct _TP_TIMER *)*((_QWORD *)this + 75);
      if ( v5 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)v5 + 28) & 0x40) != 0
        && *((_BYTE *)v5 + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)v5 + 2), 85LL, &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids, this);
        v6 = (struct _TP_TIMER *)*((_QWORD *)this + 75);
      }
      v7 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int))(*(_QWORD *)ThreadPool + 24LL);
      if ( v7 == CAudioThreadPool::SetTimer )
        SetThreadpoolTimer(v6, 0LL, 0, 0);
      else
        v7(ThreadPool, v6, 0LL, 0, 0);
      v8 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *, int))(*(_QWORD *)ThreadPool + 32LL);
      if ( v8 == CAudioThreadPool::WaitForTimerCallbacks )
        WaitForThreadpoolTimerCallbacks(*((PTP_TIMER *)this + 75), 1);
      else
        v8(ThreadPool, *((struct _TP_TIMER **)this + 75), 1);
    }
    GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 412));
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        77LL,
        &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
        *((_QWORD *)this + 91));
    }
    *((_BYTE *)this + 976) = 1;
  }
  *((_DWORD *)this + 102) = a2;
  if ( a2 == AudioSessionStateActive )
  {
    v9 = *((_DWORD *)this + 76);
    if ( (v9 & 0x200000) != 0 )
      *((_DWORD *)this + 76) = v9 & 0xFFDFFFFF;
  }
  if ( v4 != a2 )
  {
    (*(void (__fastcall **)(CPerStreamVolumeAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v16[0] = (void (__fastcall **)(_QWORD, __int64 *))&CAudioSessionStateChanged::`vftable';
    v16[1] = (void (__fastcall **)(_QWORD, __int64 *))this;
    v17 = v4;
    v18 = a2;
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 496), v16);
    v10 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL);
    if ( v10 == CAudioSession::Release )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 10, 0xFFFFFFFF) == 1 )
      {
        v14 = *(void (__fastcall **)(CAudioSession *__hidden))(*((_QWORD *)this + 4) + 32LL);
        v15 = (CPerStreamVolumeAudioSession *)((char *)this + 32);
        if ( v14 == CAudioSession::FinalRelease )
          CAudioSession::FinalRelease(v15);
        else
          v14(v15);
        (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 4) + 24LL))((char *)this + 32, 1LL);
      }
    }
    else
    {
      v10(this);
    }
  }
  if ( a2 == AudioSessionStateExpired )
  {
    CPerStreamVolumeAudioSession::StopSessionPersistanceTimer(this);
    if ( *((_BYTE *)this + 984) )
    {
      CPerStreamVolumeAudioSession::PersistSessionConfiguration(this);
      CPerStreamVolumeAudioSession::CloseSessionPropertyStore(this);
    }
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 72LL, &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids, this);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 10, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 4) + 32LL))((char *)this + 32);
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 4) + 24LL))((char *)this + 32, 1LL);
  }
}
