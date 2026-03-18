/*
 * XREFs of ExpFastResourceLegacyRelease @ 0x1401400C4
 * Callers:
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x14001F020 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     CcUnpinFileDataEx @ 0x140068040 (CcUnpinFileDataEx.c)
 *     SeAccessCheckByType @ 0x140068AB0 (SeAccessCheckByType.c)
 *     ExReleaseResourceForThreadLite @ 0x14007D110 (ExReleaseResourceForThreadLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 * Callees:
 *     ExReleaseFastResource @ 0x1401401C0 (ExReleaseFastResource.c)
 *     ExpFindFastOwnerEntryForThread @ 0x140140868 (ExpFindFastOwnerEntryForThread.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
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
