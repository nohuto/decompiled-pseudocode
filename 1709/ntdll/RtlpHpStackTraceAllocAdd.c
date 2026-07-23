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
  _QWORD *v6; // r15
  unsigned int v7; // r14d
  _RTL_SRWLOCK *v8; // r13
  unsigned __int64 v9; // rsi
  char v10; // di
  unsigned __int64 v11; // rax
  __int64 v12; // rbx
  char *v13; // r8
  unsigned __int64 v14; // rcx
  unsigned int v15; // edi
  __int64 v16; // r10
  __int64 v17; // r13
  _QWORD *v18; // r9
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v25; // [rsp+20h] [rbp-10h]
  __int64 v26; // [rsp+78h] [rbp+48h]

  v6 = RtlpHpMetadataAlloc(0x18uLL, 0);
  if ( !v6 )
    return 0;
  v8 = (_RTL_SRWLOCK *)(a1 + 8);
  v6[1] = a2;
  v6[2] = a3;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 8));
  v9 = a1 + 16;
  v7 = 1;
  *(_DWORD *)a1 = NtCurrentTeb()->ClientId.UniqueThread;
  if ( *(_DWORD *)(a1 + 16) < (unsigned int)(2 * (*(_DWORD *)(a1 + 20) >> 5)) )
    goto LABEL_25;
  v10 = -1;
  v11 = 2 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5);
  if ( v11 > 0xFFFFFFFF )
    goto LABEL_25;
  v12 = (unsigned int)v11;
  if ( (unsigned int)v11 < 4 )
    v12 = 4LL;
  v13 = (char *)RtlpHpStackDbAllocRoutine(8LL * (unsigned int)v12);
  if ( v13 )
  {
    if ( (((_DWORD)v12 - 1) & (unsigned int)v12) != 0 )
    {
      do
      {
        ++v10;
        LODWORD(v12) = (unsigned int)v12 >> 1;
      }
      while ( (_DWORD)v12 );
      v12 = (unsigned int)(1 << v10);
    }
    if ( (unsigned int)v12 > 0x4000000 )
      v12 = 0x4000000LL;
    v14 = (unsigned int)v12;
    if ( v13 > &v13[8 * v12] )
      v14 = 0LL;
    if ( v14 )
      memset64(v13, v9 | 1, v14);
    v15 = 0;
    v16 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
    if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v17 = *(_QWORD *)(a1 + 24);
        while ( 1 )
        {
          v18 = *(_QWORD **)(v17 + 8LL * v15);
          if ( ((unsigned __int8)v18 & 1) != 0 )
            break;
          *(_QWORD *)(v17 + 8LL * v15) = *v18;
          v26 = v16 & v18[1];
          v19 = (37
               * (BYTE6(v26)
                + 37
                * (BYTE5(v26)
                 + 37
                 * (BYTE4(v26)
                  + 37 * (BYTE3(v26) + 37 * (BYTE2(v26) + 37 * (BYTE1(v26) + 37 * ((unsigned __int8)v26 + 11623883)))))))
               + HIBYTE(v26)) & (unsigned int)(v12 - 1);
          *v18 = *(_QWORD *)&v13[8 * v19];
          *(_QWORD *)&v13[8 * v19] = v18;
        }
        ++v15;
      }
      while ( v15 < *(_DWORD *)(a1 + 20) >> 5 );
      v8 = (_RTL_SRWLOCK *)(a1 + 8);
    }
    *(_DWORD *)(a1 + 20) &= 0x1Fu;
    v20 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 20) |= 32 * v12;
    *(_QWORD *)(a1 + 24) = v13;
    if ( v20 )
      RtlpHpStackDbFreeRoutine(v20);
    goto LABEL_25;
  }
  if ( *(_DWORD *)(a1 + 20) >= 0x20u )
  {
LABEL_25:
    v21 = *(_DWORD *)(a1 + 20);
    v25 = v6[1] & (-1LL << (v21 & 0x1F));
    v22 = *(_QWORD *)(a1 + 24);
    v23 = (37
         * (BYTE6(v25)
          + 37
          * (BYTE5(v25)
           + 37
           * (BYTE4(v25)
            + 37 * (BYTE3(v25) + 37 * (BYTE2(v25) + 37 * (BYTE1(v25) + 37 * ((unsigned __int8)v25 + 11623883)))))))
         + HIBYTE(v25)) & ((v21 >> 5) - 1);
    *v6 = *(_QWORD *)(v22 + 8 * v23);
    *(_QWORD *)(v22 + 8 * v23) = v6;
    v6 = 0LL;
    ++*(_DWORD *)v9;
    goto LABEL_26;
  }
  v7 = 0;
LABEL_26:
  *(_DWORD *)a1 = 0;
  RtlReleaseSRWLockExclusive(v8);
  if ( v6 )
    RtlpHpMetadataFree((unsigned __int64)v6);
  return v7;
}
