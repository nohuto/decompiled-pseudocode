/*
 * XREFs of BgkpLockBgfxCodeSection @ 0x14083C6B0
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140164C40 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkResumePrepare @ 0x140476898 (BgkResumePrepare.c)
 *     BgkInitialize @ 0x1408E447C (BgkInitialize.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MmLockPagableDataSection @ 0x1405BB660 (MmLockPagableDataSection.c)
 */

_QWORD *BgkpLockBgfxCodeSection()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // eax
  char v5; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403D10F0, 0LL);
  v4 = dword_1403CDD58;
  if ( !dword_1403CDD58 )
  {
    ImageSectionHandle = MmLockPagableDataSection(BgkpLockBgfxCodeSection);
    v4 = dword_1403CDD58;
  }
  dword_1403CDD58 = v4 + 1;
  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403D10F0, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403D10F0, v1, v2, v3);
  KeAbPostRelease((ULONG_PTR)&qword_1403D10F0);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
