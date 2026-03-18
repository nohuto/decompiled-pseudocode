/*
 * XREFs of PiAuCheckTokenMembership @ 0x1407299AC
 * Callers:
 *     PiAuCheckClientInteractive @ 0x1407298EC (PiAuCheckClientInteractive.c)
 * Callees:
 *     RtlLengthSid @ 0x14009FED0 (RtlLengthSid.c)
 *     SeAccessCheck @ 0x140100B90 (SeAccessCheck.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404C07E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1404C76D0 (RtlpAddKnownAce.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     RtlCreateSecurityDescriptor @ 0x140541DF0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140541E30 (RtlCreateAcl.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140541EB0 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x140541F10 (RtlSetOwnerSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall PiAuCheckTokenMembership(void *Src, BOOLEAN *a2)
{
  ULONG v4; // ebx
  ACL *PoolWithTag; // rax
  ACL *v6; // rdi
  int Acl; // ebx
  GENERIC_MAPPING GenericMapping; // [rsp+50h] [rbp-48h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-38h] BYREF
  NTSTATUS AccessStatus; // [rsp+A8h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+B0h] [rbp+18h] BYREF

  GenericMapping.GenericRead = 131073;
  GenericMapping.GenericWrite = 0x20000;
  GenericMapping.GenericExecute = 0x20000;
  GenericMapping.GenericAll = 2031617;
  *a2 = 0;
  v4 = 3 * (RtlLengthSid(Src) + 20);
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v4, 0x20207050u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v4);
    RtlCreateSecurityDescriptor(v6, 1u);
    RtlSetOwnerSecurityDescriptor(v6, Src, 0);
    RtlSetGroupSecurityDescriptor(v6, Src, 0);
    Acl = RtlCreateAcl(v6 + 5, v4 - 40, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlpAddKnownAce(v6 + 5, 2u, 0, 1, (unsigned __int8 *)Src, 0);
      if ( Acl >= 0 )
      {
        Acl = RtlSetDaclSecurityDescriptor(v6, 1u, v6 + 5, 0);
        if ( Acl >= 0 )
        {
          SeCaptureSubjectContext(&SubjectContext);
          *a2 = SeAccessCheck(
                  v6,
                  &SubjectContext,
                  0,
                  1u,
                  0,
                  0LL,
                  &GenericMapping,
                  KeGetCurrentThread()->PreviousMode,
                  &GrantedAccess,
                  &AccessStatus);
          SeReleaseSubjectContext(&SubjectContext);
          Acl = 0;
        }
      }
    }
    ExFreePoolWithTag(v6, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
