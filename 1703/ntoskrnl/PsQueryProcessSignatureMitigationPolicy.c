/*
 * XREFs of PsQueryProcessSignatureMitigationPolicy @ 0x14041F8A0
 * Callers:
 *     NtQueryInformationProcess @ 0x1404EA100 (NtQueryInformationProcess.c)
 * Callees:
 *     SeCompareSigningLevels @ 0x140545CB0 (SeCompareSigningLevels.c)
 */

void __fastcall PsQueryProcessSignatureMitigationPolicy(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rdi
  _DWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx

  *a2 = 0;
  v2 = a1;
  LOBYTE(a1) = *(_BYTE *)(a1 + 1736);
  v3 = a2;
  if ( (unsigned __int8)a1 >= 8u && *(_BYTE *)(v2 + 1737) >= 8u )
  {
    *a2 = 1;
  }
  else
  {
    LOBYTE(a2) = 6;
    if ( (unsigned int)SeCompareSigningLevels(a1, a2) )
    {
      LOBYTE(v5) = *(_BYTE *)(v2 + 1737);
      LOBYTE(v4) = 6;
      if ( (unsigned int)SeCompareSigningLevels(v5, v4) )
        *v3 |= 2u;
    }
  }
  if ( (*(_DWORD *)(v2 + 1740) & 0x2000) != 0 )
    *v3 |= 4u;
}
