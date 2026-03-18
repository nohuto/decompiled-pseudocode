/*
 * XREFs of ?Clear@?$Set@VDMMVIDEOPRESENTTARGET@@@@UEAAXXZ @ 0x1C0044810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Set<DMMVIDEOPRESENTTARGET>::Clear(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  DoublyLinkedList<DMMVIDEOPRESENTTARGET>::Clear(a1 + 8, a2, a3, a4);
}
