/*
 * XREFs of ?UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180041F40
 * Callers:
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x1800417F4 (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 *     ?OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z @ 0x180093080 (-OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x180094EB0 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 *     ?CleanupAnimation@CAccentTransition@@QEAAXXZ @ 0x18009C888 (-CleanupAnimation@CAccentTransition@@QEAAXXZ.c)
 *     ?_CleanupAnimation@CThumbnailTransition@@AEAAXXZ @ 0x18009EEE8 (-_CleanupAnimation@CThumbnailTransition@@AEAAXXZ.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

__int64 __fastcall CAnimationEngine::UnregisterForAnimationCompleteNotification(
        CAnimationEngine *this,
        struct IAnimationListener *a2)
{
  __int64 i; // rax
  __int64 v5; // rdx
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 24); i = (unsigned int)(i + 1) )
  {
    v5 = *((_QWORD *)this + 9);
    if ( *(struct IAnimationListener **)(v5 + 8 * i) == a2 )
      *(_QWORD *)(v5 + 8 * i) = 0LL;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v7);
  return 0LL;
}
