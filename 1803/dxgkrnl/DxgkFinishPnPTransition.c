/*
 * XREFs of DxgkFinishPnPTransition @ 0x1C01D1058
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C01FA590 (DpiFdoStartAdapterThread.c)
 *     DpiFdoStopAdapter @ 0x1C01FAB88 (DpiFdoStopAdapter.c)
 *     DpiFinishPnPTransitionCallback @ 0x1C01FD860 (DpiFinishPnPTransitionCallback.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FinishPnPTransition@DXGSESSIONMGR@@QEAAXJ@Z @ 0x1C01CF9F0 (-FinishPnPTransition@DXGSESSIONMGR@@QEAAXJ@Z.c)
 *     ?FinishPnPTransitionOnSession@DXGSESSIONMGR@@QEAAXKJ@Z @ 0x1C01CFA54 (-FinishPnPTransitionOnSession@DXGSESSIONMGR@@QEAAXKJ@Z.c)
 */

void __fastcall DxgkFinishPnPTransition(__int64 a1)
{
  unsigned int v1; // ebx
  DXGSESSIONMGR *v2; // rcx

  v1 = a1;
  v2 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(a1) + 74);
  if ( v1 == -1 )
    DXGSESSIONMGR::FinishPnPTransition(v2);
  else
    DXGSESSIONMGR::FinishPnPTransitionOnSession(v2, v1);
}
