/*
 * XREFs of ESM_ReconfiguringEndpointOnReset @ 0x1C003D680
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_OnResetEndpointConfigure @ 0x1C0012B88 (Endpoint_OnResetEndpointConfigure.c)
 */

__int64 __fastcall ESM_ReconfiguringEndpointOnReset(__int64 a1)
{
  Endpoint_OnResetEndpointConfigure(*(int **)(a1 + 960));
  return 1000LL;
}
