/*
 * XREFs of TraceLoggingRegisterEx @ 0x1800754D8
 * Callers:
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x180082DE0 (LdrpLogRelativePathWithAlteredSearchError.c)
 *     LdrpResReportResourceAccessInternalInitOnce @ 0x180086F50 (LdrpResReportResourceAccessInternalInitOnce.c)
 *     LibLoaderTelemetryInitOnce @ 0x180088C80 (LibLoaderTelemetryInitOnce.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 * Callees:
 *     EtwEventSetInformation @ 0x180075570 (EtwEventSetInformation.c)
 *     EtwEventRegister @ 0x180075710 (EtwEventRegister.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 */

TLG_STATUS __stdcall TraceLoggingRegisterEx(
        TraceLoggingHProvider hProvider,
        TLG_PENABLECALLBACK pEnableCallback,
        PVOID pCallbackContext)
{
  __int128 v4; // xmm0
  int v5; // eax
  TLG_STATUS v6; // ebx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_OWORD *)(*((_QWORD *)hProvider + 1) - 16LL);
  *((_QWORD *)hProvider + 5) = 0LL;
  *((_QWORD *)hProvider + 6) = 0LL;
  v8 = v4;
  v5 = EtwEventRegister(&v8, TlgEnableCallback, hProvider, (char *)hProvider + 32);
  v6 = v5;
  if ( v5 )
  {
    if ( v5 > 0 )
      return (unsigned __int16)v5 | 0x80070000;
  }
  else
  {
    EtwEventSetInformation(
      *((_QWORD *)hProvider + 4),
      2LL,
      *((_QWORD *)hProvider + 1),
      **((unsigned __int16 **)hProvider + 1));
  }
  return v6;
}
