/*
 * XREFs of ?ForceExpire@CAudioSession@@QEAAXXZ @ 0x18008B968
 * Callers:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180092FB0 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?FinalRelease@CAudioSessionManager@@EEAAXXZ @ 0x180093420 (-FinalRelease@CAudioSessionManager@@EEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAudioSession::ForceExpire(CAudioSession *this)
{
  bool v2; // zf
  __int64 v3; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x69u,
      (__int64)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
      this);
  }
  v5 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 752);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = v5 == 0;
  *((_DWORD *)this + 120) = 2;
  if ( !v2 )
    LeaveCriticalSection(lpCriticalSection);
  v3 = *((_QWORD *)this + 93);
  if ( v3 )
    (*(void (__fastcall **)(CAudioThreadPool *, __int64, _QWORD))(*(_QWORD *)ThreadPool + 40LL))(ThreadPool, v3, 0LL);
}
