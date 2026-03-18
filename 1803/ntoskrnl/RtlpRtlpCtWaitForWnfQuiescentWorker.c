/*
 * XREFs of RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x14078AE30
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     RtlpCtContextFree @ 0x14078AC0C (RtlpCtContextFree.c)
 */

void __fastcall RtlpRtlpCtWaitForWnfQuiescentWorker(PVOID *P)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  KeWaitForSingleObject(P[2], Executive, 0, 0, 0LL);
  RtlpCtContextFree(P, v2, v3, v4);
  _InterlockedExchange(&RtlpCtPublishInProgress, 0);
}
