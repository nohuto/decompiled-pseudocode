/*
 * XREFs of TpAllocAlpcCompletion @ 0x18007F2E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007F460 @ 0x18007F460 (sub_18007F460.c)
 */

NTSTATUS __cdecl TpAllocAlpcCompletion(
        PTP_ALPC *AlpcReturn,
        HANDLE AlpcPort,
        PTP_ALPC_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  char v6; // [rsp+28h] [rbp-10h]

  v6 = 0;
  return sub_18007F460(AlpcReturn, AlpcPort, Callback, Context, CallbackEnviron, v6);
}
