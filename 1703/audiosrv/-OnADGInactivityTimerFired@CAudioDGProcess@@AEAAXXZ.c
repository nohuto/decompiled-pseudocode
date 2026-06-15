/*
 * XREFs of ?OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ @ 0x18001726C
 * Callers:
 *     ?OnADGInactivityTimerFiredHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18002F1B0 (-OnADGInactivityTimerFiredHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIM.c)
 * Callees:
 *     ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x18001730C (-DoTerminateADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?OnDGProcessTerminated@CAudioSrv@@EEAAX_N@Z @ 0x180023F30 (-OnDGProcessTerminated@CAudioSrv@@EEAAX_N@Z.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
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
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      49LL,
      &WPP_f5e0f8228e953c2ec26d9246ffcc9fec_Traceguids,
      *((_QWORD *)this + 11));
  }
  if ( *((_QWORD *)this + 11) )
  {
    CAudioDGProcess::DoTerminateADG(this);
    v2 = (CAudioSrv *)*((_QWORD *)this + 17);
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
