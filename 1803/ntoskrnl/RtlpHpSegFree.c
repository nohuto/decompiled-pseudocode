/*
 * XREFs of RtlpHpSegFree @ 0x140297E14
 * Callers:
 *     RtlpHpFreeHeap @ 0x140294A24 (RtlpHpFreeHeap.c)
 *     RtlpHpSegLfhVsFree @ 0x140298280 (RtlpHpSegLfhVsFree.c)
 * Callees:
 *     RtlpHpVsContextFree @ 0x1400AB428 (RtlpHpVsContextFree.c)
 *     RtlpLogHeapFailure @ 0x1402932C0 (RtlpLogHeapFailure.c)
 *     RtlpHpSegDescriptorValidate @ 0x140297D48 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpSegPageRangeShrink @ 0x140298D34 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpLfhBucketUpdateStats @ 0x14029A1F0 (RtlpHpLfhBucketUpdateStats.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x14029C288 (RtlpHpLfhSubsegmentFreeBlock.c)
 */

__int64 __fastcall RtlpHpSegFree(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned int v8; // edi
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v6 = RtlpHpSegDescriptorValidate(a1, a2);
  if ( v6 )
  {
    v9 = (v6 & *(_QWORD *)a1) + ((v6 - (v6 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8));
    if ( a2 <= v9 )
    {
      RtlpHpSegPageRangeShrink(a1, v6, v7, a3);
      return 1;
    }
    else if ( (*(_BYTE *)(v6 + 24) & 0xC) == 8 )
    {
      return (unsigned int)RtlpHpLfhSubsegmentFreeBlock(*(_QWORD *)(a1 + 80), v9, a2, a3);
    }
    else
    {
      v8 = RtlpHpVsContextFree(*(_QWORD *)(a1 + 88), v9, a2, a3, &v12);
      if ( v8 )
      {
        v10 = *(_QWORD *)(a1 + 80);
        if ( (unsigned int)v12 <= *(_DWORD *)(v10 + 80) - 16 )
          RtlpHpLfhBucketUpdateStats(v10, (unsigned int)v12, 0LL);
      }
    }
  }
  else
  {
    RtlpLogHeapFailure(9, *(_QWORD *)(a1 + 112), a2, 0LL, 0LL);
    return 0;
  }
  return v8;
}
