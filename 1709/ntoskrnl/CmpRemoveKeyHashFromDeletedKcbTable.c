/*
 * XREFs of CmpRemoveKeyHashFromDeletedKcbTable @ 0x1405938EC
 * Callers:
 *     CmpCleanUpKcbCacheWithLock @ 0x140478800 (CmpCleanUpKcbCacheWithLock.c)
 * Callees:
 *     CmpRemoveKeyHashFromTableEntry @ 0x140478A74 (CmpRemoveKeyHashFromTableEntry.c)
 */

void __fastcall CmpRemoveKeyHashFromDeletedKcbTable(__int64 a1, _DWORD *a2)
{
  CmpRemoveKeyHashFromTableEntry(
    (__int64)a2,
    *(_QWORD *)(a1 + 2816)
  + 24
  * ((unsigned int)(*(_DWORD *)(a1 + 2824) - 1) & ((unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) >> 9))));
}
