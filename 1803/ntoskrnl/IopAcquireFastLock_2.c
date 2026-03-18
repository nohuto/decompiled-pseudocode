/*
 * XREFs of IopAcquireFastLock_2 @ 0x1400EB86C
 * Callers:
 *     NtNotifyChangeDirectoryFileEx @ 0x140572550 (NtNotifyChangeDirectoryFileEx.c)
 *     BuildQueryDirectoryIrp @ 0x140596100 (BuildQueryDirectoryIrp.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObpIncrPointerCount @ 0x1400F3900 (ObpIncrPointerCount.c)
 *     ObpPushStackInfo @ 0x140271018 (ObpPushStackInfo.c)
 */

char __fastcall IopAcquireFastLock_2(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( _InterlockedExchange((volatile __int32 *)(a1 + 116), 1) )
  {
    KeLeaveCriticalRegionThread(KeGetCurrentThread());
    return 0;
  }
  else
  {
    v2 = a1 - 48;
    if ( ObpTraceFlags )
      ObpPushStackInfo(a1 - 48);
    ObpIncrPointerCount(v2);
    return 1;
  }
}
