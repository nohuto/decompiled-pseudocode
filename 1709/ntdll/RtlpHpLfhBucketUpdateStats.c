/*
 * XREFs of RtlpHpLfhBucketUpdateStats @ 0x18004C48C
 * Callers:
 *     RtlpHpSegFree @ 0x1800481C0 (RtlpHpSegFree.c)
 *     RtlpHpAllocateHeapInternal @ 0x180048A5C (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpLfhBucketActivate @ 0x180007258 (RtlpHpLfhBucketActivate.c)
 *     RtlpLfhBucketUsageUpdate @ 0x18004C518 (RtlpLfhBucketUsageUpdate.c)
 */

_BOOL8 __fastcall RtlpHpLfhBucketUpdateStats(__int64 a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // rdx
  int v4; // esi
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax

  v3 = (unsigned __int64)(unsigned int)(a2 + 15) >> 4;
  v4 = a3;
  v6 = RtlpLfhBucketIndexMap[v3];
  if ( (*(_QWORD *)(a1 + 8 * v6 + 208) & 1) != 0 )
  {
    v7 = RtlpLfhBucketUsageUpdate(a1, RtlpLfhBucketIndexMap[v3], a3);
    if ( v4 )
    {
      v8 = v7 >> 16;
      if ( (v8 & 0x1F) > 0x10 || (unsigned __int16)v8 > 0xFF00u )
        RtlpHpLfhBucketActivate(a1, v6);
    }
  }
  return (*(_QWORD *)(a1 + 8 * v6 + 208) & 1) == 0;
}
