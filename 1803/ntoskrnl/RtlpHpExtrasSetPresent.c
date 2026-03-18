/*
 * XREFs of RtlpHpExtrasSetPresent @ 0x140294984
 * Callers:
 *     RtlpHpExtrasAppend @ 0x140294864 (RtlpHpExtrasAppend.c)
 * Callees:
 *     RtlpHpSegSetExtraPresent @ 0x140299200 (RtlpHpSegSetExtraPresent.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x14029D380 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x14029E5E4 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpEnvGetHeapManager @ 0x1402BD820 (RtlpHpEnvGetHeapManager.c)
 */

__int64 __fastcall RtlpHpExtrasSetPresent(__int128 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  unsigned int v5; // ebp
  __int64 HeapManager; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  v5 = a3;
  if ( !(_WORD)a2 )
  {
    v12 = *a1;
    HeapManager = RtlpHpEnvGetHeapManager(&v12, a2, a3, a4);
    v10 = RtlCSparseBitmapBitmaskRead(
            HeapManager + 8,
            2 * ((unsigned __int64)(v9 - *(_QWORD *)(HeapManager + 72)) >> 20));
    if ( !v10 )
      return RtlpHpLargeAllocSetExtraPresent(a1, a2, v5);
    v4 = v10 - 1;
  }
  if ( v4 == 2 )
    return RtlpHpLargeAllocSetExtraPresent(a1, a2, v5);
  return RtlpHpSegSetExtraPresent((char *)a1 + 120 * v4 + 112, a2);
}
