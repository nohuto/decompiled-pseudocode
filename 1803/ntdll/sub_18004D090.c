/*
 * XREFs of sub_18004D090 @ 0x18004D090
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x18004CFF0 (RtlDeleteAtomFromAtomTable.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_18004CED4 @ 0x18004CED4 (sub_18004CED4.c)
 */

char __fastcall sub_18004D090(char *a1, char *a2, __int64 a3)
{
  if ( (a2[2] & 1) != 0 )
    return 0;
  if ( (*(_WORD *)a2)-- != 1 )
    return 0;
  if ( a2 != a1 + 12 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
  sub_18004CED4(a1, a3, a3);
  return 1;
}
