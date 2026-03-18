/*
 * XREFs of CmUnlockHiveSecurity @ 0x1404BF118
 * Callers:
 *     CmpSetKeySecurity @ 0x14006E950 (CmpSetKeySecurity.c)
 *     CmpAssignKeySecurity @ 0x140165FEC (CmpAssignKeySecurity.c)
 *     CmpCreateTombstone @ 0x1401E0B20 (CmpCreateTombstone.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmUnlockHiveSecurity(__int64 a1)
{
  return ExReleasePushLockEx(a1 + 2952, 0LL);
}
