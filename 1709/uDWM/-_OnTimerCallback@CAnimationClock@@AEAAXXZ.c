/*
 * XREFs of ?_OnTimerCallback@CAnimationClock@@AEAAXXZ @ 0x180002E6C
 * Callers:
 *     ?OnTimerTick@CAnimationClock@@EEAAXXZ @ 0x180002ED0 (-OnTimerTick@CAnimationClock@@EEAAXXZ.c)
 *     ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x180002F10 (-_SetTimer@CAnimationClock@@AEAAJK@Z.c)
 * Callees:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180002D18 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     McTemplateU0j @ 0x18009F580 (McTemplateU0j.c)
 */

void __fastcall CAnimationClock::_OnTimerCallback(const union _LARGE_INTEGER *this)
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
        McTemplateU0j(this, &UdwmAnimationClock_Finish, &this[14]);
      v3 = 6LL;
      this = (const union _LARGE_INTEGER *)v2;
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
