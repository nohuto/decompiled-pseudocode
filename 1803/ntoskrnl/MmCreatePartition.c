/*
 * XREFs of MmCreatePartition @ 0x140184450
 * Callers:
 *     PspAllocatePartition @ 0x14064EEF0 (PspAllocatePartition.c)
 * Callees:
 *     MiInitializeWorkingSetManagerParameters @ 0x140184940 (MiInitializeWorkingSetManagerParameters.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiDeletePartition @ 0x14025B0C0 (MiDeletePartition.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x1404955A0 (ExAllocateCacheAwareRundownProtection.c)
 *     MiSizeMemoryListLocks @ 0x140584D18 (MiSizeMemoryListLocks.c)
 *     MiInitializePartition @ 0x14061BA7C (MiInitializePartition.c)
 *     MiInitializeMemoryEvents @ 0x14061C8B0 (MiInitializeMemoryEvents.c)
 *     MiCreateLargePfnBitMaps @ 0x14064A598 (MiCreateLargePfnBitMaps.c)
 *     MiAllocatePartitionId @ 0x14074D568 (MiAllocatePartitionId.c)
 *     MiInitializePartitionThreads @ 0x14074D720 (MiInitializePartitionThreads.c)
 */

__int64 __fastcall MmCreatePartition(_QWORD *a1, char a2)
{
  __int64 result; // rax
  __int64 v4; // rbp
  SIZE_T v5; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  unsigned __int16 PartitionId; // ax
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax
  int v16; // ebx

  if ( a2 )
  {
    *a1 = &MiSystemPartition;
    result = 0LL;
    qword_1403CDFE8 = (__int64)a1;
    return result;
  }
  v4 = MiSizeMemoryListLocks();
  v5 = v4
     + ((1984LL * (unsigned __int16)KeNumberNodes + 11471 + 40LL * (unsigned int)(2 * dword_1403CB6DC)) & 0xFFFFFFFFFFFFFFF0uLL)
     + 24LL * dword_1403CBD38 * (unsigned int)(unsigned __int16)KeNumberNodes
     + 16LL * (unsigned int)(2 * dword_1403CB6DC);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x6150694Du);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v5);
  v8 = (unsigned __int16)KeNumberNodes;
  v7[2] = v7 + 1432;
  v9 = (__int64)&v7[248 * v8 + 1432];
  v7[264] = v9;
  v10 = v9 + 40LL * (unsigned int)dword_1403CB6DC;
  v7[265] = v10;
  v11 = (v10 + 40LL * (unsigned int)dword_1403CB6DC + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v7[517] = v11;
  v12 = v11 + 16LL * (unsigned int)dword_1403CB6DC;
  v7[518] = v12;
  v13 = 16LL * (unsigned int)dword_1403CB6DC + v12;
  v7[21] = a1;
  v7[621] = v13;
  v7[629] = v13 + v4;
  PartitionId = MiAllocatePartitionId(v7);
  if ( !PartitionId )
  {
    ExFreePoolWithTag(v7, 0);
    return 3221225495LL;
  }
  MiInitializePartition(v7, PartitionId);
  if ( !(unsigned int)MiInitializeMemoryEvents(v7)
    || !(unsigned int)MiCreateLargePfnBitMaps(v7, 0LL)
    || !(unsigned int)MiInitializeWorkingSetManagerParameters(v7)
    || (CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x7270694Du),
        (v7[258] = CacheAwareRundownProtection) == 0LL) )
  {
    v16 = -1073741670;
    goto LABEL_14;
  }
  v16 = MiInitializePartitionThreads(v7);
  if ( v16 < 0 )
  {
LABEL_14:
    MiDeletePartition(v7);
    return (unsigned int)v16;
  }
  *a1 = v7;
  return (unsigned int)v16;
}
