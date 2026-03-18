/*
 * XREFs of ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C008483C
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00A9BB0 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00AD1DC (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00ECDD0 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     DxgkGetScanLine @ 0x1C00FDDF0 (DxgkGetScanLine.c)
 *     ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z @ 0x1C016F2F0 (-CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C01AD6FC (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007B20 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 */

unsigned __int8 __fastcall DXGADAPTER::IsVSyncAvailable(ADAPTER_DISPLAY **this, unsigned int a2)
{
  char v2; // bl
  ADAPTER_DISPLAY *v5; // rcx
  __int64 v7; // rax

  v2 = 0;
  if ( !this[288] )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v7 + 24) = 8208LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v5 = this[288];
  if ( v5 && ADAPTER_DISPLAY::IsVidPnSourceActive(v5, a2) )
    return 1;
  return v2;
}
