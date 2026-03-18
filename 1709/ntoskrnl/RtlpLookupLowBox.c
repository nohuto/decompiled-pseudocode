/*
 * XREFs of RtlpLookupLowBox @ 0x1400A6468
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x1404D4E00 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x14057CB90 (RtlDeleteAtomFromAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1405850E0 (RtlPinAtomInAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x1407214C8 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     RtlpQueryLowBoxId @ 0x1400A63EC (RtlpQueryLowBoxId.c)
 *     RtlpAllowsLowBoxAccess @ 0x14012B1B8 (RtlpAllowsLowBoxAccess.c)
 */

__int64 *__fastcall RtlpLookupLowBox(__int64 a1, __int64 a2, char a3)
{
  int LowBoxId; // ecx
  __int64 *result; // rax

  if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
    LowBoxId = 0;
  else
    LowBoxId = RtlpQueryLowBoxId();
  if ( !LowBoxId )
    return (__int64 *)(a2 + 16);
  for ( result = *(__int64 **)(a2 + 16); result != (__int64 *)(a2 + 16); result = (__int64 *)*result )
  {
    if ( *((_DWORD *)result + 4) == LowBoxId )
      return result;
  }
  if ( !(unsigned __int8)RtlpAllowsLowBoxAccess(a2) || a3 )
    return 0LL;
  else
    return (__int64 *)(a2 + 16);
}
