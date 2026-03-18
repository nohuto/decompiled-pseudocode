/*
 * XREFs of SeAuditingHardLinkEventsWithContext @ 0x14045E8E0
 * Callers:
 *     <none>
 * Callees:
 *     SepAdtAuditThisEventWithContext @ 0x14046C810 (SepAdtAuditThisEventWithContext.c)
 */

BOOLEAN __stdcall SeAuditingHardLinkEventsWithContext(
        BOOLEAN AccessGranted,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext)
{
  __int64 v4; // rax
  char *v5; // rax
  PSECURITY_SUBJECT_CONTEXT v6; // r9

  if ( (~(unsigned __int8)*((_WORD *)SecurityDescriptor + 1) & 0x10) != 0 )
    return 0;
  if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
  {
    v5 = (char *)*((_QWORD *)SecurityDescriptor + 3);
  }
  else
  {
    v4 = *((unsigned int *)SecurityDescriptor + 3);
    if ( !(_DWORD)v4 )
      return 0;
    v5 = (char *)SecurityDescriptor + v4;
  }
  if ( !v5 )
    return 0;
  if ( !*((_WORD *)v5 + 2) )
    return 0;
  v6 = SubjectSecurityContext;
  LOBYTE(SecurityDescriptor) = AccessGranted;
  LOBYTE(SubjectSecurityContext) = AccessGranted == 0;
  return (unsigned __int8)SepAdtAuditThisEventWithContext(116LL, SecurityDescriptor, SubjectSecurityContext, v6) != 0;
}
