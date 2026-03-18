/*
 * XREFs of DxgkSessionConnected @ 0x1C00FC2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C0090314 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C00FC2E0 (DxgkIncreaseSessionAdapterUniqueness.c)
 */

void __fastcall DxgkSessionConnected(char a1)
{
  __int64 v2; // rcx
  struct DXGGLOBAL *Global; // rax

  DxgkIncreaseSessionAdapterUniqueness();
  if ( a1 )
  {
    Global = DXGGLOBAL::GetGlobal(v2);
    DXGSESSIONMGR::SetConsoleSession(*((struct DXGSESSIONDATA ***)Global + 73), 1);
  }
}
