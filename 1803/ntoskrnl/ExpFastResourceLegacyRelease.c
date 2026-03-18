/*
 * XREFs of ExpFastResourceLegacyRelease @ 0x140157EE0
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14005CED0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     ExReleaseResourceForThreadLite @ 0x1400AA7B0 (ExReleaseResourceForThreadLite.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1401027C0 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 * Callees:
 *     ExReleaseFastResource @ 0x140158280 (ExReleaseFastResource.c)
 *     ExpFindFastOwnerEntryForThread @ 0x1401593C4 (ExpFindFastOwnerEntryForThread.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall ExpFastResourceLegacyRelease(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r11
  unsigned __int8 CurrentIrql; // di
  ULONG_PTR FastOwnerEntryForThread; // rax
  ULONG_PTR v7; // r10
  ULONG_PTR v8; // r11
  void *v9; // rbx

  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LOBYTE(a4) = 1;
  FastOwnerEntryForThread = ExpFindFastOwnerEntryForThread(CurrentThread, a1, 0LL, a4);
  v9 = (void *)FastOwnerEntryForThread;
  if ( !FastOwnerEntryForThread )
    KeBugCheckEx(0xE3u, v7, v8, 0LL, 0LL);
  *(_BYTE *)(FastOwnerEntryForThread + 17) &= ~2u;
  __writecr8(CurrentIrql);
  ExReleaseFastResource(v7, FastOwnerEntryForThread);
  ExFreePoolWithTag(v9, 0);
}
