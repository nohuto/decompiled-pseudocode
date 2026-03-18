/*
 * XREFs of CmpLockHashEntrySharedByKcb @ 0x14043D1E4
 * Callers:
 *     CmpPerformCompleteKcbCacheLookup @ 0x140533590 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 * Callees:
 *     CmpReferenceHive @ 0x1400F0030 (CmpReferenceHive.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

char __fastcall CmpLockHashEntrySharedByKcb(ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rbx
  unsigned __int64 v3; // r9
  char result; // al

  v2 = *(_QWORD *)(BugCheckParameter4 + 24);
  v3 = (unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 8) ^ (*(_DWORD *)(BugCheckParameter4 + 8) >> 9)));
  ExAcquirePushLockSharedEx(
    *(_QWORD *)(v2 + 2800) + 24 * ((unsigned int)(*(_DWORD *)(v2 + 2808) - 1) & (v3 ^ (v3 >> 9))),
    0LL);
  result = CmpReferenceHive(v2);
  if ( !result )
    KeBugCheckEx(0x51u, 0x17uLL, v2, 7uLL, BugCheckParameter4);
  return result;
}
