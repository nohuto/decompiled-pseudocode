/*
 * XREFs of NtQueueApcThread @ 0x1404D97CC
 * Callers:
 *     <none>
 * Callees:
 *     NtQueueApcThreadEx @ 0x1404D9590 (NtQueueApcThreadEx.c)
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
           (__int64)ApcRoutine,
           (__int64)NormalContext,
           (__int64)SystemArgument1,
           (__int64)SystemArgument2);
}
