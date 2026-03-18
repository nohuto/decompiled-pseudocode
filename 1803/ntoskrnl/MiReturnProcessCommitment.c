/*
 * XREFs of MiReturnProcessCommitment @ 0x14000A180
 * Callers:
 *     MiDecommitRegion @ 0x1404AE180 (MiDecommitRegion.c)
 *     MiChargeFullProcessCommitment @ 0x1405B6870 (MiChargeFullProcessCommitment.c)
 *     MiCleanPhysicalProcessPages @ 0x14074F9E0 (MiCleanPhysicalProcessPages.c)
 *     NtAllocateUserPhysicalPages @ 0x14074FE5C (NtAllocateUserPhysicalPages.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnProcessCommitment(__int64 a1, __int64 a2)
{
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1264), -a2);
}
