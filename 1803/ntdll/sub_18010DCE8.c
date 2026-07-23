/*
 * XREFs of sub_18010DCE8 @ 0x18010DCE8
 * Callers:
 *     sub_18010DAA8 @ 0x18010DAA8 (sub_18010DAA8.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_18010DC58 @ 0x18010DC58 (sub_18010DC58.c)
 *     sub_18010DCB4 @ 0x18010DCB4 (sub_18010DCB4.c)
 */

__int64 __fastcall sub_18010DCE8(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r10
  unsigned __int8 *v4; // r8
  __int64 v5; // r9
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  __int64 v16; // rbx
  __int64 v17; // r10
  __int64 v18; // r8
  int v19; // r9d
  __int64 v20; // rax
  _QWORD *v21; // r14
  unsigned __int64 v22; // r8
  int v23; // r9d
  unsigned int v24; // ecx
  void (__fastcall *v25)(__int64, __int64, __int64); // r15
  __int64 v26; // r13
  char v27; // di
  unsigned __int64 v28; // rax
  __int64 v29; // rbx
  char *v30; // r9
  unsigned __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r10
  __int64 v34; // r12
  _QWORD *v35; // r11
  unsigned __int64 v36; // rcx
  __int64 v37; // rdi
  unsigned int v38; // edi
  unsigned __int64 v39; // r12
  __int64 v40; // rcx
  unsigned __int64 v41; // rdx

  v2 = *a2;
  v4 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
  v5 = 8 * v2;
  v7 = 314159LL;
  if ( (unsigned __int64)(8 * v2) >= 8 )
  {
    v5 -= 8LL * (unsigned int)v2;
    do
    {
      v8 = v4[6] + 37 * (v4[5] + 37 * (v4[4] + 37 * (v4[3] + 37 * (v4[2] + 37 * (v4[1] + 37 * (*v4 + 37 * v7))))));
      v9 = v4[7];
      v4 += 8;
      v7 = v9 + 37 * v8;
      --v2;
    }
    while ( v2 );
  }
  if ( v5 >= 1 && v5 <= 7 )
  {
    v10 = v5 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              v15 = v14 - 1;
              if ( v15 )
              {
                if ( v15 != 1 )
                  goto LABEL_20;
                v7 = *v4++ + 37 * v7;
              }
              v7 = *v4++ + 37 * v7;
            }
            v7 = *v4++ + 37 * v7;
          }
          v7 = *v4++ + 37 * v7;
        }
        v7 = *v4++ + 37 * v7;
      }
      v7 = *v4++ + 37 * v7;
    }
    v7 = *v4 + 37 * v7;
  }
LABEL_20:
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 40));
  v16 = 0LL;
  while ( 1 )
  {
    v17 = -1LL << (*(_DWORD *)(a1 + 4) & 0x1F);
    v18 = v17 & v7;
    if ( v16 )
      goto LABEL_24;
    v19 = *(_DWORD *)(a1 + 4) >> 5;
    if ( !v19 )
      break;
    v16 = *(_QWORD *)(a1 + 8)
        + 8
        * ((((v17 & (unsigned __int64)v7) >> 56)
          + 37
          * ((unsigned __int8)((v17 & (unsigned __int64)v7) >> 48)
           + 37
           * ((unsigned __int8)((unsigned __int16)((v17 & (unsigned __int64)v7) >> 32) >> 8)
            + 37
            * ((unsigned __int8)((v17 & (unsigned __int64)v7) >> 32)
             + 37
             * ((((unsigned int)v17 & (unsigned int)v7) >> 24)
              + 37
              * ((unsigned __int8)(((unsigned int)v17 & (unsigned int)v7) >> 16)
               + 37 * ((unsigned __int8)((unsigned __int16)(v17 & v7) >> 8) + 37 * ((unsigned __int8)v18 + 11623883)))))))) & (unsigned int)(v19 - 1));
LABEL_24:
    while ( 1 )
    {
      v16 = *(_QWORD *)v16;
      if ( (v16 & 1) != 0 )
        break;
      if ( v18 == (v17 & *(_QWORD *)(v16 + 8)) )
        goto LABEL_28;
    }
    v16 = 0LL;
LABEL_28:
    if ( !v16 )
      goto LABEL_36;
    if ( sub_18010DCB4(v16, a2) )
      goto LABEL_32;
  }
  v16 = 0LL;
LABEL_32:
  if ( v16 )
  {
    if ( !(unsigned int)sub_18010DC58((volatile signed __int32 *)(v16 + 16)) )
      v16 = 0LL;
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 40));
    return v16;
  }
LABEL_36:
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 40));
  v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 48))(8 * *a2 + 24, *(_QWORD *)(a1 + 64));
  v21 = (_QWORD *)v20;
  if ( !v20 )
    return 0LL;
  *(_QWORD *)v20 = 0LL;
  *(_QWORD *)(v20 + 8) = 0LL;
  *(_QWORD *)(v20 + 16) = 0LL;
  *(_DWORD *)(v20 + 16) &= 0xFF000001;
  *(_DWORD *)(v20 + 16) |= 1u;
  *(_BYTE *)(v20 + 19) = *(_BYTE *)a2;
  *(_QWORD *)(v20 + 8) = v7;
  memmove((void *)(v20 + 24), *((const void **)a2 + 1), 8LL * *a2);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  v16 = 0LL;
  while ( 1 )
  {
    v22 = v7 & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
    if ( v16 )
      goto LABEL_42;
    v23 = *(_DWORD *)(a1 + 4) >> 5;
    if ( !v23 )
      break;
    v16 = *(_QWORD *)(a1 + 8)
        + 8
        * ((HIBYTE(v22)
          + 37
          * (BYTE6(v22)
           + 37
           * (BYTE5(v22)
            + 37
            * (BYTE4(v22)
             + 37 * (BYTE3(v22) + 37 * (BYTE2(v22) + 37 * (BYTE1(v22) + 37 * ((unsigned __int8)v22 + 11623883)))))))) & (unsigned int)(v23 - 1));
LABEL_42:
    while ( 1 )
    {
      v16 = *(_QWORD *)v16;
      if ( (v16 & 1) != 0 )
        break;
      if ( v22 == ((-1LL << (*(_DWORD *)(a1 + 4) & 0x1F)) & *(_QWORD *)(v16 + 8)) )
        goto LABEL_46;
    }
    v16 = 0LL;
LABEL_46:
    if ( !v16 )
      goto LABEL_53;
    if ( sub_18010DCB4(v16, a2) )
      goto LABEL_50;
  }
  v16 = 0LL;
LABEL_50:
  if ( v16 )
  {
    if ( !(unsigned int)sub_18010DC58((volatile signed __int32 *)(v16 + 16)) )
      v16 = 0LL;
    goto LABEL_75;
  }
LABEL_53:
  v24 = *(_DWORD *)(a1 + 4);
  v25 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 56);
  v26 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)a1 < 2 * (v24 >> 5) )
    goto LABEL_74;
  v27 = -1;
  v28 = 2 * ((unsigned __int64)v24 >> 5);
  if ( v28 > 0xFFFFFFFF )
    goto LABEL_74;
  v29 = (unsigned int)v28;
  if ( (unsigned int)v28 < 4 )
    v29 = 4LL;
  v30 = (char *)(*(__int64 (__fastcall **)(__int64, __int64))(a1 + 48))(8LL * (unsigned int)v29, v26);
  if ( v30 )
  {
    if ( (((_DWORD)v29 - 1) & (unsigned int)v29) != 0 )
    {
      do
      {
        ++v27;
        LODWORD(v29) = (unsigned int)v29 >> 1;
      }
      while ( (_DWORD)v29 );
      v29 = (unsigned int)(1 << v27);
    }
    if ( (unsigned int)v29 > 0x4000000 )
      v29 = 0x4000000LL;
    v31 = (unsigned int)v29;
    if ( v30 > &v30[8 * v29] )
      v31 = 0LL;
    if ( v31 )
      memset64(v30, a1 | 1, v31);
    v32 = 0LL;
    v33 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
    if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v34 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          v35 = *(_QWORD **)(v34 + 8LL * (unsigned int)v32);
          if ( ((unsigned __int8)v35 & 1) != 0 )
            break;
          *(_QWORD *)(v34 + 8LL * (unsigned int)v32) = *v35;
          v36 = ((((unsigned __int64)v33 & v35[1]) >> 56)
               + 37
               * ((unsigned __int8)(((unsigned __int64)v33 & v35[1]) >> 48)
                + 37
                * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v33 & v35[1]) >> 32) >> 8)
                 + 37
                 * ((unsigned __int8)(((unsigned __int64)v33 & v35[1]) >> 32)
                  + 37
                  * ((((unsigned int)v33 & (_DWORD)v35[1]) >> 24)
                   + 37
                   * ((unsigned __int8)(((unsigned int)v33 & (_DWORD)v35[1]) >> 16)
                    + 37
                    * (37 * ((unsigned __int8)(v33 & v35[1]) + 11623883)
                     + (unsigned __int8)((unsigned __int16)(v33 & v35[1]) >> 8)))))))) & (unsigned int)(v29 - 1);
          *v35 = *(_QWORD *)&v30[8 * v36];
          *(_QWORD *)&v30[8 * v36] = v35;
        }
        v32 = (unsigned int)(v32 + 1);
      }
      while ( (unsigned int)v32 < *(_DWORD *)(a1 + 4) >> 5 );
    }
    v37 = *(_QWORD *)(a1 + 8);
    v24 = (32 * v29) | *(_DWORD *)(a1 + 4) & 0x1F;
    *(_QWORD *)(a1 + 8) = v30;
    *(_DWORD *)(a1 + 4) = v24;
    if ( v37 )
    {
      v25(v37, v26, v32);
      v24 = *(_DWORD *)(a1 + 4);
    }
    goto LABEL_74;
  }
  v24 = *(_DWORD *)(a1 + 4);
  if ( v24 >= 0x20 )
  {
LABEL_74:
    v38 = v24;
    v16 = (__int64)v21;
    v39 = v21[1] & (-1LL << (v24 & 0x1F));
    v40 = *(_QWORD *)(a1 + 8);
    v41 = (HIBYTE(v39)
         + 37
         * (BYTE6(v39)
          + 37
          * (BYTE5(v39)
           + 37
           * (BYTE4(v39)
            + 37 * (BYTE3(v39) + 37 * (BYTE2(v39) + 37 * (37 * ((unsigned __int8)v39 + 11623883) + BYTE1(v39)))))))) & ((v38 >> 5) - 1);
    *v21 = *(_QWORD *)(v40 + 8 * v41);
    *(_QWORD *)(v40 + 8 * v41) = v21;
    ++*(_DWORD *)a1;
    v21 = 0LL;
    goto LABEL_75;
  }
  v16 = 0LL;
LABEL_75:
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  if ( v21 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(a1 + 56))(v21, *(_QWORD *)(a1 + 64));
  return v16;
}
