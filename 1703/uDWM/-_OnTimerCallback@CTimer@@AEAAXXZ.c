/*
 * XREFs of ?_OnTimerCallback@CTimer@@AEAAXXZ @ 0x18000606C
 * Callers:
 *     ?s_TimerTickProc@CTimer@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180003440 (-s_TimerTickProc@CTimer@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?Start@CTimer@@QEAAJK@Z @ 0x18000621C (-Start@CTimer@@QEAAJK@Z.c)
 * Callees:
 *     ?OnTimerTick@CAnimationClock@@EEAAXXZ @ 0x180003AF0 (-OnTimerTick@CAnimationClock@@EEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTimer::_OnTimerCallback(CTimer *this)
{
  CAnimationClock *v2; // rcx
  void (*v3)(void); // rax

  if ( *((_QWORD *)this + 8) )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
    v2 = (CAnimationClock *)*((_QWORD *)this + 8);
    v3 = **(void (***)(void))v2;
    if ( (char *)v3 == (char *)CAnimationClock::OnTimerTick )
      CAnimationClock::OnTimerTick(v2);
    else
      v3();
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  }
}
