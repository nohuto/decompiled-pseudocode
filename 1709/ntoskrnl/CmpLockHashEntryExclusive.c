/*
 * XREFs of CmpLockHashEntryExclusive @ 0x140478D78
 * Callers:
 *     CmpDelayCloseWorker @ 0x140477EE0 (CmpDelayCloseWorker.c)
 * Callees:
 *     CmpReferenceHive @ 0x140084160 (CmpReferenceHive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

char __fastcall CmpLockHashEntryExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rbx
  ULONG_PTR v4; // rdi
  char result; // al

  v2 = (unsigned int)BugCheckParameter4;
  v4 = *(_QWORD *)(BugCheckParameter2 + 2800)
     + 24
     * ((unsigned int)(*(_DWORD *)(BugCheckParameter2 + 2808) - 1) & ((101027
                                                                     * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9))) >> 9)));
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
  result = CmpReferenceHive(BugCheckParameter2);
  if ( !result )
    KeBugCheckEx(0x51u, 0x17uLL, BugCheckParameter2, 0xCuLL, v2);
  return result;
}
