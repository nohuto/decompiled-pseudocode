/*
 * XREFs of ?RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0102698
 * Callers:
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0084B00 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0177AA4 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003944 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall ADAPTER_RENDER::RestoreFromPurgeSegments(PERESOURCE **this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  PERESOURCE *v4; // rdi
  PERESOURCE *v5; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v8 + 24) = 2726LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v4 = this[67];
  v5 = this[66];
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v3, v2);
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v9, Current);
  ((void (__fastcall *)(PERESOURCE *))v5[1]->Address)(v4);
  if ( v9 )
  {
    v7 = v9 + 136;
    *(_QWORD *)(v9 + 144) = 0LL;
    ExReleasePushLockExclusiveEx(v7, 0LL);
    KeLeaveCriticalRegion();
  }
}
