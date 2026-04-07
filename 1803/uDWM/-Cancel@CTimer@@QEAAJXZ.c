/*
 * XREFs of ?Cancel@CTimer@@QEAAJXZ @ 0x18000AA9C
 * Callers:
 *     ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x18000CA20 (-_SetTimer@CAnimationClock@@AEAAJK@Z.c)
 *     ?Reset@CAnimationClock@@QEAAJK@Z @ 0x1800A7D14 (-Reset@CAnimationClock@@QEAAJK@Z.c)
 * Callees:
 *     ?_DestroyThreadPoolTimer@CTimer@@AEAAX_N@Z @ 0x18000A8E0 (-_DestroyThreadPoolTimer@CTimer@@AEAAX_N@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

__int64 __fastcall CTimer::Cancel(CTimer *this)
{
  __int64 v2; // rbx
  char *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = (char *)this + 16;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v2 = *((_QWORD *)this + 7);
  if ( v2 )
    CTimer::_DestroyThreadPoolTimer(this, 0);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v4);
  return v2 == 0 ? 0x8007139F : 0;
}
