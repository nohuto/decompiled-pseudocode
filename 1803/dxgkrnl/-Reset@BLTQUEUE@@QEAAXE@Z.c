/*
 * XREFs of ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C01D63B4
 * Callers:
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01569C8 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0157194 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C018C190 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C00D95C0 (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 *     ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x1C01D4750 (-DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ.c)
 */

void __fastcall BLTQUEUE::Reset(BLTQUEUE *this, char a2)
{
  if ( *((_QWORD *)this + 55) )
  {
    *((_BYTE *)this + 401) = 1;
    BLTQUEUE::IssueCommand(this);
    BLTQUEUE::DestroyStagingBuffer(this);
    *((_QWORD *)this + 25) = 0LL;
    if ( !a2 )
      *((_DWORD *)this + 213) = 0;
  }
}
