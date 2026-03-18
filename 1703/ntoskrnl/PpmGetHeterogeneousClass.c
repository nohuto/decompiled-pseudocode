/*
 * XREFs of PpmGetHeterogeneousClass @ 0x14000E7B0
 * Callers:
 *     PpmPerfApplyDomainState @ 0x14000E170 (PpmPerfApplyDomainState.c)
 *     PpmPerfApplyLatencyHint @ 0x140130A6C (PpmPerfApplyLatencyHint.c)
 *     PpmPerfCalculateMinMaxStates @ 0x1401603FC (PpmPerfCalculateMinMaxStates.c)
 *     PpmPerfResizeHistoryAll @ 0x1405C0E1C (PpmPerfResizeHistoryAll.c)
 * Callees:
 *     <none>
 */

bool __fastcall PpmGetHeterogeneousClass(__int64 a1)
{
  char v1; // dl
  __int64 v2; // rax

  v1 = *(_BYTE *)(a1 + 23986);
  if ( !v1 )
  {
    v2 = *(_QWORD *)(a1 + 24304);
    return v2 && *(_BYTE *)(v2 + 205) != 0;
  }
  return v1;
}
