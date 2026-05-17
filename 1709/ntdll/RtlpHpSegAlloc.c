/*
 * XREFs of RtlpHpSegAlloc @ 0x18003827C
 * Callers:
 *     RtlpHpSegLfhAllocate @ 0x180037F80 (RtlpHpSegLfhAllocate.c)
 *     RtlpAllocateHeapInternal @ 0x180040E70 (RtlpAllocateHeapInternal.c)
 *     RtlpHpAllocateHeapInternal @ 0x180048A5C (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpMetadataAlloc @ 0x18006F214 (RtlpHpMetadataAlloc.c)
 *     RtlpHpSegVsAllocate @ 0x180078A90 (RtlpHpSegVsAllocate.c)
 * Callees:
 *     RtlpHpSegPageRangeShrink @ 0x1800383A4 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeAllocate @ 0x180038558 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeCommit @ 0x180048360 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegPageRangeDecommit @ 0x18004A1DC (RtlpHpSegPageRangeDecommit.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

void *__fastcall RtlpHpSegAlloc(__int64 a1, size_t a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // r8
  unsigned int v5; // ebp
  int v8; // r13d
  unsigned int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // rdi
  int v12; // ebx
  int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // rbx
  void *v16; // rbx

  v4 = (unsigned __int64)(a3 + 4095) >> 12;
  v5 = 0;
  if ( (a4 & 0xC000000) == 0 )
    v5 = v4;
  v8 = a4 & 4;
  v9 = v4 + 1;
  if ( (a4 & 4) == 0 )
    v9 = v4;
  v10 = RtlpHpSegPageRangeAllocate(a1, v9, a4);
  v11 = v10;
  if ( !v10 )
    return 0LL;
  v12 = *(unsigned __int8 *)(v10 + 31);
  v13 = (unsigned __int16)~(*(_DWORD *)(v10 + 28) >> 8);
  if ( v5 && (int)RtlpHpSegPageRangeCommit(a1, v10, 0LL, v5) < 0 )
  {
    v16 = 0LL;
    goto LABEL_15;
  }
  if ( v8 )
    RtlpHpSegPageRangeDecommit(a1, v11, v9 - 1, (v12 << *(_BYTE *)(a1 + 9)) - v9 + 1);
  *(_DWORD *)(v11 + 4) = (v12 << *(_BYTE *)(a1 + 8)) - a2;
  v14 = v11 & *(_QWORD *)a1;
  v15 = v11 - v14;
  v11 = 0LL;
  v16 = (void *)(v14 + (v15 >> 5 << *(_BYTE *)(a1 + 8)));
  if ( (a4 & 2) != 0 && v13 )
  {
    memset(v16, 0, a2);
LABEL_15:
    if ( v11 )
      RtlpHpSegPageRangeShrink(a1, v11, 0LL, a4);
  }
  return v16;
}
