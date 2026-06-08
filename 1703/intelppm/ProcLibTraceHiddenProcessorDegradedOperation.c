/*
 * XREFs of ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C00040D8
 * Callers:
 *     InitCpcStatesInternal @ 0x1C002AD40 (InitCpcStatesInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003AE0 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1C0007768 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00077A0 (_TlgWrite.c)
 *     ProcLibTraceNoPayloadEvent @ 0x1C0024398 (ProcLibTraceNoPayloadEvent.c)
 */

BOOLEAN ProcLibTraceHiddenProcessorDegradedOperation()
{
  BOOLEAN result; // al
  ULONGLONG v1; // rdx
  const struct _TlgProvider_t *v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  UINT32 v6; // [rsp+20h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  result = ProcLibTraceNoPayloadEvent(&PPM_ETW_PERF_STATES_DEGRADED);
  if ( (unsigned int)dword_1C0013060 > 5 )
  {
    result = TlgKeywordOn(v2, v1);
    if ( result )
      return TlgWrite(v3, &unk_1C000FFE0, v4, v5, v6, &pData);
  }
  return result;
}
