/*
 * XREFs of RtlpLockAtomTable @ 0x180070B50
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x180070340 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x180070540 (RtlDeleteAtomFromAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x180070638 (RtlAddAtomToAtomTableEx.c)
 *     RtlLookupAtomInAtomTable @ 0x180070840 (RtlLookupAtomInAtomTable.c)
 *     RtlDestroyAtomTable @ 0x1800E8890 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1800E8970 (RtlEmptyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1800E8A30 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpLockAtomTable(__int64 a1)
{
  if ( !a1 || *(_DWORD *)a1 != 1836020801 )
    return 0;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 8));
  return 1;
}
