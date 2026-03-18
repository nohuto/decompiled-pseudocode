/*
 * XREFs of PpmQueryDripsResidency @ 0x140273490
 * Callers:
 *     <none>
 * Callees:
 *     PpmQueryPlatformStateResidency @ 0x1402734AC (PpmQueryPlatformStateResidency.c)
 */

__int64 PpmQueryDripsResidency()
{
  return PpmQueryPlatformStateResidency((unsigned int)dword_1403CDB00);
}
