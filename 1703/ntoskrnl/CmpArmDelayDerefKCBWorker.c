/*
 * XREFs of CmpArmDelayDerefKCBWorker @ 0x14044CCA8
 * Callers:
 *     CmpDelayDerefKeyControlBlock @ 0x14044CC04 (CmpDelayDerefKeyControlBlock.c)
 *     CmpDelayDerefKCBWorker @ 0x140490BA0 (CmpDelayDerefKCBWorker.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1404910B0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDeleteKeyObject @ 0x140506F30 (CmpDeleteKeyObject.c)
 * Callees:
 *     KeSetTimer2 @ 0x140049180 (KeSetTimer2.c)
 */

_BOOL8 CmpArmDelayDerefKCBWorker()
{
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF

  v1[1] = -1LL;
  v1[0] = 0LL;
  return KeSetTimer2((__int64)&CmpDelayDerefKCBTimer, -10000000LL, 0LL, (__int64)v1);
}
