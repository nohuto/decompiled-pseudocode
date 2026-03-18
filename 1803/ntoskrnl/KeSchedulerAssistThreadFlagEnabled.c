/*
 * XREFs of KeSchedulerAssistThreadFlagEnabled @ 0x140132988
 * Callers:
 *     PspAllocateThread @ 0x1405B8EE8 (PspAllocateThread.c)
 * Callees:
 *     <none>
 */

__int64 KeSchedulerAssistThreadFlagEnabled()
{
  return (unsigned int)KiSchedulerAssistThreadFlagEnabled;
}
