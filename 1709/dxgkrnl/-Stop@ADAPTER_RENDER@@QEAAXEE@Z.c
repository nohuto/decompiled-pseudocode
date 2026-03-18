/*
 * XREFs of ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C0177F14
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C0172EE4 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007D10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0083A38 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C0083C04 (-EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1C0083DE0 (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z @ 0x1C0083E40 (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008BA68 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C0091590 (-DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C0102788 (-PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 *     ?Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ @ 0x1C01701C4 (-Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ.c)
 *     ?FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ @ 0x1C017735C (-FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C019E1DC (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 */

void __fastcall ADAPTER_RENDER::Stop(DXGDEVICE **this, char a2, unsigned __int8 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rax
  DXGDEVICE *i; // rbx
  DXGDEVICE *j; // rbx
  DXGADAPTERSYNCOBJECT *k; // rbx
  DXGSHAREDRESOURCE **m; // rbx
  __int64 v14; // rcx
  struct DXGSYNCOBJECT *v15; // r15
  PERESOURCE *Global; // rax

  ADAPTER_RENDER::EnableClockCalibration((ADAPTER_RENDER *)this, 0);
  *((_BYTE *)this + 761) = a2;
  if ( !a3 )
  {
    if ( !KeReadStateEvent((PRKEVENT)this[2] + 2) )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6, v8);
      v9[3] = 275LL;
      v9[4] = 6LL;
      v9[5] = this[2];
      v9[6] = 0LL;
      v9[7] = 0LL;
      WdLogEvent5_WdCriticalError(v9);
    }
    ADAPTER_RENDER::FlushDeferredDestructions((PERESOURCE **)this);
  }
  for ( i = this[15]; i != (DXGDEVICE *)(this + 15) && i; i = *(DXGDEVICE **)i )
    DXGDEVICE::Stop(i, a3);
  for ( j = this[17]; j != (DXGDEVICE *)(this + 17) && j; j = *(DXGDEVICE **)j )
    DXGDEVICE::Stop(j, a3);
  if ( !a3 )
  {
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 19));
    for ( k = this[24]; k != (DXGADAPTERSYNCOBJECT *)(this + 24) && k; k = *(DXGADAPTERSYNCOBJECT **)k )
      DXGADAPTERSYNCOBJECT::Stop(k);
    DXGFASTMUTEX::Release(this + 19);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this + 26, 0LL);
  this[27] = KeGetCurrentThread();
  for ( m = (DXGSHAREDRESOURCE **)this[28]; m != this + 28; m = (DXGSHAREDRESOURCE **)*m )
  {
    DXGSHAREDRESOURCE::DestroyCoreAllocations(m[2], 0LL, 0);
    *((_DWORD *)m[2] + 3) |= 0x10u;
    v15 = m[4];
    if ( v15 )
    {
      Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v14);
      DXGGLOBAL::DestroySyncObject(Global, v15, 0);
      m[4] = 0LL;
    }
  }
  this[27] = 0LL;
  ExReleasePushLockExclusiveEx(this + 26, 0LL);
  KeLeaveCriticalRegion();
  if ( !a3 && !*((_BYTE *)this[2] + 185) )
  {
    ADAPTER_RENDER::FlushScheduler((__int64)this, 5, 0xFFFFFFFF, 0);
    ADAPTER_RENDER::SuspendVidMmWorkerThread((__int64)this, 1u, 0);
    ADAPTER_RENDER::ResumeVidMmWorkerThread((PERESOURCE **)this, 0, 1);
    ADAPTER_RENDER::PurgeSegments((struct _EX_RUNDOWN_REF *)this, 0, 0LL);
    ADAPTER_RENDER::FlushScheduler((__int64)this, 5, 0xFFFFFFFF, 0);
  }
}
