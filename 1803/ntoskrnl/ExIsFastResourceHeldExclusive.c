/*
 * XREFs of ExIsFastResourceHeldExclusive @ 0x140157D10
 * Callers:
 *     ExIsResourceAcquiredExclusiveLite @ 0x1400A4810 (ExIsResourceAcquiredExclusiveLite.c)
 * Callees:
 *     ExpFindFastOwnerEntryForThread @ 0x1401593C4 (ExpFindFastOwnerEntryForThread.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

_BOOL8 __fastcall ExIsFastResourceHeldExclusive(ULONG_PTR BugCheckParameter2)
{
  __int16 v1; // ax
  unsigned __int8 CurrentIrql; // cl
  __int64 FastOwnerEntryForThread; // rax
  unsigned __int8 v6; // r10

  v1 = *(_WORD *)(BugCheckParameter2 + 26);
  if ( (v1 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( (v1 & 0x80u) == 0 )
    return 0LL;
  KeGetCurrentIrql();
  __writecr8(2uLL);
  FastOwnerEntryForThread = ExpFindFastOwnerEntryForThread(KeGetCurrentThread(), BugCheckParameter2, 0LL, 0LL);
  __writecr8(v6);
  return FastOwnerEntryForThread != 0;
}
