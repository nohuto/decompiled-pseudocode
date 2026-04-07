/*
 * XREFs of ?Cancel@CTimer@@QEAAJXZ @ 0x180002A0C
 * Callers:
 *     ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x180002F10 (-_SetTimer@CAnimationClock@@AEAAJK@Z.c)
 *     ?Reset@CAnimationClock@@QEAAJK@Z @ 0x18009F3C4 (-Reset@CAnimationClock@@QEAAJK@Z.c)
 * Callees:
 *     ?_DestroyThreadPoolTimer@CTimer@@AEAAX_N@Z @ 0x180002850 (-_DestroyThreadPoolTimer@CTimer@@AEAAX_N@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

__int64 __fastcall CTimer::Cancel(CTimer *this)
{
  unsigned int v2; // ebx
  char *v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v4 = (char *)this + 16;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( *((_QWORD *)this + 7) )
    CTimer::_DestroyThreadPoolTimer(this, 0);
  else
    v2 = -2147019873;
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v4);
  return v2;
}
