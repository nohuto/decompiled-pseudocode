/*
 * XREFs of IoReadPartitionTable @ 0x1406870E0
 * Callers:
 *     <none>
 * Callees:
 *     PcReadPartitionTable @ 0x140161FCC (PcReadPartitionTable.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoReadPartitionTable(
        PDEVICE_OBJECT DeviceObject,
        ULONG SectorSize,
        BOOLEAN ReturnRecognizedPartitions,
        struct _DRIVE_LAYOUT_INFORMATION **PartitionBuffer)
{
  int PartitionTable; // eax
  DWORD *v7; // rbx
  NTSTATUS v8; // edi
  SIZE_T v9; // rbp
  struct _DRIVE_LAYOUT_INFORMATION *PoolWithTag; // rax
  __int64 v11; // r8
  struct _DRIVE_LAYOUT_INFORMATION *v12; // r9
  __int64 v13; // rcx
  unsigned __int8 v14; // al
  int v15; // r10d
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  P = 0LL;
  *PartitionBuffer = 0LL;
  PartitionTable = PcReadPartitionTable(DeviceObject, (struct _DRIVE_LAYOUT_INFORMATION_EX **)&P);
  v7 = (DWORD *)P;
  v8 = PartitionTable;
  if ( PartitionTable >= 0 )
  {
    if ( *(_DWORD *)P == 1 )
    {
      v8 = -1073741637;
    }
    else
    {
      v9 = (unsigned int)(32 * *((_DWORD *)P + 1) + 8);
      PoolWithTag = (struct _DRIVE_LAYOUT_INFORMATION *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x54506F49u);
      *PartitionBuffer = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v9);
        v11 = 0LL;
        (*PartitionBuffer)->PartitionCount = v7[1];
        for ( (*PartitionBuffer)->Signature = v7[2]; (unsigned int)v11 < v7[1]; v11 = (unsigned int)(v11 + 1) )
        {
          v12 = *PartitionBuffer;
          v13 = (unsigned int)v11;
          if ( ReturnRecognizedPartitions )
          {
            v14 = v7[36 * v11 + 20];
            if ( v14 <= 0xFu )
            {
              v15 = 32801;
              if ( _bittest(&v15, v14) )
                continue;
            }
          }
          v12->PartitionEntry[v13].StartingOffset.QuadPart = *(_QWORD *)&v7[36 * v11 + 14];
          v12->PartitionEntry[v13].PartitionLength.QuadPart = *(_QWORD *)&v7[36 * v11 + 16];
          v12->PartitionEntry[v13].HiddenSectors = v7[36 * v11 + 21];
          v12->PartitionEntry[v13].PartitionNumber = v7[36 * v11 + 18];
          v12->PartitionEntry[v13].PartitionType = v7[36 * v11 + 20];
          v12->PartitionEntry[v13].BootIndicator = BYTE1(v7[36 * v11 + 20]);
          v12->PartitionEntry[v13].RecognizedPartition = BYTE2(v7[36 * v11 + 20]);
          v12->PartitionEntry[v13].RewritePartition = v7[36 * v11 + 19];
        }
      }
      else
      {
        v8 = -1073741670;
      }
    }
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return v8;
}
