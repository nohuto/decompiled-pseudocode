/*
 * XREFs of ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C009077C
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00894C0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     OutputDuplProcessTerminate @ 0x1C00F77D4 (OutputDuplProcessTerminate.c)
 *     _lambda_77b62ca48c87c620acb82d9376f9f1ce_::_lambda_invoker_cdecl_ @ 0x1C00FA9B0 (_lambda_77b62ca48c87c620acb82d9376f9f1ce_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C0090640 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C00907E0 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessPendingProcessTerminate(OUTPUTDUPL_CONTEXT **this)
{
  unsigned int i; // edi

  for ( i = 0; i < *((_DWORD *)this + 13); ++i )
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this, i, 0LL, 1, 0, 3);
  OUTPUTDUPL_MGR::ProcessPendingDestroy((OUTPUTDUPL_MGR *)this, 0LL, 0);
}
