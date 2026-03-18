/*
 * XREFs of RtlpLookupLowBox @ 0x14008B754
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x140431280 (RtlDeleteAtomFromAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x14044D7C0 (RtlPinAtomInAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x1404F9A20 (RtlQueryAtomInAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x1406E9668 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     RtlpAllowsLowBoxAccess @ 0x1400364A0 (RtlpAllowsLowBoxAccess.c)
 *     RtlpQueryLowBoxId @ 0x14008B7C4 (RtlpQueryLowBoxId.c)
 */

__int64 __fastcall RtlpLookupLowBox(__int64 a1, __int64 a2, char a3)
{
  int LowBoxId; // ecx
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
    LowBoxId = 0;
  else
    LowBoxId = RtlpQueryLowBoxId();
  if ( !LowBoxId )
    return a2 + 16;
  for ( result = *(_QWORD *)(a2 + 16); result != a2 + 16; result = *(_QWORD *)result )
  {
    if ( *(_DWORD *)(result + 16) == LowBoxId )
      return result;
  }
  if ( !RtlpAllowsLowBoxAccess(a2) || a3 )
    return 0LL;
  else
    return a2 + 16;
}
