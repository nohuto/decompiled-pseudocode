/*
 * XREFs of BgkpLockBgfxCodeSection @ 0x140755680
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140140280 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkResumePrepare @ 0x14040CFC0 (BgkResumePrepare.c)
 *     BgkInitialize @ 0x14083795C (BgkInitialize.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     MmLockPagableDataSection @ 0x1404B2580 (MmLockPagableDataSection.c)
 */

__int64 BgkpLockBgfxCodeSection()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14036EBD0, 0LL);
  v1 = dword_14036E498;
  if ( !dword_14036E498 )
  {
    ImageSectionHandle = MmLockPagableDataSection(BgkpLockBgfxCodeSection);
    v1 = dword_14036E498;
  }
  dword_14036E498 = v1 + 1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036EBD0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14036EBD0);
  KeAbPostRelease((ULONG_PTR)&qword_14036EBD0);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
