/*
 * XREFs of KeQueryRuntimeThread @ 0x140132300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall KeQueryRuntimeThread(PKTHREAD Thread, PULONG UserTime)
{
  *UserTime = Thread->UserTime;
  return Thread->SchedulerApc.SpareLong0;
}
