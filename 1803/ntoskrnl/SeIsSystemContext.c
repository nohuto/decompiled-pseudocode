/*
 * XREFs of SeIsSystemContext @ 0x1402A0B24
 * Callers:
 *     SepFilterToken @ 0x140542044 (SepFilterToken.c)
 * Callees:
 *     SeAccessCheck @ 0x140100B90 (SeAccessCheck.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall SeIsSystemContext(void *a1, _BYTE *a2)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+80h] [rbp+8h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+88h] [rbp+10h] BYREF

  AccessStatus = 0;
  *a2 = 0;
  memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
  SubjectSecurityContext.PrimaryToken = a1;
  if ( SeAccessCheck(
         SepSystemContextSecurityDescriptor,
         &SubjectSecurityContext,
         0,
         1u,
         0,
         0LL,
         (PGENERIC_MAPPING)&SystemContextGenericMapping,
         1,
         &GrantedAccess,
         &AccessStatus) )
  {
    *a2 = 1;
  }
  return (unsigned int)AccessStatus;
}
