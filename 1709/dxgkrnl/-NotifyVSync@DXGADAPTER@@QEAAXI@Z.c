/*
 * XREFs of ?NotifyVSync@DXGADAPTER@@QEAAXI@Z @ 0x1C001EB88
 * Callers:
 *     DxgNotifyVSyncCB @ 0x1C00256F0 (DxgNotifyVSyncCB.c)
 * Callees:
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?RecordVSync@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C0028F00 (-RecordVSync@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::NotifyVSync(LARGE_INTEGER *this, __int64 a2, __int64 a3)
{
  LARGE_INTEGER PerformanceCounter; // rbx
  DWORD v5; // esi
  LARGE_INTEGER v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 8009);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)&this[452].QuadPart, &LockHandle);
  v5 = 0;
  if ( !this[428].LowPart )
  {
    v6 = this[454];
    if ( v6.QuadPart )
      _InterlockedExchange64((volatile __int64 *)&this[455], PerformanceCounter.QuadPart - v6.QuadPart);
    this[454] = PerformanceCounter;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( this[457].LowPart )
  {
    do
      DXGPOWERSTATISTICSTRANSITIONENGINE::RecordVSync((DXGPOWERSTATISTICSTRANSITIONENGINE *)(this[456].QuadPart
                                                                                           + 136
                                                                                           + 248LL * v5++));
    while ( v5 < this[457].LowPart );
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v7, &EventProfilerExit, v8, 8009);
}
