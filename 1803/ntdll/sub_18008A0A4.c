/*
 * XREFs of sub_18008A0A4 @ 0x18008A0A4
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x180086810 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     RtlCreateSecurityDescriptor @ 0x18002ED10 (RtlCreateSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1800320D0 (RtlSetOwnerSecurityDescriptor.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenProcessTokenEx @ 0x18009B0C0 (ZwOpenProcessTokenEx.c)
 *     ZwOpenFile @ 0x18009B120 (ZwOpenFile.c)
 *     ZwAdjustPrivilegesToken @ 0x18009B2E0 (ZwAdjustPrivilegesToken.c)
 *     ZwSetSecurityObject @ 0x18009DE90 (ZwSetSecurityObject.c)
 */

int __fastcall sub_18008A0A4(_UNICODE_STRING *a1)
{
  int result; // eax
  NTSTATUS v3; // eax
  HANDLE v4; // rcx
  HANDLE TokenHandle; // [rsp+30h] [rbp-59h] BYREF
  HANDLE FileHandle[2]; // [rsp+38h] [rbp-51h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-41h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+78h] [rbp-11h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp+17h] BYREF
  _TOKEN_PRIVILEGES NewState; // [rsp+B0h] [rbp+27h] BYREF
  __int16 Owner; // [rsp+C0h] [rbp+37h] BYREF
  int v12; // [rsp+C2h] [rbp+39h]
  __int16 v13; // [rsp+C6h] [rbp+3Dh]
  int v14; // [rsp+C8h] [rbp+3Fh]
  int v15; // [rsp+CCh] [rbp+43h]

  result = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0x28u, 0x200u, &TokenHandle);
  if ( result >= 0 )
  {
    FileHandle[1] = (HANDLE)9;
    NewState.Privileges[0].Luid = (LUID)9LL;
    NewState.PrivilegeCount = 1;
    NewState.Privileges[0].Attributes = 2;
    if ( ZwAdjustPrivilegesToken(TokenHandle, 0, &NewState, 0x10u, 0LL, 0LL) >= 0 )
    {
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = a1;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenFile(FileHandle, 0x180000u, &ObjectAttributes, &IoStatusBlock, 7u, 0x21u) >= 0 )
      {
        RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
        v12 = 0;
        v13 = 1280;
        Owner = 513;
        v14 = 32;
        v15 = 544;
        v3 = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, &Owner, 0);
        v4 = FileHandle[0];
        if ( v3 >= 0 )
        {
          ZwSetSecurityObject(FileHandle[0], 1u, SecurityDescriptor);
          v4 = FileHandle[0];
        }
        ZwClose(v4);
      }
    }
    return ZwClose(TokenHandle);
  }
  return result;
}
