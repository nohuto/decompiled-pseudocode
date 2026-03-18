/*
 * XREFs of PspDeleteProcessSecurity @ 0x140498DE0
 * Callers:
 *     PspProcessDelete @ 0x140061C30 (PspProcessDelete.c)
 * Callees:
 *     SeDeassignPrimaryToken @ 0x140549F1C (SeDeassignPrimaryToken.c)
 */

__int64 __fastcall PspDeleteProcessSecurity(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 856) )
    return SeDeassignPrimaryToken();
  return result;
}
