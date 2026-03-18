/*
 * XREFs of SeAssignPrimaryToken @ 0x1405D4698
 * Callers:
 *     PspInitializeProcessSecurity @ 0x1404A1020 (PspInitializeProcessSecurity.c)
 * Callees:
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14049DB70 (SeAuditingWithTokenForSubcategory.c)
 *     SeDeassignPrimaryToken @ 0x140549F1C (SeDeassignPrimaryToken.c)
 *     SepAuditAssignPrimaryToken @ 0x1405D4708 (SepAuditAssignPrimaryToken.c)
 */

__int64 __fastcall SeAssignPrimaryToken(__int64 a1, _BYTE *a2)
{
  if ( SeAuditingWithTokenForSubcategory(133, 0LL) )
    SepAuditAssignPrimaryToken(a1, a2);
  if ( *(_QWORD *)(a1 + 856) )
    SeDeassignPrimaryToken(a1);
  ObfReferenceObject(a2);
  a2[204] = 1;
  return ObInitializeFastReference((_QWORD *)(a1 + 856), (__int64)a2);
}
