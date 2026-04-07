/*
 * XREFs of ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x180003B30
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x18000383C (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?Reset@CAnimationClock@@QEAAJK@Z @ 0x1800A0BA8 (-Reset@CAnimationClock@@QEAAJK@Z.c)
 * Callees:
 *     ?_OnTimerCallback@CAnimationClock@@AEAAXXZ @ 0x180003A98 (-_OnTimerCallback@CAnimationClock@@AEAAXXZ.c)
 *     ?SetTimerCallback@CTimer@@QEAAJPEAUITimerCallbackListener@@@Z @ 0x180006130 (-SetTimerCallback@CTimer@@QEAAJPEAUITimerCallbackListener@@@Z.c)
 *     ?Cancel@CTimer@@QEAAJXZ @ 0x180006188 (-Cancel@CTimer@@QEAAJXZ.c)
 *     ?IsSet@CTimer@@QEAA_NXZ @ 0x1800061D4 (-IsSet@CTimer@@QEAA_NXZ.c)
 *     ?Start@CTimer@@QEAAJK@Z @ 0x18000621C (-Start@CTimer@@QEAAJK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationClock::_SetTimer(CAnimationClock *this, unsigned int a2)
{
  signed int v2; // ebx
  __int64 v6; // rax
  __int64 v7; // rdi

  v2 = 0;
  if ( *((_QWORD *)this + 8) )
    goto LABEL_18;
  v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         80LL);
  v7 = v6;
  if ( v6 )
  {
    *(_DWORD *)(v6 + 8) = 1;
    *(_QWORD *)v6 = &CTimer::`vftable';
    InitializeCriticalSection((LPCRITICAL_SECTION)(v6 + 16));
    *(_QWORD *)(v7 + 56) = 0LL;
    *(_QWORD *)(v7 + 64) = 0LL;
    *(_DWORD *)(v7 + 72) = 0;
  }
  else
  {
    v7 = 0LL;
  }
  *((_QWORD *)this + 8) = v7;
  v2 = v7 == 0 ? 0x8007000E : 0;
  if ( v7 )
    v2 = CTimer::SetTimerCallback((CTimer *)v7, (CAnimationClock *)((char *)this + 16));
  if ( v2 >= 0 )
  {
LABEL_18:
    if ( CTimer::IsSet(*((CTimer **)this + 8)) )
      v2 = CTimer::Cancel(*((CTimer **)this + 8));
    if ( v2 >= 0 )
    {
      if ( a2 )
        return (unsigned int)CTimer::Start(*((CTimer **)this + 8), a2);
      else
        CAnimationClock::_OnTimerCallback((union _LARGE_INTEGER *)this);
    }
  }
  return (unsigned int)v2;
}
