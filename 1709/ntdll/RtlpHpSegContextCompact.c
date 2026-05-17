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

__int64 __fastcall RtlpHpSegContextCompact(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  int v4; // ebp
  _QWORD *v5; // r14
  unsigned int v6; // r15d
  _QWORD *i; // rbx
  unsigned __int16 v8; // ax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // rsi
  int v13; // r12d
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( *(_QWORD *)(a1 + 48) )
  {
    v4 = a2 & 1;
    if ( (a2 & 1) == 0 )
      RtlAcquireSRWLockExclusive(a1 + 24);
    v5 = *(_QWORD **)(a1 + 32);
    do
    {
      v6 = *(unsigned __int8 *)(a1 + 10);
      for ( i = &v5[4 * *(unsigned __int8 *)(a1 + 10)]; ; i += 4 * result )
      {
        if ( (i[3] & 1) == 0 && (unsigned __int16)(*((_DWORD *)i + 7) >> 8) != 0xFFFF )
        {
          RtlRbRemoveNode(a1 + 56, i);
          *i = 0LL;
          i[1] = 0LL;
          i[2] = 0LL;
          v8 = ~(unsigned __int16)(*((_DWORD *)i + 7) >> 8);
          *(_DWORD *)i = -857879331;
          _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 16LL), -(__int64)v8);
          if ( (RtlpHpHeapFeatures & 8) != 0 )
            RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 72));
          *((_BYTE *)i + 24) |= 1u;
          v9 = 4LL * ((unsigned int)*((unsigned __int8 *)i + 31) - 1);
          LOBYTE(i[v9 + 3]) |= 1u;
          v10 = RtlpHpSegPageRangeCoalesce(a1, i, a2, 1LL);
          LOBYTE(v11) = 0;
          v12 = *(_QWORD *)(a1 + 56);
          v13 = *(_BYTE *)(a1 + 64) & 1;
          i = (_QWORD *)v10;
          v14 = *(unsigned int *)(v10 + 28);
          if ( v12 )
          {
            while ( 1 )
            {
              if ( (int)RtlpHpSegFreeRangeCompare(v14, v12, v11) < 0 )
              {
                v15 = *(_QWORD *)v12;
                if ( v13 )
                {
                  if ( !v15 )
                  {
LABEL_23:
                    LOBYTE(v11) = 0;
                    break;
                  }
                  v15 ^= v12;
                }
                if ( !v15 )
                  goto LABEL_23;
              }
              else
              {
                v15 = *(_QWORD *)(v12 + 8);
                if ( v13 )
                {
                  if ( !v15 )
                  {
LABEL_24:
                    LOBYTE(v11) = 1;
                    break;
                  }
                  v15 ^= v12;
                }
                if ( !v15 )
                  goto LABEL_24;
              }
              v12 = v15;
              v14 = *((unsigned int *)i + 7);
            }
          }
          RtlRbInsertNodeEx(a1 + 56, v12, v11, i);
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 16LL),
            (unsigned __int16)~(*((_DWORD *)i + 7) >> 8));
          if ( (RtlpHpHeapFeatures & 8) != 0 )
            RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 72));
        }
        result = *((unsigned __int8 *)i + 31);
        v6 += result;
        if ( v6 >= 0x100 )
          break;
      }
      v5 = (_QWORD *)*v5;
    }
    while ( v5 != (_QWORD *)(a1 + 32) );
    if ( !v4 )
      return RtlReleaseSRWLockExclusive(a1 + 24);
  }
  return result;
}
