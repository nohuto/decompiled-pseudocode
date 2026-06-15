/*
 * XREFs of AudioServerSetLastBufferInProgress @ 0x180090380
 * Callers:
 *     <none>
 * Callees:
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18002B404 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall AudioServerSetLastBufferInProgress(_DWORD *a1)
{
  _BYTE v3[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v4[16]; // [rsp+30h] [rbp-28h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v3, a1);
  if ( a1 )
    a1[66] = 1;
  else
    AudSrvTraceLoggingErrorHelper("AudioServerSetLastBufferInProgress", 3510, -2147024809);
  EtwEventActivityIdControl(4LL, v4);
  return 0LL;
}
