/*
 * XREFs of BgkpLockBgfxCodeSection @ 0x1407D0C80
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14013EC50 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkResumePrepare @ 0x14042A5F4 (BgkResumePrepare.c)
 *     BgkInitialize @ 0x14086FB18 (BgkInitialize.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MmLockPagableDataSection @ 0x140516060 (MmLockPagableDataSection.c)
 */

_QWORD *BgkpLockBgfxCodeSection()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // eax
  char v2; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14038CE00, 0LL);
  v1 = dword_140389F1C;
  if ( !dword_140389F1C )
  {
    ImageSectionHandle = MmLockPagableDataSection(BgkpLockBgfxCodeSection);
    v1 = dword_140389F1C;
  }
  dword_140389F1C = v1 + 1;
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14038CE00, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14038CE00);
  KeAbPostRelease((ULONG_PTR)&qword_14038CE00);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
