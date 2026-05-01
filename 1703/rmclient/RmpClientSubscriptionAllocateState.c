/*
 * XREFs of RmpClientSubscriptionAllocateState @ 0x180006598
 * Callers:
 *     RmpClientConnectionAllocateState @ 0x180006500 (RmpClientConnectionAllocateState.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800066B0 (MIDL_user_allocate.c)
 *     RmpClientWnfCreateSubscription @ 0x180006A58 (RmpClientWnfCreateSubscription.c)
 *     RmpFreeHeapForHashTable @ 0x180007240 (RmpFreeHeapForHashTable.c)
 */

__int64 __fastcall RmpClientSubscriptionAllocateState(__int64 a1, __int64 a2)
{
  char v4; // di
  unsigned __int64 v5; // rbx
  char *v6; // r8
  unsigned __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // r14
  _QWORD *v13; // r10
  __int64 v14; // rdx
  __int64 v15; // [rsp+50h] [rbp+8h]

  if ( *(_DWORD *)(a1 + 24) >= (unsigned int)(2 * (*(_DWORD *)(a1 + 28) >> 5)) )
  {
    v4 = -1;
    v5 = 2 * ((unsigned __int64)*(unsigned int *)(a1 + 28) >> 5);
    if ( v5 <= 0xFFFFFFFF )
    {
      if ( (unsigned int)v5 < 4 )
        v5 = 4LL;
      v6 = (char *)MIDL_user_allocate(8LL * (unsigned int)v5);
      if ( v6 )
      {
        if ( (((_DWORD)v5 - 1) & (unsigned int)v5) != 0 )
        {
          do
          {
            ++v4;
            LODWORD(v5) = (unsigned int)v5 >> 1;
          }
          while ( (_DWORD)v5 );
          v5 = (unsigned int)(1 << v4);
        }
        if ( (unsigned int)v5 > 0x4000000 )
          v5 = 0x4000000LL;
        v7 = (8 * v5 + 7) >> 3;
        if ( v6 > &v6[8 * v5] )
          v7 = 0LL;
        if ( v7 )
          memset64(v6, (a1 + 24) | 1, v7);
        v8 = 0;
        v9 = -1LL << (*(_BYTE *)(a1 + 28) & 0x1F);
        if ( (*(_DWORD *)(a1 + 28) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v12 = *(_QWORD *)(a1 + 32);
            while ( 1 )
            {
              v13 = *(_QWORD **)(v12 + 8LL * v8);
              if ( ((unsigned __int8)v13 & 1) != 0 )
                break;
              *(_QWORD *)(v12 + 8LL * v8) = *v13;
              v15 = v9 & v13[1];
              v14 = (37
                   * (BYTE6(v15)
                    + 37
                    * (BYTE5(v15)
                     + 37
                     * (BYTE4(v15)
                      + 37
                      * (BYTE3(v15) + 37 * (BYTE2(v15) + 37 * (BYTE1(v15) + 37 * ((unsigned __int8)v15 + 11623883)))))))
                   + HIBYTE(v15)) & (unsigned int)(v5 - 1);
              *v13 = *(_QWORD *)&v6[8 * v14];
              *(_QWORD *)&v6[8 * v14] = v13;
            }
            ++v8;
          }
          while ( v8 < *(_DWORD *)(a1 + 28) >> 5 );
        }
        *(_DWORD *)(a1 + 28) &= 0x1Fu;
        v10 = *(_QWORD *)(a1 + 32);
        *(_DWORD *)(a1 + 28) |= 32 * v5;
        *(_QWORD *)(a1 + 32) = v6;
        if ( v10 )
          RmpFreeHeapForHashTable(v10, 0LL, v6, v9);
      }
      else if ( *(_DWORD *)(a1 + 28) < 0x20u )
      {
        return 3221225495LL;
      }
    }
  }
  result = RmpClientWnfCreateSubscription(a2, RmpClientSubscriptionWnfCallback, a1, a1);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
