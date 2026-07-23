/*
 * XREFs of TpAllocAlpcCompletionEx @ 0x18007F440
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007F460 @ 0x18007F460 (sub_18007F460.c)
 */

NTSTATUS __cdecl TpAllocAlpcCompletionEx(
        PTP_ALPC *AlpcReturn,
        HANDLE AlpcPort,
        PTP_ALPC_CALLBACK_EX Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  char v6; // [rsp+28h] [rbp-10h]

  v6 = 1;
  return sub_18007F460(AlpcReturn, AlpcPort, Callback, Context, CallbackEnviron, v6);
}
