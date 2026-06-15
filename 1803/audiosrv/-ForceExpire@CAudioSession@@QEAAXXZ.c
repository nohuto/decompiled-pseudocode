/*
 * XREFs of ?ForceExpire@CAudioSession@@QEAAXXZ @ 0x1800A9500
 * Callers:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180004468 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800333A0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?FinalRelease@CAudioSessionManager@@EEAAXXZ @ 0x1800B1F40 (-FinalRelease@CAudioSessionManager@@EEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

void __fastcall CAudioSession::ForceExpire(CAudioSession *this)
{
  bool v2; // zf
  __int64 v3; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 86LL, &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids, this);
  }
  v5 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 616);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = v5 == 0;
  *((_DWORD *)this + 102) = 2;
  if ( !v2 )
    LeaveCriticalSection(lpCriticalSection);
  v3 = *((_QWORD *)this + 76);
  if ( v3 )
    (*(void (__fastcall **)(CAudioThreadPool *, __int64, _QWORD))(*(_QWORD *)ThreadPool + 40LL))(ThreadPool, v3, 0LL);
}
