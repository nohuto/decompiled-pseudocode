/*
 * XREFs of RtlpHpSegSegmentFree @ 0x1402990F4
 * Callers:
 *     RtlpHpSegContextCleanup @ 0x140297B10 (RtlpHpSegContextCleanup.c)
 *     RtlpHpSegPageRangeShrink @ 0x140298D34 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegSegmentAllocate @ 0x140298F5C (RtlpHpSegSegmentAllocate.c)
 * Callees:
 *     RtlpHpFreeVA @ 0x140294BD4 (RtlpHpFreeVA.c)
 *     RtlCSparseBitmapBitsClear @ 0x14029D4F0 (RtlCSparseBitmapBitsClear.c)
 *     RtlpHpEnvGetHeapManager @ 0x1402BD820 (RtlpHpEnvGetHeapManager.c)
 */

__int64 __fastcall RtlpHpSegSegmentFree(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r9
  __int64 HeapManager; // rax
  unsigned int v6; // r9d
  __int64 v7; // rdx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v4 = (unsigned int)-*(_DWORD *)a1;
  v10 = v4;
  if ( (_DWORD)a3 )
  {
    v9 = *(_OWORD *)(a1 + 96);
    HeapManager = RtlpHpEnvGetHeapManager(&v9, a2, a3, v4);
    RtlCSparseBitmapBitsClear(
      HeapManager + 8,
      2 * ((unsigned __int64)(v7 - *(_QWORD *)(HeapManager + 72)) >> 20),
      2 * ((unsigned __int64)v6 >> 20));
  }
  v9 = *(_OWORD *)(a1 + 96);
  return RtlpHpFreeVA(&v11, &v10, 0x8000LL, &v9);
}
