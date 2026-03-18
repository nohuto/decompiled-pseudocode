/*
 * XREFs of ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0159758
 * Callers:
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C014848C (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C015BA34 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DisablePinnedHardware@DXGDEVICE@@QEAAXXZ @ 0x1C018A344 (-DisablePinnedHardware@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::DisablePinnedHardware(PERESOURCE **this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  DXGDEVICE *i; // rbx
  DXGDEVICE *j; // rbx

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v3 + 24) = 2119LL;
    WdLogEvent5_WdAssertion(v3);
  }
  for ( i = (DXGDEVICE *)this[15]; i != (DXGDEVICE *)(this + 15) && i; i = *(DXGDEVICE **)i )
    DXGDEVICE::DisablePinnedHardware(i);
  for ( j = (DXGDEVICE *)this[17]; j != (DXGDEVICE *)(this + 17) && j; j = *(DXGDEVICE **)j )
    DXGDEVICE::DisablePinnedHardware(j);
}
