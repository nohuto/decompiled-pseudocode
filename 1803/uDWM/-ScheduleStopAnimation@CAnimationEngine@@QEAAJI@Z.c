/*
 * XREFs of ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x18000EF70
 * Callers:
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x180006030 (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x1800092C8 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x180099B58 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 *     ?ScheduleStopAnimation@CStoryboard@@QEAAJXZ @ 0x18009CEA0 (-ScheduleStopAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?CleanupAnimation@CAccentTransition@@QEAAXXZ @ 0x1800A2E40 (-CleanupAnimation@CAccentTransition@@QEAAXXZ.c)
 *     ?_CleanupAnimation@CThumbnailTransition@@AEAAXXZ @ 0x1800A54B8 (-_CleanupAnimation@CThumbnailTransition@@AEAAXXZ.c)
 * Callees:
 *     ?GetTransitionVisualSetIndex@CAnimationEngine@@AEAAHI@Z @ 0x18000D830 (-GetTransitionVisualSetIndex@CAnimationEngine@@AEAAHI@Z.c)
 *     ?StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ @ 0x18000F220 (-StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

__int64 __fastcall CAnimationEngine::ScheduleStopAnimation(CAnimationEngine *this, int a2)
{
  unsigned int v4; // edi
  int TransitionVisualSetIndex; // eax
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  TransitionVisualSetIndex = CAnimationEngine::GetTransitionVisualSetIndex(this, a2);
  if ( TransitionVisualSetIndex < 0 )
    v4 = -2147467259;
  else
    CAnimationEngine::CTransitionVisualSet::StopStoryboard(*(CAnimationEngine::CTransitionVisualSet **)(*((_QWORD *)this + 5) + 8LL * (unsigned int)TransitionVisualSetIndex));
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v7);
  return v4;
}
