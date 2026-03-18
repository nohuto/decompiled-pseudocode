/*
 * XREFs of MiEmptyPteBins @ 0x1400844C4
 * Callers:
 *     MiAdjustPteBins @ 0x1400843F0 (MiAdjustPteBins.c)
 *     MiInsertCachedPte @ 0x1400A2790 (MiInsertCachedPte.c)
 *     MiCheckProcessorPteCache @ 0x1400F7580 (MiCheckProcessorPteCache.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 * Callees:
 *     MiReplenishBitMap @ 0x140084610 (MiReplenishBitMap.c)
 *     MiReleaseLargePteMappings @ 0x14013D2CC (MiReleaseLargePteMappings.c)
 */

__int64 __fastcall MiEmptyPteBins(__int64 a1, int a2)
{
  unsigned int v3; // r8d
  unsigned int v5; // esi
  unsigned int v6; // r12d
  __int64 v7; // rdi
  unsigned int j; // ebx
  signed __int64 v9; // rax
  unsigned __int8 CurrentIrql; // r14
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  int v14; // edx
  signed __int32 v15[22]; // [rsp+0h] [rbp-58h] BYREF
  int i; // [rsp+60h] [rbp+8h]
  signed __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  _InterlockedOr(v15, 0);
  v5 = 0;
  v6 = (unsigned __int16)KeNumberNodes;
  v7 = *(_QWORD *)(a1 + 88);
  for ( i = KiTbFlushTimeStamp; v5 < 2 * v6; ++v5 )
  {
    for ( j = 0; j < 8; ++j )
    {
      v9 = *(_QWORD *)(v7 + 8LL * j);
      v17 = v9;
      if ( (_DWORD)v9 && ((unsigned int)(i - v9) > 2 || (v9 & 1) == 0 && (unsigned int)(i - v9) >= 2 || a2) )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( v9 == _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 8LL * j), 0LL, v9) )
        {
          _InterlockedOr(v15, 0);
          if ( (unsigned int)(KiTbFlushTimeStamp - v17) <= 2 )
          {
            if ( (v17 & 1) != 0 || (v12 = 0LL, (unsigned int)(KiTbFlushTimeStamp - v17) < 2) )
              v12 = 1LL;
          }
          else
          {
            v12 = 0LL;
          }
          if ( v5 >= v6 )
          {
            v14 = MiReleaseLargePteMappings(a1, &v17, v12);
            __writecr8(CurrentIrql);
          }
          else
          {
            v13 = MiReplenishBitMap(a1, HIDWORD(v17), v12);
            v14 = v13;
            _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), v13);
          }
          _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 64), -v14);
          v3 = 1;
        }
        else
        {
          --j;
        }
        __writecr8(CurrentIrql);
      }
    }
    v7 += 72LL;
  }
  return v3;
}
