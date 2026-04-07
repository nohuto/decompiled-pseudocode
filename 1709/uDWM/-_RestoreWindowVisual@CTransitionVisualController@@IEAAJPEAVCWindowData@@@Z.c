/*
 * XREFs of ?_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z @ 0x18008F86C
 * Callers:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_c72d64e34bc4c52fff075362be8a3231___ @ 0x18008DB3C (CTransitionVisualController--ForEachOwnedWindow__lambda_c72d64e34bc4c52fff075362be8a3231___.c)
 *     ?_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x180096B08 (-_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180009498 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180018160 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z @ 0x180065F98 (-StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_RestoreWindowVisual(
        CTransitionVisualController *this,
        struct CWindowData *a2)
{
  unsigned int v2; // ebx
  int v4; // eax

  v2 = 0;
  if ( *((_QWORD *)a2 + 50) )
  {
    CWindowPropertyTracker::StopTrackingWindowImmediately(
      (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28) + 48LL),
      *((HWND *)a2 + 5));
    v4 = CVisual::RenderRecursive(*((CVisual **)a2 + 50));
    v2 = v4;
    if ( v4 >= 0 )
      CTransitionVisualController::_MoveWindowOffscreen(*((struct CTopLevelWindow **)a2 + 50), 1);
    else
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v4,
        0xC48u);
  }
  return v2;
}
