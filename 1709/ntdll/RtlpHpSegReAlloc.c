/*
 * XREFs of RtlpHpSegReAlloc @ 0x180048744
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x180047E80 (RtlpHpReAllocateHeap.c)
 * Callees:
 *     RtlpHpExtrasMove @ 0x180002878 (RtlpHpExtrasMove.c)
 *     RtlpHpSegPageRangeShrink @ 0x1800383A4 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeCommit @ 0x180048360 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegDescriptorValidate @ 0x180048670 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpReallocMove @ 0x180048858 (RtlpHpReallocMove.c)
 */

__int64 __fastcall RtlpHpSegReAlloc(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rbx
  __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned int v12; // edi
  int v14; // eax

  v8 = 0LL;
  v9 = RtlpHpSegDescriptorValidate(a1, a3);
  if ( !v9 )
    return -1LL;
  v10 = *(_QWORD *)(a4 + 32);
  v11 = (v10 + 4095) >> 12;
  if ( (unsigned int)((_DWORD)v11 << 12) >= v10 )
  {
    v12 = (unsigned int)(v11 + (1 << *(_BYTE *)(a1 + 9)) - 1) >> *(_BYTE *)(a1 + 9);
    if ( (*(_BYTE *)(v9 + 24) & 0xC) != 0 || v12 > *(unsigned __int8 *)(v9 + 31) )
    {
      if ( (a2 & 0x2000000) == 0 )
        return RtlpHpReallocMove(*(_QWORD *)(a1 + 96), a3, a4, a2);
    }
    else
    {
      v14 = ~(*(_DWORD *)(v9 + 28) >> 8);
      if ( (unsigned int)v11 <= (unsigned __int16)v14
        || (int)RtlpHpSegPageRangeCommit(
                  a1,
                  v9,
                  (unsigned __int16)~(*(_DWORD *)(v9 + 28) >> 8),
                  (unsigned int)v11 - (unsigned __int16)v14) >= 0 )
      {
        if ( *(_DWORD *)(a4 + 16) )
          RtlpHpExtrasMove(a3, *(_QWORD *)a4, a3, *(_QWORD *)(a4 + 24), a2);
        if ( v12 < *(unsigned __int8 *)(v9 + 31) )
          RtlpHpSegPageRangeShrink(a1, v9, v12, a2);
        v8 = a3;
        *(_DWORD *)(v9 + 4) = (v12 << *(_BYTE *)(a1 + 8)) - *(_DWORD *)(a4 + 24);
      }
    }
  }
  return v8;
}
