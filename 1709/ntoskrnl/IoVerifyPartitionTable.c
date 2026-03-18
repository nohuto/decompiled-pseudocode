/*
 * XREFs of IoVerifyPartitionTable @ 0x1405C9300
 * Callers:
 *     IopCreateArcName @ 0x1405C8AA8 (IopCreateArcName.c)
 * Callees:
 *     ?VerifyPartitionTable@SC_DISK@@QEAAJE@Z @ 0x140146954 (-VerifyPartitionTable@SC_DISK@@QEAAJE@Z.c)
 *     ??1SC_DISK@@UEAA@XZ @ 0x140146AE4 (--1SC_DISK@@UEAA@XZ.c)
 *     ??0SC_DISK@@QEAA@XZ @ 0x140146BD0 (--0SC_DISK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1405C9528 (-Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
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
