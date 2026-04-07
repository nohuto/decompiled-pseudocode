/*
 * XREFs of ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x1800125EC
 * Callers:
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x1800043CC (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x180012634 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x1800350D8 (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

char __fastcall CAnimationEngine::IsIdle(CAnimationEngine *this)
{
  char v2; // bl
  struct _RTL_CRITICAL_SECTION *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = 0;
  if ( !*((_DWORD *)this + 16) || !*((_BYTE *)this + 120) )
    v2 = 1;
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v4);
  return v2;
}
