/*
 * XREFs of sub_1800729B0 @ 0x1800729B0
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x1800721A0 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1800723A0 (RtlDeleteAtomFromAtomTable.c)
 *     RtlAddAtomToAtomTable_0 @ 0x180072498 (RtlAddAtomToAtomTable_0.c)
 *     RtlLookupAtomInAtomTable @ 0x1800726A0 (RtlLookupAtomInAtomTable.c)
 *     RtlDestroyAtomTable @ 0x1800E94C0 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1800E95A0 (RtlEmptyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1800E9660 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall sub_1800729B0(__int64 a1)
{
  if ( !a1 || *(_DWORD *)a1 != 1836020801 )
    return 0;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 8));
  return 1;
}
