/*
 * XREFs of IoVerifyPartitionTable @ 0x1406872B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall IoVerifyPartitionTable(PDEVICE_OBJECT DeviceObject, BOOLEAN FixErrors)
{
  return PcVerifyPartitionTable(DeviceObject, FixErrors);
}
