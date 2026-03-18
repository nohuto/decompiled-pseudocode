/*
 * XREFs of PsQueryProcessSignatureMitigationPolicy @ 0x140581720
 * Callers:
 *     NtQueryInformationProcess @ 0x1404F9480 (NtQueryInformationProcess.c)
 * Callees:
 *     SeCompareSigningLevels @ 0x1404F1880 (SeCompareSigningLevels.c)
 */

void __fastcall PsQueryProcessSignatureMitigationPolicy(__int64 a1, _DWORD *a2)
{
  int v2; // edi

  *a2 = 0;
  v2 = *(_DWORD *)(a1 + 2088);
  if ( *(_BYTE *)(a1 + 1736) >= 8u && *(_BYTE *)(a1 + 1737) >= 8u )
  {
    *a2 |= 1u;
  }
  else if ( (unsigned int)SeCompareSigningLevels() && (unsigned int)SeCompareSigningLevels() )
  {
    *a2 |= 2u;
  }
  else if ( (v2 & 0x1000000) != 0 )
  {
    *a2 |= 8u;
  }
  else if ( (v2 & 0x2000000) != 0 )
  {
    *a2 |= 0x10u;
  }
  if ( (v2 & 0x800000) != 0 )
    *a2 |= 4u;
}
