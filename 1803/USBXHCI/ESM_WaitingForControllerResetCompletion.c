/*
 * XREFs of ESM_WaitingForControllerResetCompletion @ 0x1C003D9C0
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_SM_OkToCompleteEndpointResetRequest @ 0x1C0013720 (Endpoint_SM_OkToCompleteEndpointResetRequest.c)
 */

__int64 __fastcall ESM_WaitingForControllerResetCompletion(__int64 a1)
{
  Endpoint_SM_OkToCompleteEndpointResetRequest(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
