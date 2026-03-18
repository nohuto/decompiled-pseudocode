/*
 * XREFs of ?DpiIndirectEscapeAccessCheck@@YAJXZ @ 0x1C01CAD84
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x1C01CBAC4 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

__int64 DpiIndirectEscapeAccessCheck(void)
{
  ULONG v0; // eax
  PVOID PoolWithQuotaTag; // r14
  ULONG v2; // eax
  PVOID v3; // rdi
  ULONG v4; // eax
  PVOID v5; // rax
  void *v6; // rsi
  ULONG v7; // r15d
  ULONG v8; // r15d
  ULONG v9; // r15d
  struct _ACL *v10; // rax
  struct _ACL *v11; // rbx
  NTSTATUS Acl; // r15d
  BOOLEAN v13; // al
  int AccessStatus; // [rsp+58h] [rbp-39h] BYREF
  DWORD GrantedAccess; // [rsp+5Ch] [rbp-35h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-31h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+80h] [rbp-11h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+A8h] [rbp+17h] BYREF
  struct _GENERIC_MAPPING GenericMapping; // [rsp+B0h] [rbp+1Fh] BYREF

  SeCaptureSubjectContext(&SubjectContext);
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  v0 = RtlLengthRequiredSid(2u);
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag(PagedPool, v0, 0x74727044u);
  v2 = RtlLengthRequiredSid(1u);
  v3 = ExAllocatePoolWithQuotaTag(PagedPool, v2, 0x74727044u);
  v4 = RtlLengthRequiredSid(2u);
  v5 = ExAllocatePoolWithQuotaTag(PagedPool, v4, 0x74727044u);
  v6 = v5;
  if ( PoolWithQuotaTag && v3 && v5 )
  {
    *(_DWORD *)IdentifierAuthority.Value = 0;
    *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
    RtlInitializeSid(PoolWithQuotaTag, &IdentifierAuthority, 2u);
    *RtlSubAuthoritySid(PoolWithQuotaTag, 0) = 32;
    *RtlSubAuthoritySid(PoolWithQuotaTag, 1u) = 544;
    RtlInitializeSid(v3, &IdentifierAuthority, 1u);
    *RtlSubAuthoritySid(v3, 0) = 18;
    RtlInitializeSid(v6, &IdentifierAuthority, 1u);
    *RtlSubAuthoritySid(v6, 0) = 19;
    v7 = RtlLengthSid(v6);
    v8 = RtlLengthSid(v3) + v7;
    v9 = RtlLengthSid(PoolWithQuotaTag) + 44 + v8;
    v10 = (struct _ACL *)ExAllocatePoolWithQuotaTag(PagedPool, v9, 0x74727044u);
    v11 = v10;
    if ( v10 )
    {
      Acl = RtlCreateAcl(v10, v9, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessAllowedAce(v11, 2u, 0x1F0000u, v3);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v11, 2u, 0x1F0000u, PoolWithQuotaTag);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(v11, 2u, 0x1F0000u, v6);
            if ( Acl >= 0 )
            {
              Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v11, 0);
              if ( Acl >= 0 )
              {
                GenericMapping.GenericRead = 0x20000;
                GenericMapping.GenericWrite = 0x20000;
                GenericMapping.GenericExecute = 0x20000;
                GenericMapping.GenericAll = 2031616;
                v13 = SeAccessCheck(
                        SecurityDescriptor,
                        &SubjectContext,
                        0,
                        0x1F0000u,
                        0,
                        0LL,
                        &GenericMapping,
                        1,
                        &GrantedAccess,
                        &AccessStatus);
                Acl = AccessStatus;
                if ( v13 )
                  Acl = 0;
              }
            }
          }
        }
      }
    }
    else
    {
      Acl = -1073741801;
    }
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
  }
  else
  {
    Acl = -1073741801;
  }
  SeReleaseSubjectContext(&SubjectContext);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  return (unsigned int)Acl;
}
