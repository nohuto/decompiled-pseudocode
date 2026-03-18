/*
 * XREFs of RtlpHpLfhContextAllocate @ 0x14029A44C
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x14029477C (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlpHpLfhBucketAllocate @ 0x14029972C (RtlpHpLfhBucketAllocate.c)
 *     RtlpHpLfhBucketUpdateStats @ 0x14029A1F0 (RtlpHpLfhBucketUpdateStats.c)
 */

__int64 __fastcall RtlpHpLfhContextAllocate(__int64 a1, unsigned int a2, int a3, int a4)
{
  size_t v4; // rdi
  bool v5; // zf
  int v6; // edx
  __int64 v9; // rbp
  void *v10; // rbx
  void *v11; // rax

  v4 = a2;
  v5 = a2 == a3;
  v6 = a3 + 2;
  if ( v5 )
    v6 = a3;
  v9 = RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v6 + 15) >> 4];
  if ( (*(_QWORD *)(a1 + 8 * v9 + 224) & 1) != 0 && !RtlpHpLfhBucketUpdateStats(a1, v6, 1) )
    return -1LL;
  v11 = (void *)RtlpHpLfhBucketAllocate(a1, *(_QWORD *)(a1 + 8 * v9 + 224), v4, a4);
  v10 = v11;
  if ( v11 && (a4 & 2) != 0 )
    memset(v11, 0, v4);
  return (__int64)v10;
}
