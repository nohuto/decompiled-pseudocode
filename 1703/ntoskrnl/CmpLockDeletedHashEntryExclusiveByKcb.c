/*
 * XREFs of CmpLockDeletedHashEntryExclusiveByKcb @ 0x1404D0244
 * Callers:
 *     CmpCleanUpKcbCacheWithLock @ 0x1404910B0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDiscardKcb @ 0x1404D00DC (CmpDiscardKcb.c)
 * Callees:
 *     CmpReferenceHive @ 0x1400F0030 (CmpReferenceHive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

char __fastcall CmpLockDeletedHashEntryExclusiveByKcb(ULONG_PTR BugCheckParameter4)
{
  unsigned int v1; // r9d
  ULONG_PTR v3; // rsi
  __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  char result; // al

  v1 = *(_DWORD *)(BugCheckParameter4 + 8);
  v3 = *(_QWORD *)(BugCheckParameter4 + 24);
  v4 = *(_QWORD *)(v3 + 2816);
  v5 = 3
     * ((unsigned int)(*(_DWORD *)(v3 + 2824) - 1) & ((101027 * (v1 ^ (v1 >> 9))) ^ ((unsigned __int64)(101027 * (v1 ^ (v1 >> 9))) >> 9)));
  ExAcquirePushLockExclusiveEx(
    v4
  + 24
  * ((unsigned int)(*(_DWORD *)(v3 + 2824) - 1) & ((101027 * (v1 ^ (v1 >> 9))) ^ ((unsigned __int64)(101027 * (v1 ^ (v1 >> 9))) >> 9))),
    0LL);
  *(_QWORD *)(v4 + 8 * v5 + 8) = KeGetCurrentThread();
  result = CmpReferenceHive(v3);
  if ( !result )
    KeBugCheckEx(0x51u, 0x17uLL, v3, 8uLL, BugCheckParameter4);
  return result;
}
