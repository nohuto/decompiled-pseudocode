/*
 * XREFs of RtlpHpSegPageRangeAllocate @ 0x1402982C4
 * Callers:
 *     RtlpHpSegAlloc @ 0x1402979E8 (RtlpHpSegAlloc.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpSegFreeRangeInsert @ 0x140297EF0 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegFreeRangeRemove @ 0x140297FE0 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpSegHeapAddSegment @ 0x1402980A4 (RtlpHpSegHeapAddSegment.c)
 *     RtlpHpSegLockAcquire @ 0x14029829C (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegPageRangeSplit @ 0x140298E80 (RtlpHpSegPageRangeSplit.c)
 *     RtlpHpSegSegmentAllocate @ 0x140298F5C (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegSegmentInitialize @ 0x140299178 (RtlpHpSegSegmentInitialize.c)
 */

__int64 __fastcall RtlpHpSegPageRangeAllocate(__int64 a1, int a2, int a3)
{
  char v3; // bl
  unsigned int v6; // r13d
  __int64 v7; // r8
  KIRQL v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // r9
  int v12; // ecx
  __int64 v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // ebp
  __m128i v24; // xmm0
  volatile LONG *v25; // rsi
  unsigned int v26; // edx
  _BYTE *v27; // rax
  unsigned __int8 v29; // [rsp+58h] [rbp+10h]

  v3 = *(_BYTE *)(a1 + 9);
  v6 = (unsigned int)((1 << v3) + a2 - 1) >> v3;
  v8 = RtlpHpSegLockAcquire(a1, a3);
  v9 = *(_QWORD *)(a1 + 64);
  v10 = *(_QWORD *)(a1 + 56);
  v11 = v29 | (unsigned __int64)(((v6 << 16) | (unsigned __int16)~((_WORD)v6 << v3)) << 8);
  if ( (v9 & 1) != 0 && v10 )
    v10 ^= a1 + 56;
  v12 = v9 & 1;
  v13 = 0LL;
  while ( v10 )
  {
    v14 = *(_DWORD *)(v10 + 28);
    if ( (unsigned int)v11 < v14 )
    {
      v15 = *(_QWORD *)v10;
      v13 = v10;
    }
    else
    {
      if ( (unsigned int)v11 <= v14 )
        goto LABEL_15;
      v15 = *(_QWORD *)(v10 + 8);
    }
    if ( v12 && v15 )
      v10 ^= v15;
    else
      v10 = v15;
  }
  v10 = v13;
LABEL_15:
  if ( v10 )
  {
    RtlpHpSegFreeRangeRemove(a1, v10);
  }
  else
  {
    if ( (a3 & 1) == 0 )
    {
      if ( (*(_DWORD *)(a1 + 96) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 24));
        __writecr8(v8);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 24), v13, v7, v11);
        KeAbPostRelease(a1 + 24);
        KeLeaveCriticalRegion();
      }
    }
    v17 = RtlpHpSegSegmentAllocate(a1, 0LL);
    v18 = v17;
    if ( !v17 )
      return 0LL;
    RtlpHpSegSegmentInitialize(a1, v17, 0LL);
    v10 = v18 + 32LL * *(unsigned __int8 *)(a1 + 10);
    v8 = RtlpHpSegLockAcquire(a1, a3);
    RtlpHpSegHeapAddSegment(a1, v18);
  }
  v19 = RtlpHpSegPageRangeSplit(v16, v10, v6);
  if ( v19 )
    RtlpHpSegFreeRangeInsert(a1, v19, 0);
  v23 = v6 - 1;
  *(_BYTE *)(v10 + 24) |= HIBYTE(a3) & 0xC | 1;
  *(_BYTE *)(32LL * (v6 - 1) + v10 + 24) |= 1u;
  if ( (a3 & 1) == 0 )
  {
    v24 = *(__m128i *)(a1 + 96);
    v25 = (volatile LONG *)(a1 + 24);
    if ( (_mm_cvtsi128_si32(v24) & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v25);
      __writecr8(v8);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v25, v20, v21, v22);
      KeAbPostRelease((ULONG_PTR)v25);
      KeLeaveCriticalRegion();
    }
  }
  v26 = 1;
  if ( v23 > 1 )
  {
    v27 = (_BYTE *)(v10 + 56);
    do
    {
      v27[7] = v26++;
      *v27 |= 1u;
      v27 += 32;
    }
    while ( v26 < v23 );
  }
  return v10;
}
