/*
 * XREFs of DxgkFinishPnPTransition @ 0x1C011B454
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C0114BE0 (DpiFdoStartAdapterThread.c)
 *     DpiFinishPnPTransitionCallback @ 0x1C011B430 (DpiFinishPnPTransitionCallback.c)
 *     DpiFdoStopAdapter @ 0x1C01C545C (DpiFdoStopAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DxgkFinishPnPTransition(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v5; // edx
  DXGSESSIONMGR *v6; // rcx
  int v7; // r8d

  v4 = a1;
  v6 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(a1, a2, a3, a4) + 73);
  if ( v4 == -1 )
    DXGSESSIONMGR::FinishPnPTransition(v6, v5);
  else
    DXGSESSIONMGR::FinishPnPTransitionOnSession(v6, v4, v7);
}
