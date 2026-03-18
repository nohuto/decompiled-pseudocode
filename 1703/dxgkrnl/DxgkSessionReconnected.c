/*
 * XREFs of DxgkSessionReconnected @ 0x1C0105230
 * Callers:
 *     <none>
 * Callees:
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C00A65A0 (DxgkIncreaseSessionAdapterUniqueness.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C00DD6DC (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     OutputDuplRemoteSessionReconnected @ 0x1C01B0738 (OutputDuplRemoteSessionReconnected.c)
 */

void __fastcall DxgkSessionReconnected(char a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  DxgkIncreaseSessionAdapterUniqueness();
  if ( a1 )
  {
    Global = DXGGLOBAL::GetGlobal(v5, v4, v6, v7);
    LOBYTE(v9) = 1;
    DXGSESSIONMGR::SetConsoleSession(*((struct DXGSESSIONDATA ***)Global + 73), v9, v10, v11);
  }
  else
  {
    OutputDuplRemoteSessionReconnected(a2);
  }
}
