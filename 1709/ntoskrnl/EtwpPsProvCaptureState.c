/*
 * XREFs of EtwpPsProvCaptureState @ 0x14074E7F0
 * Callers:
 *     EtwpTraceLoggingProvEnableCallback @ 0x1404F0A30 (EtwpTraceLoggingProvEnableCallback.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1404F2400 (EtwpCrimsonProvEnableCallback.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1400AE650 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PsEnumProcesses @ 0x1404FD1C8 (PsEnumProcesses.c)
 *     EtwpPsProvProcessEnumCallback @ 0x14074E870 (EtwpPsProvProcessEnumCallback.c)
 */

BOOLEAN __fastcall EtwpPsProvCaptureState(void *a1, __int64 a2)
{
  BOOLEAN v2; // bl
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h]

  v4 = a2;
  v5 = 0LL;
  *(_DWORD *)((char *)&v5 + 1) = a1 == &PsProvTraceLoggingGuid;
  v2 = IoSetThreadHardErrorMode(0);
  EtwpPsProvProcessEnumCallback((PEPROCESS)PsIdleProcess);
  PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))EtwpPsProvProcessEnumCallback, (__int64)&v4);
  return IoSetThreadHardErrorMode(v2);
}
