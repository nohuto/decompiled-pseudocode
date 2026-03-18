/*
 * XREFs of MiAcquireNonPagedResourcesForce @ 0x140252618
 * Callers:
 *     MiActOnPartitionNodePages @ 0x14026DA80 (MiActOnPartitionNodePages.c)
 *     MiTransferPartitionPageRun @ 0x14026FE30 (MiTransferPartitionPageRun.c)
 * Callees:
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiChargeResident @ 0x140131D0C (MiChargeResident.c)
 */

__int64 __fastcall MiAcquireNonPagedResourcesForce(ULONG_PTR *a1)
{
  __int64 v2; // r9

  MiChargeCommit((__int64)a1, 1uLL, 4u);
  return MiChargeResident(a1, 1uLL, 0xFFFFFFFFLL, v2);
}
