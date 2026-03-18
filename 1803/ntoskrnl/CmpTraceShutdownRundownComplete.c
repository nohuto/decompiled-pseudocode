/*
 * XREFs of CmpTraceShutdownRundownComplete @ 0x1406EECDC
 * Callers:
 *     CmShutdownSystem @ 0x1406EFFE4 (CmShutdownSystem.c)
 * Callees:
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

BOOLEAN CmpTraceShutdownRundownComplete()
{
  REGHANDLE v0; // rbx
  BOOLEAN result; // al
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-28h] BYREF

  v0 = EtwpRegTraceHandle;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_SHUTDOWN_RUNDOWN_COMPLETE;
  result = EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor);
  if ( result )
    return EtwWrite(v0, &EventDescriptor, 0LL, 0, 0LL);
  return result;
}
