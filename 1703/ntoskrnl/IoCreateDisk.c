/*
 * XREFs of IoCreateDisk @ 0x1406870D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall IoCreateDisk(PDEVICE_OBJECT DeviceObject, struct _CREATE_DISK *Disk)
{
  return PcCreatePartitionTable(DeviceObject, Disk);
}
