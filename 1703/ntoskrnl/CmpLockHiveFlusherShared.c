/*
 * XREFs of CmpLockHiveFlusherShared @ 0x1404C0000
 * Callers:
 *     CmpSetKeySecurity @ 0x14006E950 (CmpSetKeySecurity.c)
 *     CmpRemoveHiveFromNamespace @ 0x14007FC2C (CmpRemoveHiveFromNamespace.c)
 *     CmpAssignKeySecurity @ 0x140165FEC (CmpAssignKeySecurity.c)
 *     CmpCreateTombstone @ 0x1401E0B20 (CmpCreateTombstone.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall CmpLockHiveFlusherShared(__int64 a1)
{
  return ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 2848), 1u);
}
