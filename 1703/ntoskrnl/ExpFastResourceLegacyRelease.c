/*
 * XREFs of ExpFastResourceLegacyRelease @ 0x14014DBCC
 * Callers:
 *     SeAccessCheckByType @ 0x140092020 (SeAccessCheckByType.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1400EF2B0 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceForThreadLite @ 0x14011A600 (ExReleaseResourceForThreadLite.c)
 *     CcUnpinFileDataEx @ 0x14011A690 (CcUnpinFileDataEx.c)
 * Callees:
 *     ExReleaseFastResource @ 0x14014DE90 (ExReleaseFastResource.c)
 *     ExpFindFastOwnerEntryForThread @ 0x14014E814 (ExpFindFastOwnerEntryForThread.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
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
