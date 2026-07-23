/*
 * XREFs of RtlpHpSegContextReserve @ 0x1800040FC
 * Callers:
 *     RtlpHpHeapCreate @ 0x180003E00 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpHpSegSegmentAllocate @ 0x1800036E8 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegSegmentInitialize @ 0x180003AAC (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegHeapAddSegment @ 0x180003B2C (RtlpHpSegHeapAddSegment.c)
 *     RtlRbInsertNodeEx @ 0x18003A130 (RtlRbInsertNodeEx.c)
 *     RtlpHpTlLogMemStats @ 0x180105F7C (RtlpHpTlLogMemStats.c)
 */

__int64 __fastcall RtlpHpSegContextReserve(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  unsigned int v5; // ebx
  unsigned int i; // r15d
  unsigned int v8; // ebp
  char *v9; // rax
  unsigned __int64 v10; // r14
  char *v11; // r13
  BOOLEAN v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // [rsp+50h] [rbp+8h]

  v3 = (unsigned __int64)(a3 + 4095) >> 12;
  v5 = 0;
  v15 = ((unsigned __int64)(unsigned int)-*(_DWORD *)a1 + a2 - 1) / (unsigned int)-*(_DWORD *)a1;
  for ( i = (256 - *(unsigned __int8 *)(a1 + 10)) << *(_BYTE *)(a1 + 9); v15; --v15 )
  {
    if ( v3 > i )
    {
      v8 = i;
      v3 -= i;
    }
    else
    {
      v8 = v3;
      v3 = 0LL;
    }
    v9 = (char *)RtlpHpSegSegmentAllocate((int *)a1, v8);
    v10 = (unsigned __int64)v9;
    if ( !v9 )
      return (unsigned int)-1073741670;
    v11 = &v9[32 * *(unsigned __int8 *)(a1 + 10)];
    *(_DWORD *)v11 = -857879331;
    RtlpHpSegSegmentInitialize(a1, (__int64)v9, v8);
    v12 = 0;
    v13 = *(_QWORD *)(a1 + 56);
    if ( !v13 )
      goto LABEL_7;
    while ( 1 )
    {
      if ( *((_DWORD *)v11 + 7) >= *(_DWORD *)(v13 + 28) )
      {
        v14 = *(_QWORD *)(v13 + 8);
        if ( (*(_BYTE *)(a1 + 64) & 1) != 0 )
        {
          if ( !v14 )
          {
LABEL_15:
            v12 = 1;
            goto LABEL_7;
          }
          v14 ^= v13;
        }
        if ( !v14 )
          goto LABEL_15;
        goto LABEL_16;
      }
      v14 = *(_QWORD *)v13;
      if ( (*(_BYTE *)(a1 + 64) & 1) != 0 )
      {
        if ( !v14 )
          break;
        v14 ^= v13;
      }
      if ( !v14 )
        break;
LABEL_16:
      v13 = v14;
    }
    v12 = 0;
LABEL_7:
    RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 56), (PRTL_BALANCED_NODE)v13, v12, (PRTL_BALANCED_NODE)v11);
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 16LL),
      (unsigned __int16)~(*((_DWORD *)v11 + 7) >> 8));
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 72));
    RtlpHpSegHeapAddSegment(a1, v10);
  }
  return v5;
}
