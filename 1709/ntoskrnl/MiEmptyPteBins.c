/*
 * XREFs of MiEmptyPteBins @ 0x1400A4EA0
 * Callers:
 *     MiInsertCachedPte @ 0x1400753D0 (MiInsertCachedPte.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiCheckProcessorPteCache @ 0x140099E20 (MiCheckProcessorPteCache.c)
 *     MiAdjustPteBins @ 0x1400F09DC (MiAdjustPteBins.c)
 * Callees:
 *     MiReplenishBitMap @ 0x1400E6290 (MiReplenishBitMap.c)
 *     MiReleaseLargePteMappings @ 0x14022BEB8 (MiReleaseLargePteMappings.c)
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
  _BOOL8 v14; // r8
  unsigned __int64 v15; // rax
  int v16; // edx
  signed __int32 v17[18]; // [rsp+0h] [rbp-48h] BYREF
  signed __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  _InterlockedOr(v17, 0);
  v5 = KiTbFlushTimeStamp;
  v6 = *(_QWORD *)(a1 + 88);
  v7 = (unsigned __int16)KeNumberNodes;
  if ( (__int64 *)a1 == &qword_140389360 )
    v7 = 2 * (unsigned __int16)KeNumberNodes;
  for ( i = 0; i < v7; ++i )
  {
    for ( j = 0; j < 8; ++j )
    {
      v10 = (volatile signed __int64 *)(v6 + 8LL * j);
      v11 = *v10;
      v18 = v11;
      if ( (_DWORD)v11 && ((unsigned int)(v5 - v11) > 2 || (v11 & 1) == 0 && (unsigned int)(v5 - v11) >= 2 || a2) )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( v11 == _InterlockedCompareExchange64(v10, 0LL, v11) )
        {
          _InterlockedOr(v17, 0);
          v14 = (unsigned int)(KiTbFlushTimeStamp - v18) <= 2
             && ((v18 & 1) != 0 || (unsigned int)(KiTbFlushTimeStamp - v18) < 2);
          if ( (__int64 *)a1 == &qword_140389360 && i >= v7 >> 1 )
          {
            v16 = MiReleaseLargePteMappings(a1, &v18, v14);
            __writecr8(CurrentIrql);
          }
          else
          {
            v15 = MiReplenishBitMap(a1, HIDWORD(v18), v14);
            v16 = v15;
            _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), v15);
          }
          _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 64), -v16);
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
