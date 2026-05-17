/*
 * XREFs of sub_18004D594 @ 0x18004D594
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x18004CCE0 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x18004CFF0 (RtlDeleteAtomFromAtomTable.c)
 *     RtlAddAtomToAtomTable_0 @ 0x18004D0E8 (RtlAddAtomToAtomTable_0.c)
 *     RtlLookupAtomInAtomTable @ 0x18004D2F0 (RtlLookupAtomInAtomTable.c)
 *     RtlDestroyAtomTable @ 0x1800E4710 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1800E47F0 (RtlEmptyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1800E48B0 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall sub_18004D594(_DWORD *a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  if ( !a1 || *a1 != 1836020801 )
    return 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)(a1 + 2), a2, a3, a4);
  return 1;
}
