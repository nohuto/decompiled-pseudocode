/*
 * XREFs of ?OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ @ 0x180007C38
 * Callers:
 *     ?OnADGInactivityTimerFiredHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180007B70 (-OnADGInactivityTimerFiredHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIM.c)
 * Callees:
 *     ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x180007DC4 (-DoTerminateADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ?OnDGProcessTerminated@CAudioSrv@@EEAAX_N@Z @ 0x180008070 (-OnDGProcessTerminated@CAudioSrv@@EEAAX_N@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioDGProcess::OnADGInactivityTimerFired(CAudioSrv **this)
{
  CAudioSrv *v2; // rcx
  void (__fastcall *v3)(CAudioSrv *__hidden, bool); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v5; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)(this + 6);
  v5 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( this[11] )
  {
    CAudioDGProcess::DoTerminateADG((CAudioDGProcess *)this);
    v2 = this[18];
    if ( v2 )
    {
      v3 = **(void (__fastcall ***)(CAudioSrv *__hidden, bool))v2;
      if ( v3 == CAudioSrv::OnDGProcessTerminated )
        CAudioSrv::OnDGProcessTerminated(v2, 0);
      else
        v3(v2, 0);
    }
  }
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
}
