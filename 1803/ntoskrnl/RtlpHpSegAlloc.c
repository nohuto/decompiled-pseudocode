/*
 * XREFs of RtlpHpSegAlloc @ 0x1402979E8
 * Callers:
 *     ExAllocateHeapPages @ 0x1400D85A4 (ExAllocateHeapPages.c)
 *     ExpAllocateBigPool @ 0x1400D8A60 (ExpAllocateBigPool.c)
 *     RtlpHpAllocateHeapInternal @ 0x14029477C (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpMetadataAlloc @ 0x140295B48 (RtlpHpMetadataAlloc.c)
 *     RtlpHpSegLfhAllocate @ 0x1402980F0 (RtlpHpSegLfhAllocate.c)
 *     RtlpHpSegVsAllocate @ 0x140299320 (RtlpHpSegVsAllocate.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1402982C4 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeCommit @ 0x140298980 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegPageRangeDecommit @ 0x140298A98 (RtlpHpSegPageRangeDecommit.c)
 *     RtlpHpSegPageRangeShrink @ 0x140298D34 (RtlpHpSegPageRangeShrink.c)
 */

void *__fastcall RtlpHpSegAlloc(__int64 a1, size_t a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r8
  unsigned int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rdi
  void *v11; // rbx
  int v12; // ebx
  int v13; // r13d
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rbx

  v5 = (unsigned __int64)(a4 + 4095) >> 12;
  v6 = (unsigned __int64)(a3 + 4095) >> 12;
  v8 = v6 + 1;
  if ( (a5 & 4) == 0 )
    v8 = v6;
  v9 = RtlpHpSegPageRangeAllocate(a1, v8, a5);
  v10 = v9;
  if ( !v9 )
    return 0LL;
  v12 = *(unsigned __int8 *)(v9 + 31);
  v13 = (unsigned __int16)~(*(_DWORD *)(v9 + 28) >> 8);
  if ( (_DWORD)v5 && (int)RtlpHpSegPageRangeCommit(a1, v9, 0LL, (unsigned int)v5) < 0 )
  {
    v11 = 0LL;
    goto LABEL_13;
  }
  if ( (a5 & 4) != 0 )
    RtlpHpSegPageRangeDecommit(a1, v10, v8 - 1, (v12 << *(_BYTE *)(a1 + 9)) - v8 + 1);
  *(_DWORD *)(v10 + 4) = (v12 << *(_BYTE *)(a1 + 8)) - a2;
  v15 = v10 & *(_QWORD *)a1;
  v16 = v10 - v15;
  v10 = 0LL;
  v11 = (void *)(v15 + (v16 >> 5 << *(_BYTE *)(a1 + 8)));
  if ( (a5 & 2) != 0 && v13 )
  {
    memset(v11, 0, a2);
LABEL_13:
    if ( v10 )
      RtlpHpSegPageRangeShrink(a1, v10, v14, a5);
  }
  return v11;
}
