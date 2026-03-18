/*
 * XREFs of KeReleaseSpinLock @ 0x1400E2730
 * Callers:
 *     CcInitializeCacheMapEx @ 0x1400636F0 (CcInitializeCacheMapEx.c)
 *     NtCancelWaitCompletionPacket @ 0x1400E0F58 (NtCancelWaitCompletionPacket.c)
 *     IopCloseWaitCompletionPacket @ 0x1400E2760 (IopCloseWaitCompletionPacket.c)
 *     FsRtlPrivateLock @ 0x140105960 (FsRtlPrivateLock.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14020503C (KiReleaseSpinLockInstrumented.c)
 */

void __stdcall KeReleaseSpinLock(PKSPIN_LOCK SpinLock, KIRQL NewIrql)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(SpinLock, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)SpinLock, 0LL);
  __writecr8(NewIrql);
}
