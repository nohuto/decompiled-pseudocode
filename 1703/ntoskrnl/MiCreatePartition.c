/*
 * XREFs of MiCreatePartition @ 0x1406BC9B0
 * Callers:
 *     NtCreatePartition @ 0x1406BD278 (NtCreatePartition.c)
 * Callees:
 *     MiDereferencePartition @ 0x140062B34 (MiDereferencePartition.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     MiInsertNewPartitionInList @ 0x140154374 (MiInsertNewPartitionInList.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x140166550 (MiInitializeWorkingSetManagerParameters.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiPartitionObjectCreate @ 0x1405A1868 (MiPartitionObjectCreate.c)
 *     MiInitializePartition @ 0x1405A1920 (MiInitializePartition.c)
 *     MiInitializeMemoryEvents @ 0x1405A25E8 (MiInitializeMemoryEvents.c)
 *     MiCreateLargePfnBitMaps @ 0x1405BA7C0 (MiCreateLargePfnBitMaps.c)
 *     MiAllocatePartitionId @ 0x1406B607C (MiAllocatePartitionId.c)
 *     MiInitializePartitionThreads @ 0x1406B6230 (MiInitializePartitionThreads.c)
 */

__int64 __fastcall MiCreatePartition(ULONG_PTR **Object, unsigned int a2, int a3, unsigned __int8 a4, _QWORD *a5)
{
  _QWORD *v6; // r14
  int v8; // ecx
  __int64 v10; // r9
  SIZE_T v12; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v14; // rdi
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rdx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rcx
  __int16 PartitionId; // ax
  ULONG_PTR *v22; // rax
  unsigned __int64 v23; // r8
  int v24; // ebx

  v6 = a5;
  v8 = (unsigned __int16)KeNumberNodes + 27;
  v10 = 2184LL * (unsigned __int16)KeNumberNodes + 10191;
  *a5 = 0LL;
  v12 = 16LL * (unsigned int)(2 * dword_14036C1FC)
      + ((v10 + 40LL * (unsigned int)(2 * dword_14036C1FC)) & 0xFFFFFFFFFFFFFFF0uLL)
      + 24LL * (unsigned int)(2 * dword_14036C1FC + v8);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x6150694Du);
  v14 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v12);
  v16 = (unsigned __int16)KeNumberNodes;
  v14[6] = v14 + 1272;
  v17 = (__int64)&v14[273 * v16 + 1272];
  v14[240] = v17;
  v18 = v17 + 40LL * (unsigned int)dword_14036C1FC;
  v14[241] = v18;
  v19 = (v18 + 40LL * (unsigned int)dword_14036C1FC + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v14[493] = v19;
  v20 = v19 + 16LL * (unsigned int)dword_14036C1FC;
  v14[494] = v20;
  v14[597] = v20 + 16LL * (unsigned int)dword_14036C1FC;
  PartitionId = MiAllocatePartitionId((__int64)v14);
  if ( !PartitionId )
  {
    ExFreePoolWithTag(v14, 0);
    return 3221225495LL;
  }
  MiInitializePartition((unsigned __int64)v14, PartitionId);
  if ( Object )
  {
    ObfReferenceObject(Object);
    v22 = *Object;
  }
  else
  {
    v22 = &MiSystemPartition;
  }
  v14[3] = v22;
  if ( MiInitializeMemoryEvents(v14)
    && (unsigned int)MiCreateLargePfnBitMaps((__int64)v14, 0LL, v23)
    && (unsigned int)MiInitializeWorkingSetManagerParameters((__int64)v14) )
  {
    v24 = MiInitializePartitionThreads((__int64)v14);
    if ( v24 >= 0 )
    {
      MiInsertNewPartitionInList((__int64)v14);
      v24 = MiPartitionObjectCreate((__int64)v14, a3, a2, a4, &a5);
      if ( v24 >= 0 )
      {
        *v6 = *(_QWORD *)(*a5 + 208LL);
        return (unsigned int)v24;
      }
    }
  }
  else
  {
    v24 = -1073741670;
  }
  MiDereferencePartition((volatile LONG *)v14);
  return (unsigned int)v24;
}
