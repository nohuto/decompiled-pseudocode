/*
 * XREFs of CmpLockHashEntryShared @ 0x140562B08
 * Callers:
 *     CmpWalkOneLevel @ 0x140480060 (CmpWalkOneLevel.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140562984 (CmpFindSubkeyInHashByChildCell.c)
 * Callees:
 *     CmpReferenceHive @ 0x140084160 (CmpReferenceHive.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

char __fastcall CmpLockHashEntryShared(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rbx
  char result; // al

  v2 = (unsigned int)BugCheckParameter4;
  ExAcquirePushLockSharedEx(
    *(_QWORD *)(BugCheckParameter2 + 2800)
  + 24
  * ((unsigned int)(*(_DWORD *)(BugCheckParameter2 + 2808) - 1) & ((101027
                                                                  * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9))) >> 9))),
    0LL);
  result = CmpReferenceHive(BugCheckParameter2);
  if ( !result )
    KeBugCheckEx(0x51u, 0x17uLL, BugCheckParameter2, 9uLL, v2);
  return result;
}
