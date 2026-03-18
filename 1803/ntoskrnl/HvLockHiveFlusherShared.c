/*
 * XREFs of HvLockHiveFlusherShared @ 0x1404E15C8
 * Callers:
 *     CmpSetKeySecurity @ 0x1400633D0 (CmpSetKeySecurity.c)
 *     CmpRemoveHiveFromNamespace @ 0x1400A1E60 (CmpRemoveHiveFromNamespace.c)
 *     CmpAssignKeySecurity @ 0x140184F70 (CmpAssignKeySecurity.c)
 *     CmpCreateTombstone @ 0x140222DF4 (CmpCreateTombstone.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall HvLockHiveFlusherShared(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1 + 72, 0LL);
}
