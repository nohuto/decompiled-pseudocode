/*
 * XREFs of PpmGetHeterogeneousClass @ 0x140130B1C
 * Callers:
 *     PpmPerfApplyLatencyHint @ 0x14000CB0C (PpmPerfApplyLatencyHint.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x140138518 (PpmPerfCalculateQosClassPolicies.c)
 *     PpmPerfResizeHistory @ 0x1406F9D80 (PpmPerfResizeHistory.c)
 * Callees:
 *     <none>
 */

bool __fastcall PpmGetHeterogeneousClass(__int64 a1)
{
  char v1; // dl
  __int64 v2; // rax

  v1 = *(_BYTE *)(a1 + 23858);
  if ( !v1 )
  {
    v2 = *(_QWORD *)(a1 + 24176);
    return v2 && *(_BYTE *)(v2 + 205) != 0;
  }
  return v1;
}
