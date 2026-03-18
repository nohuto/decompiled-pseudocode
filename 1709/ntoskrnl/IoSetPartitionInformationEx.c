/*
 * XREFs of IoSetPartitionInformationEx @ 0x1406B2AE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SC_DISK@@UEAA@XZ @ 0x140146AE4 (--1SC_DISK@@UEAA@XZ.c)
 *     ??0SC_DISK@@QEAA@XZ @ 0x140146BD0 (--0SC_DISK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ?SetPartition@SC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x140292A7C (-SetPartition@SC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 *     ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1405C9528 (-Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

NTSTATUS __stdcall IoSetPartitionInformationEx(
        PDEVICE_OBJECT DeviceObject,
        ULONG PartitionNumber,
        struct _SET_PARTITION_INFORMATION_EX *PartitionInfo)
{
  struct _DEVICE_OBJECT *v5; // r9
  NTSTATUS v6; // ebx
  _QWORD v8[36]; // [rsp+20h] [rbp-138h] BYREF

  SC_DISK::SC_DISK((SC_DISK *)v8);
  v8[35] = 0LL;
  v8[0] = &NT_DISK::`vftable';
  v6 = NT_DISK::Initialize((NT_DISK *)v8, v5);
  if ( v6 >= 0 )
    v6 = SC_DISK::SetPartition((SC_DISK *)v8, PartitionNumber, PartitionInfo);
  v8[0] = &NT_DISK::`vftable';
  SC_DISK::~SC_DISK((SC_DISK *)v8);
  return v6;
}
