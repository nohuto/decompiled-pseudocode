/*
 * XREFs of ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0177AA4
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C017286C (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007D10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0083A38 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z @ 0x1C0083E40 (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z.c)
 *     ?RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0102698 (-RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x1C010271C (-DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C0102788 (-PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 *     ?DdiRestartFromTimeout@ADAPTER_RENDER@@QEAAJXZ @ 0x1C017BEB8 (-DdiRestartFromTimeout@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?Reset@DXGDEVICE@@QEAAXXZ @ 0x1C019E020 (-Reset@DXGDEVICE@@QEAAXXZ.c)
 *     TdrBugcheckOnTimeout @ 0x1C01A8024 (TdrBugcheckOnTimeout.c)
 */

__int64 __fastcall ADAPTER_RENDER::Reset(PERESOURCE **this, ULONG_PTR BugCheckParameter1)
{
  PERESOURCE **i; // rdx
  PERESOURCE **j; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // esi
  DXGDEVICE *k; // rdi
  DXGDEVICE *v12; // rdi
  DXGDEVICE *m; // rbx

  ADAPTER_RENDER::FlushScheduler((__int64)this, 4, 0xFFFFFFFF, 0);
  ADAPTER_RENDER::DisablePinnedHardware(this);
  ADAPTER_RENDER::PurgeSegments((struct _EX_RUNDOWN_REF *)this, 0, 0LL);
  ADAPTER_RENDER::FlushScheduler((__int64)this, 4, 0xFFFFFFFF, 0);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this + 26, 0LL);
  this[27] = (PERESOURCE *)KeGetCurrentThread();
  for ( i = (PERESOURCE **)this[28]; i != this + 28; i = (PERESOURCE **)*i )
    *((_DWORD *)i[2] + 3) |= 0x10u;
  this[27] = 0LL;
  ExReleasePushLockExclusiveEx(this + 26, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 19));
  for ( j = (PERESOURCE **)this[24]; j != this + 24 && j; j = (PERESOURCE **)*j )
    *((_BYTE *)j + 25) = 1;
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 19);
  if ( !this[64] )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 2360LL;
    WdLogEvent5_WdAssertion(v7);
  }
  ((void (__fastcall *)(PERESOURCE *, __int64))this[63][1][6].OwnerTable)(this[64], 1LL);
  if ( (int)ADAPTER_RENDER::DdiRestartFromTimeout((ADAPTER_RENDER *)this) < 0 )
  {
    *(_QWORD *)(BugCheckParameter1 + 104) = this[2][55];
    TdrBugcheckOnTimeout(BugCheckParameter1);
  }
  if ( !this[64] )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 2377LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = (*(__int64 (__fastcall **)(PERESOURCE *, __int64))&this[63][1][6].ActiveCount)(this[64], 1LL);
  if ( v10 < 0 )
  {
    *(_QWORD *)(BugCheckParameter1 + 104) = *(_QWORD *)&this[63][1][6].ActiveCount;
    TdrBugcheckOnTimeout(BugCheckParameter1);
  }
  ((void (__fastcall *)(PERESOURCE *, _QWORD))this[63][1][4].Address)(this[64], 0LL);
  ADAPTER_RENDER::RestoreFromPurgeSegments(this);
  ADAPTER_RENDER::ResumeVidMmWorkerThread(this, 1, 0);
  memset(this + 73, 0, 0x20uLL);
  this[119] = 0LL;
  this[120] = 0LL;
  for ( k = (DXGDEVICE *)this[15]; k != (DXGDEVICE *)(this + 15) && k; k = *(DXGDEVICE **)k )
    DXGDEVICE::Reset(k);
  v12 = (DXGDEVICE *)(this + 17);
  for ( m = (DXGDEVICE *)this[17]; m != v12 && m; m = *(DXGDEVICE **)m )
    DXGDEVICE::Reset(m);
  return (unsigned int)v10;
}
