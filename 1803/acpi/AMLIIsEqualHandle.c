/*
 * XREFs of AMLIIsEqualHandle @ 0x1C0043D88
 * Callers:
 *     ACPIBuildDevicePowerNodes @ 0x1C000A5D4 (ACPIBuildDevicePowerNodes.c)
 *     ACPIEcStartDevice @ 0x1C0021FB0 (ACPIEcStartDevice.c)
 *     CacheBBNResult @ 0x1C0030B5C (CacheBBNResult.c)
 *     GetCachedBBNResult @ 0x1C0030C40 (GetCachedBBNResult.c)
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
