/*
 * XREFs of CmpUnlockHiveFlusher @ 0x140476DAC
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x140015CA8 (CmpRemoveHiveFromNamespace.c)
 *     CmpSetKeySecurity @ 0x1400161F0 (CmpSetKeySecurity.c)
 *     CmpAssignKeySecurity @ 0x1401593C4 (CmpAssignKeySecurity.c)
 *     CmpCreateTombstone @ 0x1401E4C50 (CmpCreateTombstone.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 */

void __fastcall CmpUnlockHiveFlusher(__int64 a1)
{
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
}
