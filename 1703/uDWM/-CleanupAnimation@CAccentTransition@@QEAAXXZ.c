/*
 * XREFs of ?CleanupAnimation@CAccentTransition@@QEAAXXZ @ 0x18009C888
 * Callers:
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x18009C928 (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 *     ?StopAnimation@CAccentTransition@@QEAAXXZ @ 0x18009CBB8 (-StopAnimation@CAccentTransition@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180012B30 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x1800170B0 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180041F40 (-UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180041F98 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 */

void __fastcall CAccentTransition::CleanupAnimation(CAccentTransition *this)
{
  CAnimationEngine *v2; // rax
  CAnimationEngine *v3; // rdi

  v2 = CDesktopManager::AcquireAnimationEngine();
  v3 = v2;
  if ( v2 )
  {
    CAnimationEngine::UnregisterForAnimationCompleteNotification(v2, this);
    CAnimationEngine::ScheduleStopAnimation(v3, *((_DWORD *)this + 9));
    CAnimationEngine::Release(v3);
  }
  *((_DWORD *)this + 9) = -1;
  *((_BYTE *)this + 32) = 0;
}
