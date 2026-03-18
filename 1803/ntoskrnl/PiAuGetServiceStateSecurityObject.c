/*
 * XREFs of PiAuGetServiceStateSecurityObject @ 0x140729BE0
 * Callers:
 *     IoOpenDriverRegistryKey @ 0x140648B50 (IoOpenDriverRegistryKey.c)
 *     PiCreateRedirectedStateRoot @ 0x140648D7C (PiCreateRedirectedStateRoot.c)
 * Callees:
 *     RtlLengthSid @ 0x14009FED0 (RtlLengthSid.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404C07E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x1404C1B80 (RtlValidSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x1404C7070 (RtlLengthSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1404C76D0 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x140541DF0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140541E30 (RtlCreateAcl.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140541EB0 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x140541F10 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1405E1160 (RtlAbsoluteToSelfRelativeSD.c)
 */

__int64 __fastcall PiAuGetServiceStateSecurityObject(_QWORD *a1)
{
  void *v2; // rdi
  ULONG v3; // ebx
  ULONG v4; // ebx
  ULONG v5; // ebx
  ULONG v6; // ebx
  ACL *PoolWithTag; // rax
  ACL *v8; // rsi
  int Acl; // ebx
  PSID v10; // rbp
  ULONG v11; // eax
  size_t v12; // rbx
  PVOID v13; // rax
  _BYTE SecurityDescriptor[48]; // [rsp+30h] [rbp-48h] BYREF
  ULONG BufferLength; // [rsp+88h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = RtlLengthSid(SeExports->SeUserModeDriversSid);
  v4 = RtlLengthSid(SeAliasAdminsSid) + v3;
  v5 = RtlLengthSid(SeLocalSystemSid) + v4;
  v6 = RtlLengthSid(SeTrustedInstallerSid) + 40 + v5;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v6, 0x20207050u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    Acl = RtlCreateAcl(PoolWithTag, v6, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlpAddKnownAce(v8, 2u, 2, 0x10000000, (unsigned __int8 *)SeTrustedInstallerSid, 0);
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce(v8, 2u, 2, -2147287034, (unsigned __int8 *)SeLocalSystemSid, 0);
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce(v8, 2u, 2, 0x80000000, (unsigned __int8 *)SeAliasAdminsSid, 0);
          if ( Acl >= 0 )
          {
            Acl = RtlpAddKnownAce(v8, 2u, 2, 0x80000000, (unsigned __int8 *)SeExports->SeUserModeDriversSid, 0);
            if ( Acl >= 0 )
            {
              Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
              if ( Acl >= 0 )
              {
                Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v8, 0);
                if ( Acl >= 0 )
                {
                  v10 = SeTrustedInstallerSid;
                  Acl = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, SeTrustedInstallerSid, 0);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlSetGroupSecurityDescriptor(SecurityDescriptor, v10, 0);
                    if ( Acl >= 0 )
                    {
                      if ( RtlValidSecurityDescriptor(SecurityDescriptor)
                        && (v11 = RtlLengthSecurityDescriptor(SecurityDescriptor), BufferLength = v11, v11 >= 0x28) )
                      {
                        v12 = v11;
                        v13 = ExAllocatePoolWithTag(PagedPool, v11, 0x20207050u);
                        v2 = v13;
                        if ( v13 )
                        {
                          memset(v13, 0, v12);
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
    }
    ExFreePoolWithTag(v8, 0);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
