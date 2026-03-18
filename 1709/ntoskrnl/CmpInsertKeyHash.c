/*
 * XREFs of CmpInsertKeyHash @ 0x14068FAB4
 * Callers:
 *     CmRenameKey @ 0x14068CE58 (CmRenameKey.c)
 *     CmpRehashKcbSubtree @ 0x14068FBAC (CmpRehashKcbSubtree.c)
 * Callees:
 *     CmpAddKeyHashToEntry @ 0x140472DAC (CmpAddKeyHashToEntry.c)
 */

__int64 __fastcall CmpInsertKeyHash(__int64 a1, _DWORD *a2)
{
  return CmpAddKeyHashToEntry(
           (__int64)a2,
           *(_QWORD *)(a1 + 2800)
         + 24LL
         * ((*(_DWORD *)(a1 + 2808) - 1) & ((101027 * (*a2 ^ (*a2 >> 9))) ^ ((unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) >> 9))),
           0);
}
