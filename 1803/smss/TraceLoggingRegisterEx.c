/*
 * XREFs of TraceLoggingRegisterEx @ 0x140001AD0
 * Callers:
 *     wmain @ 0x1400014B0 (wmain.c)
 * Callees:
 *     __security_check_cookie @ 0x14000C6C0 (__security_check_cookie.c)
 */

TLG_STATUS __stdcall TraceLoggingRegisterEx(
        TraceLoggingHProvider hProvider,
        TLG_PENABLECALLBACK pEnableCallback,
        PVOID pCallbackContext)
{
  __int128 v3; // xmm0
  int v4; // eax
  TLG_STATUS v5; // ebx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  v3 = *((_OWORD *)off_140020028 - 1);
  qword_140020048 = 0LL;
  qword_140020050 = 0LL;
  v7 = v3;
  v4 = EtwEventRegister(&v7, TlgEnableCallback, &dword_140020020, &qword_140020040);
  v5 = v4;
  if ( v4 )
  {
    if ( v4 > 0 )
      return (unsigned __int16)v4 | 0x80070000;
  }
  else
  {
    EtwEventSetInformation(qword_140020040, 2LL, off_140020028, *(unsigned __int16 *)off_140020028);
  }
  return v5;
}
