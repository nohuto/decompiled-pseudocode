/*
 * XREFs of PspDeleteProcessSecurity @ 0x1404FC950
 * Callers:
 *     PspProcessDelete @ 0x1400B8F70 (PspProcessDelete.c)
 * Callees:
 *     SeDeassignPrimaryToken @ 0x1405907F0 (SeDeassignPrimaryToken.c)
 */

__int64 __fastcall PspDeleteProcessSecurity(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 856) )
    return SeDeassignPrimaryToken();
  return result;
}
