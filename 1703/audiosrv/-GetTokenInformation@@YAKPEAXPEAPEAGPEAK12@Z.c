/*
 * XREFs of ?GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z @ 0x180080E34
 * Callers:
 *     ?HandleDeviceAccess@@YAJPEAXPEBG1_N@Z @ 0x1800954DC (-HandleDeviceAccess@@YAJPEAXPEBG1_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetTokenInformation(
        HANDLE TokenHandle,
        unsigned __int16 **a2,
        unsigned int *a3,
        unsigned __int16 **a4)
{
  unsigned __int16 *v4; // rax
  PSID *v5; // rdi
  DWORD LastError; // ebx
  LPWSTR StringSid; // [rsp+70h] [rbp+40h] BYREF
  unsigned __int16 **TokenInformationLength; // [rsp+78h] [rbp+48h] BYREF

  TokenInformationLength = a4;
  v4 = 0LL;
  v5 = 0LL;
  StringSid = 0LL;
  if ( a2 )
  {
    *a2 = 0LL;
    LODWORD(TokenInformationLength) = 0;
    if ( GetTokenInformation(TokenHandle, TokenUser, 0LL, 0, (PDWORD)&TokenInformationLength) )
    {
      LastError = 1337;
      goto LABEL_14;
    }
    LastError = GetLastError();
    if ( LastError != 122 )
      goto LABEL_14;
    v5 = (PSID *)LocalAlloc(0x40u, (unsigned int)TokenInformationLength);
    if ( !v5 )
    {
      LastError = 14;
      goto LABEL_14;
    }
    if ( !GetTokenInformation(
            TokenHandle,
            TokenUser,
            v5,
            (DWORD)TokenInformationLength,
            (PDWORD)&TokenInformationLength)
      || !ConvertSidToStringSidW(*v5, &StringSid) )
    {
      LastError = GetLastError();
      goto LABEL_14;
    }
    v4 = StringSid;
  }
  LastError = 0;
  if ( a2 )
    *a2 = v4;
  StringSid = 0LL;
LABEL_14:
  LocalFree(StringSid);
  LocalFree(0LL);
  LocalFree(v5);
  LocalFree(0LL);
  return LastError;
}
