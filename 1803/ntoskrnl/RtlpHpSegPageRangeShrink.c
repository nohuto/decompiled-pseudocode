/*
 * XREFs of RtlpHpSegPageRangeShrink @ 0x140298D34
 * Callers:
 *     RtlpHpSegAlloc @ 0x1402979E8 (RtlpHpSegAlloc.c)
 *     RtlpHpSegFree @ 0x140297E14 (RtlpHpSegFree.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpSegHeapRemoveSegment @ 0x1401A6DE0 (RtlpHpSegHeapRemoveSegment.c)
 *     RtlpHpSegFreeRangeInsert @ 0x140297EF0 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegLockAcquire @ 0x14029829C (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x140298508 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegSegmentFree @ 0x1402990F4 (RtlpHpSegSegmentFree.c)
 */

void __fastcall RtlpHpSegPageRangeShrink(__int64 a1, __int64 a2, int a3, char a4)
{
  int v4; // ebp
  _BYTE *v8; // rcx
  __int64 v9; // rdx
  KIRQL v10; // al
  _QWORD *v11; // r9
  unsigned int v12; // edx
  int v13; // edx
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rsi
  int v20; // [rsp+60h] [rbp+18h] BYREF

  v20 = a3;
  v4 = *(unsigned __int8 *)(a2 + 31);
  if ( (unsigned int)(v4 - 1) > 1 )
  {
    v8 = (_BYTE *)(a2 + 56);
    v9 = (unsigned int)(v4 - 2);
    do
    {
      *v8 &= ~1u;
      v8 += 32;
      --v9;
    }
    while ( v9 );
  }
  v10 = RtlpHpSegLockAcquire(a1, a4);
  v12 = *(_DWORD *)(a2 + 28);
  LOBYTE(v20) = v10;
  if ( HIBYTE(v12) != v4 )
  {
    *(_BYTE *)(a2 + 31) = 0;
    *(_DWORD *)(a2 + 28) |= 0xFFFF00u;
  }
  *(_BYTE *)(a2 + 24) |= 2u;
  *(_BYTE *)(32LL * (unsigned int)(v4 - 1) + a2 + 31) = v4 - 1;
  *(_BYTE *)(a2 + 31) = v4;
  v13 = (*(_DWORD *)(a2 + 28) ^ v12) & 0xFFFF00;
  *(_DWORD *)a2 = -857879331;
  *(_DWORD *)(a2 + 28) ^= v13;
  *(_BYTE *)(a2 + 24) &= 0xF3u;
  v14 = RtlpHpSegPageRangeCoalesce(a1, a2, a4, v11, (KIRQL *)&v20);
  v15 = (_QWORD *)RtlpHpSegFreeRangeInsert(a1, v14, 0);
  v19 = v15;
  if ( v15 )
    RtlpHpSegHeapRemoveSegment(a1, v15);
  if ( (a4 & 1) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 96) & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 24));
      __writecr8((unsigned __int8)v20);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 24), v16, v17, v18);
      KeAbPostRelease(a1 + 24);
      KeLeaveCriticalRegion();
    }
  }
  if ( v19 )
    RtlpHpSegSegmentFree(a1, v19, 1LL);
}
