/*
 * XREFs of ?ProcessDesktopSwitch@OUTPUTDUPL_MGR@@QEAAXI@Z @ 0x1C01CB570
 * Callers:
 *     <none>
 * Callees:
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C00E2D74 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessDesktopSwitch(OUTPUTDUPL_CONTEXT **this, unsigned int a2)
{
  if ( a2 < *((_DWORD *)this + 13) )
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this, a2, 0LL, 0, 0, 4);
}
