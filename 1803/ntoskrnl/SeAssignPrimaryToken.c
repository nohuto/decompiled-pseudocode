/*
 * XREFs of SeAssignPrimaryToken @ 0x140640A5C
 * Callers:
 *     PspInitializeProcessSecurity @ 0x1404F019C (PspInitializeProcessSecurity.c)
 * Callees:
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1404ECCC0 (SeAuditingWithTokenForSubcategory.c)
 *     ObInitializeFastReference @ 0x1404F0348 (ObInitializeFastReference.c)
 *     SeDeassignPrimaryToken @ 0x14057A894 (SeDeassignPrimaryToken.c)
 *     SepAuditAssignPrimaryToken @ 0x140640D1C (SepAuditAssignPrimaryToken.c)
 */

ULONG_PTR __fastcall SeAssignPrimaryToken(__int64 a1, _BYTE *a2)
{
  if ( SeAuditingWithTokenForSubcategory(133, 0LL) )
    SepAuditAssignPrimaryToken(a1, a2);
  if ( *(_QWORD *)(a1 + 856) )
    SeDeassignPrimaryToken(a1);
  ObfReferenceObject(a2);
  a2[204] = 1;
  return ObInitializeFastReference((ULONG_PTR *)(a1 + 856), (ULONG_PTR)a2);
}
