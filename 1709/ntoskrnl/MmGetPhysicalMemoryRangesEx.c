/*
 * XREFs of MmGetPhysicalMemoryRangesEx @ 0x140575470
 * Callers:
 *     MmGetPhysicalMemoryRanges @ 0x140575450 (MmGetPhysicalMemoryRanges.c)
 * Callees:
 *     PsDereferencePartition @ 0x1400B8F3C (PsDereferencePartition.c)
 *     MiDereferencePageRuns @ 0x14011CA7C (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x14011CB5C (MiReferencePageRuns.c)
 *     MiPartitionObjectToPartition @ 0x14011CD74 (MiPartitionObjectToPartition.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

ULONG_PTR *__fastcall MmGetPhysicalMemoryRangesEx(ULONG_PTR **a1)
{
  ULONG_PTR *result; // rax
  ULONG_PTR *v2; // rsi
  _DWORD *v3; // rdi
  unsigned int v4; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rdx
  __int64 *v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rbp
  __int64 v10; // rax
  char v11; // [rsp+38h] [rbp+10h] BYREF

  result = MiPartitionObjectToPartition(a1, 0, &v11);
  v2 = result;
  if ( result )
  {
    v3 = (_DWORD *)MiReferencePageRuns((__int64)result, 0);
    if ( v3 )
      v4 = v2[722] != 0 ? *v3 : 0;
    else
      v4 = 0;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * (v4 + 1), 0x68506D4Du);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      v6 = PoolWithTag;
      if ( v4 )
      {
        v7 = (__int64 *)(v3 + 6);
        v8 = v4;
        do
        {
          *v6 = *(v7 - 1) << 12;
          v10 = *v7;
          v7 += 2;
          v6[1] = v10 << 12;
          v6 += 2;
          --v8;
        }
        while ( v8 );
      }
      *v6 = 0LL;
      v6[1] = 0LL;
    }
    if ( v3 )
      MiDereferencePageRuns((__int64)v3, (__int64)v6, (__int64)v7, v8);
    if ( v11 )
      PsDereferencePartition(v2[21]);
    return v9;
  }
  return result;
}
