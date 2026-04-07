/*
 * XREFs of _lambda_01b389546427082a9499a493e716ac63_::operator() @ 0x180042230
 * Callers:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_01b389546427082a9499a493e716ac63___ @ 0x180042170 (CTransitionVisualController--ForEachOwnedWindow__lambda_01b389546427082a9499a493e716ac63___.c)
 * Callees:
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x1800094AC (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18000B220 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x18000B368 (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 */

__int64 __fastcall lambda_01b389546427082a9499a493e716ac63_::operator()(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  char v6; // al

  v4 = 0;
  if ( CTransitionVisualController::ShouldCloneWindow(*(HWND *)(a2 + 40)) )
  {
    if ( (*(_DWORD *)(a2 + 100) & 0x20000000) == 0 )
    {
      v6 = *(_BYTE *)(a2 + 592);
      if ( (v6 & 4) == 0
        && (v6 & 1) != 0
        && (**(_DWORD **)a1 == -1
         || !CAnimationScheduler::IsWindowCurrentlyAnimating(
               *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 28),
               *(HWND *)(a2 + 40),
               **(_DWORD **)a1,
               0)) )
      {
        return (unsigned int)CTransitionVisualController::_StageCloneRelative(
                               *(CTransitionVisualController **)(a1 + 8),
                               *(struct CTopLevelWindow **)(a2 + 392),
                               **(struct CVisual ***)(a1 + 16),
                               0,
                               0LL,
                               0,
                               **(_BYTE **)(a1 + 24),
                               1,
                               *(bool **)(a1 + 32));
      }
    }
  }
  return v4;
}
