/*
 * XREFs of RIMUnRevokeConfigurationChange @ 0x1C0106D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMUnRevokeConfigurationChange(__int64 a1, unsigned __int16 a2)
{
  return RIMDeliverConfigRequest(a1, *(_QWORD *)(a1 + 456), a2, 1);
}
