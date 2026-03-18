/*
 * XREFs of KdpSysReadMsr @ 0x1401FC550
 * Callers:
 *     KdSystemDebugControl @ 0x1406AB880 (KdSystemDebugControl.c)
 *     KdpSendWaitContinue @ 0x14078AC78 (KdpSendWaitContinue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdpSysReadMsr(unsigned int a1, _QWORD *a2)
{
  *a2 = __readmsr(a1);
  return 0LL;
}
