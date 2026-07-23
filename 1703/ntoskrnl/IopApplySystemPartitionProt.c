/*
 * XREFs of IopApplySystemPartitionProt @ 0x1408332A0
 * Callers:
 *     IopProtectSystemPartition @ 0x140825828 (IopProtectSystemPartition.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1400852C0 (RtlInitAnsiString.c)
 *     ExAllocatePoolWithTagPriority @ 0x14012A7A0 (ExAllocatePoolWithTagPriority.c)
 *     RtlStringCchPrintfA @ 0x140153C64 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x14017E5A0 (ZwOpenFile.c)
 *     ZwSetSecurityObject @ 0x140181280 (ZwSetSecurityObject.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlCreateSecurityDescriptor @ 0x1404A1C80 (RtlCreateSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x1404A57B0 (RtlAddAccessAllowedAce.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404C0A50 (RtlAnsiStringToUnicodeString.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404F5D90 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1404F5DF0 (RtlCreateAcl.c)
 *     NtClose @ 0x14052EB10 (NtClose.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall IopApplySystemPartitionProt(__int64 a1)
{
  ULONG v2; // ebx
  ACL *PoolWithTagPriority; // rax
  ACL *v4; // rdi
  NTSTATUS Acl; // ebx
  HANDLE FileHandle; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-C8h] BYREF
  _STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+90h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-50h] BYREF
  char pszFormat[16]; // [rsp+C8h] [rbp-40h] BYREF
  char pszDest[256]; // [rsp+D8h] [rbp-30h] BYREF

  strcpy(pszFormat, "\\ArcName\\%s");
  v2 = 4 * (*((unsigned __int8 *)SeLocalSystemSid + 1) + *((unsigned __int8 *)SeAliasAdminsSid + 1)) + 56;
  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTagPriority = (ACL *)ExAllocatePoolWithTagPriority(
                                   PagedPool,
                                   v2,
                                   0x20206F49u,
                                   (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTagPriority = (ACL *)ExAllocatePoolWithTag(PagedPool, v2, 0x20206F49u);
  v4 = PoolWithTagPriority;
  if ( !PoolWithTagPriority )
    return 3221225626LL;
  Acl = RtlCreateAcl(PoolWithTagPriority, v2, 2u);
  if ( Acl >= 0 )
  {
    Acl = RtlAddAccessAllowedAce(v4, 2u, 0x10000000u, SeLocalSystemSid);
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAce(v4, 2u, 0xE0020000, SeAliasAdminsSid);
      if ( Acl >= 0 )
      {
        Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v4, 0);
          if ( Acl >= 0 )
          {
            RtlStringCchPrintfA(pszDest, 0x100uLL, pszFormat, *(_QWORD *)(a1 + 192));
            RtlInitAnsiString(&DestinationString, pszDest);
            Acl = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
            if ( Acl >= 0 )
            {
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.ObjectName = &UnicodeString;
              ObjectAttributes.Length = 48;
              ObjectAttributes.Attributes = 576;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              Acl = ZwOpenFile(&FileHandle, 0x40000u, &ObjectAttributes, &IoStatusBlock, 1u, 0);
              RtlFreeUnicodeString(&UnicodeString);
              if ( Acl >= 0 )
              {
                Acl = ZwSetSecurityObject(FileHandle, 4u, SecurityDescriptor);
                NtClose(FileHandle);
              }
            }
          }
        }
      }
    }
  }
  ExFreePoolWithTag(v4, 0);
  return (unsigned int)Acl;
}
