/*
 * XREFs of EtwpCopyJobGuidSafe @ 0x14070B4FC
 * Callers:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x140163C1C (EtwTraceJobServerSiloMonitorCallback.c)
 *     EtwTraceJob @ 0x14070AA40 (EtwTraceJob.c)
 *     EtwTraceJobAssignProcess @ 0x14070AAFC (EtwTraceJobAssignProcess.c)
 *     EtwTraceJobSendNotification @ 0x14070AC40 (EtwTraceJobSendNotification.c)
 *     EtwTraceJobSetQuery @ 0x14070AD8C (EtwTraceJobSetQuery.c)
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
