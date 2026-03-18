/*
 * XREFs of KdpSysWriteMsr @ 0x140202350
 * Callers:
 *     KdSystemDebugControl @ 0x1406D6B20 (KdSystemDebugControl.c)
 *     KdpSendWaitContinue @ 0x140797EA0 (KdpSendWaitContinue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdpSysWriteMsr(unsigned int a1, unsigned __int64 *a2)
{
  __writemsr(a1, *a2);
  return 0LL;
}
