/*
 * XREFs of IopAcquireFastLock_2 @ 0x14008AA84
 * Callers:
 *     BuildQueryDirectoryIrp @ 0x1404CB2D0 (BuildQueryDirectoryIrp.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140582FC0 (NtNotifyChangeDirectoryFileEx.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObpIncrPointerCount @ 0x1400A0910 (ObpIncrPointerCount.c)
 *     ObpPushStackInfo @ 0x140239558 (ObpPushStackInfo.c)
 */

char __fastcall IopAcquireFastLock_2(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( _InterlockedExchange((volatile __int32 *)(a1 + 116), 1) )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
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
