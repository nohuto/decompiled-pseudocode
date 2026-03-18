/*
 * XREFs of KdpSysWriteMsr @ 0x1401FC63C
 * Callers:
 *     KdSystemDebugControl @ 0x1406AB880 (KdSystemDebugControl.c)
 *     KdpSendWaitContinue @ 0x14078AC78 (KdpSendWaitContinue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdpSysWriteMsr(unsigned int a1, unsigned __int64 *a2)
{
  __writemsr(a1, *a2);
  return 0LL;
}
