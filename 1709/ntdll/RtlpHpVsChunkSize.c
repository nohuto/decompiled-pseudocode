/*
 * XREFs of RtlpHpVsChunkSize @ 0x180061F54
 * Callers:
 *     RtlpHpFreeHeap @ 0x18003FEE0 (RtlpHpFreeHeap.c)
 *     RtlpHpSizeHeap @ 0x180045DE0 (RtlpHpSizeHeap.c)
 *     RtlpHpSegSizeInternal @ 0x18004662C (RtlpHpSegSizeInternal.c)
 *     RtlpHpVsSubsegmentWalk @ 0x180061D84 (RtlpHpVsSubsegmentWalk.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVsChunkSize(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // r9
  __int64 v6; // rcx
  unsigned __int16 v7; // dx
  int v8; // eax

  v3 = a1 - 16;
  if ( ((((unsigned __int64)(a1 - 16) >> 32) ^ HIDWORD(RtlpHeapKey) ^ (unsigned int)HIDWORD(*(_QWORD *)(a1 - 16))) & 0xFF0000) != 0 )
  {
    v6 = 16 * (WORD1(RtlpHeapKey) ^ WORD1(v3) ^ *(unsigned __int16 *)(v3 + 2)) - 16;
    if ( (*(_DWORD *)(v3 + 8) & 0x100) != 0 )
    {
      v7 = *(_WORD *)(v6 + a1 - 2);
      if ( (v7 & 0x8000u) != 0 )
        LODWORD(v6) = 16 * (WORD1(RtlpHeapKey) ^ WORD1(v3) ^ *(unsigned __int16 *)(v3 + 2)) - 17;
      else
        LODWORD(v6) = v6 - (v7 & 0x1FFF);
      v8 = (v7 >> 14) & 1;
    }
    else
    {
      v8 = 0;
    }
    if ( a3 )
      *a3 = v8;
  }
  else
  {
    LODWORD(v6) = -1;
  }
  return (unsigned int)v6;
}
