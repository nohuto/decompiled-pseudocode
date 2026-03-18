/*
 * XREFs of ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0104A14
 * Callers:
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C0104760 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0173FB4 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DisablePinnedHardware@DXGDEVICE@@QEAAXXZ @ 0x1C0104B14 (-DisablePinnedHardware@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::DisablePinnedHardware(PERESOURCE **this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  DXGDEVICE *i; // rbx
  DXGDEVICE *j; // rbx
  __int64 v8; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v3, v2, v4, v5);
    *(_QWORD *)(v8 + 24) = 1798LL;
    WdLogEvent5_WdAssertion(v8);
  }
  for ( i = (DXGDEVICE *)this[15]; i != (DXGDEVICE *)(this + 15) && i; i = *(DXGDEVICE **)i )
    DXGDEVICE::DisablePinnedHardware(i);
  for ( j = (DXGDEVICE *)this[17]; j != (DXGDEVICE *)(this + 17) && j; j = *(DXGDEVICE **)j )
    DXGDEVICE::DisablePinnedHardware(j);
}
