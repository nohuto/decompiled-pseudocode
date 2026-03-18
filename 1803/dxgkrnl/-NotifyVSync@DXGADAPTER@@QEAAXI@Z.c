/*
 * XREFs of ?NotifyVSync@DXGADAPTER@@QEAAXI@Z @ 0x1C0025A58
 * Callers:
 *     DxgNotifyVSyncCB @ 0x1C002E730 (DxgNotifyVSyncCB.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?RecordVSync@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C0033AA8 (-RecordVSync@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::NotifyVSync(LARGE_INTEGER *this, __int64 a2, __int64 a3)
{
  DWORD v3; // esi
  LARGE_INTEGER PerformanceCounter; // rbx
  LARGE_INTEGER v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+28h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0;
  v10 = 0LL;
  v9 = 8009;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 8009);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v9, 8009);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)&this[472].QuadPart, &LockHandle);
  if ( !this[448].LowPart )
  {
    v6 = this[474];
    if ( v6.QuadPart )
      _InterlockedExchange64((volatile __int64 *)&this[475], PerformanceCounter.QuadPart - v6.QuadPart);
    this[474] = PerformanceCounter;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( this[477].LowPart )
  {
    do
      DXGPOWERSTATISTICSTRANSITIONENGINE::RecordVSync((DXGPOWERSTATISTICSTRANSITIONENGINE *)(this[476].QuadPart
                                                                                           + 136
                                                                                           + 248LL * v3++));
    while ( v3 < this[477].LowPart );
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v9);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v7, &EventProfilerExit, v8, v9);
}
