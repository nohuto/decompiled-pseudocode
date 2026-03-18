/*
 * XREFs of CmpArmDelayDerefKCBWorker @ 0x1405851A8
 * Callers:
 *     CmpDelayDerefKCBWorker @ 0x1404781A0 (CmpDelayDerefKCBWorker.c)
 *     CmpDelayDerefKeyControlBlock @ 0x140478AA0 (CmpDelayDerefKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x1404A97C0 (CmpDeleteKeyObject.c)
 * Callees:
 *     KeSetTimer2 @ 0x1400605A0 (KeSetTimer2.c)
 */

_BOOL8 CmpArmDelayDerefKCBWorker()
{
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF

  v1[1] = -1LL;
  v1[0] = 0LL;
  return KeSetTimer2((__int64)&CmpDelayDerefKCBTimer, -10000000LL, 0LL, (__int64)v1);
}
