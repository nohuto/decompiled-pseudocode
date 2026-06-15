/*
 * XREFs of ?CancelInactiveTimer@CAudioSession@@AEAAXXZ @ 0x180018A8C
 * Callers:
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x180018DF0 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x180019F00 (-FinalRelease@CAudioSession@@MEAAXXZ.c)
 * Callees:
 *     ?WaitForTimerCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@H@Z @ 0x18001F500 (-WaitForTimerCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@H@Z.c)
 *     ?SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z @ 0x18001F510 (-SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

void __fastcall CAudioSession::CancelInactiveTimer(struct _TP_TIMER **this)
{
  struct _TP_TIMER *v2; // rdx
  void (__fastcall *v3)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int); // rax
  struct _TP_TIMER *v4; // rdx
  void (__fastcall *v5)(CAudioThreadPool *__hidden, struct _TP_TIMER *, int); // rax

  if ( this[83] )
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 97LL, &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, this);
    }
    v2 = this[83];
    v3 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int))(*(_QWORD *)ThreadPool + 24LL);
    if ( v3 == CAudioThreadPool::SetTimer )
      CAudioThreadPool::SetTimer(ThreadPool, v2, 0LL, 0, 0);
    else
      v3(ThreadPool, v2, 0LL, 0, 0);
    v4 = this[83];
    v5 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *, int))(*(_QWORD *)ThreadPool + 32LL);
    if ( v5 == CAudioThreadPool::WaitForTimerCallbacks )
      CAudioThreadPool::WaitForTimerCallbacks(ThreadPool, v4, 1);
    else
      v5(ThreadPool, v4, 1);
  }
}
