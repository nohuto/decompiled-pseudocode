/*
 * XREFs of MiAcquireNonPagedResourcesForce @ 0x140214450
 * Callers:
 *     MiActOnPartitionNodePages @ 0x1402360CC (MiActOnPartitionNodePages.c)
 *     MiTransferPartitionPageRun @ 0x140238208 (MiTransferPartitionPageRun.c)
 * Callees:
 *     MiChargeResident @ 0x14002ADAC (MiChargeResident.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 */

__int64 __fastcall MiAcquireNonPagedResourcesForce(ULONG_PTR *a1, __int64 a2, __int64 a3, __int64 a4)
{
  MiChargeCommit((__int64)a1, 1uLL, 4LL, a4);
  return MiChargeResident(a1, 1uLL);
}
