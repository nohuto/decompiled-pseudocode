/*
 * XREFs of RtlCheckTokenMembershipEx @ 0x1400671B0
 * Callers:
 *     RtlCheckTokenMembership @ 0x1400674A0 (RtlCheckTokenMembership.c)
 *     RtlCapabilityCheck @ 0x1406E9770 (RtlCapabilityCheck.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x14008D7C0 (SeAccessCheckWithHint.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwDuplicateToken @ 0x14017E780 (ZwDuplicateToken.c)
 *     memset @ 0x140192D80 (memset.c)
 *     RtlInitializeSidEx @ 0x14023C3C0 (RtlInitializeSidEx.c)
 *     RtlCreateSecurityDescriptor @ 0x1404A1C80 (RtlCreateSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1404A4790 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x1404A57B0 (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x1404A57E0 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404F5D90 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1404F5DF0 (RtlCreateAcl.c)
 *     SeCaptureSubjectContext @ 0x14050C4F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall RtlCheckTokenMembershipEx(HANDLE ExistingTokenHandle, PSID Group, int a3, _BYTE *a4)
{
  NTSTATUS v4; // edi
  char v9; // si
  NTSTATUS v11; // [rsp+60h] [rbp-A0h]
  int v12; // [rsp+64h] [rbp-9Ch]
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  PVOID Object[2]; // [rsp+70h] [rbp-90h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+D0h] [rbp-30h] BYREF
  _DWORD v18[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int16 v19; // [rsp+100h] [rbp+0h]
  _BYTE Sid[80]; // [rsp+110h] [rbp+10h] BYREF
  ACL Acl; // [rsp+160h] [rbp+60h] BYREF
  char v22; // [rsp+250h] [rbp+150h] BYREF

  v4 = 0;
  Handle = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  *a4 = 0;
  if ( (a3 & 0xFFFFFFFC) == 0 )
  {
    v9 = 0;
    if ( ExistingTokenHandle )
    {
      v18[1] = 2;
      ObjectAttributes.SecurityQualityOfService = v18;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      ObjectAttributes.SecurityDescriptor = 0LL;
      v18[0] = 12;
      v19 = 1;
      v4 = ZwDuplicateToken(ExistingTokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &Handle);
      if ( v4 < 0 )
      {
LABEL_16:
        if ( ExistingTokenHandle )
          return (unsigned int)v4;
LABEL_17:
        if ( Handle )
          ZwClose(Handle);
        return (unsigned int)v4;
      }
      v4 = 0;
      ExistingTokenHandle = 0LL;
    }
    else
    {
      SeCaptureSubjectContext(&SubjectContext);
      v9 = 1;
    }
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Group, 0);
    RtlSetGroupSecurityDescriptor(SecurityDescriptor, Group, 0);
    RtlCreateAcl(&Acl, 0xECu, 2u);
    RtlAddAccessAllowedAce(&Acl, 2u, 1u, Group);
    if ( (a3 & 3) != 0 )
    {
      RtlInitializeSidEx(Sid, &RtlpAppPackageAuthority, 2LL, 2LL, 1);
      RtlAddAccessAllowedAce(&Acl, 2u, 1u, Sid);
    }
    if ( (a3 & 2) != 0 )
    {
      RtlInitializeSidEx(Sid, &RtlpAppPackageAuthority, 2LL, 2LL, 2);
      RtlAddAccessAllowedAce(&Acl, 2u, 1u, Sid);
    }
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    Object[1] = &v22;
    if ( !v9 )
    {
      SubjectContext.ProcessAuditId = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
      v4 = ObReferenceObjectByHandle(Handle, 8u, (POBJECT_TYPE)SeTokenObjectType, 0, Object, 0LL);
      SubjectContext.PrimaryToken = Object[0];
      if ( v4 < 0 )
        goto LABEL_17;
      v4 = 0;
    }
    SeAccessCheckWithHint(SecurityDescriptor, 0LL, &SubjectContext);
    if ( !v9 )
      ObfDereferenceObjectWithTag(SubjectContext.PrimaryToken, 0x746C6644u);
    if ( v11 )
    {
      if ( v11 == -1073741790 )
        goto LABEL_14;
    }
    else if ( v12 == 1 )
    {
      *a4 = 1;
LABEL_14:
      if ( !v9 )
        goto LABEL_17;
      SeReleaseSubjectContext(&SubjectContext);
      goto LABEL_16;
    }
    v4 = v11;
    goto LABEL_14;
  }
  return 3221225485LL;
}
