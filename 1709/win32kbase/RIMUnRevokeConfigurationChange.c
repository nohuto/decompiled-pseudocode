/*
 * XREFs of RIMUnRevokeConfigurationChange @ 0x1C01079F0
 * Callers:
 *     <none>
 * Callees:
 *     RIMDeliverConfigRequest @ 0x1C0008920 (RIMDeliverConfigRequest.c)
 */

__int64 __fastcall RIMUnRevokeConfigurationChange(__int64 a1, __int16 a2)
{
  return RIMDeliverConfigRequest(a1, *(_QWORD *)(a1 + 456), a2, 1);
}
