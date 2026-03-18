/*
 * XREFs of PspAdjustKeepAliveCountProcess @ 0x1407166EC
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x1400E5250 (IopDeleteFileObjectExtension.c)
 *     IoIncrementKeepAliveCount @ 0x1401FA710 (IoIncrementKeepAliveCount.c)
 *     IopKeepAliveWorker @ 0x1401FAD90 (IopKeepAliveWorker.c)
 * Callees:
 *     PspChargeProcessWakeCounter @ 0x1404A2250 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PspAdjustKeepAliveCountProcess(__int64 a1, int a2, __int64 a3, char a4)
{
  __int64 v5; // [rsp+68h] [rbp+20h] BYREF

  PspChargeProcessWakeCounter(a1, a4 == 0 ? 2 : 0, 1u, a3, a2, 0, (int *)&v5);
  return (unsigned int)v5;
}
