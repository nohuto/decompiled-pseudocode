/*
 * XREFs of AMLIIsEqualHandle @ 0x1C005AC54
 * Callers:
 *     ACPIBuildDevicePowerNodes @ 0x1C0028DBC (ACPIBuildDevicePowerNodes.c)
 *     CacheBBNResult @ 0x1C002AB5C (CacheBBNResult.c)
 *     ACPIEcStartDevice @ 0x1C004C8B0 (ACPIEcStartDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall AMLIIsEqualHandle(_QWORD *a1, _QWORD *a2)
{
  bool result; // al

  result = 0;
  if ( !a1 )
    return a2 == 0LL;
  if ( a2 )
    return *a1 == *a2;
  return result;
}
