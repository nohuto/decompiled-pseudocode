/*
 * XREFs of CmLockHiveSecurityExclusive @ 0x1404BFFEC
 * Callers:
 *     CmpSetKeySecurity @ 0x14006E950 (CmpSetKeySecurity.c)
 *     CmpAssignKeySecurity @ 0x140165FEC (CmpAssignKeySecurity.c)
 *     CmpCreateTombstone @ 0x1401E0B20 (CmpCreateTombstone.c)
 * Callees:
 *     <none>
 */

void __fastcall CmLockHiveSecurityExclusive(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 2952, 0LL);
}
