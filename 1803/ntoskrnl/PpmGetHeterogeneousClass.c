/*
 * XREFs of PpmGetHeterogeneousClass @ 0x14014BE50
 * Callers:
 *     PpmPerfApplyLatencyHint @ 0x140143F9C (PpmPerfApplyLatencyHint.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x14016A69C (PpmPerfCalculateQosClassPolicies.c)
 *     PpmPerfResizeHistory @ 0x14076120C (PpmPerfResizeHistory.c)
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
