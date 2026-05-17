/*
 * XREFs of sub_180072440 @ 0x180072440
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x1800723A0 (RtlDeleteAtomFromAtomTable.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_180072090 @ 0x180072090 (sub_180072090.c)
 */

char __fastcall sub_180072440(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  if ( (*(_BYTE *)(a2 + 2) & 1) != 0 )
    return 0;
  if ( (*(_WORD *)a2)-- != 1 )
    return 0;
  if ( (_QWORD *)a2 != (_QWORD *)((char *)a1 + 12) )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a2);
  sub_180072090(a1, a3, a3);
  return 1;
}
