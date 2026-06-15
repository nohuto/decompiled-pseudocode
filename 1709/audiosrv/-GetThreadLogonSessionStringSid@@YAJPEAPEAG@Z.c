/*
 * XREFs of ?GetThreadLogonSessionStringSid@@YAJPEAPEAG@Z @ 0x180008B1C
 * Callers:
 *     AudioServerCreateStream @ 0x180008C70 (AudioServerCreateStream.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall GetThreadLogonSessionStringSid(unsigned __int16 **a1)
{
  _DWORD *v1; // rdi
  HANDLE CurrentThread; // rax
  signed int LastError; // eax
  signed int v5; // ebx
  __int64 v6; // rcx
  _DWORD *v7; // rdx
  DWORD TokenInformationLength; // [rsp+58h] [rbp+28h] BYREF
  void *TokenHandle; // [rsp+60h] [rbp+30h] BYREF
  LPWSTR StringSid; // [rsp+68h] [rbp+38h] BYREF

  TokenHandle = 0LL;
  v1 = 0LL;
  StringSid = 0LL;
  CurrentThread = GetCurrentThread();
  if ( !OpenThreadToken(CurrentThread, 8u, 0, &TokenHandle) )
  {
LABEL_22:
    LastError = GetLastError();
    v5 = LastError;
LABEL_23:
    if ( LastError > 0 )
      v5 = (unsigned __int16)LastError | 0x80070000;
LABEL_13:
    if ( v5 >= 0 )
      goto LABEL_14;
    goto LABEL_26;
  }
  if ( GetTokenInformation(TokenHandle, TokenGroups, 0LL, 0, &TokenInformationLength) )
    goto LABEL_30;
  LastError = GetLastError();
  v5 = LastError;
  if ( LastError != 122 )
    goto LABEL_23;
  v1 = CoTaskMemAlloc(TokenInformationLength);
  if ( v1 )
  {
LABEL_30:
    if ( GetTokenInformation(TokenHandle, TokenGroups, v1, TokenInformationLength, &TokenInformationLength) )
    {
      v6 = 0LL;
      if ( !*v1 )
        goto LABEL_21;
      v7 = v1 + 4;
      do
      {
        if ( (*v7 & 0xC0000000) == 0xC0000000 )
          break;
        v6 = (unsigned int)(v6 + 1);
        v7 += 4;
      }
      while ( (unsigned int)v6 < *v1 );
      if ( (unsigned int)v6 >= *v1 )
      {
LABEL_21:
        v5 = 1365;
        goto LABEL_14;
      }
      if ( ConvertSidToStringSidW(*(PSID *)&v1[4 * v6 + 2], &StringSid) )
      {
        v5 = 0;
        *a1 = StringSid;
        goto LABEL_13;
      }
    }
    goto LABEL_22;
  }
  v5 = -2147024882;
LABEL_26:
  if ( StringSid )
  {
    LocalFree(StringSid);
    StringSid = 0LL;
  }
LABEL_14:
  if ( v1 )
    CoTaskMemFree(v1);
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(TokenHandle);
    TokenHandle = 0LL;
  }
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("GetThreadLogonSessionStringSid", 0x105u, v5);
  return (unsigned int)v5;
}
