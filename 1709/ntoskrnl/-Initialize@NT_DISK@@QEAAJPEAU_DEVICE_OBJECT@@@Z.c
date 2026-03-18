/*
 * XREFs of ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1405C9528
 * Callers:
 *     IoVerifyPartitionTable @ 0x1405C9300 (IoVerifyPartitionTable.c)
 *     IoCreateDisk @ 0x1406B25B0 (IoCreateDisk.c)
 *     IoReadDiskSignature @ 0x1406B2660 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x1406B2760 (IoReadPartitionTable.c)
 *     IoReadPartitionTableEx @ 0x1406B2940 (IoReadPartitionTableEx.c)
 *     IoSetPartitionInformation @ 0x1406B29F0 (IoSetPartitionInformation.c)
 *     IoSetPartitionInformationEx @ 0x1406B2AE0 (IoSetPartitionInformationEx.c)
 *     IoWritePartitionTable @ 0x1406B2BA0 (IoWritePartitionTable.c)
 *     IoWritePartitionTableEx @ 0x1406B2D10 (IoWritePartitionTableEx.c)
 * Callees:
 *     ?InitializePartitionCache@SC_DISK@@QEAAJXZ @ 0x140146980 (-InitializePartitionCache@SC_DISK@@QEAAJXZ.c)
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x1401469D0 (-Initialize@SC_DISK@@UEAAJXZ.c)
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
