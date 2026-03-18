/*
 * XREFs of DxgkSessionReconnected @ 0x1C0104B30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C0090314 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C00FC2E0 (DxgkIncreaseSessionAdapterUniqueness.c)
 *     OutputDuplRemoteSessionReconnected @ 0x1C01CA4F4 (OutputDuplRemoteSessionReconnected.c)
 */

void __fastcall DxgkSessionReconnected(__int64 a1, unsigned int a2)
{
  char v3; // bl
  __int64 v4; // rcx
  struct DXGGLOBAL *Global; // rax

  v3 = a1;
  DxgkIncreaseSessionAdapterUniqueness(a1);
  if ( v3 )
  {
    Global = DXGGLOBAL::GetGlobal(v4);
    DXGSESSIONMGR::SetConsoleSession(*((struct DXGSESSIONDATA ***)Global + 73), 1);
  }
  else
  {
    OutputDuplRemoteSessionReconnected(a2);
  }
}
