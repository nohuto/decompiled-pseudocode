/*
 * XREFs of IoWritePartitionTable @ 0x1406872C0
 * Callers:
 *     <none>
 * Callees:
 *     PcWritePartitionTable @ 0x14026865C (PcWritePartitionTable.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoWritePartitionTable(
        PDEVICE_OBJECT DeviceObject,
        ULONG SectorSize,
        ULONG SectorsPerTrack,
        ULONG NumberOfHeads,
        struct _DRIVE_LAYOUT_INFORMATION *PartitionBuffer)
{
  struct _DRIVE_LAYOUT_INFORMATION_EX *PoolWithTag; // rax
  struct _DRIVE_LAYOUT_INFORMATION_EX *v7; // rbx
  NTSTATUS v8; // edi
  DWORD v9; // r8d
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx

  PoolWithTag = (struct _DRIVE_LAYOUT_INFORMATION_EX *)ExAllocatePoolWithTag(
                                                         NonPagedPoolNx,
                                                         144 * PartitionBuffer->PartitionCount + 48,
                                                         0x54506F49u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  PoolWithTag->PartitionStyle = 0;
  v9 = 0;
  PoolWithTag->PartitionCount = PartitionBuffer->PartitionCount;
  for ( PoolWithTag->Mbr.Signature = PartitionBuffer->Signature;
        v9 < PartitionBuffer->PartitionCount;
        v7->PartitionEntry[v12].Mbr.HiddenSectors = *(DWORD *)((char *)&PartitionBuffer->PartitionEntry[0].HiddenSectors
                                                             + v11) )
  {
    v10 = v9;
    v11 = v9++;
    v11 *= 32LL;
    v12 = v10;
    v7->PartitionEntry[v12].PartitionStyle = PARTITION_STYLE_MBR;
    v7->PartitionEntry[v12].StartingOffset.QuadPart = *(LONGLONG *)((char *)&PartitionBuffer->PartitionEntry[0].StartingOffset.QuadPart
                                                                  + v11);
    v7->PartitionEntry[v12].PartitionLength.QuadPart = *(LONGLONG *)((char *)&PartitionBuffer->PartitionEntry[0].PartitionLength.QuadPart
                                                                   + v11);
    v7->PartitionEntry[v12].PartitionNumber = *(DWORD *)((char *)&PartitionBuffer->PartitionEntry[0].PartitionNumber
                                                       + v11);
    v7->PartitionEntry[v12].RewritePartition = *(&PartitionBuffer->PartitionEntry[0].RewritePartition + v11);
    v7->PartitionEntry[v12].Mbr.PartitionType = *(&PartitionBuffer->PartitionEntry[0].PartitionType + v11);
    v7->PartitionEntry[v12].Mbr.BootIndicator = *(&PartitionBuffer->PartitionEntry[0].BootIndicator + v11);
    v7->PartitionEntry[v12].Mbr.RecognizedPartition = *(&PartitionBuffer->PartitionEntry[0].RecognizedPartition + v11);
  }
  v8 = PcWritePartitionTable(DeviceObject, v7);
  ExFreePoolWithTag(v7, 0);
  return v8;
}
