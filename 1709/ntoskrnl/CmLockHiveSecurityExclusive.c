/*
 * XREFs of CmLockHiveSecurityExclusive @ 0x140476D7C
 * Callers:
 *     CmpSetKeySecurity @ 0x1400161F0 (CmpSetKeySecurity.c)
 *     CmpAssignKeySecurity @ 0x1401593C4 (CmpAssignKeySecurity.c)
 *     CmpCreateTombstone @ 0x1401E4C50 (CmpCreateTombstone.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall CmLockHiveSecurityExclusive(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 2952, 0LL);
}
