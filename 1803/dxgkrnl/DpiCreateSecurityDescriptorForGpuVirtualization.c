/*
 * XREFs of DpiCreateSecurityDescriptorForGpuVirtualization @ 0x1C01F1C04
 * Callers:
 *     DpiFdoInitializeGpuVirtualization @ 0x1C01F7750 (DpiFdoInitializeGpuVirtualization.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall DpiCreateSecurityDescriptorForGpuVirtualization(_QWORD *a1)
{
  void *v1; // rdi
  ULONG v3; // eax
  PVOID PoolWithTag; // rax
  void *v5; // r14
  __int64 v6; // rbx
  NTSTATUS v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  ULONG v10; // ebx
  ULONG v11; // ebx
  ULONG v12; // ebx
  struct _ACL *v13; // rax
  struct _ACL *v14; // rsi
  NTSTATUS Acl; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  NTSTATUS v20; // eax
  NTSTATUS v21; // eax
  NTSTATUS v22; // eax
  NTSTATUS v23; // eax
  NTSTATUS v24; // eax
  ULONG v25; // eax
  PVOID v26; // rax
  NTSTATUS v27; // eax
  size_t Size; // [rsp+20h] [rbp-40h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+28h] [rbp-38h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+50h] [rbp-10h] BYREF

  v1 = 0LL;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v3 = RtlLengthRequiredSid(2u);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3, 0x74727044u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    v7 = RtlInitializeSid(PoolWithTag, &IdentifierAuthority, 2u);
    v6 = v7;
    if ( v7 < 0 )
    {
      v9 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v9 + 24) = v6;
      WdLogEvent5_WdError(v9);
LABEL_24:
      ExFreePoolWithTag(v5, 0);
      return (unsigned int)v6;
    }
    *RtlSubAuthoritySid(v5, 0) = 83;
    *RtlSubAuthoritySid(v5, 1u) = 0;
    v10 = RtlLengthSid(SeExports->SeLocalSystemSid) + 8;
    v11 = RtlLengthSid(SeExports->SeAliasAdminsSid) + v10;
    v12 = RtlLengthSid(v5) + 24 + v11;
    v13 = (struct _ACL *)ExAllocatePoolWithTag(PagedPool, v12, 0x74727044u);
    v14 = v13;
    if ( !v13 )
    {
      LODWORD(v6) = -1073741670;
      goto LABEL_24;
    }
    Acl = RtlCreateAcl(v13, v12, 2u);
    v6 = Acl;
    if ( Acl < 0 )
      goto LABEL_8;
    v18 = RtlAddAccessAllowedAce(v14, 2u, 0x1F01FFu, SeExports->SeLocalSystemSid);
    v6 = v18;
    if ( v18 < 0 )
      goto LABEL_8;
    v19 = RtlAddAccessAllowedAce(v14, 2u, 0x1F01FFu, SeExports->SeAliasAdminsSid);
    v6 = v19;
    if ( v19 < 0 )
      goto LABEL_8;
    v20 = RtlAddAccessAllowedAce(v14, 2u, 0x1F01FFu, v5);
    v6 = v20;
    if ( v20 < 0 )
      goto LABEL_8;
    v21 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    v6 = v21;
    if ( v21 < 0 )
      goto LABEL_8;
    v22 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v14, 0);
    v6 = v22;
    if ( v22 < 0 )
      goto LABEL_8;
    v23 = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, SeExports->SeLocalSystemSid, 0);
    v6 = v23;
    if ( v23 < 0 )
      goto LABEL_8;
    v24 = RtlSetGroupSecurityDescriptor(SecurityDescriptor, SeExports->SeLocalSystemSid, 0);
    v6 = v24;
    if ( v24 < 0 )
      goto LABEL_8;
    v25 = RtlLengthSecurityDescriptor(SecurityDescriptor);
    LODWORD(Size) = v25;
    if ( v25 < 0x28 )
    {
      v6 = -1073741595LL;
LABEL_8:
      v17 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v17 + 24) = v6;
      WdLogEvent5_WdError(v17);
      goto LABEL_22;
    }
    v26 = ExAllocatePoolWithTag(PagedPool, v25, 0x74727044u);
    v1 = v26;
    if ( v26 )
    {
      memset(v26, 0, (unsigned int)Size);
      v27 = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v1, (PULONG)&Size);
      v6 = v27;
      if ( v27 < 0 )
        goto LABEL_8;
      *a1 = v1;
      v1 = 0LL;
      LODWORD(v6) = 0;
    }
    else
    {
      LODWORD(v6) = -1073741670;
    }
LABEL_22:
    ExFreePoolWithTag(v14, 0);
    if ( v1 )
      ExFreePoolWithTag(v1, 0);
    goto LABEL_24;
  }
  LODWORD(v6) = -1073741670;
  return (unsigned int)v6;
}
