/*
 * XREFs of DxgkSessionConnected @ 0x1C00A6570
 * Callers:
 *     <none>
 * Callees:
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C00A65A0 (DxgkIncreaseSessionAdapterUniqueness.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C00DD6DC (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 */

void __fastcall DxgkSessionConnected(char a1)
{
  struct DXGGLOBAL *Global; // rax

  DxgkIncreaseSessionAdapterUniqueness();
  if ( a1 )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGSESSIONMGR::SetConsoleSession(*((DXGSESSIONMGR **)Global + 73), 1u);
  }
}
