/*
 * XREFs of ?SetTime@CAnimationClock@@QEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x18000378C
 * Callers:
 *     ?OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x180004124 (-OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PE.c)
 * Callees:
 *     ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x1800036A0 (-_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

__int64 __fastcall CAnimationClock::SetTime(__int64 a1, int a2, const union _LARGE_INTEGER *a3)
{
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a1 + 24;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  LODWORD(a3) = CAnimationClock::_SetTime((union _LARGE_INTEGER *)a1, a2, a3);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v7);
  return (unsigned int)a3;
}
