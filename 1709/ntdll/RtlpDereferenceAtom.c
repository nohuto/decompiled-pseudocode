/*
 * XREFs of RtlpDereferenceAtom @ 0x1800705E0
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x180070540 (RtlDeleteAtomFromAtomTable.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlpFreeAllAtom @ 0x180070138 (RtlpFreeAllAtom.c)
 */

char __fastcall RtlpDereferenceAtom(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  if ( (*(_BYTE *)(a2 + 2) & 1) != 0 )
    return 0;
  if ( (*(_WORD *)a2)-- != 1 )
    return 0;
  if ( (_QWORD *)a2 != (_QWORD *)((char *)a1 + 12) )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a2);
  RtlpFreeAllAtom(a1, a3, a3);
  return 1;
}
