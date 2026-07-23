/*
 * XREFs of RtlImpersonateSelfEx @ 0x14044BCE4
 * Callers:
 *     RtlAcquirePrivilege @ 0x14044BAB8 (RtlAcquirePrivilege.c)
 *     CmpCmdHiveOpen @ 0x1404D65D8 (CmpCmdHiveOpen.c)
 *     BiAcquirePrivilege @ 0x14058D184 (BiAcquirePrivilege.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwSetInformationThread @ 0x14017E0E0 (ZwSetInformationThread.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenProcessTokenEx @ 0x14017E540 (ZwOpenProcessTokenEx.c)
 *     ZwDuplicateToken @ 0x14017E780 (ZwDuplicateToken.c)
 */

NTSTATUS __cdecl RtlImpersonateSelfEx(
        SECURITY_IMPERSONATION_LEVEL ImpersonationLevel,
        ACCESS_MASK AdditionalAccess,
        PHANDLE ThreadToken)
{
  int v5; // ebx
  HANDLE ThreadInformation; // [rsp+30h] [rbp-19h] BYREF
  HANDLE TokenHandle; // [rsp+38h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-9h] BYREF
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
  v5 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 2u, 0x200u, &TokenHandle);
  if ( v5 >= 0 )
  {
    v5 = ZwDuplicateToken(
           TokenHandle,
           AdditionalAccess | 4,
           &ObjectAttributes,
           0,
           TokenImpersonation,
           &ThreadInformation);
    if ( v5 >= 0 )
    {
      v5 = ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
      if ( v5 >= 0 && ThreadToken )
        *ThreadToken = ThreadInformation;
      else
        ZwClose(ThreadInformation);
    }
    ZwClose(TokenHandle);
  }
  return v5;
}
