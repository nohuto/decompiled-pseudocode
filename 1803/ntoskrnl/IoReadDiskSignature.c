/*
 * XREFs of IoReadDiskSignature @ 0x140717130
 * Callers:
 *     <none>
 * Callees:
 *     ??1SC_DISK@@UEAA@XZ @ 0x14015D23C (--1SC_DISK@@UEAA@XZ.c)
 *     ??0SC_DISK@@QEAA@XZ @ 0x14015D444 (--0SC_DISK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1402C8464 (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1405F20D8 (-Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

NTSTATUS __stdcall IoReadDiskSignature(PDEVICE_OBJECT DeviceObject, ULONG BytesPerSector, PDISK_SIGNATURE Signature)
{
  struct _DEVICE_OBJECT *v4; // r9
  NTSTATUS v5; // ebx
  int PartitionTable; // eax
  char *v7; // rcx
  PVOID P; // [rsp+20h] [rbp-148h] BYREF
  _QWORD v10[36]; // [rsp+30h] [rbp-138h] BYREF

  SC_DISK::SC_DISK((SC_DISK *)v10);
  v10[35] = 0LL;
  P = 0LL;
  v10[0] = &NT_DISK::`vftable';
  v5 = NT_DISK::Initialize((NT_DISK *)v10, v4);
  if ( v5 >= 0 )
  {
    PartitionTable = SC_DISK::ReadPartitionTable((SC_DISK *)v10, (struct SC_DISK_LAYOUT **)&P);
    v7 = (char *)P;
    v5 = PartitionTable;
    if ( PartitionTable >= 0 )
    {
      Signature->PartitionStyle = *(_DWORD *)P;
      if ( *(_DWORD *)v7 )
      {
        if ( *(_DWORD *)v7 == 1 )
          Signature->4 = *(union _DISK_SIGNATURE::$9D353A9A2948DD7B98BCBBCC4F8D6995 *)(v7 + 8);
        else
          v5 = -1073741637;
      }
      else
      {
        Signature->Mbr.Signature = *((_DWORD *)v7 + 2);
        Signature->Mbr.CheckSum = *((_DWORD *)v7 + 3);
      }
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
  }
  v10[0] = &NT_DISK::`vftable';
  SC_DISK::~SC_DISK((SC_DISK *)v10);
  return v5;
}
