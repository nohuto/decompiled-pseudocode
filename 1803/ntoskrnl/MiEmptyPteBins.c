/*
 * XREFs of MiEmptyPteBins @ 0x1400DAC70
 * Callers:
 *     MiAdjustPteBins @ 0x140080D50 (MiAdjustPteBins.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiCheckProcessorPteCache @ 0x14010ECE0 (MiCheckProcessorPteCache.c)
 *     MiInsertCachedPte @ 0x1401109A0 (MiInsertCachedPte.c)
 * Callees:
 *     MiReplenishBitMap @ 0x14009E090 (MiReplenishBitMap.c)
 *     MiReleaseLargePteMappings @ 0x140267410 (MiReleaseLargePteMappings.c)
 */

__int64 __fastcall MiEmptyPteBins(__int64 a1, int a2)
{
  unsigned int v3; // r8d
  int v5; // r12d
  __int64 v6; // rdi
  unsigned int v7; // r14d
  unsigned int i; // ebp
  unsigned int j; // ebx
  volatile signed __int64 *v10; // rcx
  signed __int64 v11; // rax
  unsigned __int8 CurrentIrql; // si
  signed __int64 v14; // rtt
  _BOOL8 v15; // r8
  ULONG_PTR v16; // rax
  int v17; // edx
  signed __int32 v18[18]; // [rsp+0h] [rbp-48h] BYREF
  signed __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  _InterlockedOr(v18, 0);
  v5 = KiTbFlushTimeStamp;
  v6 = *(_QWORD *)(a1 + 80);
  v7 = (unsigned __int16)KeNumberNodes;
  if ( (__int64 *)a1 == &qword_1403CC5E0 )
    v7 = 2 * (unsigned __int16)KeNumberNodes;
  for ( i = 0; i < v7; ++i )
  {
    for ( j = 0; j < 8; ++j )
    {
      v10 = (volatile signed __int64 *)(v6 + 8LL * j);
      v11 = *v10;
      v19 = v11;
      if ( (_DWORD)v11 && ((unsigned int)(v5 - v11) > 2 || (v11 & 1) == 0 && (unsigned int)(v5 - v11) >= 2 || a2) )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v14 = v19;
        if ( v14 == _InterlockedCompareExchange64(v10, 0LL, v19) )
        {
          _InterlockedOr(v18, 0);
          v15 = (unsigned int)(KiTbFlushTimeStamp - v19) <= 2
             && ((v19 & 1) != 0 || (unsigned int)(KiTbFlushTimeStamp - v19) < 2);
          if ( (__int64 *)a1 == &qword_1403CC5E0 && i >= v7 >> 1 )
          {
            v17 = MiReleaseLargePteMappings(a1, &v19, v15);
            __writecr8(CurrentIrql);
          }
          else
          {
            v16 = MiReplenishBitMap((unsigned __int64 *)a1, HIDWORD(v19), v15);
            v17 = v16;
            _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v16);
          }
          _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 64), -v17);
          v3 = 1;
        }
        else
        {
          --j;
        }
        __writecr8(CurrentIrql);
      }
    }
    v6 += 72LL;
  }
  return v3;
}
