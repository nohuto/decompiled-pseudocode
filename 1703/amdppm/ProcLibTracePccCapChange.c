/*
 * XREFs of ProcLibTracePccCapChange @ 0x1C0005BA8
 * Callers:
 *     CpcGuaranteedNotifyWorker @ 0x1C0021BA4 (CpcGuaranteedNotifyWorker.c)
 * Callees:
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C000597C (ProcLibTraceProcessorSpecificEvent.c)
 */

char __fastcall ProcLibTracePccCapChange(__int64 a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return ProcLibTraceProcessorSpecificEvent(a1, &PPM_ETW_PCC_CAP_CHANGE, 4, (__int64)&v3);
}
