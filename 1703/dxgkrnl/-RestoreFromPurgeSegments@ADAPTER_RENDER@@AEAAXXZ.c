/*
 * XREFs of ?RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0104990
 * Callers:
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00D34C4 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0173FB4 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000E010 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall ADAPTER_RENDER::RestoreFromPurgeSegments(PERESOURCE **this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  PERESOURCE *v6; // rdi
  PERESOURCE *v7; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v3, v2, v4, v5);
    *(_QWORD *)(v10 + 24) = 2594LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v6 = this[55];
  v7 = this[54];
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v3);
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v11, Current);
  ((void (__fastcall *)(PERESOURCE *))v7[1]->Address)(v6);
  if ( v11 )
  {
    v9 = v11 + 112;
    *(_QWORD *)(v11 + 120) = 0LL;
    ExReleasePushLockExclusiveEx(v9, 0LL);
    KeLeaveCriticalRegion();
  }
}
