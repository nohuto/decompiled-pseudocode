/*
 * XREFs of RtlpHpStackTraceAllocAdd @ 0x18010003C
 * Callers:
 *     RtlpHpStackTraceAddStack @ 0x1800FFF48 (RtlpHpStackTraceAddStack.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpMetadataAlloc @ 0x18006F214 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x18006F570 (RtlpHpMetadataFree.c)
 *     RtlpHpStackDbAllocRoutine @ 0x1800FFDB0 (RtlpHpStackDbAllocRoutine.c)
 *     RtlpHpStackDbFreeRoutine @ 0x1800FFDC0 (RtlpHpStackDbFreeRoutine.c)
 */

__int64 __fastcall RtlpHpStackTraceAllocAdd(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 *v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // r15
  unsigned int v10; // r14d
  volatile signed __int64 *v11; // r13
  unsigned __int64 v12; // rsi
  char v13; // di
  unsigned __int64 v14; // rax
  __int64 v15; // rbx
  char *v16; // r8
  unsigned __int64 v17; // rcx
  unsigned int v18; // edi
  __int64 v19; // r10
  __int64 v20; // r13
  _QWORD *v21; // r9
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned int v24; // edi
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v28; // [rsp+20h] [rbp-10h]
  __int64 v29; // [rsp+78h] [rbp+48h]

  v9 = RtlpHpMetadataAlloc(0x18uLL, 0);
  if ( !v9 )
    return 0;
  v11 = (volatile signed __int64 *)(a1 + 8);
  v9[1] = a2;
  v9[2] = a3;
  RtlAcquireSRWLockExclusive(a1 + 8, v6, v7, v8);
  v12 = a1 + 16;
  v10 = 1;
  *(_DWORD *)a1 = NtCurrentTeb()->ClientId.UniqueThread;
  if ( *(_DWORD *)(a1 + 16) < (unsigned int)(2 * (*(_DWORD *)(a1 + 20) >> 5)) )
    goto LABEL_25;
  v13 = -1;
  v14 = 2 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5);
  if ( v14 > 0xFFFFFFFF )
    goto LABEL_25;
  v15 = (unsigned int)v14;
  if ( (unsigned int)v14 < 4 )
    v15 = 4LL;
  v16 = (char *)RtlpHpStackDbAllocRoutine(8LL * (unsigned int)v15);
  if ( v16 )
  {
    if ( (((_DWORD)v15 - 1) & (unsigned int)v15) != 0 )
    {
      do
      {
        ++v13;
        LODWORD(v15) = (unsigned int)v15 >> 1;
      }
      while ( (_DWORD)v15 );
      v15 = (unsigned int)(1 << v13);
    }
    if ( (unsigned int)v15 > 0x4000000 )
      v15 = 0x4000000LL;
    v17 = (unsigned int)v15;
    if ( v16 > &v16[8 * v15] )
      v17 = 0LL;
    if ( v17 )
      memset64(v16, v12 | 1, v17);
    v18 = 0;
    v19 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
    if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v20 = *(_QWORD *)(a1 + 24);
        while ( 1 )
        {
          v21 = *(_QWORD **)(v20 + 8LL * v18);
          if ( ((unsigned __int8)v21 & 1) != 0 )
            break;
          *(_QWORD *)(v20 + 8LL * v18) = *v21;
          v29 = v19 & v21[1];
          v22 = (37
               * (BYTE6(v29)
                + 37
                * (BYTE5(v29)
                 + 37
                 * (BYTE4(v29)
                  + 37 * (BYTE3(v29) + 37 * (BYTE2(v29) + 37 * (BYTE1(v29) + 37 * ((unsigned __int8)v29 + 11623883)))))))
               + HIBYTE(v29)) & (unsigned int)(v15 - 1);
          *v21 = *(_QWORD *)&v16[8 * v22];
          *(_QWORD *)&v16[8 * v22] = v21;
        }
        ++v18;
      }
      while ( v18 < *(_DWORD *)(a1 + 20) >> 5 );
      v11 = (volatile signed __int64 *)(a1 + 8);
    }
    *(_DWORD *)(a1 + 20) &= 0x1Fu;
    v23 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 20) |= 32 * v15;
    *(_QWORD *)(a1 + 24) = v16;
    if ( v23 )
      RtlpHpStackDbFreeRoutine(v23);
    goto LABEL_25;
  }
  if ( *(_DWORD *)(a1 + 20) >= 0x20u )
  {
LABEL_25:
    v24 = *(_DWORD *)(a1 + 20);
    v28 = v9[1] & (-1LL << (v24 & 0x1F));
    v25 = *(_QWORD *)(a1 + 24);
    v26 = (37
         * (BYTE6(v28)
          + 37
          * (BYTE5(v28)
           + 37
           * (BYTE4(v28)
            + 37 * (BYTE3(v28) + 37 * (BYTE2(v28) + 37 * (BYTE1(v28) + 37 * ((unsigned __int8)v28 + 11623883)))))))
         + HIBYTE(v28)) & ((v24 >> 5) - 1);
    *v9 = *(_QWORD *)(v25 + 8 * v26);
    *(_QWORD *)(v25 + 8 * v26) = v9;
    v9 = 0LL;
    ++*(_DWORD *)v12;
    goto LABEL_26;
  }
  v10 = 0;
LABEL_26:
  *(_DWORD *)a1 = 0;
  RtlReleaseSRWLockExclusive(v11);
  if ( v9 )
    RtlpHpMetadataFree((unsigned __int64)v9);
  return v10;
}
