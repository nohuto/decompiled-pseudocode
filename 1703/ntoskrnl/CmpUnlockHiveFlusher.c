/*
 * XREFs of CmpUnlockHiveFlusher @ 0x1404BF104
 * Callers:
 *     CmpSetKeySecurity @ 0x14006E950 (CmpSetKeySecurity.c)
 *     CmpRemoveHiveFromNamespace @ 0x14007FC2C (CmpRemoveHiveFromNamespace.c)
 *     CmpAssignKeySecurity @ 0x140165FEC (CmpAssignKeySecurity.c)
 *     CmpCreateTombstone @ 0x1401E0B20 (CmpCreateTombstone.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpUnlockHiveFlusher(__int64 a1)
{
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
}
