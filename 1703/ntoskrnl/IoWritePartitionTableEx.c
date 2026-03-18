/*
 * XREFs of IoWritePartitionTableEx @ 0x1406873B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall IoWritePartitionTableEx(
        PDEVICE_OBJECT DeviceObject,
        struct _DRIVE_LAYOUT_INFORMATION_EX *DriveLayout)
{
  return PcWritePartitionTable(DeviceObject, DriveLayout);
}
