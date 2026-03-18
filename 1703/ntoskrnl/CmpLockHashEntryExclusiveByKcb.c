/*
 * XREFs of CmpLockHashEntryExclusiveByKcb @ 0x1404D001C
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x14007FC2C (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x1401E0660 (CmDeleteLayeredKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1404CE2D0 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x1404CF840 (CmDeleteKey.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140533590 (CmpPerformCompleteKcbCacheLookup.c)
 * Callees:
 *     CmpReferenceHive @ 0x1400F0030 (CmpReferenceHive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

char __fastcall CmpLockHashEntryExclusiveByKcb(ULONG_PTR BugCheckParameter4)
{
  unsigned int v1; // r9d
  ULONG_PTR v3; // rsi
  __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  char result; // al

  v1 = *(_DWORD *)(BugCheckParameter4 + 8);
  v3 = *(_QWORD *)(BugCheckParameter4 + 24);
  v4 = *(_QWORD *)(v3 + 2800);
  v5 = 3
     * ((unsigned int)(*(_DWORD *)(v3 + 2808) - 1) & ((101027 * (v1 ^ (v1 >> 9))) ^ ((unsigned __int64)(101027 * (v1 ^ (v1 >> 9))) >> 9)));
  ExAcquirePushLockExclusiveEx(
    v4
  + 24
  * ((unsigned int)(*(_DWORD *)(v3 + 2808) - 1) & ((101027 * (v1 ^ (v1 >> 9))) ^ ((unsigned __int64)(101027 * (v1 ^ (v1 >> 9))) >> 9))),
    0LL);
  *(_QWORD *)(v4 + 8 * v5 + 8) = KeGetCurrentThread();
  result = CmpReferenceHive(v3);
  if ( !result )
    KeBugCheckEx(0x51u, 0x17uLL, v3, 8uLL, BugCheckParameter4);
  return result;
}
