/*
 * XREFs of RaidFreeSrb @ 0x1C0012210
 * Callers:
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C005EFC0 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C0060A04 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00632F8 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0063B84 (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0063E98 (RaidAdapterGetMiniportDumpInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidFreeSrb(void *a1)
{
  ExFreePoolWithTag(a1, 0x72536152u);
}
