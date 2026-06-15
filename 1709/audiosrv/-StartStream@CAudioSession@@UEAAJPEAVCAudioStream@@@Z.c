/*
 * XREFs of ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180019640
 * Callers:
 *     ?StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180026560 (-StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180015220 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ??0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEBG@Z @ 0x18001745C (--0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEB.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x18001B42C (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18001E264 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800354B8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qd @ 0x180067C30 (WPP_SF_qd.c)
 *     WPP_SF_dq @ 0x1800770B0 (WPP_SF_dq.c)
 *     WPP_SF_qq @ 0x180077320 (WPP_SF_qq.c)
 */

__int64 __fastcall CAudioSession::StartStream(struct _RTL_CRITICAL_SECTION *this, struct CAudioStream *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // rdi
  struct CAudioStream **OwningThread; // rax
  CAudioStream *v9; // rdi
  int updated; // eax
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rax
  void (__fastcall ***v12)(_QWORD, CAudioSessionManager **); // rax
  int v13; // [rsp+20h] [rbp-48h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-38h] BYREF
  char v15; // [rsp+38h] [rbp-30h]
  char v16[32]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 64LL, &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, this, a2);
  }
  v15 = 0;
  lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v5 = 0LL;
  if ( this[2].LockSemaphore )
  {
    v6 = 0LL;
    while ( 1 )
    {
      OwningThread = (struct CAudioStream **)this[2].OwningThread;
      if ( OwningThread[v6] == a2 )
        break;
      v5 = (unsigned int)(v5 + 1);
      v6 = (unsigned int)v5;
      if ( (HANDLE)(unsigned int)v5 >= this[2].LockSemaphore )
        goto LABEL_9;
    }
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      if ( (HANDLE)v6 >= this[2].LockSemaphore )
        ATL::AtlThrowImpl(-2147024809);
      WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), 65LL, v4, v5, OwningThread[v6]);
    }
    if ( (HANDLE)v6 >= this[2].LockSemaphore )
      ATL::AtlThrowImpl(-2147024809);
    _mm_lfence();
    v9 = (CAudioStream *)*((_QWORD *)this[2].OwningThread + v6);
    (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)v9 + 72LL))(v9);
    updated = CAudioStream::UpdateStreamPriority(v9);
    if ( updated < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD70,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)updated,
        v13);
    if ( ++LODWORD(this[6].SpinCount) == 1 )
    {
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 66LL, &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, this, 1);
      }
      LeaveCriticalSection(lpCriticalSection);
      DebugInfo = this->DebugInfo;
      v15 = 0;
      (*(void (__fastcall **)(struct _RTL_CRITICAL_SECTION *, __int64))&DebugInfo[1].Flags)(this, 1LL);
    }
    ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&lpCriticalSection);
    ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))this->DebugInfo->CriticalSection)(this);
    v12 = (void (__fastcall ***)(_QWORD, CAudioSessionManager **))CAudioStreamStateChanged::CAudioStreamStateChanged(
                                                                    (__int64)v16,
                                                                    (__int64)this,
                                                                    0,
                                                                    1,
                                                                    (__int64)v9,
                                                                    (__int64)L"CAudioSession::StartStream");
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(this + 14, v12);
    ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))this->DebugInfo->ProcessLocksList.Flink)(this);
    return 0LL;
  }
  else
  {
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD6E,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x88890004LL,
      v13);
    ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&lpCriticalSection);
    return 2290679812LL;
  }
}
