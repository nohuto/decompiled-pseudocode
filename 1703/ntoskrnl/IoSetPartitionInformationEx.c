/*
 * XREFs of IoSetPartitionInformationEx @ 0x1406872A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall IoSetPartitionInformationEx(
        PDEVICE_OBJECT DeviceObject,
        ULONG PartitionNumber,
        struct _SET_PARTITION_INFORMATION_EX *PartitionInfo)
{
  return PcSetPartition(DeviceObject, PartitionNumber, PartitionInfo);
}
