/*
 * XREFs of MiReturnProcessCommitment @ 0x140035908
 * Callers:
 *     MiDecommitRegion @ 0x1404952E0 (MiDecommitRegion.c)
 *     MiChargeFullProcessCommitment @ 0x140495E90 (MiChargeFullProcessCommitment.c)
 *     MiCleanPhysicalProcessPages @ 0x1406E54AC (MiCleanPhysicalProcessPages.c)
 *     NtAllocateUserPhysicalPages @ 0x1406E5CD8 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1406E649C (NtFreeUserPhysicalPages.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnProcessCommitment(__int64 a1, __int64 a2)
{
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1264), -a2);
}
