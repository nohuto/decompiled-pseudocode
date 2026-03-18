/*
 * XREFs of ExIsFastResourceHeld @ 0x140140800
 * Callers:
 *     <none>
 * Callees:
 *     ExpFindFastOwnerEntryForThread @ 0x140140868 (ExpFindFastOwnerEntryForThread.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

bool __fastcall ExIsFastResourceHeld(ULONG_PTR BugCheckParameter2)
{
  char v1; // r11
  unsigned __int8 CurrentIrql; // al
  __int64 FastOwnerEntryForThread; // r9
  unsigned __int8 v4; // r10

  v1 = 0;
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( *(_DWORD *)(BugCheckParameter2 + 64) )
  {
    KeGetCurrentIrql();
    __writecr8(2uLL);
    FastOwnerEntryForThread = ExpFindFastOwnerEntryForThread(KeGetCurrentThread(), BugCheckParameter2, 0LL, 0LL);
    __writecr8(v4);
    return FastOwnerEntryForThread != 0;
  }
  return v1;
}
