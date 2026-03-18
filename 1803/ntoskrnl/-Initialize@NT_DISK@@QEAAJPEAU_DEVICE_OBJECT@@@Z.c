/*
 * XREFs of ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1405F20D8
 * Callers:
 *     IoVerifyPartitionTable @ 0x1405F1EB0 (IoVerifyPartitionTable.c)
 *     IoCreateDisk @ 0x140717080 (IoCreateDisk.c)
 *     IoReadDiskSignature @ 0x140717130 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x140717230 (IoReadPartitionTable.c)
 *     IoReadPartitionTableEx @ 0x140717410 (IoReadPartitionTableEx.c)
 *     IoSetPartitionInformation @ 0x1407174C0 (IoSetPartitionInformation.c)
 *     IoSetPartitionInformationEx @ 0x1407175B0 (IoSetPartitionInformationEx.c)
 *     IoWritePartitionTable @ 0x140717670 (IoWritePartitionTable.c)
 *     IoWritePartitionTableEx @ 0x1407177E0 (IoWritePartitionTableEx.c)
 * Callees:
 *     ?InitializePartitionCache@SC_DISK@@QEAAJXZ @ 0x14015D1F4 (-InitializePartitionCache@SC_DISK@@QEAAJXZ.c)
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x14015D330 (-Initialize@SC_DISK@@UEAAJXZ.c)
 */

__int64 __fastcall NT_DISK::Initialize(NT_DISK *this, struct _DEVICE_OBJECT *a2)
{
  __int64 result; // rax

  *((_QWORD *)this + 35) = a2;
  result = SC_DISK::Initialize(this);
  if ( (int)result >= 0 )
    return SC_DISK::InitializePartitionCache(this);
  return result;
}
