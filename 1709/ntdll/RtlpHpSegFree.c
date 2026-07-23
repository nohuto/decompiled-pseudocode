/*
 * XREFs of RtlpHpSegFree @ 0x1800481C0
 * Callers:
 *     RtlpHpReallocMove @ 0x180048858 (RtlpHpReallocMove.c)
 *     RtlpHpSegLfhVsFree @ 0x18004AC30 (RtlpHpSegLfhVsFree.c)
 * Callees:
 *     RtlpHpSegPageRangeShrink @ 0x1800383A4 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVsContextFree @ 0x18003E180 (RtlpHpVsContextFree.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180040530 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpSegDescriptorValidate @ 0x180048670 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpLfhBucketUpdateStats @ 0x18004C48C (RtlpHpLfhBucketUpdateStats.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 *     RtlpLogHeapFreeEvent @ 0x1801016FC (RtlpLogHeapFreeEvent.c)
 */

__int64 __fastcall RtlpHpSegFree(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  unsigned int v9; // edi
  __int64 v10; // r9
  _DWORD *SharedData; // rcx
  __int64 v12; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // [rsp+58h] [rbp+20h] BYREF

  v6 = RtlpHpSegDescriptorValidate(a1, a2);
  v7 = v6;
  if ( v6 )
  {
    v8 = (v6 & *(_QWORD *)a1) + ((v6 - (v6 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8));
    if ( a2 <= v8 )
    {
      RtlpHpSegPageRangeShrink(a1, v6, 0, a3);
      v9 = 1;
      if ( RtlGetCurrentServiceSessionId() )
        v14 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v14 = 2147353472LL;
      if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        v15 = 3LL;
        goto LABEL_25;
      }
    }
    else
    {
      if ( (*(_BYTE *)(v6 + 24) & 4) != 0 )
      {
        v9 = RtlpHpLfhSubsegmentFreeBlock(*(_RTL_SRWLOCK **)(a1 + 80), v8, a2, a3);
      }
      else
      {
        v9 = RtlpHpVsContextFree(*(PRTL_SRWLOCK *)(a1 + 88), v8, a2, a3, &v16);
        if ( v9 && (unsigned int)v16 <= 0x3FF0 )
          RtlpHpLfhBucketUpdateStats(*(_QWORD *)(a1 + 80), (unsigned int)v16, 0LL);
      }
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v12 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v12 = 2147353472LL;
      if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v9 )
      {
        v15 = (~*(_BYTE *)(v7 + 24) & 4 | 8u) >> 2;
LABEL_25:
        RtlpLogHeapFreeEvent(*(_QWORD *)(a1 + 96), a2, v15, v10);
      }
    }
  }
  else
  {
    RtlpLogHeapFailure(9, *(_QWORD *)(a1 + 96), a2, 0, 0LL, 0LL);
    return 0;
  }
  return v9;
}
