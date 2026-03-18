/*
 * XREFs of CmpArmDelayDerefKCBWorker @ 0x140574F50
 * Callers:
 *     CmpDelayDerefKCBWorker @ 0x1404A84A0 (CmpDelayDerefKCBWorker.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1404A9930 (CmpDelayDerefKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x14059F520 (CmpDeleteKeyObject.c)
 * Callees:
 *     KeSetTimer2 @ 0x140037E50 (KeSetTimer2.c)
 */

_BOOL8 CmpArmDelayDerefKCBWorker()
{
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF

  v1[1] = -1LL;
  v1[0] = 0LL;
  return KeSetTimer2((__int64)&CmpDelayDerefKCBTimer, -10000000LL, 0LL, (__int64)v1);
}
