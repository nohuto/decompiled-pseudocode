/*
 * XREFs of SeDeassignPrimaryToken @ 0x140549F1C
 * Callers:
 *     PspDeleteProcessSecurity @ 0x140498DE0 (PspDeleteProcessSecurity.c)
 *     SeAssignPrimaryToken @ 0x1405D4698 (SeAssignPrimaryToken.c)
 * Callees:
 *     ObFastReplaceObject @ 0x14011AE74 (ObFastReplaceObject.c)
 */

LONG_PTR __fastcall SeDeassignPrimaryToken(__int64 a1)
{
  _BYTE *v1; // rax

  v1 = (_BYTE *)ObFastReplaceObject((volatile __int64 *)(a1 + 856), 0LL);
  v1[204] = 0;
  return ObfDereferenceObject(v1);
}
