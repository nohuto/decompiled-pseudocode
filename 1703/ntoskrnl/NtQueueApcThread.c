/*
 * XREFs of NtQueueApcThread @ 0x1404C971C
 * Callers:
 *     <none>
 * Callees:
 *     NtQueueApcThreadEx @ 0x1404C9748 (NtQueueApcThreadEx.c)
 */

NTSTATUS __stdcall NtQueueApcThread(
        HANDLE ThreadHandle,
        PKNORMAL_ROUTINE ApcRoutine,
        PVOID NormalContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  return NtQueueApcThreadEx(
           ThreadHandle,
           0LL,
           (PPS_APC_ROUTINE)ApcRoutine,
           NormalContext,
           SystemArgument1,
           SystemArgument2);
}
