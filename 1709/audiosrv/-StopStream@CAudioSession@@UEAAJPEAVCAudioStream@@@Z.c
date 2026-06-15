/*
 * XREFs of ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180019450
 * Callers:
 *     ?StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180026000 (-StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180015220 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ??0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEBG@Z @ 0x18001745C (--0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEB.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180018410 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x18001B42C (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     ?Stop@CAudioStream@@UEAAJXZ @ 0x18001C890 (-Stop@CAudioStream@@UEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x18002D0D0 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     WPP_SF_dq @ 0x1800770B0 (WPP_SF_dq.c)
 *     WPP_SF_qq @ 0x180077320 (WPP_SF_qq.c)
 */

__int64 __fastcall CAudioSession::StopStream(struct _RTL_CRITICAL_SECTION *this, struct CAudioStream *a2)
{
  CAudioStream *v2; // rsi
  int v3; // r15d
  int updated; // r14d
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rbx
  struct CAudioStream **OwningThread; // rax
  CAudioDGProcess **v12; // rdx
  __int64 (__fastcall *v13)(CAudioStream *__hidden); // rax
  bool v14; // zf
  void (__fastcall *v15)(CPerStreamVolumeAudioSession *__hidden, enum _AudioSessionState); // rax
  void (__fastcall ***v16)(_QWORD, CAudioSessionManager **); // rax
  __int64 (__fastcall *Flink)(CAudioSession *); // rax
  CAudioDGProcess *v19; // rcx
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rbx
  __int64 v23; // r8
  CAudioStream *v24; // rbx
  void (__fastcall ***v25)(_QWORD, CAudioSessionManager **); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-19h] BYREF
  char v27; // [rsp+40h] [rbp-11h]
  LPCRITICAL_SECTION v28; // [rsp+48h] [rbp-9h] BYREF
  char v29; // [rsp+50h] [rbp-1h]
  char v30[32]; // [rsp+58h] [rbp+7h] BYREF
  char v31[32]; // [rsp+78h] [rbp+27h] BYREF

  v2 = 0LL;
  v3 = 0;
  updated = 0;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 67LL, &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, this, a2);
  }
  v27 = 0;
  lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v9 = 0LL;
  if ( this[2].LockSemaphore )
  {
    v10 = 0LL;
    while ( 1 )
    {
      OwningThread = (struct CAudioStream **)this[2].OwningThread;
      if ( OwningThread[v10] == a2 )
        break;
      v9 = (unsigned int)(v9 + 1);
      v10 = (unsigned int)v9;
      if ( (HANDLE)(unsigned int)v9 >= this[2].LockSemaphore )
        goto LABEL_17;
    }
    v12 = &WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      if ( (HANDLE)v10 >= this[2].LockSemaphore )
        ATL::AtlThrowImpl(-2147024809);
      WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), 68LL, v8, v9, OwningThread[v10]);
    }
    if ( (HANDLE)v10 >= this[2].LockSemaphore )
      ATL::AtlThrowImpl(-2147024809);
    _mm_lfence();
    v2 = (CAudioStream *)*((_QWORD *)this[2].OwningThread + v10);
    v13 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v2 + 80LL);
    if ( v13 == CAudioStream::Stop )
      CAudioStream::Stop(v2);
    else
      ((void (__fastcall *)(CAudioStream *, CAudioDGProcess **, __int64, __int64))v13)(v2, v12, v8, v9);
    v14 = LODWORD(this[6].SpinCount)-- == 1;
    v3 = 1;
    if ( v14 )
    {
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 69LL, &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, 0LL);
      }
      v15 = *(void (__fastcall **)(CPerStreamVolumeAudioSession *__hidden, enum _AudioSessionState))&this->DebugInfo[1].Flags;
      if ( v15 == CPerStreamVolumeAudioSession::NewState )
        CPerStreamVolumeAudioSession::NewState((CPerStreamVolumeAudioSession *)this, AudioSessionStateInactive);
      else
        v15((CPerStreamVolumeAudioSession *)this, AudioSessionStateInactive);
    }
    updated = CAudioStream::UpdateStreamPriority(v2);
  }
LABEL_17:
  if ( v27 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v2 )
  {
    ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *, __int64, __int64, __int64))this->DebugInfo->CriticalSection)(
      this,
      v7,
      v8,
      v9);
    v16 = (void (__fastcall ***)(_QWORD, CAudioSessionManager **))CAudioStreamStateChanged::CAudioStreamStateChanged(
                                                                    (__int64)v30,
                                                                    (__int64)this,
                                                                    1,
                                                                    0,
                                                                    (__int64)v2,
                                                                    (__int64)L"CAudioSession::StopStream: in _Streams");
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(this + 14, v16);
    Flink = (__int64 (__fastcall *)(CAudioSession *))this->DebugInfo->ProcessLocksList.Flink;
    if ( Flink == CAudioSession::Release )
      CAudioSession::Release((CAudioSession *)this);
    else
      Flink((CAudioSession *)this);
  }
  if ( !v3 )
  {
    v29 = 0;
    v28 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 128);
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v28);
    v19 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 70LL, &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids);
      v19 = WPP_GLOBAL_Control;
    }
    v20 = 0LL;
    if ( this[4].OwningThread )
    {
      v21 = (unsigned __int64)this[4].OwningThread;
      v22 = 0LL;
      if ( !v21 )
        ATL::AtlThrowImpl(-2147024809);
      while ( 1 )
      {
        v23 = *(_QWORD *)&this[4].LockCount;
        if ( *(struct CAudioStream **)(v23 + 8 * v22) == a2 )
          break;
        v20 = (unsigned int)(v20 + 1);
        v22 = (unsigned int)v20;
        if ( (unsigned int)v20 >= v21 )
          goto LABEL_60;
      }
      if ( v19 != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)v19 + 28) & 0x40) != 0
        && *((_BYTE *)v19 + 25) >= 4u )
      {
        if ( v22 >= v21 )
          ATL::AtlThrowImpl(-2147024809);
        WPP_SF_dq(*((_QWORD *)v19 + 2), 71LL, v23, v20, *(_QWORD *)(v23 + 8 * v22));
      }
      if ( (HANDLE)v22 >= this[4].OwningThread )
        ATL::AtlThrowImpl(-2147024809);
      _mm_lfence();
      v24 = *(CAudioStream **)(*(_QWORD *)&this[4].LockCount + 8 * v22);
      (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)v24 + 80LL))(v24);
      ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))this->DebugInfo->CriticalSection)(this);
      v25 = (void (__fastcall ***)(_QWORD, CAudioSessionManager **))CAudioStreamStateChanged::CAudioStreamStateChanged(
                                                                      (__int64)v31,
                                                                      (__int64)this,
                                                                      1,
                                                                      0,
                                                                      (__int64)v24,
                                                                      (__int64)L"CAudioSession::StopStream: in _DisconnectedStreams");
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(this + 14, v25);
      ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))this->DebugInfo->ProcessLocksList.Flink)(this);
      updated = CAudioStream::UpdateStreamPriority(v24);
    }
LABEL_60:
    if ( v29 )
      LeaveCriticalSection(v28);
  }
  if ( updated < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSession::StopStream", 0xE0Cu, updated);
  return (unsigned int)updated;
}
