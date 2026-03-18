/*
 * XREFs of RtlpHpSegSegmentAllocate @ 0x140298F5C
 * Callers:
 *     RtlpHpSegContextReserve @ 0x140297C58 (RtlpHpSegContextReserve.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1402982C4 (RtlpHpSegPageRangeAllocate.c)
 * Callees:
 *     RtlpHpAllocVA @ 0x1402943E0 (RtlpHpAllocVA.c)
 *     RtlpHpSegSegmentFree @ 0x1402990F4 (RtlpHpSegSegmentFree.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x14029D404 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpHpEnvGetHeapManager @ 0x1402BD820 (RtlpHpEnvGetHeapManager.c)
 */

__int64 __fastcall RtlpHpSegSegmentAllocate(__int64 a1, int a2)
{
  __int64 v3; // rax
  __int128 v4; // xmm0
  __int64 v5; // r8
  bool v7; // cf
  __int64 v8; // rdi
  __int128 v9; // xmm0
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 HeapManager; // r12
  unsigned __int64 v16; // rsi
  _BOOL8 v17; // r13
  unsigned __int64 v18; // rbx
  __int64 v20; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-38h]
  __int128 v22; // [rsp+50h] [rbp-30h] BYREF
  __int128 v23; // [rsp+60h] [rbp-20h] BYREF
  __int128 v24; // [rsp+70h] [rbp-10h] BYREF
  __int64 v25; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v26; // [rsp+D0h] [rbp+50h] BYREF
  unsigned __int64 v27; // [rsp+D8h] [rbp+58h] BYREF

  v3 = *(_QWORD *)(a1 + 112);
  v4 = *(_OWORD *)(a1 + 96);
  v5 = (unsigned int)-*(_DWORD *)a1;
  v26 = v5;
  v7 = (*(_DWORD *)(v3 + 20) & 0x40000000) != 0;
  v22 = v4;
  v8 = 0LL;
  if ( (int)RtlpHpAllocVA(&v20, &v26, v5, 0x2000, v7 ? 64 : 4, &v22, 0LL) >= 0 )
  {
    v25 = v20;
    v9 = *(_OWORD *)(a1 + 96);
    v27 = (unsigned int)(a2 << 12) + 0x2000LL;
    v10 = *(_QWORD *)(a1 + 112);
    v23 = v9;
    if ( (int)RtlpHpAllocVA(
                &v25,
                (__int64 *)&v27,
                0LL,
                1073745920,
                (*(_DWORD *)(v10 + 20) & 0x40000000) != 0 ? 64 : 4,
                &v23,
                0LL) >= 0 )
    {
      v24 = *(_OWORD *)(a1 + 96);
      HeapManager = RtlpHpEnvGetHeapManager(&v24, v11, v12, v13);
      v16 = (unsigned int)v26;
      v17 = (_DWORD)v26 != 0x100000;
      v18 = 2 * ((unsigned __int64)(v25 - *(_QWORD *)(HeapManager + 72)) >> 20);
      v21 = v18 + 2 * ((unsigned __int64)(unsigned int)v26 >> 20);
      if ( v18 >= v21 )
      {
LABEL_6:
        _InterlockedExchangeAdd64(*(volatile signed __int64 **)(a1 + 72), v16 >> 12);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 8LL), v27 >> 12);
        return v25;
      }
      while ( (int)RtlCSparseBitmapBitmaskWrite(HeapManager + 8, v18, v14, v17 + 1) >= 0 )
      {
        v18 += 2LL;
        if ( v18 >= v21 )
          goto LABEL_6;
      }
    }
    if ( v25 )
      RtlpHpSegSegmentFree(a1, v25, 0LL);
  }
  return v8;
}
