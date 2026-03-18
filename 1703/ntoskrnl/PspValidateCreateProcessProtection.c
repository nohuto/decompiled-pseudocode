/*
 * XREFs of PspValidateCreateProcessProtection @ 0x140546440
 * Callers:
 *     NtCreateUserProcess @ 0x140544094 (NtCreateUserProcess.c)
 * Callees:
 *     RtlTestProtectedAccess @ 0x1405463A0 (RtlTestProtectedAccess.c)
 */

__int64 __fastcall PspValidateCreateProcessProtection(__int64 a1, __int64 a2, char a3, char a4, unsigned __int8 a5)
{
  unsigned int v5; // r10d
  unsigned __int8 v7; // dl

  v5 = 0;
  v7 = *(_BYTE *)(a1 + 1738);
  if ( (a4 & 4) != 0
    && a3
    && (*(_DWORD *)(a2 + 4) & 0x800) == 0
    && (dword_14074AE74[3 * ((unsigned __int64)v7 >> 4)] & 0x40) != 0
    && !RtlTestProtectedAccess(a5, v7) )
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
