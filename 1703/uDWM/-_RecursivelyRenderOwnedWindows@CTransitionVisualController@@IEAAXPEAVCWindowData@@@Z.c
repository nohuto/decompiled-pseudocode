/*
 * XREFs of ?_RecursivelyRenderOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x180009B54
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180008E0C (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_4ad19751f65124ce209d5138e63b7715___ @ 0x18000CF04 (CTransitionVisualController--ForEachOwnedWindow__lambda_4ad19751f65124ce209d5138e63b7715___.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180023490 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 */

void __fastcall CTransitionVisualController::_RecursivelyRenderOwnedWindows(
        CTransitionVisualController *this,
        struct CWindowData *a2)
{
  CVisual *v2; // rcx
  __int64 v4; // r8
  CTransitionVisualController *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  v2 = (CVisual *)*((_QWORD *)a2 + 50);
  if ( v2 )
  {
    if ( (int)CVisual::RenderRecursive(v2) >= 0 )
    {
      LOBYTE(v4) = 1;
      LOBYTE(v5) = 0;
      CTransitionVisualController::ForEachOwnedWindow__lambda_4ad19751f65124ce209d5138e63b7715___(a2, &v5, v4);
    }
  }
}
