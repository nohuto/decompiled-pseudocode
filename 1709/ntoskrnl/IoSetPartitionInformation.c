/*
 * XREFs of IoSetPartitionInformation @ 0x1406B29F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SC_DISK@@UEAA@XZ @ 0x140146AE4 (--1SC_DISK@@UEAA@XZ.c)
 *     ??0SC_DISK@@QEAA@XZ @ 0x140146BD0 (--0SC_DISK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ?SetPartition@SC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x140292A7C (-SetPartition@SC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 *     ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1405C9528 (-Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

NTSTATUS __stdcall IoSetPartitionInformation(
        PDEVICE_OBJECT DeviceObject,
        ULONG SectorSize,
        ULONG PartitionNumber,
        ULONG PartitionType)
{
  BYTE v5; // di
  NTSTATUS v7; // ebx
  _SET_PARTITION_INFORMATION_EX v9; // [rsp+20h] [rbp-1B8h] BYREF
  _QWORD v10[36]; // [rsp+A0h] [rbp-138h] BYREF

  v5 = PartitionType;
  SC_DISK::SC_DISK((SC_DISK *)v10);
  v10[35] = 0LL;
  v10[0] = &NT_DISK::`vftable';
  memset(&v9.Mbr + 1, 0, 0x6FuLL);
  v9.PartitionStyle = PARTITION_STYLE_MBR;
  v9.Mbr.PartitionType = v5;
  v7 = NT_DISK::Initialize((NT_DISK *)v10, DeviceObject);
  if ( v7 >= 0 )
    v7 = SC_DISK::SetPartition((SC_DISK *)v10, PartitionNumber, &v9);
  v10[0] = &NT_DISK::`vftable';
  SC_DISK::~SC_DISK((SC_DISK *)v10);
  return v7;
}
