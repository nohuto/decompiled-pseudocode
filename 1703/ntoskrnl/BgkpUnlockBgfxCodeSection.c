/*
 * XREFs of BgkpUnlockBgfxCodeSection @ 0x140755710
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140140280 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkResumeFinished @ 0x140409F64 (BgkResumeFinished.c)
 *     BgkResumePrepare @ 0x14040CFC0 (BgkResumePrepare.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x14006CCE0 (MmUnlockPagableImageSection.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

__int64 BgkpUnlockBgfxCodeSection()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14036EBD0, 0LL);
  if ( !--dword_14036E498 )
  {
    MmUnlockPagableImageSection(ImageSectionHandle);
    ImageSectionHandle = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036EBD0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14036EBD0);
  KeAbPostRelease((ULONG_PTR)&qword_14036EBD0);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
