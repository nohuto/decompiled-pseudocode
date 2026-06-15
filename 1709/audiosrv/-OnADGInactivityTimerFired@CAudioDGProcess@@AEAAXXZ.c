/*
 * XREFs of ?OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ @ 0x18001D9D0
 * Callers:
 *     ?OnADGInactivityTimerFiredHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800318E0 (-OnADGInactivityTimerFiredHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIM.c)
 * Callees:
 *     ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x18001DA6C (-DoTerminateADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?OnDGProcessTerminated@CAudioSrv@@EEAAX_N@Z @ 0x18002C730 (-OnDGProcessTerminated@CAudioSrv@@EEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioDGProcess::OnADGInactivityTimerFired(CAudioDGProcess *this)
{
  CAudioSrv *v2; // rcx
  void (*v3)(CAudioSrv *__hidden, bool); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v5; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  v5 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      49LL,
      &WPP_c059856c368f347c07e9a39e19191005_Traceguids,
      *((_QWORD *)this + 11));
  }
  if ( *((_QWORD *)this + 11) )
  {
    CAudioDGProcess::DoTerminateADG(this);
    v2 = (CAudioSrv *)*((_QWORD *)this + 18);
    if ( v2 )
    {
      v3 = **(void (***)(CAudioSrv *__hidden, bool))v2;
      if ( v3 == CAudioSrv::OnDGProcessTerminated )
        CAudioSrv::OnDGProcessTerminated(v2, 0);
      else
        ((void (__fastcall *)(CAudioSrv *, _QWORD))v3)(v2, 0LL);
    }
  }
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
}
