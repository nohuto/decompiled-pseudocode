/*
 * XREFs of CmpLockHashEntryByIndexExclusive @ 0x140694A9C
 * Callers:
 *     CmpRunDownDelayDerefKCBEngine @ 0x14046EBF0 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14068FD50 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     CmpReferenceHive @ 0x140084160 (CmpReferenceHive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

char __fastcall CmpLockHashEntryByIndexExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v3; // rsi
  ULONG_PTR v4; // rbx
  char result; // al

  v3 = (unsigned int)BugCheckParameter4;
  v4 = *(_QWORD *)(BugCheckParameter2 + 2800) + 24LL * (unsigned int)BugCheckParameter4;
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
  result = CmpReferenceHive(BugCheckParameter2);
  if ( !result )
    KeBugCheckEx(0x51u, 0x17uLL, BugCheckParameter2, 0xBuLL, v3);
  return result;
}
