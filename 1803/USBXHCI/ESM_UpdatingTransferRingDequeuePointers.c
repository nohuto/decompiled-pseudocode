/*
 * XREFs of ESM_UpdatingTransferRingDequeuePointers @ 0x1C003D9A0
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_SM_UpdateTransferRingDequeuePointers @ 0x1C0013C98 (Endpoint_SM_UpdateTransferRingDequeuePointers.c)
 */

__int64 __fastcall ESM_UpdatingTransferRingDequeuePointers(__int64 a1, __int64 a2, int a3)
{
  Endpoint_SM_UpdateTransferRingDequeuePointers(*(_QWORD *)(a1 + 960), a2, a3);
  return 1000LL;
}
