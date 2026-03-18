/*
 * XREFs of EtwpCopyJobGuidSafe @ 0x1407A8228
 * Callers:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1401822E8 (EtwTraceJobServerSiloMonitorCallback.c)
 *     EtwTraceJob @ 0x1407A7840 (EtwTraceJob.c)
 *     EtwTraceJobAssignProcess @ 0x1407A790C (EtwTraceJobAssignProcess.c)
 *     EtwTraceJobSendNotification @ 0x1407A7A50 (EtwTraceJobSendNotification.c)
 *     EtwTraceJobSetQuery @ 0x1407A7B9C (EtwTraceJobSetQuery.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCopyJobGuidSafe(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    *(_OWORD *)a1 = *(_OWORD *)(a2 + 1224);
  }
  else
  {
    result = 0LL;
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  return result;
}
