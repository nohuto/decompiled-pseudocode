/*
 * XREFs of ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0173FB4
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C016F098 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00CCF24 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z @ 0x1C00CD2DC (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z.c)
 *     ?RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0104990 (-RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0104A14 (-DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C0104A80 (-PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 *     ?DdiRestartFromTimeout@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0178584 (-DdiRestartFromTimeout@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?Reset@DXGDEVICE@@QEAAXXZ @ 0x1C0188C80 (-Reset@DXGDEVICE@@QEAAXXZ.c)
 *     TdrBugcheckOnTimeout @ 0x1C019350C (TdrBugcheckOnTimeout.c)
 */

__int64 __fastcall ADAPTER_RENDER::Reset(PERESOURCE **this, ULONG_PTR BugCheckParameter1)
{
  PERESOURCE **i; // rdx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  PERESOURCE **j; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  int v19; // esi
  DXGDEVICE *k; // rdi
  DXGDEVICE *v21; // rdi
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
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 19, v5, v6, v7);
  if ( !this[52] )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v13 + 24) = 2303LL;
    WdLogEvent5_WdAssertion(v13);
  }
  ((void (__fastcall *)(PERESOURCE *, __int64))this[51][1][6].OwnerTable)(this[52], 1LL);
  if ( (int)ADAPTER_RENDER::DdiRestartFromTimeout((ADAPTER_RENDER *)this) < 0 )
  {
    *(_QWORD *)(BugCheckParameter1 + 104) = this[2][55];
    TdrBugcheckOnTimeout(BugCheckParameter1);
  }
  if ( !this[52] )
  {
    v18 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
    *(_QWORD *)(v18 + 24) = 2320LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v19 = (*(__int64 (__fastcall **)(PERESOURCE *, __int64))&this[51][1][6].ActiveCount)(this[52], 1LL);
  if ( v19 < 0 )
  {
    *(_QWORD *)(BugCheckParameter1 + 104) = *(_QWORD *)&this[51][1][6].ActiveCount;
    TdrBugcheckOnTimeout(BugCheckParameter1);
  }
  ((void (__fastcall *)(PERESOURCE *, _QWORD))this[51][1][4].Address)(this[52], 0LL);
  ADAPTER_RENDER::RestoreFromPurgeSegments(this);
  ADAPTER_RENDER::ResumeVidMmWorkerThread(this, 1, 0);
  memset(this + 61, 0, 0x20uLL);
  this[107] = 0LL;
  this[108] = 0LL;
  for ( k = (DXGDEVICE *)this[15]; k != (DXGDEVICE *)(this + 15) && k; k = *(DXGDEVICE **)k )
    DXGDEVICE::Reset(k);
  v21 = (DXGDEVICE *)(this + 17);
  for ( m = (DXGDEVICE *)this[17]; m != v21 && m; m = *(DXGDEVICE **)m )
    DXGDEVICE::Reset(m);
  return (unsigned int)v19;
}
