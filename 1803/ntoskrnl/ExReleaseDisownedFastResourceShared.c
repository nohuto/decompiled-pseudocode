/*
 * XREFs of ExReleaseDisownedFastResourceShared @ 0x1402B9970
 * Callers:
 *     <none>
 * Callees:
 *     ExpReleaseDisownedFastResourceExclusive @ 0x140157BB0 (ExpReleaseDisownedFastResourceExclusive.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x140157FDC (ExpReleaseDisownedFastResourceShared.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

LONG_PTR __fastcall ExReleaseDisownedFastResourceShared(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  __int16 v2; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r8
  char v5; // al

  v2 = *(_WORD *)(BugCheckParameter2 + 26);
  if ( (v2 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v5 = *(_BYTE *)(a2 + 17);
  if ( (v5 & 4) != 0 )
    KeBugCheckEx(0x1C6u, 0xBuLL, a2, (unsigned __int64)(v5 & 4) << 14, 0LL);
  if ( *(_QWORD *)(a2 + 24) != BugCheckParameter2 )
    KeBugCheckEx(0x1C6u, 0xCuLL, BugCheckParameter2, a2, *(_QWORD *)(a2 + 24));
  if ( (v5 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 0xDuLL, a2, 0LL, 0LL);
  if ( (v2 & 0x80u) == 0 )
    return ExpReleaseDisownedFastResourceShared(BugCheckParameter2, (__int64 *)a2);
  else
    return ExpReleaseDisownedFastResourceExclusive(BugCheckParameter2, (__int64 *)a2);
}
