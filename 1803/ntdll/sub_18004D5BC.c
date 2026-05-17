/*
 * XREFs of sub_18004D5BC @ 0x18004D5BC
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x18004CCE0 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x18004CFF0 (RtlDeleteAtomFromAtomTable.c)
 *     RtlLookupAtomInAtomTable @ 0x18004D2F0 (RtlLookupAtomInAtomTable.c)
 *     sub_18004D42C @ 0x18004D42C (sub_18004D42C.c)
 *     RtlPinAtomInAtomTable @ 0x1800E48B0 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlIsValidIndexHandle @ 0x18004D5F0 (RtlIsValidIndexHandle.c)
 */

__int64 __fastcall sub_18004D5BC(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned __int8)RtlIsValidIndexHandle(a1 + 16, a2, &v3) )
    return *(_QWORD *)(v3 + 8);
  else
    return 0LL;
}
