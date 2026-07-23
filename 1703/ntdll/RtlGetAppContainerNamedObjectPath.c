/*
 * XREFs of RtlGetAppContainerNamedObjectPath @ 0x180057AA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEqualSid @ 0x18004A290 (RtlEqualSid.c)
 *     sub_180057C00 @ 0x180057C00 (sub_180057C00.c)
 *     ZwQueryInformationToken @ 0x1800A5720 (ZwQueryInformationToken.c)
 */

NTSTATUS __cdecl RtlGetAppContainerNamedObjectPath(
        HANDLE TokenHandle,
        PSID AppContainerSid,
        BOOLEAN RelativePath,
        PUNICODE_STRING ObjectPath)
{
  __int64 v4; // rbx
  char v7; // r14
  NTSTATUS result; // eax
  int TokenInformation; // [rsp+38h] [rbp-99h] BYREF
  int v10; // [rsp+3Ch] [rbp-95h] BYREF
  __int64 v11; // [rsp+40h] [rbp-91h] BYREF
  PSID Sid2[12]; // [rsp+48h] [rbp-89h] BYREF
  PSID Sid1[12]; // [rsp+A8h] [rbp-29h] BYREF
  ULONG ReturnLength; // [rsp+150h] [rbp+7Fh] BYREF

  v4 = (__int64)TokenHandle;
  if ( !ObjectPath )
    return -1073741811;
  if ( TokenHandle && AppContainerSid )
    return -1073741776;
  LODWORD(v11) = 0;
  v10 = 0;
  if ( AppContainerSid )
  {
    v4 = -4LL;
    v7 = 0;
  }
  else
  {
    v7 = 1;
    if ( TokenHandle )
      goto LABEL_7;
    v4 = -6LL;
  }
  if ( !AppContainerSid )
  {
LABEL_7:
    TokenInformation = 0;
    result = ZwQueryInformationToken((HANDLE)v4, 0x1Du, &TokenInformation, 4u, &ReturnLength);
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
  if ( !RelativePath || !v7 )
    return sub_180057C00((HANDLE)v4);
  result = ZwQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFCLL, 0x2Au, &v10, 4u, &ReturnLength);
  if ( result >= 0 )
  {
    if ( !v10 )
      return sub_180057C00((HANDLE)v4);
    result = ZwQueryInformationToken((HANDLE)v4, 0x2Au, &v11, 4u, &ReturnLength);
    if ( result >= 0 )
    {
      if ( !(_DWORD)v11 )
        return -1073741637;
      result = ZwQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFCLL, 1u, Sid2, 0x58u, &ReturnLength);
      if ( result >= 0 )
      {
        result = ZwQueryInformationToken((HANDLE)v4, 1u, Sid1, 0x58u, &ReturnLength);
        if ( result >= 0 )
        {
          if ( RtlEqualSid(Sid1[0], Sid2[0]) )
            return sub_180057C00((HANDLE)v4);
          return -1073741637;
        }
      }
    }
  }
  return result;
}
