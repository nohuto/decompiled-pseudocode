/*
 * XREFs of RtlpHpSegPageRangeCoalesce @ 0x180037818
 * Callers:
 *     RtlpHpSegContextCompact @ 0x180036078 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegPageRangeShrink @ 0x1800383A4 (RtlpHpSegPageRangeShrink.c)
 * Callees:
 *     TpSetTimerEx @ 0x18000F800 (TpSetTimerEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18003A530 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpSegPageRangeDecommit @ 0x18004A1DC (RtlpHpSegPageRangeDecommit.c)
 *     RtlpHpTlLogGCScheduled @ 0x180105ED4 (RtlpHpTlLogGCScheduled.c)
 *     RtlpHpTlLogMemStats @ 0x180105F7C (RtlpHpTlLogMemStats.c)
 */

__int64 __fastcall RtlpHpSegPageRangeCoalesce(__int64 a1, __int64 a2, char a3, int a4)
{
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // r14
  _QWORD *v13; // r8
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  __int64 v16; // rcx
  unsigned __int64 v17; // rbp
  __int64 v18; // rcx
  unsigned __int16 v20; // ax
  unsigned int v21; // eax
  char v22; // dl
  __int64 v23; // rcx
  unsigned __int16 v24; // ax
  char v25; // cl

  while ( 1 )
  {
    v8 = 0LL;
    v9 = (a2 - (a2 & *(_QWORD *)a1)) >> 5;
    v10 = (unsigned __int16)~(*(_DWORD *)(a2 + 28) >> 8);
    if ( (unsigned int)v9 + *(unsigned __int8 *)(a2 + 31) < 0x100 )
    {
      v8 = a2 + 32LL * *(unsigned __int8 *)(a2 + 31);
      if ( (*(_BYTE *)(v8 + 24) & 1) != 0 )
        v8 = 0LL;
    }
    if ( (unsigned int)v9 > *(unsigned __int8 *)(a1 + 10) )
    {
      v11 = a2 - 32;
      if ( (*(_BYTE *)(a2 - 32 + 24) & 2) == 0 )
        v11 += -32LL * *(unsigned __int8 *)(v11 + 31);
      v12 = 0LL;
      if ( (*(_BYTE *)(v11 + 24) & 1) == 0 )
        v12 = v11;
      if ( v12 )
      {
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 56), (PRTL_BALANCED_NODE)v12);
        *(_QWORD *)v12 = 0LL;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = 0LL;
        v24 = ~(unsigned __int16)(*(_DWORD *)(v12 + 28) >> 8);
        *(_DWORD *)v12 = -857879331;
        _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 16LL), -(__int64)v24);
        if ( (RtlpHpHeapFeatures & 8) != 0 )
          RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 72));
        v25 = 2;
        *(_BYTE *)(v12 + 31) += *(_BYTE *)(a2 + 31);
        v10 = (unsigned __int16)~(*(_DWORD *)(v12 + 28) >> 8) + (unsigned int)v10;
        *(_DWORD *)(v12 + 28) ^= (*(_DWORD *)(v12 + 28) ^ (~(_DWORD)v10 << 8)) & 0xFFFF00;
        if ( *(_BYTE *)(a2 + 31) > 1u )
          v25 = 3;
        *(_BYTE *)(a2 + 24) &= ~v25;
        a2 = v12;
        *(_BYTE *)(32LL * ((unsigned int)*(unsigned __int8 *)(v12 + 31) - 1) + v12 + 31) = *(_BYTE *)(v12 + 31) - 1;
      }
    }
    *(_BYTE *)(a2 + 24) |= 0x11u;
    if ( v8 )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 56), (PRTL_BALANCED_NODE)v8);
      *(_QWORD *)v8 = 0LL;
      *(_QWORD *)(v8 + 8) = 0LL;
      *(_QWORD *)(v8 + 16) = 0LL;
      v20 = ~(unsigned __int16)(*(_DWORD *)(v8 + 28) >> 8);
      *(_DWORD *)v8 = -857879331;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 16LL), -(__int64)v20);
      if ( (RtlpHpHeapFeatures & 8) != 0 )
        RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 72));
      if ( *(_BYTE *)(a2 + 31) != 1 )
        *(_BYTE *)(32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1) + a2 + 24) &= ~1u;
      *(_BYTE *)(a2 + 31) += *(_BYTE *)(v8 + 31);
      v21 = *(_DWORD *)(v8 + 28);
      *(_DWORD *)(a2 + 28) &= 0xFF0000FF;
      v10 = (unsigned __int16)~(v21 >> 8) + (unsigned int)v10;
      *(_DWORD *)(a2 + 28) |= (unsigned __int16)~(_WORD)v10 << 8;
      *(_BYTE *)(v8 + 24) &= ~2u;
      v22 = *(_BYTE *)(a2 + 31) - 1;
      v23 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1);
      *(_BYTE *)(v23 + a2 + 24) |= 1u;
      *(_BYTE *)(v23 + a2 + 31) = v22;
    }
    if ( !(_DWORD)v10 )
      break;
    if ( a4 )
      goto LABEL_31;
    v13 = *(_QWORD **)(a1 + 72);
    v14 = v13[1] >> *(_BYTE *)(a1 + 11);
    if ( v14 <= 8 )
      v14 = 8LL;
    v15 = v13[1] >> *(_BYTE *)(a1 + 12);
    v16 = v13[2];
    if ( v15 <= 8 )
      v15 = 8LL;
    if ( (RtlpHpLfhPerfFlags & 0x20) != 0 )
      v16 += v13[3];
    v17 = v16 + v10;
    if ( v17 > v14 )
    {
      if ( (RtlpHpLfhPerfFlags & 0x40) == 0 || byte_18015F3E8 || !RtlpHpGCTimerInitialized )
        goto LABEL_31;
      if ( !_InterlockedCompareExchange(&RtlpHpGCTimerScheduled, 1, 0) )
      {
        TpSetTimerEx(RtlpHpGCTimer, &RtlpHpGCInterval, 0, 0x1388u);
        if ( (RtlpHpHeapFeatures & 8) != 0 )
          RtlpHpTlLogGCScheduled();
      }
    }
    if ( v17 <= v15 )
      break;
LABEL_31:
    if ( (a3 & 1) == 0 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 24));
    RtlpHpSegPageRangeDecommit(a1, a2, 0LL, *(unsigned __int8 *)(a2 + 31) << *(_BYTE *)(a1 + 9));
    if ( (a3 & 1) == 0 )
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 24));
    *(_BYTE *)(a2 + 24) &= ~0x10u;
  }
  v18 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1);
  *(_BYTE *)(v18 + a2 + 24) &= ~1u;
  *(_BYTE *)(a2 + 24) &= 0xEEu;
  return a2;
}
