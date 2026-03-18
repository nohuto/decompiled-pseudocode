/*
 * XREFs of MiReferencePagePartition @ 0x14025B1B4
 * Callers:
 *     MiUnlinkBadPages @ 0x140252F68 (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140253170 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x14006FF20 (PsReferencePartitionSafe.c)
 */

__int64 __fastcall MiReferencePagePartition(__int64 a1)
{
  char v1; // al
  __int64 v2; // r8

  v1 = PsReferencePartitionSafe(*(_QWORD *)(*(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL))
                                          + 168LL));
  return v2 & -(__int64)(v1 != 0);
}
