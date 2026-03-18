/*
 * XREFs of ExpFastResourceLegacyConvertExclusiveToShared @ 0x14013FFB0
 * Callers:
 *     ExConvertExclusiveToSharedLite @ 0x14011BA60 (ExConvertExclusiveToSharedLite.c)
 * Callees:
 *     ExpConvertFastResourceExclusiveToShared @ 0x14014002C (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpFindFastOwnerEntryForThread @ 0x140140868 (ExpFindFastOwnerEntryForThread.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpFastResourceLegacyConvertExclusiveToShared(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r11
  unsigned __int8 CurrentIrql; // bl
  __int64 FastOwnerEntryForThread; // rdx
  ULONG_PTR v7; // r10
  ULONG_PTR v8; // r11

  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LOBYTE(a4) = 1;
  FastOwnerEntryForThread = ExpFindFastOwnerEntryForThread(CurrentThread, a1, 0LL, a4);
  if ( !FastOwnerEntryForThread )
    KeBugCheckEx(0xE3u, v7, v8, 0LL, 0LL);
  __writecr8(CurrentIrql);
  if ( !*(_BYTE *)(FastOwnerEntryForThread + 18)
    || *(_QWORD *)(FastOwnerEntryForThread + 40) != FastOwnerEntryForThread + 40 )
  {
    KeBugCheckEx(0x1C6u, 0x13uLL, v7, 0LL, 0LL);
  }
  if ( *(char *)(v7 + 26) >= 0 )
    KeBugCheckEx(0x1C6u, 0x16uLL, v7, v8, 0LL);
  return ExpConvertFastResourceExclusiveToShared(v7, FastOwnerEntryForThread);
}
