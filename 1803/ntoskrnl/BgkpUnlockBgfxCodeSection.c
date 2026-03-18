/*
 * XREFs of BgkpUnlockBgfxCodeSection @ 0x14083B364
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140164C40 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkResumeFinished @ 0x1404767D0 (BgkResumeFinished.c)
 *     BgkResumePrepare @ 0x140476898 (BgkResumePrepare.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     MmUnlockPagableImageSection @ 0x1400C1700 (MmUnlockPagableImageSection.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

_QWORD *BgkpUnlockBgfxCodeSection()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  char v4; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403D10F0, 0LL);
  if ( !--dword_1403CDD58 )
  {
    MmUnlockPagableImageSection(ImageSectionHandle);
    ImageSectionHandle = 0LL;
  }
  v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403D10F0, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403D10F0, v1, v2, v3);
  KeAbPostRelease((ULONG_PTR)&qword_1403D10F0);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
