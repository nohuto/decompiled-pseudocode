/*
 * XREFs of ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002EF7C
 * Callers:
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180009C80 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x1800302A0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x1800330D8 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x180035950 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x1800417F4 (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x1800419B0 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?CreateDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x180043580 (-CreateDesktopRenderTarget@CDesktopManager@@AEAAJXZ.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x180093F7C (-Capture@CScreenRotation@@QEAAJXZ.c)
 * Callees:
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x180015AD8 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 */

struct CVisual *__fastcall CWindowList::GetRenderTargetRootVisualForDesktop(CWindowList *this, __int64 a2)
{
  _QWORD *Element; // rcx
  struct CVisual *result; // rax

  Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
              (struct _RTL_GENERIC_TABLE *)((char *)this + 8),
              a2);
  result = 0LL;
  if ( Element )
    return (struct CVisual *)Element[1];
  return result;
}
