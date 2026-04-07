/*
 * XREFs of ?_OnTimerCallback@CAnimationClock@@AEAAXXZ @ 0x180003A98
 * Callers:
 *     ?OnTimerTick@CAnimationClock@@EEAAXXZ @ 0x180003AF0 (-OnTimerTick@CAnimationClock@@EEAAXXZ.c)
 *     ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x180003B30 (-_SetTimer@CAnimationClock@@AEAAJK@Z.c)
 * Callees:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x18000383C (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     Template_j @ 0x1800A0D10 (Template_j.c)
 */

void __fastcall CAnimationClock::_OnTimerCallback(union _LARGE_INTEGER *this)
{
  DWORD LowPart; // eax
  CAnimationClock *v2; // rbx
  __int64 v3; // rdx

  LowPart = this[10].LowPart;
  v2 = (CAnimationClock *)this;
  switch ( LowPart )
  {
    case 2u:
      v3 = 4LL;
      break;
    case 4u:
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        Template_j(this, &UdwmAnimationClock_Finish, &this[14]);
      v3 = 6LL;
      this = (union _LARGE_INTEGER *)v2;
      break;
    case 1u:
      v3 = 3LL;
      break;
    default:
      if ( LowPart - 5 > 1 )
        return;
      v3 = 7LL;
      break;
  }
  CAnimationClock::_SetState(this, v3);
}
