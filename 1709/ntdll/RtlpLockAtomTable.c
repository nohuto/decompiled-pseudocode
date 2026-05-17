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

char __fastcall RtlpLockAtomTable(_DWORD *a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  if ( !a1 || *a1 != 1836020801 )
    return 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)(a1 + 2), a2, a3, a4);
  return 1;
}
