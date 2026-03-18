/*
 * XREFs of MmCreatePartition @ 0x140158808
 * Callers:
 *     PspAllocatePartition @ 0x1405E9330 (PspAllocatePartition.c)
 * Callees:
 *     MiInitializeWorkingSetManagerParameters @ 0x140159EF4 (MiInitializeWorkingSetManagerParameters.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiDeletePartition @ 0x14021F520 (MiDeletePartition.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiSizeMemoryListLocks @ 0x14059F5C8 (MiSizeMemoryListLocks.c)
 *     MiInitializeMemoryEvents @ 0x1405B1D08 (MiInitializeMemoryEvents.c)
 *     MiInitializePartition @ 0x1405B30A8 (MiInitializePartition.c)
 *     MiCreateLargePfnBitMaps @ 0x1405B4DC8 (MiCreateLargePfnBitMaps.c)
 *     MiAllocatePartitionId @ 0x1406E27D0 (MiAllocatePartitionId.c)
 *     MiInitializePartitionThreads @ 0x1406E2988 (MiInitializePartitionThreads.c)
 */

__int64 __fastcall MmCreatePartition(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // r8
  SIZE_T v6; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int16 PartitionId; // ax
  int v16; // ebx

  if ( (_BYTE)a2 )
  {
    *a1 = &MiSystemPartition;
    result = 0LL;
    qword_14038A168 = (__int64)a1;
    return result;
  }
  v4 = MiSizeMemoryListLocks(a1, a2, (unsigned int)(2 * dword_140388544));
  v6 = 16 * v5 + ((8256LL * (unsigned __int16)KeNumberNodes + 10383 + 40 * v5) & 0xFFFFFFFFFFFFFFF0uLL) + v4;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x6150694Du);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v6);
  v9 = (unsigned __int16)KeNumberNodes;
  v8[2] = v8 + 1296;
  v10 = (__int64)&v8[1032 * v9 + 1296];
  v8[256] = v10;
  v11 = v10 + 40LL * (unsigned int)dword_140388544;
  v8[257] = v11;
  v12 = (v11 + 40LL * (unsigned int)dword_140388544 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v8[509] = v12;
  v13 = v12 + 16LL * (unsigned int)dword_140388544;
  v8[510] = v13;
  v14 = v13 + 16LL * (unsigned int)dword_140388544;
  v8[21] = a1;
  v8[613] = v14;
  PartitionId = MiAllocatePartitionId(v8);
  if ( !PartitionId )
  {
    ExFreePoolWithTag(v8, 0);
    return 3221225495LL;
  }
  MiInitializePartition(v8, PartitionId);
  if ( !(unsigned int)MiInitializeMemoryEvents(v8)
    || !(unsigned int)MiCreateLargePfnBitMaps(v8, 0LL)
    || !(unsigned int)MiInitializeWorkingSetManagerParameters(v8) )
  {
    v16 = -1073741670;
    goto LABEL_13;
  }
  v16 = MiInitializePartitionThreads(v8);
  if ( v16 < 0 )
  {
LABEL_13:
    MiDeletePartition(v8);
    return (unsigned int)v16;
  }
  *a1 = v8;
  return (unsigned int)v16;
}
