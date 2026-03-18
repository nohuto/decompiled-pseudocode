/*
 * XREFs of KdpSysReadMsr @ 0x14023F3C4
 * Callers:
 *     KdSystemDebugControl @ 0x140740980 (KdSystemDebugControl.c)
 *     KdpSendWaitContinue @ 0x140804F74 (KdpSendWaitContinue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdpSysReadMsr(unsigned int a1, _QWORD *a2)
{
  *a2 = __readmsr(a1);
  return 0LL;
}
