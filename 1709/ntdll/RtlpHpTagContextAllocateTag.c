/*
 * XREFs of RtlpHpTagContextAllocateTag @ 0x18006EE4C
 * Callers:
 *     RtlpHpAllocWithExceptionProtection @ 0x180042900 (RtlpHpAllocWithExceptionProtection.c)
 *     RtlpHpTagContextGetTag @ 0x180102960 (RtlpHpTagContextGetTag.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpTagContextFindMapping @ 0x18006F01C (RtlpHpTagContextFindMapping.c)
 *     RtlpHpMetadataAlloc @ 0x18006F214 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x18006F570 (RtlpHpMetadataFree.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall RtlpHpTagContextAllocateTag(__int64 a1, __int128 *a2, __int64 a3, unsigned __int64 a4)
{
  void *v7; // rax
  signed __int64 v8; // rbx
  __int128 v9; // xmm0
  unsigned __int64 v10; // rdx
  unsigned __int64 *v11; // r8
  __int64 v12; // r9
  __int64 Mapping; // rax
  __int16 i; // r9
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // r9
  unsigned __int16 v17; // di
  __int64 v18; // rcx
  __int64 v19; // rdx
  signed __int64 *v20; // roff
  signed __int64 v21; // rax
  signed __int64 v22; // rtt
  __int64 v24; // [rsp+40h] [rbp+8h]

  v7 = (void *)RtlpHpMetadataAlloc(48LL, 0LL);
  v8 = (signed __int64)v7;
  if ( v7 )
  {
    memset(v7, 0, 0x30uLL);
    v9 = *a2;
    *(_QWORD *)(v8 + 32) = a4;
    *(_QWORD *)(v8 + 8) = a3;
    *(_OWORD *)(v8 + 16) = v9;
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpHpTagContext, v10, v11, v12);
    Mapping = RtlpHpTagContextFindMapping(&RtlpHpTagContext, a2, a3);
    if ( Mapping )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(Mapping + 32), a4);
      v17 = *(_WORD *)(Mapping + 40);
    }
    else if ( word_18015D922 == 1024 )
    {
      v17 = 0;
    }
    else
    {
      for ( i = word_18015D920; ; i = v15 + 1 )
      {
        v15 = 0;
        if ( i != 1024 )
          v15 = i;
        if ( !*(_QWORD *)(qword_18015D918 + 8LL * v15) )
          break;
      }
      v16 = v15 + 1;
      v17 = v15 + 1;
      if ( v15 != 0xFFFF )
      {
        *(_WORD *)(v8 + 40) = v16;
        *(_QWORD *)(qword_18015D918 + 8LL * v16 - 8) = v8;
        v24 = *(_QWORD *)(v8 + 8) & (-1LL << (dword_18015D90C & 0x1F));
        v18 = qword_18015D910;
        v19 = (37
             * (BYTE6(v24)
              + 37
              * (BYTE5(v24)
               + 37
               * (BYTE4(v24)
                + 37 * (BYTE3(v24) + 37 * (BYTE2(v24) + 37 * (BYTE1(v24) + 37 * ((unsigned __int8)v24 + 11623883)))))))
             + HIBYTE(v24)) & (((unsigned int)dword_18015D90C >> 5) - 1);
        v20 = (signed __int64 *)(qword_18015D910 + 8 * v19);
        _m_prefetchw(v20);
        v21 = *v20;
        do
        {
          *(_QWORD *)v8 = v21;
          v22 = v21;
          v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 8 * v19), v8, v21);
        }
        while ( v22 != v21 );
        ++dword_18015D908;
        v8 = 0LL;
        ++word_18015D922;
        word_18015D920 = v16;
      }
    }
    RtlReleaseSRWLockExclusive(&RtlpHpTagContext);
    if ( v8 )
      RtlpHpMetadataFree(v8);
  }
  else
  {
    return 0;
  }
  return v17;
}
