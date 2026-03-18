/*
 * XREFs of ESM_ResettingControlEndpoint @ 0x1C003F090
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_SM_ResetControlEndpoint @ 0x1C001AAF4 (Endpoint_SM_ResetControlEndpoint.c)
 */

__int64 __fastcall ESM_ResettingControlEndpoint(__int64 a1)
{
  Endpoint_SM_ResetControlEndpoint(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
