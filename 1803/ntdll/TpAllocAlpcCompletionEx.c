/*
 * XREFs of TpAllocAlpcCompletionEx @ 0x180056B60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180056B80 @ 0x180056B80 (sub_180056B80.c)
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
  return sub_180056B80(AlpcReturn, AlpcPort, Callback, Context, CallbackEnviron, v6);
}
