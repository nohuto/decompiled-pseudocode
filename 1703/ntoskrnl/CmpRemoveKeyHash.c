/*
 * XREFs of CmpRemoveKeyHash @ 0x14044A4A4
 * Callers:
 *     CmpDiscardKcb @ 0x1404D00DC (CmpDiscardKcb.c)
 *     CmRenameKey @ 0x140663778 (CmRenameKey.c)
 *     CmpRehashKcbSubtree @ 0x140666118 (CmpRehashKcbSubtree.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpRemoveKeyHash(__int64 a1, _DWORD *a2)
{
  return CmpRemoveKeyHashFromTableEntry(
           a2,
           *(_QWORD *)(a1 + 2800)
         + 24
         * ((unsigned int)(*(_DWORD *)(a1 + 2808) - 1) & ((unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) >> 9))));
}
