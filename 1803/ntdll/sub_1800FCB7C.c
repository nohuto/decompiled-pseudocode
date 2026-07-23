/*
 * XREFs of sub_1800FCB7C @ 0x1800FCB7C
 * Callers:
 *     sub_1800FCA5C @ 0x1800FCA5C (sub_1800FCA5C.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18005E238 @ 0x18005E238 (sub_18005E238.c)
 *     sub_18005F840 @ 0x18005F840 (sub_18005F840.c)
 *     sub_1800FC910 @ 0x1800FC910 (sub_1800FC910.c)
 *     sub_1800FC940 @ 0x1800FC940 (sub_1800FC940.c)
 */

__int64 __fastcall sub_1800FCB7C(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // r14
  unsigned int v7; // ebp
  _RTL_SRWLOCK *v8; // r13
  __int64 v9; // rsi
  unsigned int v10; // ebx
  char v11; // di
  unsigned __int64 v12; // rax
  __int64 v13; // rbx
  char *v14; // r8
  unsigned __int64 v15; // rcx
  unsigned int v16; // r9d
  __int64 v17; // r10
  __int64 v18; // rsi
  _QWORD *v19; // r11
  unsigned __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned __int64 v22; // r12
  __int64 v23; // rdx
  unsigned __int64 v24; // rdi
  __int128 v26; // [rsp+20h] [rbp-48h] BYREF
  __int128 v27; // [rsp+30h] [rbp-38h] BYREF

  v26 = xmmword_18015A790;
  v6 = sub_18005E238(0x18uLL, 0x18uLL, 0, &v26);
  if ( !v6 )
    return 0;
  v8 = (_RTL_SRWLOCK *)(a1 + 8);
  v6[1] = a2;
  v6[2] = a3;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 8));
  v9 = a1 + 16;
  v7 = 1;
  *(_DWORD *)a1 = NtCurrentTeb()->ClientId.UniqueThread;
  v10 = *(_DWORD *)(a1 + 20);
  if ( *(_DWORD *)(a1 + 16) < 2 * (v10 >> 5) )
    goto LABEL_26;
  v11 = -1;
  v12 = 2 * ((unsigned __int64)v10 >> 5);
  if ( v12 > 0xFFFFFFFF )
    goto LABEL_26;
  v13 = (unsigned int)v12;
  if ( (unsigned int)v12 < 4 )
    v13 = 4LL;
  v14 = (char *)sub_1800FC910(8LL * (unsigned int)v13);
  if ( v14 )
  {
    if ( (((_DWORD)v13 - 1) & (unsigned int)v13) != 0 )
    {
      for ( ; (_DWORD)v13; LODWORD(v13) = (unsigned int)v13 >> 1 )
        ++v11;
      v13 = (unsigned int)(1 << v11);
    }
    if ( (unsigned int)v13 > 0x4000000 )
      v13 = 0x4000000LL;
    v15 = (unsigned int)v13;
    if ( v14 > &v14[8 * v13] )
      v15 = 0LL;
    if ( v15 )
      memset64(v14, v9 | 1, v15);
    v16 = 0;
    v17 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
    if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v18 = *(_QWORD *)(v9 + 8);
        while ( 1 )
        {
          v19 = *(_QWORD **)(v18 + 8LL * v16);
          if ( ((unsigned __int8)v19 & 1) != 0 )
            break;
          *(_QWORD *)(v18 + 8LL * v16) = *v19;
          v20 = ((((unsigned __int64)v17 & v19[1]) >> 56)
               + 37
               * ((unsigned __int8)(((unsigned __int64)v17 & v19[1]) >> 48)
                + 37
                * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v17 & v19[1]) >> 32) >> 8)
                 + 37
                 * ((unsigned __int8)(((unsigned __int64)v17 & v19[1]) >> 32)
                  + 37
                  * ((((unsigned int)v17 & (_DWORD)v19[1]) >> 24)
                   + 37
                   * ((unsigned __int8)(((unsigned int)v17 & (_DWORD)v19[1]) >> 16)
                    + 37
                    * (37 * ((unsigned __int8)(v17 & v19[1]) + 11623883)
                     + (unsigned __int8)((unsigned __int16)(v17 & v19[1]) >> 8)))))))) & (unsigned int)(v13 - 1);
          *v19 = *(_QWORD *)&v14[8 * v20];
          *(_QWORD *)&v14[8 * v20] = v19;
        }
        v9 = a1 + 16;
        ++v16;
      }
      while ( v16 < *(_DWORD *)(a1 + 20) >> 5 );
      v8 = (_RTL_SRWLOCK *)(a1 + 8);
    }
    v21 = *(_QWORD *)(v9 + 8);
    v10 = *(_DWORD *)(v9 + 4) & 0x1F | (32 * v13);
    *(_QWORD *)(v9 + 8) = v14;
    *(_DWORD *)(v9 + 4) = v10;
    if ( v21 )
    {
      sub_1800FC940(v21);
      v10 = *(_DWORD *)(v9 + 4);
    }
    goto LABEL_26;
  }
  v10 = *(_DWORD *)(a1 + 20);
  if ( v10 >= 0x20 )
  {
LABEL_26:
    v22 = v6[1] & (-1LL << (v10 & 0x1F));
    v23 = *(_QWORD *)(v9 + 8);
    v24 = (HIBYTE(v22)
         + 37
         * (BYTE6(v22)
          + 37
          * (BYTE5(v22)
           + 37
           * (BYTE4(v22)
            + 37 * (BYTE3(v22) + 37 * (BYTE2(v22) + 37 * (37 * ((unsigned __int8)v22 + 11623883) + BYTE1(v22)))))))) & ((v10 >> 5) - 1);
    *v6 = *(_QWORD *)(v23 + 8 * v24);
    *(_QWORD *)(v23 + 8 * v24) = v6;
    ++*(_DWORD *)v9;
    v6 = 0LL;
    goto LABEL_27;
  }
  v7 = 0;
LABEL_27:
  *(_DWORD *)a1 = 0;
  RtlReleaseSRWLockExclusive(v8);
  if ( v6 )
  {
    v27 = xmmword_18015A790;
    sub_18005F840((__int64)v6, &v27);
  }
  return v7;
}
