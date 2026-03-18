/*
 * XREFs of IoReadPartitionTableEx @ 0x140717410
 * Callers:
 *     <none>
 * Callees:
 *     ??1SC_DISK@@UEAA@XZ @ 0x14015D23C (--1SC_DISK@@UEAA@XZ.c)
 *     ??0SC_DISK@@QEAA@XZ @ 0x14015D444 (--0SC_DISK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1402C8464 (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1405F20D8 (-Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

NTSTATUS __stdcall IoReadPartitionTableEx(
        PDEVICE_OBJECT DeviceObject,
        struct _DRIVE_LAYOUT_INFORMATION_EX **DriveLayout)
{
  struct _DEVICE_OBJECT *v3; // r8
  NTSTATUS PartitionTable; // ebx
  _QWORD v6[36]; // [rsp+20h] [rbp-138h] BYREF

  SC_DISK::SC_DISK((SC_DISK *)v6);
  v6[35] = 0LL;
  v6[0] = &NT_DISK::`vftable';
  PartitionTable = NT_DISK::Initialize((NT_DISK *)v6, v3);
  if ( PartitionTable >= 0 )
    PartitionTable = SC_DISK::ReadPartitionTable((SC_DISK *)v6, (struct SC_DISK_LAYOUT **)DriveLayout);
  v6[0] = &NT_DISK::`vftable';
  SC_DISK::~SC_DISK((SC_DISK *)v6);
  return PartitionTable;
}
