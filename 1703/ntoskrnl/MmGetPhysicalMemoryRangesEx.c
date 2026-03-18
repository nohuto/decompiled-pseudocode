/*
 * XREFs of MmGetPhysicalMemoryRangesEx @ 0x140440830
 * Callers:
 *     MmGetPhysicalMemoryRanges @ 0x140440820 (MmGetPhysicalMemoryRanges.c)
 * Callees:
 *     MiDereferencePageRuns @ 0x1400252E4 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x140025380 (MiReferencePageRuns.c)
 *     MiPartitionObjectToPartition @ 0x140077298 (MiPartitionObjectToPartition.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall MmGetPhysicalMemoryRangesEx(ULONG_PTR **a1)
{
  ULONG_PTR *v1; // rbx
  _DWORD *v2; // rdi
  unsigned int v3; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rsi
  _QWORD *v6; // rdx
  __int64 *v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax

  v1 = MiPartitionObjectToPartition(a1);
  v2 = (_DWORD *)MiReferencePageRuns((__int64)v1, 0);
  if ( v2 )
    v3 = v1[698] != 0 ? *v2 : 0;
  else
    v3 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * (v3 + 1), 0x68506D4Du);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    v6 = PoolWithTag;
    if ( v3 )
    {
      v7 = (__int64 *)(v2 + 6);
      v8 = v3;
      do
      {
        *v6 = *(v7 - 1) << 12;
        v9 = *v7;
        v7 += 2;
        v6[1] = v9 << 12;
        v6 += 2;
        --v8;
      }
      while ( v8 );
    }
    *v6 = 0LL;
    v6[1] = 0LL;
  }
  if ( v2 )
    MiDereferencePageRuns((__int64)v2);
  return v5;
}
