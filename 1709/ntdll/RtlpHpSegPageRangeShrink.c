/*
 * XREFs of RtlpHpSegPageRangeShrink @ 0x1800383A4
 * Callers:
 *     RtlpHpSegAlloc @ 0x18003827C (RtlpHpSegAlloc.c)
 *     RtlpFreeHeapInternal @ 0x18003E860 (RtlpFreeHeapInternal.c)
 *     RtlpHpFreeHeap @ 0x18003FEE0 (RtlpHpFreeHeap.c)
 *     RtlpHpSegFree @ 0x1800481C0 (RtlpHpSegFree.c)
 *     RtlpHpSegReAlloc @ 0x180048744 (RtlpHpSegReAlloc.c)
 * Callees:
 *     RtlpHpSegPageRangeCoalesce @ 0x180037818 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegFreeRangeCompare @ 0x1800387E4 (RtlpHpSegFreeRangeCompare.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x18003A130 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpTlLogMemStats @ 0x180105F7C (RtlpHpTlLogMemStats.c)
 */

__int64 __fastcall RtlpHpSegPageRangeShrink(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int v5; // r14d
  __int64 v7; // rsi
  int v10; // r15d
  int v11; // edx
  int v12; // edi
  __int64 v13; // rax
  __int64 v14; // r8
  unsigned __int64 v15; // rbx
  int v16; // edi
  __int64 v17; // rsi
  __int64 v18; // r12
  unsigned __int64 v19; // rax
  __int64 result; // rax
  _BYTE *v21; // rcx
  __int64 v22; // rdx
  char v23; // cl

  v5 = *(unsigned __int8 *)(a2 + 31) - a3;
  v7 = a2 + 32LL * a3;
  if ( v5 - 1 > 1 )
  {
    v21 = (_BYTE *)(v7 + 56);
    v22 = v5 - 2;
    do
    {
      *v21 &= ~1u;
      v21 += 32;
      --v22;
    }
    while ( v22 );
  }
  v10 = a4 & 1;
  if ( (a4 & 1) == 0 )
    RtlAcquireSRWLockExclusive(a1 + 24);
  v11 = ~(*(_DWORD *)(a2 + 28) >> 8);
  if ( *(unsigned __int8 *)(a2 + 31) == v5 )
  {
    LOWORD(v12) = 0;
  }
  else
  {
    *(_BYTE *)(a2 + 31) = a3;
    v23 = *(_BYTE *)(a1 + 9);
    *(_DWORD *)(a2 + 28) &= 0xFF0000FF;
    v12 = a3 << v23;
    *(_DWORD *)(a2 + 28) |= (unsigned __int16)~(_WORD)v12 << 8;
  }
  *(_BYTE *)(v7 + 24) |= 2u;
  *(_BYTE *)(32LL * (v5 - 1) + v7 + 31) = v5 - 1;
  *(_BYTE *)(v7 + 31) = v5;
  *(_DWORD *)(v7 + 28) &= 0xFF0000FF;
  *(_DWORD *)(v7 + 28) |= (unsigned __int16)~(v11 - v12) << 8;
  *(_DWORD *)v7 = -857879331;
  *(_BYTE *)(v7 + 24) &= 0xF3u;
  v13 = RtlpHpSegPageRangeCoalesce(a1, v7, a4, 0);
  LOBYTE(v14) = 0;
  v15 = *(_QWORD *)(a1 + 56);
  v16 = *(_BYTE *)(a1 + 64) & 1;
  v17 = v13;
  v18 = *(unsigned int *)(v13 + 28);
  if ( v15 )
  {
    while ( 1 )
    {
      if ( (int)RtlpHpSegFreeRangeCompare(v18, v15, v14) < 0 )
      {
        v19 = *(_QWORD *)v15;
        if ( v16 )
        {
          if ( !v19 )
          {
LABEL_13:
            LOBYTE(v14) = 0;
            break;
          }
          v19 ^= v15;
        }
        if ( !v19 )
          goto LABEL_13;
      }
      else
      {
        v19 = *(_QWORD *)(v15 + 8);
        if ( v16 )
        {
          if ( !v19 )
          {
LABEL_14:
            LOBYTE(v14) = 1;
            break;
          }
          v19 ^= v15;
        }
        if ( !v19 )
          goto LABEL_14;
      }
      v15 = v19;
    }
  }
  RtlRbInsertNodeEx(a1 + 56, v15, v14, v17);
  result = *(_QWORD *)(a1 + 72);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(result + 16), (unsigned __int16)~(*(_DWORD *)(v17 + 28) >> 8));
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    result = RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 72));
  if ( !v10 )
    return RtlReleaseSRWLockExclusive(a1 + 24);
  return result;
}
