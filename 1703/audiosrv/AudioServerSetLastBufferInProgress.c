/*
 * XREFs of AudioServerSetLastBufferInProgress @ 0x1800A3A30
 * Callers:
 *     <none>
 * Callees:
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x1800025F0 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall AudioServerSetLastBufferInProgress(_DWORD *a1)
{
  _BYTE v3[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v4[16]; // [rsp+30h] [rbp-28h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v3, a1);
  if ( a1 )
    a1[66] = 1;
  else
    AudSrvTraceLoggingErrorHelper("AudioServerSetLastBufferInProgress", 3537, -2147024809);
  EtwEventActivityIdControl(4LL, v4);
  return 0LL;
}
