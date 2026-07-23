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
  GUID v4; // xmm0
  NTSTATUS v5; // eax
  TLG_STATUS v6; // ebx
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(GUID *)(*((_QWORD *)hProvider + 1) - 16LL);
  *((_QWORD *)hProvider + 5) = 0LL;
  *((_QWORD *)hProvider + 6) = 0LL;
  ProviderId = v4;
  v5 = EtwEventRegister(&ProviderId, (PENABLECALLBACK)TlgEnableCallback, hProvider, (PREGHANDLE)hProvider + 4);
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
      (EVENT_INFO_CLASS)2,
      *((PVOID *)hProvider + 1),
      **((unsigned __int16 **)hProvider + 1));
  }
  return v6;
}
