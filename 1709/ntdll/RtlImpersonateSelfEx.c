/*
 * XREFs of RtlImpersonateSelfEx @ 0x18007C340
 * Callers:
 *     RtlAcquirePrivilege @ 0x18007C0D0 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelf @ 0x18007C330 (RtlImpersonateSelf.c)
 * Callees:
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtSetInformationThread @ 0x1800A0260 (NtSetInformationThread.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtOpenProcessTokenEx @ 0x1800A06C0 (NtOpenProcessTokenEx.c)
 *     NtDuplicateToken @ 0x1800A0900 (NtDuplicateToken.c)
 */

NTSTATUS __cdecl RtlImpersonateSelfEx(
        SECURITY_IMPERSONATION_LEVEL ImpersonationLevel,
        ACCESS_MASK AdditionalAccess,
        PHANDLE ThreadToken)
{
  int v5; // ebx
  HANDLE ThreadInformation; // [rsp+30h] [rbp-19h] BYREF
  HANDLE TokenHandle; // [rsp+38h] [rbp-11h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-9h] BYREF
  _DWORD v10[2]; // [rsp+70h] [rbp+27h] BYREF
  __int16 v11; // [rsp+78h] [rbp+2Fh]

  if ( !ThreadToken && AdditionalAccess )
    return -1073741584;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  v10[1] = ImpersonationLevel;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.SecurityQualityOfService = v10;
  ObjectAttributes.Length = 48;
  v10[0] = 12;
  v11 = 1;
  v5 = NtOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 2u, 0x200u, &TokenHandle);
  if ( v5 >= 0 )
  {
    v5 = NtDuplicateToken(
           TokenHandle,
           AdditionalAccess | 4,
           &ObjectAttributes,
           0,
           TokenImpersonation,
           &ThreadInformation);
    if ( v5 >= 0 )
    {
      v5 = NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
      if ( v5 >= 0 && ThreadToken )
        *ThreadToken = ThreadInformation;
      else
        NtClose(ThreadInformation);
    }
    NtClose(TokenHandle);
  }
  return v5;
}
