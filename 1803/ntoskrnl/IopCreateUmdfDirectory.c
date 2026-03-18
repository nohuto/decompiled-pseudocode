/*
 * XREFs of IopCreateUmdfDirectory @ 0x1408C46C8
 * Callers:
 *     IopCreateRootDirectories @ 0x1408C45EC (IopCreateRootDirectories.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x140007BA0 (IopVerifierExAllocatePool.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404C07E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x140541520 (RtlAddAccessAllowedAce.c)
 *     RtlCreateSecurityDescriptor @ 0x140541DF0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140541E30 (RtlCreateAcl.c)
 *     RtlInitializeSid @ 0x140541FB0 (RtlInitializeSid.c)
 *     RtlLengthRequiredSid @ 0x140544040 (RtlLengthRequiredSid.c)
 *     NtCreateDirectoryObject @ 0x140568EDC (NtCreateDirectoryObject.c)
 */

__int64 IopCreateUmdfDirectory()
{
  unsigned __int8 *SeLocalSystemSid; // r14
  ULONG v1; // eax
  _DWORD *Pool; // rax
  _DWORD *v3; // rdi
  NTSTATUS Acl; // ebx
  ULONG v5; // ebx
  ACL *v6; // rax
  ACL *v7; // rsi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-29h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+30h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp+Fh] BYREF
  HANDLE IdentifierAuthority; // [rsp+B0h] [rbp+67h] BYREF

  LODWORD(IdentifierAuthority) = 0;
  WORD2(IdentifierAuthority) = 1280;
  SeLocalSystemSid = (unsigned __int8 *)SeExports->SeLocalSystemSid;
  v1 = RtlLengthRequiredSid(6u);
  Pool = IopVerifierExAllocatePool(PagedPool, v1);
  v3 = Pool;
  if ( Pool )
  {
    Acl = RtlInitializeSid(Pool, (PSID_IDENTIFIER_AUTHORITY)&IdentifierAuthority, 6u);
    if ( Acl >= 0 )
    {
      v3[2] = 80;
      v3[3] = -1642288911;
      v3[4] = 582572993;
      v3[5] = 1835434367;
      v3[6] = 1344795993;
      v3[7] = 749280709;
      v5 = 4 * (*((unsigned __int8 *)v3 + 1) + SeLocalSystemSid[1]) + 40;
      v6 = (ACL *)IopVerifierExAllocatePool(PagedPool, v5);
      v7 = v6;
      if ( v6 )
      {
        Acl = RtlCreateAcl(v6, v5, 2u);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v7, 2u, 0x10000000u, SeLocalSystemSid);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(v7, 2u, 0x10000000u, v3);
            if ( Acl >= 0 )
            {
              Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
              if ( Acl >= 0 )
              {
                Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v7, 0);
                if ( Acl >= 0 )
                {
                  RtlInitUnicodeString(&DestinationString, L"\\UMDFCommunicationPorts");
                  ObjectAttributes.RootDirectory = 0LL;
                  ObjectAttributes.SecurityQualityOfService = 0LL;
                  ObjectAttributes.ObjectName = &DestinationString;
                  ObjectAttributes.Length = 48;
                  ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
                  ObjectAttributes.Attributes = 528;
                  Acl = NtCreateDirectoryObject(&IdentifierAuthority, 0xF000Fu, &ObjectAttributes);
                  if ( Acl >= 0 )
                    ObCloseHandle(IdentifierAuthority, 0);
                }
              }
            }
          }
        }
        ExFreePoolWithTag(v7, 0);
      }
      else
      {
        Acl = -1073741670;
      }
    }
    ExFreePoolWithTag(v3, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
