/*
 * XREFs of RaidFreeSrb @ 0x1C001B554
 * Callers:
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C006147C (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C0061B64 (RaWmiPassToMiniPort.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0065184 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidFreeSrb(void *a1)
{
  ExFreePoolWithTag(a1, 0x72536152u);
}
