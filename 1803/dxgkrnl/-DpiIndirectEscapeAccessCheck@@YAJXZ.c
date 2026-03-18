/*
 * XREFs of ?DpiIndirectEscapeAccessCheck@@YAJXZ @ 0x1C0205C78
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x1C0206A54 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 */

__int64 DpiIndirectEscapeAccessCheck(void)
{
  ULONG v0; // eax
  PVOID PoolWithQuotaTag; // r14
  ULONG v2; // eax
  PVOID v3; // rdi
  ULONG v4; // eax
  PVOID v5; // rax
  __int64 v6; // rcx
  void *v7; // rsi
  ULONG v8; // r15d
  ULONG v9; // r15d
  ULONG v10; // r15d
  struct _ACL *v11; // rax
  __int64 v12; // rcx
  struct _ACL *v13; // rbx
  NTSTATUS Acl; // r15d
  BOOLEAN v15; // al
  __int64 v16; // rax
  __int64 v17; // rax
  int AccessStatus; // [rsp+58h] [rbp-39h] BYREF
  DWORD GrantedAccess; // [rsp+5Ch] [rbp-35h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-31h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+80h] [rbp-11h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+A8h] [rbp+17h] BYREF
  struct _GENERIC_MAPPING GenericMapping; // [rsp+B0h] [rbp+1Fh] BYREF

  SeCaptureSubjectContext(&SubjectContext);
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  v0 = RtlLengthRequiredSid(2u);
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v0, 0x74727044u);
  v2 = RtlLengthRequiredSid(1u);
  v3 = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v2, 0x74727044u);
  v4 = RtlLengthRequiredSid(2u);
  v5 = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v4, 0x74727044u);
  v7 = v5;
  if ( PoolWithQuotaTag && v3 && v5 )
  {
    *(_DWORD *)IdentifierAuthority.Value = 0;
    *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
    RtlInitializeSid(PoolWithQuotaTag, &IdentifierAuthority, 2u);
    *RtlSubAuthoritySid(PoolWithQuotaTag, 0) = 32;
    *RtlSubAuthoritySid(PoolWithQuotaTag, 1u) = 544;
    RtlInitializeSid(v3, &IdentifierAuthority, 1u);
    *RtlSubAuthoritySid(v3, 0) = 18;
    RtlInitializeSid(v7, &IdentifierAuthority, 1u);
    *RtlSubAuthoritySid(v7, 0) = 19;
    v8 = RtlLengthSid(v7);
    v9 = RtlLengthSid(v3) + v8;
    v10 = RtlLengthSid(PoolWithQuotaTag) + 44 + v9;
    v11 = (struct _ACL *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v10, 0x74727044u);
    v13 = v11;
    if ( v11 )
    {
      Acl = RtlCreateAcl(v11, v10, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessAllowedAce(v13, 2u, 0x1F0000u, v3);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v13, 2u, 0x1F0000u, PoolWithQuotaTag);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(v13, 2u, 0x1F0000u, v7);
            if ( Acl >= 0 )
            {
              Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v13, 0);
              if ( Acl >= 0 )
              {
                GenericMapping.GenericRead = 0x20000;
                GenericMapping.GenericWrite = 0x20000;
                GenericMapping.GenericExecute = 0x20000;
                GenericMapping.GenericAll = 2031616;
                v15 = SeAccessCheck(
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
                if ( v15 )
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
      v16 = WdLogNewEntry5_WdLowResource(v12);
      *(_QWORD *)(v16 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v16);
    }
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
  }
  else
  {
    Acl = -1073741801;
    v17 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v17 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v17);
  }
  SeReleaseSubjectContext(&SubjectContext);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  return (unsigned int)Acl;
}
