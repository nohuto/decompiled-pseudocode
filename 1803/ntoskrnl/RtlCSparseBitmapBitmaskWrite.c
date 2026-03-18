/*
 * XREFs of RtlCSparseBitmapBitmaskWrite @ 0x14029D404
 * Callers:
 *     RtlpHpSegSegmentAllocate @ 0x140298F5C (RtlpHpSegSegmentAllocate.c)
 * Callees:
 *     RtlCSparseBitmapBitsClear @ 0x14029D4F0 (RtlCSparseBitmapBitsClear.c)
 *     RtlpCSparseBitmapPageCommit @ 0x14029DDC4 (RtlpCSparseBitmapPageCommit.c)
 *     RtlCSparseBitmapLeaveLockingRegion @ 0x14029EEDC (RtlCSparseBitmapLeaveLockingRegion.c)
 *     RtlpCSparseBitmapUnlock @ 0x14029EF7C (RtlpCSparseBitmapUnlock.c)
 */

__int64 __fastcall RtlCSparseBitmapBitmaskWrite(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v8; // edi
  __int64 v9; // r10
  unsigned __int64 v10; // r9
  char v11; // bl
  __int64 v12; // rsi
  __int64 v13; // r11
  signed __int64 v14; // rdx
  signed __int64 v15; // rax
  bool i; // zf
  signed __int64 v17; // rcx
  _BYTE v18[16]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v19; // [rsp+30h] [rbp-28h] BYREF
  __int128 v20; // [rsp+40h] [rbp-18h] BYREF

  if ( a4 )
  {
    v8 = RtlpCSparseBitmapPageCommit(a1, (__int64)a2 / 0x8000, v18, &v19);
    if ( v8 >= 0 )
    {
      v9 = *(_QWORD *)(a1 + 16);
      v10 = a2 >> 6;
      v11 = a2 & 0x3F;
      v12 = a4 << v11;
      v13 = ~(3LL << v11);
      v14 = *(_QWORD *)(v9 + 8 * v10);
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 8 * v10), v12 | v13 & v14, v14);
      for ( i = v14 == v15; !i; i = v17 == v15 )
      {
        v17 = v15;
        v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 8 * v10), v12 | v13 & v15, v15);
      }
      v8 = 0;
      RtlpCSparseBitmapUnlock(v18, v14, v15);
      v20 = v19;
      RtlCSparseBitmapLeaveLockingRegion(&v20);
    }
    return (unsigned int)v8;
  }
  else
  {
    RtlCSparseBitmapBitsClear(a1, a2, 2LL);
    return 0LL;
  }
}
