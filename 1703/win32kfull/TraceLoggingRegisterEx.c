/*
 * XREFs of TraceLoggingRegisterEx @ 0x1C0370474
 * Callers:
 *     ??0InkProcessor@@AEAA@XZ @ 0x1C00DA384 (--0InkProcessor@@AEAA@XZ.c)
 *     ??0InteractiveControlManager@@AEAA@XZ @ 0x1C01088D8 (--0InteractiveControlManager@@AEAA@XZ.c)
 *     EnableUserkTraceLogging @ 0x1C011C910 (EnableUserkTraceLogging.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

TLG_STATUS __stdcall TraceLoggingRegisterEx(
        TraceLoggingHProvider hProvider,
        TLG_PENABLECALLBACK pEnableCallback,
        PVOID pCallbackContext)
{
  GUID v4; // xmm0
  TLG_STATUS v5; // edi
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(GUID *)(*((_QWORD *)hProvider + 1) - 16LL);
  *((_QWORD *)hProvider + 5) = 0LL;
  *((_QWORD *)hProvider + 6) = 0LL;
  ProviderId = v4;
  v5 = EtwRegister(&ProviderId, TlgEnableCallback, hProvider, (PREGHANDLE)hProvider + 4);
  if ( !v5 )
    EtwSetInformation(
      *((_QWORD *)hProvider + 4),
      EventProviderSetTraits,
      *((PVOID *)hProvider + 1),
      **((unsigned __int16 **)hProvider + 1));
  return v5;
}
