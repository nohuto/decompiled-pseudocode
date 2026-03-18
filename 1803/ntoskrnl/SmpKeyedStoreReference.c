/*
 * XREFs of SmpKeyedStoreReference @ 0x14008BB9C
 * Callers:
 *     SmpPageWrite @ 0x14008C594 (SmpPageWrite.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     SmpKeyedStoreEntryGet @ 0x14008BD28 (SmpKeyedStoreEntryGet.c)
 *     SmKmStoreReference @ 0x1400901B0 (SmKmStoreReference.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall SmpKeyedStoreReference(signed __int64 *BugCheckParameter2, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // esi
  __int64 v6; // rax
  __int64 v7; // rdi

  CurrentThread = KeGetCurrentThread();
  v3 = -1;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)BugCheckParameter2, 0LL);
  v6 = SmpKeyedStoreEntryGet((ULONG_PTR)BugCheckParameter2);
  v7 = v6;
  if ( v6 )
  {
    SmKmStoreReference(a2, *(unsigned __int16 *)(v6 + 16));
    v3 = *(unsigned __int16 *)(v7 + 16);
  }
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
  return v3;
}
