/*
 * XREFs of CmUnlockHiveSecurity @ 0x1404E1DF8
 * Callers:
 *     CmpSetKeySecurity @ 0x1400633D0 (CmpSetKeySecurity.c)
 *     CmpAssignKeySecurity @ 0x140184F70 (CmpAssignKeySecurity.c)
 *     CmpCreateTombstone @ 0x140222DF4 (CmpCreateTombstone.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 */

char __fastcall CmUnlockHiveSecurity(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ExReleasePushLockEx(a1 + 1776, 0LL, a3, a4);
}
