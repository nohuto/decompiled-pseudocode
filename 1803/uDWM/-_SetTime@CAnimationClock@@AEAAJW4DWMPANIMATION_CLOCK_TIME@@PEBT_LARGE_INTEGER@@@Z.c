/*
 * XREFs of ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x18000C598
 * Callers:
 *     ?End@CAnimationClock@@QEAAJXZ @ 0x18000C360 (-End@CAnimationClock@@QEAAJXZ.c)
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x18000C69C (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?SetTime@CAnimationClock@@QEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x1800A7E34 (-SetTime@CAnimationClock@@QEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x18000C69C (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?_SetTimeToNextFrame@CAnimationClock@@AEAAJPEBT_LARGE_INTEGER@@PEAT2@@Z @ 0x18000CB18 (-_SetTimeToNextFrame@CAnimationClock@@AEAAJPEBT_LARGE_INTEGER@@PEAT2@@Z.c)
 *     ?s_GetElapsedMillsecondsFromTime@CAnimationClock@@CA_JPEBT_LARGE_INTEGER@@@Z @ 0x1800A81F4 (-s_GetElapsedMillsecondsFromTime@CAnimationClock@@CA_JPEBT_LARGE_INTEGER@@@Z.c)
 *     McTemplateU0ji @ 0x1800A82FC (McTemplateU0ji.c)
 */

__int64 __fastcall CAnimationClock::_SetTime(union _LARGE_INTEGER *a1, int a2, const union _LARGE_INTEGER *a3)
{
  union _LARGE_INTEGER *v6; // r8
  int Frame; // ebx
  __int64 v8; // rcx
  __int64 v10; // rcx
  union _LARGE_INTEGER v11; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 && (__int64)abs64(CAnimationClock::s_GetElapsedMillsecondsFromTime(a3)) > 5000 )
    return (unsigned int)-2147024809;
  if ( !a2 )
  {
    if ( ((a1[10].LowPart - 1) & 0xFFFFFFFD) == 0 )
    {
      v6 = &v11;
      v11.QuadPart = 0LL;
      if ( a3 )
        v6 = a1 + 11;
      Frame = CAnimationClock::_SetTimeToNextFrame((CAnimationClock *)a1, a3, v6);
      if ( Frame >= 0 )
      {
        Frame = CAnimationClock::_SetState(a1, 2LL);
        if ( !a3 )
          a1[11] = v11;
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0ji(v8, &UdwmAnimationClock_Start, &a1[15], (union _LARGE_INTEGER)a1[11].QuadPart);
      }
      return (unsigned int)Frame;
    }
    return (unsigned int)-2147019873;
  }
  if ( a2 != 1 )
    return (unsigned int)-2147024809;
  if ( a1[10].LowPart - 1 > 3 )
    return (unsigned int)-2147019873;
  Frame = CAnimationClock::_SetTimeToNextFrame((CAnimationClock *)a1, a3, a1 + 12);
  if ( Frame >= 0 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0ji(v10, &UdwmAnimationClock_Cancel, &a1[15], (union _LARGE_INTEGER)a1[12].QuadPart);
    return (unsigned int)CAnimationClock::_SetState(a1, 5LL);
  }
  return (unsigned int)Frame;
}
