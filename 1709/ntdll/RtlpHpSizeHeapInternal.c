/*
 * XREFs of RtlpHpSizeHeapInternal @ 0x180103004
 * Callers:
 *     RtlpFreeHeapInternal @ 0x18003E860 (RtlpFreeHeapInternal.c)
 *     RtlpHpFreeHeap @ 0x18003FEE0 (RtlpHpFreeHeap.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x18006206C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAllocSize @ 0x18006F39C (RtlpHpLargeAllocSize.c)
 *     RtlpHpSegSize @ 0x180108A9C (RtlpHpSegSize.c)
 */

__int64 __fastcall RtlpHpSizeHeapInternal(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  unsigned int v6; // r14d
  __int64 v9; // rax

  v4 = 0;
  v6 = a3;
  if ( !(_WORD)a2 )
  {
    v9 = RtlCSparseBitmapBitmaskRead(a1, 2 * ((unsigned __int64)a2 >> 20));
    if ( !v9 )
      return RtlpHpLargeAllocSize(a1, a2, v6, a4);
    v4 = v9 - 1;
  }
  if ( v4 == 2 )
    return RtlpHpLargeAllocSize(a1, a2, v6, a4);
  return RtlpHpSegSize(a1 + 104LL * v4 + 112, a2, a3, a4);
}
