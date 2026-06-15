/*
 * XREFs of ?GetThreadUserStringSid@@YAJPEAPEAG@Z @ 0x1800848D0
 * Callers:
 *     ?OpenStoreKey@CAudioSessionStore@@AEAAJXZ @ 0x18008644C (-OpenStoreKey@CAudioSessionStore@@AEAAJXZ.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall GetThreadUserStringSid(unsigned __int16 **a1)
{
  PSID *v1; // rdi
  HANDLE CurrentThread; // rax
  signed int LastError; // eax
  signed int v5; // ebx
  DWORD TokenInformationLength; // [rsp+58h] [rbp+28h] BYREF
  void *TokenHandle; // [rsp+60h] [rbp+30h] BYREF
  LPWSTR StringSid; // [rsp+68h] [rbp+38h] BYREF

  TokenHandle = 0LL;
  v1 = 0LL;
  StringSid = 0LL;
  CurrentThread = GetCurrentThread();
  if ( !OpenThreadToken(CurrentThread, 8u, 0, &TokenHandle) )
  {
LABEL_2:
    LastError = GetLastError();
    v5 = LastError;
    goto LABEL_3;
  }
  if ( GetTokenInformation(TokenHandle, TokenUser, 0LL, 0, &TokenInformationLength) )
    goto LABEL_24;
  LastError = GetLastError();
  v5 = LastError;
  if ( LastError != 122 )
  {
LABEL_3:
    if ( LastError > 0 )
      v5 = (unsigned __int16)LastError | 0x80070000;
LABEL_12:
    if ( v5 >= 0 )
      goto LABEL_15;
    goto LABEL_13;
  }
  v1 = (PSID *)CoTaskMemAlloc(TokenInformationLength);
  if ( v1 )
  {
LABEL_24:
    if ( GetTokenInformation(TokenHandle, TokenUser, v1, TokenInformationLength, &TokenInformationLength)
      && ConvertSidToStringSidW(*v1, &StringSid) )
    {
      v5 = 0;
      *a1 = StringSid;
      goto LABEL_12;
    }
    goto LABEL_2;
  }
  v5 = -2147024882;
LABEL_13:
  if ( StringSid )
  {
    LocalFree(StringSid);
    StringSid = 0LL;
  }
LABEL_15:
  if ( v1 )
    CoTaskMemFree(v1);
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(TokenHandle);
    TokenHandle = 0LL;
  }
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("GetThreadUserStringSid", 152, v5);
  return (unsigned int)v5;
}
