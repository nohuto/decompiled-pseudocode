/*
 * XREFs of PdcPoPerfOverride @ 0x140764B40
 * Callers:
 *     <none>
 * Callees:
 *     PpmEndHighPerfRequest @ 0x14016DFB4 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x14016E780 (PpmBeginHighPerfRequest.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x14027EAA4 (PpmDisableHighPerfRequestDeferredExpiration.c)
 */

__int64 PdcPoPerfOverride()
{
  PpmBeginHighPerfRequest();
  PpmDisableHighPerfRequestDeferredExpiration(0);
  return PpmEndHighPerfRequest(1);
}
