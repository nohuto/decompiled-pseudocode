/*
 * XREFs of ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C015BA34
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C014F2D4 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014EF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C009C000 (-PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00A619C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z @ 0x1C00A6564 (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z.c)
 *     ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0159758 (-DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ @ 0x1C015BCA8 (-RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?DdiRestartFromTimeout@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0161630 (-DdiRestartFromTimeout@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?Reset@DXGDEVICE@@QEAAXXZ @ 0x1C018BFD4 (-Reset@DXGDEVICE@@QEAAXXZ.c)
 *     TdrBugcheckOnTimeout @ 0x1C019ACA4 (TdrBugcheckOnTimeout.c)
 */

__int64 __fastcall ADAPTER_RENDER::Reset(PERESOURCE **this, ULONG_PTR BugCheckParameter1)
{
  PERESOURCE **i; // rdx
  PERESOURCE **j; // rax
  PERESOURCE *v6; // rcx
  __int64 v7; // rax
  PERESOURCE *v8; // rcx
  __int64 v9; // rax
  int v10; // esi
  PERESOURCE *v11; // rax
  DXGDEVICE *k; // rdi
  DXGDEVICE *v13; // rdi
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
  v6 = this[66];
  if ( !v6 )
  {
    v7 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v7 + 24) = 2636LL;
    WdLogEvent5_WdAssertion(v7);
    v6 = this[66];
  }
  (*(void (__fastcall **)(PERESOURCE *, __int64))&this[65][1][7].ActiveCount)(v6, 1LL);
  if ( (int)ADAPTER_RENDER::DdiRestartFromTimeout((ADAPTER_RENDER *)this) < 0 )
  {
    *(_QWORD *)(BugCheckParameter1 + 104) = this[2][55];
    TdrBugcheckOnTimeout(BugCheckParameter1);
  }
  v8 = this[66];
  if ( !v8 )
  {
    v9 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v9 + 24) = 2653LL;
    WdLogEvent5_WdAssertion(v9);
    v8 = this[66];
  }
  v10 = ((__int64 (__fastcall *)(PERESOURCE *, __int64))this[65][1][7].SharedWaiters)(v8, 1LL);
  v11 = this[65];
  if ( v10 < 0 )
  {
    *(_QWORD *)(BugCheckParameter1 + 104) = v11[1][7].SharedWaiters;
    TdrBugcheckOnTimeout(BugCheckParameter1);
  }
  ((void (__fastcall *)(PERESOURCE *, _QWORD))v11[1][5].Reserved2)(this[66], 0LL);
  ADAPTER_RENDER::RestoreFromPurgeSegments((ADAPTER_RENDER *)this);
  ADAPTER_RENDER::ResumeVidMmWorkerThread(this, 1, 0);
  memset(this + 75, 0, 0x20uLL);
  this[121] = 0LL;
  this[122] = 0LL;
  for ( k = (DXGDEVICE *)this[15]; k != (DXGDEVICE *)(this + 15) && k; k = *(DXGDEVICE **)k )
    DXGDEVICE::Reset(k);
  v13 = (DXGDEVICE *)(this + 17);
  for ( m = (DXGDEVICE *)this[17]; m != v13 && m; m = *(DXGDEVICE **)m )
    DXGDEVICE::Reset(m);
  return (unsigned int)v10;
}
