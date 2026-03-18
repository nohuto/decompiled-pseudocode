/*
 * XREFs of SeCaptureSecurityQos @ 0x1404766B0
 * Callers:
 *     NtCreateTokenEx @ 0x14046F5F4 (NtCreateTokenEx.c)
 *     NtDuplicateToken @ 0x140476350 (NtDuplicateToken.c)
 * Callees:
 *     SeValidateSecurityQos @ 0x140476798 (SeValidateSecurityQos.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SeCaptureSecurityQos(__int64 a1, char a2, _BYTE *a3, __int64 a4)
{
  _DWORD *v4; // rax
  __int64 result; // rax
  _DWORD *v6; // rax

  *a3 = 0;
  if ( a2 )
  {
    if ( a1 )
    {
      if ( (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v4 = *(_DWORD **)(a1 + 40);
      if ( v4 )
      {
        if ( ((unsigned __int8)v4 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( *v4 != 12 )
          return 3221225485LL;
        *a3 = 1;
        *(_QWORD *)a4 = *(_QWORD *)v4;
        *(_DWORD *)(a4 + 8) = v4[2];
        *(_DWORD *)a4 = 12;
      }
    }
  }
  else if ( a1 && *(_QWORD *)(a1 + 40) )
  {
    *a3 = 1;
    v6 = *(_DWORD **)(a1 + 40);
    if ( *v6 != 12 )
      return 3221225485LL;
    *(_QWORD *)a4 = *(_QWORD *)v6;
    *(_DWORD *)(a4 + 8) = v6[2];
  }
  if ( !*a3 )
    return 0LL;
  result = SeValidateSecurityQos(a4);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
