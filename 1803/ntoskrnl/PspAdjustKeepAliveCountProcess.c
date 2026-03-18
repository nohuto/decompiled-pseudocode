/*
 * XREFs of PspAdjustKeepAliveCountProcess @ 0x14077A780
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x140062248 (IopDeleteFileObjectExtension.c)
 *     IoIncrementKeepAliveCount @ 0x1402375A0 (IoIncrementKeepAliveCount.c)
 *     IopKeepAliveWorker @ 0x140237B30 (IopKeepAliveWorker.c)
 * Callees:
 *     PspChargeProcessWakeCounter @ 0x1404CE250 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PspAdjustKeepAliveCountProcess(__int64 a1, int a2, __int64 a3, char a4)
{
  __int64 v5; // [rsp+68h] [rbp+20h] BYREF

  PspChargeProcessWakeCounter(a1, a4 == 0 ? 2 : 0, 1u, a3, a2, 0, (int *)&v5);
  return (unsigned int)v5;
}
