/*
 * XREFs of ?CancelInactiveTimer@CAudioSession@@AEAAXXZ @ 0x180046AB8
 * Callers:
 *     ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x180047790 (-FinalRelease@CAudioSession@@MEAAXXZ.c)
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x1800967C0 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 * Callees:
 *     ?WaitForTimerCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@H@Z @ 0x180035E30 (-WaitForTimerCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@H@Z.c)
 *     ?SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z @ 0x180035E40 (-SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

void __fastcall CAudioSession::CancelInactiveTimer(CAudioSession *this)
{
  struct _TP_TIMER *v2; // rdx
  void (__fastcall *v3)(CAudioThreadPool *, struct _TP_TIMER *, struct _FILETIME *, DWORD, DWORD); // rax
  struct _TP_TIMER *v4; // rdx
  void (__fastcall *v5)(CAudioThreadPool *, struct _TP_TIMER *, BOOL); // rax

  if ( *((_QWORD *)this + 75) )
  {
    v2 = (struct _TP_TIMER *)*((_QWORD *)this + 75);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 85LL, &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids, this);
      v2 = (struct _TP_TIMER *)*((_QWORD *)this + 75);
    }
    v3 = *(void (__fastcall **)(CAudioThreadPool *, struct _TP_TIMER *, struct _FILETIME *, DWORD, DWORD))(*(_QWORD *)ThreadPool + 24LL);
    if ( v3 == CAudioThreadPool::SetTimer )
      CAudioThreadPool::SetTimer(ThreadPool, v2, 0LL, 0, 0);
    else
      v3(ThreadPool, v2, 0LL, 0LL, 0);
    v4 = (struct _TP_TIMER *)*((_QWORD *)this + 75);
    v5 = *(void (__fastcall **)(CAudioThreadPool *, struct _TP_TIMER *, BOOL))(*(_QWORD *)ThreadPool + 32LL);
    if ( v5 == CAudioThreadPool::WaitForTimerCallbacks )
      CAudioThreadPool::WaitForTimerCallbacks(ThreadPool, v4, 1);
    else
      v5(ThreadPool, v4, 1LL);
  }
}
