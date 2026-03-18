/*
 * XREFs of PspAdjustKeepAliveCountProcess @ 0x1406E00DC
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x140114990 (IopDeleteFileObjectExtension.c)
 *     IoIncrementKeepAliveCount @ 0x1401F4950 (IoIncrementKeepAliveCount.c)
 *     IopKeepAliveWorker @ 0x1401F4F90 (IopKeepAliveWorker.c)
 * Callees:
 *     PspChargeProcessWakeCounter @ 0x1405263E0 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PspAdjustKeepAliveCountProcess(__int64 a1, signed int a2, __int64 a3, char a4)
{
  unsigned int v5; // [rsp+68h] [rbp+20h] BYREF

  PspChargeProcessWakeCounter(a1, a4 == 0 ? 2 : 0, 1u, a3, a2, 0, (int *)&v5);
  return v5;
}
