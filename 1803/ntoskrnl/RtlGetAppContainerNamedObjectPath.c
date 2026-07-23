/*
 * XREFs of RtlGetAppContainerNamedObjectPath @ 0x140287510
 * Callers:
 *     <none>
 * Callees:
 *     RtlEqualSid @ 0x140105600 (RtlEqualSid.c)
 *     NtQueryInformationToken @ 0x140597890 (NtQueryInformationToken.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140785D38 (RtlpGetTokenNamedObjectPath.c)
 */

NTSTATUS __cdecl RtlGetAppContainerNamedObjectPath(
        HANDLE TokenHandle,
        PSID AppContainerSid,
        BOOLEAN RelativePath,
        PUNICODE_STRING ObjectPath)
{
  __int64 v4; // rbx
  NTSTATUS result; // eax
  char v9; // r14
  int TokenInformation; // [rsp+38h] [rbp-99h] BYREF
  int v11; // [rsp+3Ch] [rbp-95h] BYREF
  __int64 v12; // [rsp+40h] [rbp-91h] BYREF
  PSID Sid2[12]; // [rsp+48h] [rbp-89h] BYREF
  PSID Sid1[12]; // [rsp+A8h] [rbp-29h] BYREF
  ULONG ReturnLength; // [rsp+150h] [rbp+7Fh] BYREF

  v4 = (__int64)TokenHandle;
  if ( !ObjectPath )
    return -1073741811;
  if ( TokenHandle && AppContainerSid )
    return -1073741776;
  LODWORD(v12) = 0;
  v11 = 0;
  if ( AppContainerSid )
  {
    v4 = -4LL;
    v9 = 0;
  }
  else
  {
    v9 = 1;
    if ( TokenHandle )
      goto LABEL_11;
    v4 = -6LL;
  }
  if ( !AppContainerSid )
  {
LABEL_11:
    TokenInformation = 0;
    result = NtQueryInformationToken((HANDLE)v4, TokenIsAppContainer, &TokenInformation, 4u, &ReturnLength);
    if ( result < 0 )
      return result;
    if ( !TokenInformation )
    {
      *(_DWORD *)&ObjectPath->Length = 0;
      result = 0;
      ObjectPath->Buffer = 0LL;
      return result;
    }
  }
  if ( !RelativePath || !v9 )
    return RtlpGetTokenNamedObjectPath((HANDLE)v4, AppContainerSid);
  result = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFCLL, TokenPrivateNameSpace, &v11, 4u, &ReturnLength);
  if ( result < 0 )
    return result;
  if ( !v11 )
    return RtlpGetTokenNamedObjectPath((HANDLE)v4, AppContainerSid);
  result = NtQueryInformationToken((HANDLE)v4, TokenPrivateNameSpace, &v12, 4u, &ReturnLength);
  if ( result < 0 )
    return result;
  if ( !(_DWORD)v12 )
    return -1073741637;
  result = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFCLL, TokenUser, Sid2, 0x58u, &ReturnLength);
  if ( result >= 0 )
  {
    result = NtQueryInformationToken((HANDLE)v4, TokenUser, Sid1, 0x58u, &ReturnLength);
    if ( result >= 0 )
    {
      if ( !RtlEqualSid(Sid1[0], Sid2[0]) )
        return -1073741637;
      return RtlpGetTokenNamedObjectPath((HANDLE)v4, AppContainerSid);
    }
  }
  return result;
}
