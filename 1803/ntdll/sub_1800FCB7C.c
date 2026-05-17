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

__int64 __fastcall sub_1800FCB7C(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 *v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // r14
  unsigned int v10; // ebp
  volatile signed __int64 *v11; // r13
  unsigned __int64 v12; // rsi
  unsigned int v13; // ebx
  char v14; // di
  unsigned __int64 v15; // rax
  __int64 v16; // rbx
  char *v17; // r8
  unsigned __int64 v18; // rcx
  unsigned int v19; // r9d
  __int64 v20; // r10
  __int64 v21; // rsi
  _QWORD *v22; // r11
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned __int64 v25; // r12
  __int64 v26; // rdx
  unsigned __int64 v27; // rdi
  __int128 v29; // [rsp+20h] [rbp-48h] BYREF
  __int128 v30; // [rsp+30h] [rbp-38h] BYREF

  v29 = xmmword_18015A790;
  v9 = sub_18005E238(0x18uLL, 0x18uLL, 0, &v29);
  if ( !v9 )
    return 0;
  v11 = (volatile signed __int64 *)(a1 + 2);
  v9[1] = a2;
  v9[2] = a3;
  RtlAcquireSRWLockExclusive((unsigned __int64)(a1 + 2), v6, v7, v8);
  v12 = (unsigned __int64)(a1 + 4);
  v10 = 1;
  *a1 = NtCurrentTeb()->ClientId.UniqueThread;
  v13 = a1[5];
  if ( a1[4] < 2 * (v13 >> 5) )
    goto LABEL_26;
  v14 = -1;
  v15 = 2 * ((unsigned __int64)v13 >> 5);
  if ( v15 > 0xFFFFFFFF )
    goto LABEL_26;
  v16 = (unsigned int)v15;
  if ( (unsigned int)v15 < 4 )
    v16 = 4LL;
  v17 = (char *)sub_1800FC910(8LL * (unsigned int)v16);
  if ( v17 )
  {
    if ( (((_DWORD)v16 - 1) & (unsigned int)v16) != 0 )
    {
      for ( ; (_DWORD)v16; LODWORD(v16) = (unsigned int)v16 >> 1 )
        ++v14;
      v16 = (unsigned int)(1 << v14);
    }
    if ( (unsigned int)v16 > 0x4000000 )
      v16 = 0x4000000LL;
    v18 = (unsigned int)v16;
    if ( v17 > &v17[8 * v16] )
      v18 = 0LL;
    if ( v18 )
      memset64(v17, v12 | 1, v18);
    v19 = 0;
    v20 = -1LL << (a1[5] & 0x1F);
    if ( (a1[5] & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v21 = *(_QWORD *)(v12 + 8);
        while ( 1 )
        {
          v22 = *(_QWORD **)(v21 + 8LL * v19);
          if ( ((unsigned __int8)v22 & 1) != 0 )
            break;
          *(_QWORD *)(v21 + 8LL * v19) = *v22;
          v23 = ((((unsigned __int64)v20 & v22[1]) >> 56)
               + 37
               * ((unsigned __int8)(((unsigned __int64)v20 & v22[1]) >> 48)
                + 37
                * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v20 & v22[1]) >> 32) >> 8)
                 + 37
                 * ((unsigned __int8)(((unsigned __int64)v20 & v22[1]) >> 32)
                  + 37
                  * ((((unsigned int)v20 & (_DWORD)v22[1]) >> 24)
                   + 37
                   * ((unsigned __int8)(((unsigned int)v20 & (_DWORD)v22[1]) >> 16)
                    + 37
                    * (37 * ((unsigned __int8)(v20 & v22[1]) + 11623883)
                     + (unsigned __int8)((unsigned __int16)(v20 & v22[1]) >> 8)))))))) & (unsigned int)(v16 - 1);
          *v22 = *(_QWORD *)&v17[8 * v23];
          *(_QWORD *)&v17[8 * v23] = v22;
        }
        v12 = (unsigned __int64)(a1 + 4);
        ++v19;
      }
      while ( v19 < a1[5] >> 5 );
      v11 = (volatile signed __int64 *)(a1 + 2);
    }
    v24 = *(_QWORD *)(v12 + 8);
    v13 = *(_DWORD *)(v12 + 4) & 0x1F | (32 * v16);
    *(_QWORD *)(v12 + 8) = v17;
    *(_DWORD *)(v12 + 4) = v13;
    if ( v24 )
    {
      sub_1800FC940(v24);
      v13 = *(_DWORD *)(v12 + 4);
    }
    goto LABEL_26;
  }
  v13 = a1[5];
  if ( v13 >= 0x20 )
  {
LABEL_26:
    v25 = v9[1] & (-1LL << (v13 & 0x1F));
    v26 = *(_QWORD *)(v12 + 8);
    v27 = (HIBYTE(v25)
         + 37
         * (BYTE6(v25)
          + 37
          * (BYTE5(v25)
           + 37
           * (BYTE4(v25)
            + 37 * (BYTE3(v25) + 37 * (BYTE2(v25) + 37 * (37 * ((unsigned __int8)v25 + 11623883) + BYTE1(v25)))))))) & ((v13 >> 5) - 1);
    *v9 = *(_QWORD *)(v26 + 8 * v27);
    *(_QWORD *)(v26 + 8 * v27) = v9;
    ++*(_DWORD *)v12;
    v9 = 0LL;
    goto LABEL_27;
  }
  v10 = 0;
LABEL_27:
  *a1 = 0;
  RtlReleaseSRWLockExclusive(v11);
  if ( v9 )
  {
    v30 = xmmword_18015A790;
    sub_18005F840((__int64)v9, &v30);
  }
  return v10;
}
