/*
 * XREFs of PspDeleteProcessSecurity @ 0x140511CF8
 * Callers:
 *     PspProcessDelete @ 0x14006F630 (PspProcessDelete.c)
 * Callees:
 *     SeDeassignPrimaryToken @ 0x14057A894 (SeDeassignPrimaryToken.c)
 */

__int64 __fastcall PspDeleteProcessSecurity(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 856) )
    return SeDeassignPrimaryToken();
  return result;
}
