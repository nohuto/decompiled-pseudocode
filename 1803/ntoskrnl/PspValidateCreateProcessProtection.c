/*
 * XREFs of PspValidateCreateProcessProtection @ 0x14055514C
 * Callers:
 *     NtCreateUserProcess @ 0x1404F200C (NtCreateUserProcess.c)
 * Callees:
 *     RtlTestProtectedAccess @ 0x1405553AC (RtlTestProtectedAccess.c)
 */

__int64 __fastcall PspValidateCreateProcessProtection(__int64 a1, __int64 a2, char a3, char a4, char a5)
{
  unsigned int v5; // r10d
  __int64 v6; // rax
  __int64 v7; // rcx

  v5 = 0;
  v6 = a2;
  LOBYTE(a2) = *(_BYTE *)(a1 + 1738);
  if ( (a4 & 4) != 0 )
  {
    if ( a3 )
    {
      if ( (*(_DWORD *)(v6 + 4) & 0x800) == 0 )
      {
        v7 = (unsigned int)dword_1407F9CC4[3 * ((unsigned __int64)(unsigned __int8)a2 >> 4)];
        if ( (v7 & 0x40) != 0 )
        {
          LOBYTE(v7) = a5;
          if ( !(unsigned __int8)RtlTestProtectedAccess(v7, a2) )
            return (unsigned int)-1073741811;
        }
      }
    }
  }
  return v5;
}
