/*
 * XREFs of NtQueueApcThread @ 0x14056BB54
 * Callers:
 *     <none>
 * Callees:
 *     NtQueueApcThreadEx @ 0x14056BB80 (NtQueueApcThreadEx.c)
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
