/*
 * XREFs of TraceLoggingRegisterEx @ 0x18000AB40
 * Callers:
 *     DllMain @ 0x1800080C0 (DllMain.c)
 * Callees:
 *     __security_check_cookie @ 0x180007780 (__security_check_cookie.c)
 */

TLG_STATUS __stdcall TraceLoggingRegisterEx(
        TraceLoggingHProvider hProvider,
        TLG_PENABLECALLBACK pEnableCallback,
        PVOID pCallbackContext)
{
  GUID v3; // xmm0
  signed int v4; // eax
  TLG_STATUS v5; // ebx
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v3 = (GUID)*((_OWORD *)off_18001B008 - 1);
  qword_18001B028 = 0LL;
  qword_18001B030 = 0LL;
  ProviderId = v3;
  v4 = EventRegister(&ProviderId, TlgEnableCallback, &dword_18001B000, &RegHandle);
  v5 = v4;
  if ( v4 )
  {
    if ( v4 > 0 )
      return (unsigned __int16)v4 | 0x80070000;
  }
  else
  {
    EventSetInformation(RegHandle, 2LL, off_18001B008, *(unsigned __int16 *)off_18001B008);
  }
  return v5;
}
