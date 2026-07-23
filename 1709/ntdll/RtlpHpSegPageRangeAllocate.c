/*
 * XREFs of RtlpHpSegPageRangeAllocate @ 0x180038558
 * Callers:
 *     RtlpHpSegAlloc @ 0x18003827C (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlpHpSegSegmentAllocate @ 0x1800036E8 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegSegmentInitialize @ 0x180003AAC (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegHeapAddSegment @ 0x180003B2C (RtlpHpSegHeapAddSegment.c)
 *     RtlpHpSegFreeRangeCompare @ 0x1800387E4 (RtlpHpSegFreeRangeCompare.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegPageRangeSplit @ 0x1800389E4 (RtlpHpSegPageRangeSplit.c)
 *     RtlRbInsertNodeEx @ 0x18003A130 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x18003A530 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpTlLogMemStats @ 0x180105F7C (RtlpHpTlLogMemStats.c)
 */

unsigned __int64 __fastcall RtlpHpSegPageRangeAllocate(__int64 a1, int a2, __int64 a3)
{
  char v4; // cl
  unsigned int v5; // r12d
  unsigned int v6; // ebx
  int v7; // r13d
  _RTL_BALANCED_NODE **v8; // r15
  __int64 v9; // r14
  unsigned __int64 v10; // rbx
  int v11; // esi
  unsigned __int64 v12; // rbp
  int v13; // eax
  unsigned __int64 v14; // rax
  unsigned __int16 v15; // ax
  signed __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r14
  _RTL_BALANCED_NODE *v20; // rsi
  int v21; // ebp
  __int64 v22; // r12
  _RTL_BALANCED_NODE *v23; // rax
  char v24; // cl
  unsigned int v25; // esi
  unsigned int v26; // edx
  _BYTE *v28; // rax
  PVOID v29; // rax
  unsigned __int64 v30; // rsi
  unsigned int v31; // [rsp+68h] [rbp+10h]
  int v32; // [rsp+70h] [rbp+18h]

  v32 = a3;
  v4 = *(_BYTE *)(a1 + 9);
  v5 = (unsigned int)((1 << v4) + a2 - 1) >> v4;
  v31 = v5;
  v6 = (unsigned __int8)a3 | (((v5 << 16) | (unsigned __int16)~((_WORD)v5 << v4)) << 8);
  v7 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 24));
  v8 = (_RTL_BALANCED_NODE **)(a1 + 56);
  v9 = v6;
  v10 = *(_QWORD *)(a1 + 56);
  v11 = *(_BYTE *)(a1 + 64) & 1;
  v12 = 0LL;
  while ( v10 )
  {
    v13 = RtlpHpSegFreeRangeCompare(v9, v10, a3);
    if ( !v13 )
      goto LABEL_12;
    if ( v13 < 0 )
    {
      v14 = *(_QWORD *)v10;
      v12 = v10;
    }
    else
    {
      v14 = *(_QWORD *)(v10 + 8);
    }
    if ( v11 && v14 )
      v10 ^= v14;
    else
      v10 = v14;
  }
  v10 = v12;
LABEL_12:
  if ( v10 )
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 56), (PRTL_BALANCED_NODE)v10);
    *(_QWORD *)v10 = 0LL;
    *(_QWORD *)(v10 + 8) = 0LL;
    *(_QWORD *)(v10 + 16) = 0LL;
    v15 = ~(unsigned __int16)(*(_DWORD *)(v10 + 28) >> 8);
    *(_DWORD *)v10 = -857879331;
    v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 16LL), -(__int64)v15);
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 72));
  }
  else
  {
    if ( !v7 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 24));
    v29 = RtlpHpSegSegmentAllocate((int *)a1, 0);
    v30 = (unsigned __int64)v29;
    if ( !v29 )
      return 0LL;
    RtlpHpSegSegmentInitialize(a1, (__int64)v29, 0);
    v10 = v30 + 32LL * *(unsigned __int8 *)(a1 + 10);
    if ( !v7 )
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 24));
    RtlpHpSegHeapAddSegment(a1, v30);
  }
  v17 = RtlpHpSegPageRangeSplit(v16, v10, v5);
  v19 = v17;
  if ( !v17 )
    goto LABEL_25;
  LOBYTE(v18) = 0;
  v20 = *v8;
  v21 = *(_BYTE *)(a1 + 64) & 1;
  v22 = *(unsigned int *)(v17 + 28);
  if ( !*v8 )
    goto LABEL_22;
  while ( 1 )
  {
    if ( (int)RtlpHpSegFreeRangeCompare(v22, v20, v18) >= 0 )
    {
      v23 = v20->Children[1];
      if ( v21 )
      {
        if ( !v23 )
        {
LABEL_21:
          LOBYTE(v18) = 1;
          goto LABEL_22;
        }
        v23 = (_RTL_BALANCED_NODE *)((unsigned __int64)v20 ^ (unsigned __int64)v23);
      }
      if ( !v23 )
        goto LABEL_21;
      goto LABEL_20;
    }
    v23 = v20->Children[0];
    if ( v21 )
      break;
LABEL_32:
    if ( !v23 )
      goto LABEL_33;
LABEL_20:
    v20 = v23;
  }
  if ( v23 )
  {
    v23 = (_RTL_BALANCED_NODE *)((unsigned __int64)v20 ^ (unsigned __int64)v23);
    goto LABEL_32;
  }
LABEL_33:
  LOBYTE(v18) = 0;
LABEL_22:
  RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 56), v20, v18, (PRTL_BALANCED_NODE)v19);
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 16LL),
    (unsigned __int16)~(*(_DWORD *)(v19 + 28) >> 8));
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 72));
  v5 = v31;
LABEL_25:
  if ( (v32 & 0x4000000) != 0 )
  {
    v24 = 5;
  }
  else
  {
    v24 = 1;
    if ( (v32 & 0x8000000) != 0 )
      v24 = 9;
  }
  v25 = v5 - 1;
  *(_BYTE *)(v10 + 24) |= v24;
  *(_BYTE *)(32LL * (v5 - 1) + v10 + 24) |= 1u;
  if ( !v7 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 24));
  v26 = 1;
  if ( v25 > 1 )
  {
    v28 = (_BYTE *)(v10 + 56);
    do
    {
      v28[7] = v26++;
      *v28 |= 1u;
      v28 += 32;
    }
    while ( v26 < v25 );
  }
  return v10;
}
