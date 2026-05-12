/*
 * XREFs of RaidXrbSetCompletionRoutine @ 0x1C000E488
 * Callers:
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0063844 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C0063F38 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C006667C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0066C6C (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0066F64 (RaidAdapterGetMiniportDumpInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidXrbSetCompletionRoutine(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 656) = a2;
}
