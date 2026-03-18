/*
 * XREFs of IoSetPartitionInformation @ 0x140687240
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     PcSetPartition @ 0x1402685B0 (PcSetPartition.c)
 */

NTSTATUS __stdcall IoSetPartitionInformation(
        PDEVICE_OBJECT DeviceObject,
        ULONG SectorSize,
        ULONG PartitionNumber,
        ULONG PartitionType)
{
  BYTE v6; // bl
  _SET_PARTITION_INFORMATION_EX v8; // [rsp+20h] [rbp-88h] BYREF

  v6 = PartitionType;
  memset(&v8.Mbr + 1, 0, 0x6FuLL);
  v8.PartitionStyle = PARTITION_STYLE_MBR;
  v8.Mbr.PartitionType = v6;
  return PcSetPartition(DeviceObject, PartitionNumber, &v8);
}
