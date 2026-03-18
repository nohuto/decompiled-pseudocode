/*
 * XREFs of DxgkFinishPnPTransition @ 0x1C0123684
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C011BC30 (DpiFdoStartAdapterThread.c)
 *     DpiFinishPnPTransitionCallback @ 0x1C0123660 (DpiFinishPnPTransitionCallback.c)
 *     DpiFdoStopAdapter @ 0x1C01DEF64 (DpiFdoStopAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FinishPnPTransitionOnSession@DXGSESSIONMGR@@QEAAXKJ@Z @ 0x1C010E390 (-FinishPnPTransitionOnSession@DXGSESSIONMGR@@QEAAXKJ@Z.c)
 *     ?FinishPnPTransition@DXGSESSIONMGR@@QEAAXJ@Z @ 0x1C010E41C (-FinishPnPTransition@DXGSESSIONMGR@@QEAAXJ@Z.c)
 */

void __fastcall DxgkFinishPnPTransition(__int64 a1)
{
  unsigned int v1; // ebx
  DXGSESSIONMGR *v2; // rcx

  v1 = a1;
  v2 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(a1) + 73);
  if ( v1 == -1 )
    DXGSESSIONMGR::FinishPnPTransition(v2);
  else
    DXGSESSIONMGR::FinishPnPTransitionOnSession(v2, v1);
}
