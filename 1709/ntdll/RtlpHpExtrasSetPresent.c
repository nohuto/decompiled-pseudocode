/*
 * XREFs of RtlpHpExtrasSetPresent @ 0x1800493D8
 * Callers:
 *     RtlpHpReallocMove @ 0x180048858 (RtlpHpReallocMove.c)
 *     RtlpHpExtrasAppend @ 0x180102C7C (RtlpHpExtrasAppend.c)
 * Callees:
 *     RtlpHpSegSetExtraPresent @ 0x180049344 (RtlpHpSegSetExtraPresent.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18006206C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x18006F438 (RtlpHpLargeAllocSetExtraPresent.c)
 */

__int64 __fastcall RtlpHpExtrasSetPresent(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  int v3; // ebx
  __int64 v8; // rax

  v3 = 0;
  if ( !(_WORD)a2 )
  {
    v8 = RtlCSparseBitmapBitmaskRead(a1, 2 * (a2 >> 20));
    if ( !v8 )
      return RtlpHpLargeAllocSetExtraPresent(a1, a2, a3);
    v3 = v8 - 1;
  }
  if ( v3 != 2 )
    return RtlpHpSegSetExtraPresent(a1 + 104LL * v3 + 112, a2);
  return RtlpHpLargeAllocSetExtraPresent(a1, a2, a3);
}
