/*
 * XREFs of PdcPoPerfOverride @ 0x1406FF1B0
 * Callers:
 *     <none>
 * Callees:
 *     PpmEndHighPerfRequest @ 0x14015B7B4 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x14015B880 (PpmBeginHighPerfRequest.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x140248A1C (PpmDisableHighPerfRequestDeferredExpiration.c)
 */

__int64 PdcPoPerfOverride()
{
  PpmBeginHighPerfRequest();
  PpmDisableHighPerfRequestDeferredExpiration(0);
  return PpmEndHighPerfRequest(1);
}
