/*
 * XREFs of BgkpUnlockBgfxCodeSection @ 0x1407D08B8
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14013EC50 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkResumeFinished @ 0x14042A5B8 (BgkResumeFinished.c)
 *     BgkResumePrepare @ 0x14042A5F4 (BgkResumePrepare.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MmUnlockPagableImageSection @ 0x1400BC610 (MmUnlockPagableImageSection.c)
 */

_QWORD *BgkpUnlockBgfxCodeSection()
{
  struct _KTHREAD *CurrentThread; // rax
  char v1; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14038CE00, 0LL);
  if ( !--dword_140389F1C )
  {
    MmUnlockPagableImageSection(ImageSectionHandle);
    ImageSectionHandle = 0LL;
  }
  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14038CE00, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v1 & 2) != 0 && (v1 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14038CE00);
  KeAbPostRelease((ULONG_PTR)&qword_14038CE00);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
