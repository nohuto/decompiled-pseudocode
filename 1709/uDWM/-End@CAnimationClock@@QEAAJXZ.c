/*
 * XREFs of ?End@CAnimationClock@@QEAAJXZ @ 0x180002AF8
 * Callers:
 *     ?OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z @ 0x1800033EC (-OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x180002C14 (-_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     McTemplateU0ji @ 0x18009F640 (McTemplateU0ji.c)
 */

__int64 __fastcall CAnimationClock::End(CAnimationClock *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  int v4; // esi
  char *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = (char *)this + 24;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v3 = -2147019873;
  if ( *((_DWORD *)this + 20) == 1 )
  {
    v4 = _InterlockedDecrement((volatile signed __int32 *)this + 34);
    if ( v4 < 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)this + 34);
    }
    else
    {
      v3 = 0;
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0ji(v2, &UdwmAnimationClock_End, (char *)this + 112, v4);
      if ( (*((_DWORD *)this + 32) != -1 || *((_DWORD *)this + 33)) && !v4 )
        v3 = CAnimationClock::_SetTime(this, 0LL, 0LL);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v6);
  return v3;
}
