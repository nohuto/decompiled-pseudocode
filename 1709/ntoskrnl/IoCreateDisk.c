/*
 * XREFs of IoCreateDisk @ 0x1406B25B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SC_DISK@@UEAA@XZ @ 0x140146AE4 (--1SC_DISK@@UEAA@XZ.c)
 *     ??0SC_DISK@@QEAA@XZ @ 0x140146BD0 (--0SC_DISK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ?CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x1402926F8 (-CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1405C9528 (-Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

NTSTATUS __stdcall IoCreateDisk(PDEVICE_OBJECT DeviceObject, struct _CREATE_DISK *Disk)
{
  struct _DEVICE_OBJECT *v3; // r8
  NTSTATUS PartitionTable; // ebx
  _QWORD v6[36]; // [rsp+20h] [rbp-138h] BYREF

  SC_DISK::SC_DISK((SC_DISK *)v6);
  v6[35] = 0LL;
  v6[0] = &NT_DISK::`vftable';
  PartitionTable = NT_DISK::Initialize((NT_DISK *)v6, v3);
  if ( PartitionTable >= 0 )
    PartitionTable = SC_DISK::CreatePartitionTable((SC_DISK *)v6, Disk);
  v6[0] = &NT_DISK::`vftable';
  SC_DISK::~SC_DISK((SC_DISK *)v6);
  return PartitionTable;
}
