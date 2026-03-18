/*
 * XREFs of Endpoint_IsProxyEndpoint @ 0x1C0019300
 * Callers:
 *     TR_Create @ 0x1C005E82C (TR_Create.c)
 * Callees:
 *     <none>
 */

char __fastcall Endpoint_IsProxyEndpoint(__int64 a1)
{
  return *(_BYTE *)(a1 + 1336);
}
