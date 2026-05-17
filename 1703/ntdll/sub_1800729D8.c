/*
 * XREFs of sub_1800729D8 @ 0x1800729D8
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x1800721A0 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1800723A0 (RtlDeleteAtomFromAtomTable.c)
 *     RtlLookupAtomInAtomTable @ 0x1800726A0 (RtlLookupAtomInAtomTable.c)
 *     sub_1800727DC @ 0x1800727DC (sub_1800727DC.c)
 *     RtlPinAtomInAtomTable @ 0x1800E9660 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlIsValidIndexHandle @ 0x180072A10 (RtlIsValidIndexHandle.c)
 */

__int64 __fastcall sub_1800729D8(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned __int8)RtlIsValidIndexHandle(a1 + 16, a2, &v3) )
    return *(_QWORD *)(v3 + 8);
  else
    return 0LL;
}
