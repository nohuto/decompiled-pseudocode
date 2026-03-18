/*
 * XREFs of PdcPoPerfOverride @ 0x1406CB210
 * Callers:
 *     <none>
 * Callees:
 *     PpmBeginHighPerfRequest @ 0x14014B768 (PpmBeginHighPerfRequest.c)
 */

__int64 PdcPoPerfOverride()
{
  __int64 v0; // rdx

  PpmBeginHighPerfRequest();
  return PpmEndHighPerfRequest(1, v0);
}
