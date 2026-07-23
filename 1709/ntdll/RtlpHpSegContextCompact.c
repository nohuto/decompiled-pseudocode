/*
 * XREFs of RtlpHpSegContextCompact @ 0x180036078
 * Callers:
 *     RtlpHpHeapCompact @ 0x180012BF8 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlpHpSegPageRangeCoalesce @ 0x180037818 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegFreeRangeCompare @ 0x1800387E4 (RtlpHpSegFreeRangeCompare.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x18003A130 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x18003A530 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpTlLogMemStats @ 0x180105F7C (RtlpHpTlLogMemStats.c)
 */

void __fastcall RtlpHpSegContextCompact(__int64 a1, unsigned int a2)
{
  int v3; // ebp
  _QWORD *v4; // r14
  unsigned int v5; // r15d
  _RTL_BALANCED_NODE *i; // rbx
  __int64 v7; // rax
  unsigned __int16 v8; // ax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  _RTL_BALANCED_NODE *v12; // rsi
  int v13; // r12d
  __int64 Left_high; // rax
  _RTL_BALANCED_NODE *v15; // rax

  if ( *(_QWORD *)(a1 + 48) )
  {
    v3 = a2 & 1;
    if ( (a2 & 1) == 0 )
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 24));
    v4 = *(_QWORD **)(a1 + 32);
    do
    {
      v5 = *(unsigned __int8 *)(a1 + 10);
      for ( i = (_RTL_BALANCED_NODE *)&v4[4 * *(unsigned __int8 *)(a1 + 10)];
            ;
            i = (_RTL_BALANCED_NODE *)((char *)i + 32 * v7) )
      {
        if ( ((__int64)i[1].Children[0] & 1) == 0 && (unsigned __int16)(HIDWORD(i[1].Left) >> 8) != 0xFFFF )
        {
          RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 56), i);
          i->Children[0] = 0LL;
          i->Children[1] = 0LL;
          i->ParentValue = 0LL;
          v8 = ~(unsigned __int16)(HIDWORD(i[1].Left) >> 8);
          LODWORD(i->Children[0]) = -857879331;
          _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 16LL), -(__int64)v8);
          if ( (RtlpHpHeapFeatures & 8) != 0 )
            RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 72));
          LOBYTE(i[1].Children[0]) |= 1u;
          v9 = 4LL * ((unsigned int)HIBYTE(i[1].Left) - 1);
          LOBYTE(i[1].Children[v9]) |= 1u;
          v10 = RtlpHpSegPageRangeCoalesce(a1, i, a2, 1LL);
          LOBYTE(v11) = 0;
          v12 = *(_RTL_BALANCED_NODE **)(a1 + 56);
          v13 = *(_BYTE *)(a1 + 64) & 1;
          i = (_RTL_BALANCED_NODE *)v10;
          Left_high = *(unsigned int *)(v10 + 28);
          if ( v12 )
          {
            while ( 1 )
            {
              if ( (int)RtlpHpSegFreeRangeCompare(Left_high, v12, v11) < 0 )
              {
                v15 = v12->Children[0];
                if ( v13 )
                {
                  if ( !v15 )
                  {
LABEL_23:
                    LOBYTE(v11) = 0;
                    break;
                  }
                  v15 = (_RTL_BALANCED_NODE *)((unsigned __int64)v12 ^ (unsigned __int64)v15);
                }
                if ( !v15 )
                  goto LABEL_23;
              }
              else
              {
                v15 = v12->Children[1];
                if ( v13 )
                {
                  if ( !v15 )
                  {
LABEL_24:
                    LOBYTE(v11) = 1;
                    break;
                  }
                  v15 = (_RTL_BALANCED_NODE *)((unsigned __int64)v12 ^ (unsigned __int64)v15);
                }
                if ( !v15 )
                  goto LABEL_24;
              }
              v12 = v15;
              Left_high = HIDWORD(i[1].Left);
            }
          }
          RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 56), v12, v11, i);
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 16LL),
            (unsigned __int16)~(HIDWORD(i[1].Left) >> 8));
          if ( (RtlpHpHeapFeatures & 8) != 0 )
            RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 72));
        }
        v7 = HIBYTE(i[1].Left);
        v5 += v7;
        if ( v5 >= 0x100 )
          break;
      }
      v4 = (_QWORD *)*v4;
    }
    while ( v4 != (_QWORD *)(a1 + 32) );
    if ( !v3 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 24));
  }
}
