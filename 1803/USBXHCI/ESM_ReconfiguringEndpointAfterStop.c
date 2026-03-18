/*
 * XREFs of ESM_ReconfiguringEndpointAfterStop @ 0x1C003D660
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C001209C (Endpoint_OnCancelEndpointConfigure.c)
 */

__int64 __fastcall ESM_ReconfiguringEndpointAfterStop(__int64 a1)
{
  Endpoint_OnCancelEndpointConfigure(*(_QWORD **)(a1 + 960));
  return 1000LL;
}
