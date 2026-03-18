/*
 * XREFs of RtlImpersonateSelfEx @ 0x140585C08
 * Callers:
 *     CmpCmdHiveOpen @ 0x1404DD728 (CmpCmdHiveOpen.c)
 *     RtlAcquirePrivilege @ 0x1405859DC (RtlAcquirePrivilege.c)
 *     BiAcquirePrivilege @ 0x1405B1738 (BiAcquirePrivilege.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwSetInformationThread @ 0x14017DA60 (ZwSetInformationThread.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenProcessTokenEx @ 0x14017DEC0 (ZwOpenProcessTokenEx.c)
 *     ZwDuplicateToken @ 0x14017E100 (ZwDuplicateToken.c)
 */

__int64 __fastcall RtlImpersonateSelfEx(int a1, int a2, HANDLE *a3)
{
  NTSTATUS v5; // ebx
  HANDLE ThreadInformation; // [rsp+30h] [rbp-19h] BYREF
  HANDLE TokenHandle; // [rsp+38h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-9h] BYREF
  _DWORD v10[2]; // [rsp+70h] [rbp+27h] BYREF
  __int16 v11; // [rsp+78h] [rbp+2Fh]

  if ( !a3 && a2 )
    return 3221225712LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  v10[1] = a1;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.SecurityQualityOfService = v10;
  ObjectAttributes.Length = 48;
  v10[0] = 12;
  v11 = 1;
  v5 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 2u, 0x200u, &TokenHandle);
  if ( v5 >= 0 )
  {
    v5 = ZwDuplicateToken(TokenHandle, a2 | 4, &ObjectAttributes, 0, TokenImpersonation, &ThreadInformation);
    if ( v5 >= 0 )
    {
      v5 = ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
      if ( v5 >= 0 && a3 )
        *a3 = ThreadInformation;
      else
        ZwClose(ThreadInformation);
    }
    ZwClose(TokenHandle);
  }
  return (unsigned int)v5;
}
