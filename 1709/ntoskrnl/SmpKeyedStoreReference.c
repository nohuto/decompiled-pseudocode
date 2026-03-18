/*
 * XREFs of SmpKeyedStoreReference @ 0x14027183C
 * Callers:
 *     SmpPageWrite @ 0x1402718E0 (SmpPageWrite.c)
 * Callees:
 *     SmKmStoreReference @ 0x14000A2E4 (SmKmStoreReference.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     SmpKeyedStoreEntryGet @ 0x1400B9BEC (SmpKeyedStoreEntryGet.c)
 */

__int64 __fastcall SmpKeyedStoreReference(signed __int64 *BugCheckParameter2, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // esi
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  CurrentThread = KeGetCurrentThread();
  v4 = -1;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)BugCheckParameter2, 0LL);
  v7 = SmpKeyedStoreEntryGet((ULONG_PTR)BugCheckParameter2, &v10, 0, 1);
  v8 = v7;
  if ( v7 )
  {
    SmKmStoreReference(a2, *((unsigned __int16 *)v7 + 8));
    v4 = *((unsigned __int16 *)v8 + 8);
  }
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
  return v4;
}
