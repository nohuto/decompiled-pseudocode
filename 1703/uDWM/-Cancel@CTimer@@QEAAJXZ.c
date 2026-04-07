/*
 * XREFs of ?Cancel@CTimer@@QEAAJXZ @ 0x180006188
 * Callers:
 *     ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x180003B30 (-_SetTimer@CAnimationClock@@AEAAJK@Z.c)
 *     ?Reset@CAnimationClock@@QEAAJK@Z @ 0x1800A0BA8 (-Reset@CAnimationClock@@QEAAJK@Z.c)
 * Callees:
 *     ?_DestroyThreadPoolTimer@CTimer@@AEAAX_N@Z @ 0x1800060C4 (-_DestroyThreadPoolTimer@CTimer@@AEAAX_N@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
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
