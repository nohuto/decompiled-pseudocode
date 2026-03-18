/*
 * XREFs of ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x1C010271C
 * Callers:
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C0102064 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0177AA4 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DisablePinnedHardware@DXGDEVICE@@QEAAXXZ @ 0x1C0102820 (-DisablePinnedHardware@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::DisablePinnedHardware(PERESOURCE **this)
{
  __int64 v2; // rcx
  DXGDEVICE *i; // rbx
  DXGDEVICE *j; // rbx
  __int64 v5; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v5 + 24) = 1855LL;
    WdLogEvent5_WdAssertion(v5);
  }
  for ( i = (DXGDEVICE *)this[15]; i != (DXGDEVICE *)(this + 15) && i; i = *(DXGDEVICE **)i )
    DXGDEVICE::DisablePinnedHardware(i);
  for ( j = (DXGDEVICE *)this[17]; j != (DXGDEVICE *)(this + 17) && j; j = *(DXGDEVICE **)j )
    DXGDEVICE::DisablePinnedHardware(j);
}
