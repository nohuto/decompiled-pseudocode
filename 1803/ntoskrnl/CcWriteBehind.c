/*
 * XREFs of CcWriteBehind @ 0x140042EF0
 * Callers:
 *     CcWorkerThread @ 0x140043080 (CcWorkerThread.c)
 *     CcWaitForUninitializeCacheMap @ 0x1400BF4BC (CcWaitForUninitializeCacheMap.c)
 * Callees:
 *     CcFreeWorkQueueEntry @ 0x14004373C (CcFreeWorkQueueEntry.c)
 *     CcAllocateWorkQueueEntry @ 0x1400437A8 (CcAllocateWorkQueueEntry.c)
 *     ExQueueWorkItemToPartition @ 0x14008F67C (ExQueueWorkItemToPartition.c)
 *     CcWriteBehindInternal @ 0x1400DE8B0 (CcWriteBehindInternal.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

void __fastcall CcWriteBehind(__int64 a1, __int64 a2)
{
  void *v3; // rsi
  __int64 Partition; // rbx
  int v6; // eax
  _QWORD *v7; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD v9[7]; // [rsp+30h] [rbp-A8h] BYREF
  char v10; // [rsp+68h] [rbp-70h]
  char v11; // [rsp+A8h] [rbp-30h]
  __int64 v12; // [rsp+B0h] [rbp-28h]
  __int64 v13; // [rsp+F0h] [rbp+18h] BYREF

  v3 = 0LL;
  Partition = CcGetPartition(a1);
  v6 = CcAllocateWorkQueueEntry(Partition, &v13);
  v7 = (_QWORD *)v13;
  if ( v6 < 0
    || (*(_BYTE *)(v13 + 120) = 2,
        v7[1] = 0LL,
        *v7 = 0LL,
        v7[2] = a1,
        v7[3] = a2,
        *(_DWORD *)(Partition + 896) >= *(_DWORD *)(Partition + 200))
    || *(_QWORD *)(Partition + 864)
    || *(_DWORD *)(a1 + 516)
    || (*(_DWORD *)(a1 + 152) & 0x10000) != 0
    || *(_BYTE *)(Partition + 902)
    || (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x71576343u), (v3 = PoolWithTag) == 0LL) )
  {
    if ( !v7 )
    {
      v12 = Partition;
      v7 = v9;
      v11 = 2;
      v9[1] = 0LL;
      v9[0] = 0LL;
      v9[2] = a1;
      v9[3] = a2;
      v10 = 0;
    }
    *((_BYTE *)v7 + 56) = 0;
    CcWriteBehindInternal(v7);
    if ( v7 == v9 )
      v7 = 0LL;
  }
  else
  {
    PoolWithTag[7] = Partition;
    *((_DWORD *)PoolWithTag + 8) = 1;
    *((_BYTE *)v7 + 56) = 1;
    *((_WORD *)v7 + 16) = 1;
    *((_BYTE *)v7 + 34) = 6;
    *((_DWORD *)v7 + 9) = 0;
    v7[6] = v7 + 5;
    v7[5] = v7 + 5;
    PoolWithTag[2] = CcWriteBehindInternal;
    PoolWithTag[3] = v7;
    *PoolWithTag = 0LL;
    ExQueueWorkItemToPartition((ULONG_PTR)PoolWithTag);
    KeWaitForSingleObject(v7 + 4, Executive, 0, 0, 0LL);
  }
  if ( v7 )
    CcFreeWorkQueueEntry((PSLIST_ENTRY)v7);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x71576343u);
}
