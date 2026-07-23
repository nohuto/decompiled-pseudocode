/*
 * XREFs of PspValidateCreateProcessProtection @ 0x140538F44
 * Callers:
 *     NtCreateUserProcess @ 0x14053B4F4 (NtCreateUserProcess.c)
 * Callees:
 *     RtlTestProtectedAccess @ 0x1405391F8 (RtlTestProtectedAccess.c)
 */

__int64 __fastcall PspValidateCreateProcessProtection(__int64 a1, __int64 a2, char a3, char a4, PS_PROTECTION Source)
{
  unsigned int v5; // r10d
  PS_PROTECTION v7; // dl

  v5 = 0;
  v7.Level = *(_BYTE *)(a1 + 1738);
  if ( (a4 & 4) != 0
    && a3
    && (*(_DWORD *)(a2 + 4) & 0x800) == 0
    && (dword_14078D6E4[3 * ((unsigned __int64)v7.Level >> 4)] & 0x40) != 0
    && !RtlTestProtectedAccess(Source, v7) )
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
