/*
 * XREFs of SeDeassignPrimaryToken @ 0x1405907F0
 * Callers:
 *     PspDeleteProcessSecurity @ 0x1404FC950 (PspDeleteProcessSecurity.c)
 *     SeAssignPrimaryToken @ 0x1405F09B8 (SeAssignPrimaryToken.c)
 * Callees:
 *     ObFastReplaceObject @ 0x14001FFA8 (ObFastReplaceObject.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall SeDeassignPrimaryToken(__int64 a1)
{
  _BYTE *v1; // rax

  v1 = (_BYTE *)ObFastReplaceObject((volatile __int64 *)(a1 + 856), 0LL);
  v1[204] = 0;
  return ObfDereferenceObject(v1);
}
