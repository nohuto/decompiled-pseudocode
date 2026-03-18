/*
 * XREFs of ACPIBuildIssueInvalidateRelations @ 0x1C0026980
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildIssueInvalidateRelationsWorker @ 0x1C00269B8 (ACPIBuildIssueInvalidateRelationsWorker.c)
 */

void __fastcall ACPIBuildIssueInvalidateRelations(__int64 a1, __int64 a2)
{
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  ACPIBuildIssueInvalidateRelationsWorker(a2);
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
}
