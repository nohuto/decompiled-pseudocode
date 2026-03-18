/*
 * XREFs of CmpRemoveKeyHash @ 0x140593894
 * Callers:
 *     CmpDiscardKcb @ 0x140472C60 (CmpDiscardKcb.c)
 *     CmRenameKey @ 0x14068CE58 (CmRenameKey.c)
 *     CmpRehashKcbSubtree @ 0x14068FBAC (CmpRehashKcbSubtree.c)
 * Callees:
 *     CmpRemoveKeyHashFromTableEntry @ 0x140478A74 (CmpRemoveKeyHashFromTableEntry.c)
 */

void __fastcall CmpRemoveKeyHash(__int64 a1, _DWORD *a2)
{
  CmpRemoveKeyHashFromTableEntry(
    (__int64)a2,
    *(_QWORD *)(a1 + 2800)
  + 24
  * ((unsigned int)(*(_DWORD *)(a1 + 2808) - 1) & ((unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) >> 9))));
}
