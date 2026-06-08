/*
 * XREFs of ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C0009274
 * Callers:
 *     InitCpcStatesInternal @ 0x1C001EA5C (InitCpcStatesInternal.c)
 * Callees:
 *     _TlgWrite @ 0x1C0001008 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C000C400 (__security_check_cookie.c)
 *     ProcLibTraceNoPayloadEvent @ 0x1C00288A4 (ProcLibTraceNoPayloadEvent.c)
 */

TLG_STATUS ProcLibTraceHiddenProcessorDegradedOperation()
{
  TLG_STATUS result; // eax
  const struct _TlgProvider_t *v1; // rcx
  const GUID *v2; // r8
  const GUID *v3; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  result = ProcLibTraceNoPayloadEvent(&PPM_ETW_PERF_STATES_DEGRADED);
  if ( (unsigned int)dword_1C0011060 > 5 && (qword_1C0011070 & 0x400000000000LL) != 0 )
  {
    result = 0;
    if ( (qword_1C0011078 & 0x400000000000LL) == qword_1C0011078 )
      return TlgWrite(v1, &unk_1C000E8BB, v2, v3, 2u, &pData);
  }
  return result;
}
