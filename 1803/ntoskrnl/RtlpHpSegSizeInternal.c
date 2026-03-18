/*
 * XREFs of RtlpHpSegSizeInternal @ 0x140299294
 * Callers:
 *     RtlpHpSizeHeapInternal @ 0x140295F94 (RtlpHpSizeHeapInternal.c)
 * Callees:
 *     RtlpHpVsChunkSize @ 0x140297930 (RtlpHpVsChunkSize.c)
 *     RtlpHpLfhSubsegmentSizeBlock @ 0x14029D190 (RtlpHpLfhSubsegmentSizeBlock.c)
 */

unsigned __int64 __fastcall RtlpHpSegSizeInternal(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int *a5)
{
  unsigned __int64 v5; // r10
  unsigned __int64 result; // rax
  int v7; // eax
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  v5 = (a2 & *(_QWORD *)a1) + ((a2 - (a2 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8));
  if ( a3 <= v5 )
  {
    if ( a5 )
    {
      v7 = *(_WORD *)(a2 + 8) & 1;
      if ( v7 )
        _InterlockedOr(v8, 0);
      *a5 = v7;
    }
    return ((unsigned __int64)*(unsigned __int8 *)(a2 + 31) << *(_BYTE *)(a1 + 8)) - *(unsigned int *)(a2 + 4);
  }
  else
  {
    if ( (*(_BYTE *)(a2 + 24) & 0xC) == 8 )
      LODWORD(result) = RtlpHpLfhSubsegmentSizeBlock(*(_QWORD *)(a1 + 80), v5, a3, a5);
    else
      LODWORD(result) = RtlpHpVsChunkSize(*(_QWORD *)(a1 + 88), a3, a3, a5);
    return (unsigned int)result;
  }
}
