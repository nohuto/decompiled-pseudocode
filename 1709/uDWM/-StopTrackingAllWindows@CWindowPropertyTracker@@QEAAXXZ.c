/*
 * XREFs of ?StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ @ 0x18000CB18
 * Callers:
 *     ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x18000D8BC (-_CleanupTransition@CAnimationScheduler@@AEAAXXZ.c)
 *     ??_GCAnimationScheduler@@QEAAPEAXI@Z @ 0x18006DBE0 (--_GCAnimationScheduler@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x1800016E4 (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

void __fastcall CWindowPropertyTracker::StopTrackingAllWindows(CWindowPropertyTracker *this)
{
  int v2; // eax
  struct _RTL_CRITICAL_SECTION *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  while ( 1 )
  {
    v2 = *((_DWORD *)this + 6);
    if ( !v2 )
      break;
    CWindowPropertyTracker::_StopTrackingWindowByIndex(this, v2 - 1);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v3);
}
