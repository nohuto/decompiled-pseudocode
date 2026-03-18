/*
 * XREFs of EtwpCopyJobGuidSafe @ 0x140746620
 * Callers:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1401552FC (EtwTraceJobServerSiloMonitorCallback.c)
 *     EtwTraceJob @ 0x1407458D4 (EtwTraceJob.c)
 *     EtwTraceJobAssignProcess @ 0x1407459A0 (EtwTraceJobAssignProcess.c)
 *     EtwTraceJobSendNotification @ 0x140745AE4 (EtwTraceJobSendNotification.c)
 *     EtwTraceJobSetQuery @ 0x140745C30 (EtwTraceJobSetQuery.c)
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
