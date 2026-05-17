/*
 * XREFs of RtlpAtomMapAtomToHandleEntry @ 0x180070B78
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x180070340 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x180070540 (RtlDeleteAtomFromAtomTable.c)
 *     RtlLookupAtomInAtomTable @ 0x180070840 (RtlLookupAtomInAtomTable.c)
 *     RtlpHashStringToAtom @ 0x18007097C (RtlpHashStringToAtom.c)
 *     RtlPinAtomInAtomTable @ 0x1800E8A30 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlIsValidIndexHandle @ 0x180070BB0 (RtlIsValidIndexHandle.c)
 */

__int64 __fastcall RtlpAtomMapAtomToHandleEntry(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned __int8)RtlIsValidIndexHandle(a1 + 16, a2, &v3) )
    return *(_QWORD *)(v3 + 8);
  else
    return 0LL;
}
