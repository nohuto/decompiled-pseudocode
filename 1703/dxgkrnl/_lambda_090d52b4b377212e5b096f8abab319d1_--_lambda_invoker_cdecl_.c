/*
 * XREFs of _lambda_090d52b4b377212e5b096f8abab319d1_::_lambda_invoker_cdecl_ @ 0x1C01AB9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C00DDD20 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C00DDEC0 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 */

__int64 __fastcall lambda_090d52b4b377212e5b096f8abab319d1_::_lambda_invoker_cdecl_(
        OUTPUTDUPL_CONTEXT **this,
        __int64 a2)
{
  __int64 v3; // r9

  OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(
    this,
    *(unsigned int *)(a2 + 4),
    0LL,
    *(_DWORD *)(a2 + 8) == 0,
    0,
    *(_DWORD *)(a2 + 8) != 0 ? 9 : 0);
  OUTPUTDUPL_MGR::ProcessPendingDestroy((OUTPUTDUPL_MGR *)this, 0LL, 0LL, v3);
  return 0LL;
}
