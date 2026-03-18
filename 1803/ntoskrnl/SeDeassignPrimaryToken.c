/*
 * XREFs of SeDeassignPrimaryToken @ 0x14057A894
 * Callers:
 *     PspDeleteProcessSecurity @ 0x140511CF8 (PspDeleteProcessSecurity.c)
 *     SeAssignPrimaryToken @ 0x140640A5C (SeAssignPrimaryToken.c)
 * Callees:
 *     ObFastReplaceObject @ 0x14004B580 (ObFastReplaceObject.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall SeDeassignPrimaryToken(__int64 a1)
{
  _BYTE *v1; // rax

  v1 = (_BYTE *)ObFastReplaceObject((volatile __int64 *)(a1 + 856), 0LL);
  v1[204] = 0;
  return ObfDereferenceObject(v1);
}
