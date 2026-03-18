/*
 * XREFs of ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C007F72C
 * Callers:
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00AEBD0 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01764B0 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C019E1DC (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x1C007E954 (-DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C007F5EC (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
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
