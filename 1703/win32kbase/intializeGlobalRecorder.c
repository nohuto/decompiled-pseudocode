/*
 * XREFs of intializeGlobalRecorder @ 0x1C006DD68
 * Callers:
 *     InputInitialize @ 0x1C006DA98 (InputInitialize.c)
 * Callees:
 *     RtlStringCchCopyA @ 0x1C006DE10 (RtlStringCchCopyA.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

__int64 intializeGlobalRecorder()
{
  size_t v0; // rdx
  __int64 result; // rax
  int v2; // [rsp+20h] [rbp-40h] BYREF
  char v3; // [rsp+24h] [rbp-3Ch]
  _DWORD v4[4]; // [rsp+28h] [rbp-38h] BYREF
  __int64 v5; // [rsp+38h] [rbp-28h]
  char v6; // [rsp+40h] [rbp-20h]
  int v7; // [rsp+44h] [rbp-1Ch]
  char pszDest[16]; // [rsp+48h] [rbp-18h] BYREF

  v2 = 8;
  v3 = 0;
  imp_WppRecorderConfigure(WPP_GLOBAL_Control, &v2);
  v5 = 0LL;
  v4[1] = 0;
  v4[0] = 48;
  v4[3] = 200;
  pszDest[0] = 0;
  v7 = 16;
  v6 = 0;
  v4[2] = 512;
  RtlStringCchCopyA(pszDest, v0, "Win32BaseInput");
  result = imp_WppRecorderLogCreate(WPP_GLOBAL_Control, v4, &gBaseLog);
  if ( (int)result < 0 )
    gBaseLog = 0LL;
  return result;
}
