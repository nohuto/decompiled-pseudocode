/*
 * XREFs of PiAuGetDriverDataDirectorySecurityObject @ 0x1408C10B4
 * Callers:
 *     PiCreateDriverDataDirectoryRoot @ 0x1408C0F30 (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404C07E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x1404C1B80 (RtlValidSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x1404C7070 (RtlLengthSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140541DF0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140541E30 (RtlCreateAcl.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140541EB0 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x140541F10 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1405E1160 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlAddAccessAllowedAceEx @ 0x140605800 (RtlAddAccessAllowedAceEx.c)
 */

__int64 __fastcall PiAuGetDriverDataDirectorySecurityObject(_QWORD *a1)
{
  void *v2; // rdi
  ULONG v3; // ebx
  ACL *PoolWithTag; // rax
  ACL *v5; // rsi
  NTSTATUS Acl; // ebx
  PSID v7; // rbp
  ULONG v8; // eax
  ULONG v9; // ebx
  PVOID v10; // rax
  _BYTE SecurityDescriptor[48]; // [rsp+30h] [rbp-48h] BYREF
  ULONG BufferLength; // [rsp+88h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = 4
     * (*((unsigned __int8 *)SeLocalSystemSid + 1)
      + *((unsigned __int8 *)SeAliasAdminsSid + 1)
      + *((unsigned __int8 *)SeExports->SeUserModeDriversSid + 1))
     + 56;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v3, 0x20207050u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    Acl = RtlCreateAcl(PoolWithTag, v3, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAceEx(v5, 2u, 3u, 0x10000000u, SeLocalSystemSid);
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessAllowedAceEx(v5, 2u, 3u, 0x10000000u, SeAliasAdminsSid);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAceEx(v5, 2u, 3u, 0x10000000u, SeExports->SeUserModeDriversSid);
          if ( Acl >= 0 )
          {
            Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
            if ( Acl >= 0 )
            {
              Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v5, 0);
              if ( Acl >= 0 )
              {
                v7 = SeLocalSystemSid;
                Acl = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, SeLocalSystemSid, 0);
                if ( Acl >= 0 )
                {
                  Acl = RtlSetGroupSecurityDescriptor(SecurityDescriptor, v7, 0);
                  if ( Acl >= 0 )
                  {
                    if ( RtlValidSecurityDescriptor(SecurityDescriptor)
                      && (v8 = RtlLengthSecurityDescriptor(SecurityDescriptor), BufferLength = v8, v8 >= 0x28) )
                    {
                      v9 = v8;
                      v10 = ExAllocatePoolWithTag(PagedPool, v8, 0x20207050u);
                      v2 = v10;
                      if ( v10 )
                      {
                        memset(v10, 0, v9);
                        Acl = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v2, &BufferLength);
                        if ( Acl >= 0 )
                        {
                          *a1 = v2;
                          v2 = 0LL;
                        }
                      }
                      else
                      {
                        Acl = -1073741670;
                      }
                    }
                    else
                    {
                      Acl = -1073741595;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    ExFreePoolWithTag(v5, 0);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
