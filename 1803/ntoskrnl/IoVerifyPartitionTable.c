/*
 * XREFs of IoVerifyPartitionTable @ 0x1405F1EB0
 * Callers:
 *     IopCreateArcName @ 0x1406031D8 (IopCreateArcName.c)
 * Callees:
 *     ?VerifyPartitionTable@SC_DISK@@QEAAJE@Z @ 0x14015D1C8 (-VerifyPartitionTable@SC_DISK@@QEAAJE@Z.c)
 *     ??1SC_DISK@@UEAA@XZ @ 0x14015D23C (--1SC_DISK@@UEAA@XZ.c)
 *     ??0SC_DISK@@QEAA@XZ @ 0x14015D444 (--0SC_DISK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1405F20D8 (-Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

NTSTATUS __stdcall IoVerifyPartitionTable(PDEVICE_OBJECT DeviceObject, BOOLEAN FixErrors)
{
  struct _DEVICE_OBJECT *v3; // r8
  NTSTATUS v4; // ebx
  _QWORD v6[36]; // [rsp+20h] [rbp-138h] BYREF

  SC_DISK::SC_DISK((SC_DISK *)v6);
  v6[35] = 0LL;
  v6[0] = &NT_DISK::`vftable';
  v4 = NT_DISK::Initialize((NT_DISK *)v6, v3);
  if ( v4 >= 0 )
    v4 = SC_DISK::VerifyPartitionTable((SC_DISK *)v6, FixErrors);
  v6[0] = &NT_DISK::`vftable';
  SC_DISK::~SC_DISK((SC_DISK *)v6);
  return v4;
}
