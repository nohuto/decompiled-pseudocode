/*
 * XREFs of ?ForceExpire@CAudioSession@@QEAAXXZ @ 0x1800712B8
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180016390 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180016B80 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?FinalRelease@CAudioSessionManager@@EEAAXXZ @ 0x180079880 (-FinalRelease@CAudioSessionManager@@EEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

void __fastcall CAudioSession::ForceExpire(CAudioSession *this)
{
  bool v2; // zf
  __int64 v3; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 98LL, &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, this);
  }
  v5 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 680);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = v5 == 0;
  *((_DWORD *)this + 102) = 2;
  if ( !v2 )
    LeaveCriticalSection(lpCriticalSection);
  v3 = *((_QWORD *)this + 84);
  if ( v3 )
    (*(void (__fastcall **)(CAudioThreadPool *, __int64, _QWORD))(*(_QWORD *)ThreadPool + 40LL))(ThreadPool, v3, 0LL);
}
