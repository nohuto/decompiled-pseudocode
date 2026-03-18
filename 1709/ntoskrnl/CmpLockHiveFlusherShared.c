/*
 * XREFs of CmpLockHiveFlusherShared @ 0x140476D5C
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x140015CA8 (CmpRemoveHiveFromNamespace.c)
 *     CmpSetKeySecurity @ 0x1400161F0 (CmpSetKeySecurity.c)
 *     CmpAssignKeySecurity @ 0x1401593C4 (CmpAssignKeySecurity.c)
 *     CmpCreateTombstone @ 0x1401E4C50 (CmpCreateTombstone.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN __fastcall CmpLockHiveFlusherShared(__int64 a1)
{
  return ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 2848), 1u);
}
