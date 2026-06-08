/*
 * XREFs of ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C0004328
 * Callers:
 *     InitCpcStatesInternal @ 0x1C002F7CC (InitCpcStatesInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003C40 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1C0007A9C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0007AC4 (_TlgWrite.c)
 *     ProcLibTraceNoPayloadEvent @ 0x1C0028B64 (ProcLibTraceNoPayloadEvent.c)
 */

BOOLEAN ProcLibTraceHiddenProcessorDegradedOperation()
{
  BOOLEAN result; // al
  const struct _TlgProvider_t *v1; // rcx
  const struct _TlgProvider_t *v2; // rcx
  const GUID *v3; // r8
  const GUID *v4; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  result = ProcLibTraceNoPayloadEvent(&PPM_ETW_PERF_STATES_DEGRADED);
  if ( (unsigned int)dword_1C0015060 > 5 )
  {
    result = TlgKeywordOn(v1, 0x400000000000uLL);
    if ( result )
      return TlgWrite(v2, &unk_1C001124B, v3, v4, 2u, &pData);
  }
  return result;
}
