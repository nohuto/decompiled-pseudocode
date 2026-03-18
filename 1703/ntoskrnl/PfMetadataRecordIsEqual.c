/*
 * XREFs of PfMetadataRecordIsEqual @ 0x1404667CC
 * Callers:
 *     PfSnOpenVolumesForPrefetch @ 0x140465F50 (PfSnOpenVolumesForPrefetch.c)
 *     PfVerifyScenarioBuffer @ 0x140565B70 (PfVerifyScenarioBuffer.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PfMetadataRecordIsEqual(__int64 a1, _QWORD *a2, int a3)
{
  return *(_QWORD *)(a1 + 8) == *a2 && *(_DWORD *)(a1 + 16) == a3;
}
