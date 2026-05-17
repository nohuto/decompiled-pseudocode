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

__int64 __fastcall sub_18010DCE8(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  unsigned int *v3; // r15
  unsigned __int8 *v4; // r8
  __int64 v5; // r9
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r10
  __int64 v12; // r8
  int v13; // r9d
  __int64 v14; // rax
  _QWORD *v15; // r14
  unsigned __int64 v16; // rdx
  unsigned __int64 *v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // r8
  int v20; // r9d
  unsigned int v21; // ecx
  void (__fastcall *v22)(__int64, __int64, __int64); // r15
  __int64 v23; // r13
  char v24; // di
  unsigned __int64 v25; // rax
  __int64 v26; // rbx
  char *v27; // r9
  unsigned __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r10
  __int64 v31; // r12
  _QWORD *v32; // r11
  unsigned __int64 v33; // rcx
  __int64 v34; // rdi
  unsigned int v35; // edi
  unsigned __int64 v36; // r12
  __int64 v37; // rcx
  unsigned __int64 v38; // rdx

  v2 = *(unsigned int *)a2;
  v3 = (unsigned int *)a2;
  v4 = *(unsigned __int8 **)(a2 + 8);
  v5 = 8 * v2;
  v7 = 314159LL;
  if ( (unsigned __int64)(8 * v2) >= 8 )
  {
    v5 -= 8LL * (unsigned int)v2;
    do
    {
      a2 = v4[5] + 37 * (v4[4] + 37 * (v4[3] + 37 * (v4[2] + 37 * (v4[1] + 37 * (*v4 + 37 * v7)))));
      v8 = v4[6] + 37 * a2;
      v9 = v4[7];
      v4 += 8;
      v7 = v9 + 37 * v8;
      --v2;
    }
    while ( v2 );
  }
  if ( v5 >= 1 && v5 <= 7 )
  {
    v5 = (unsigned int)(v5 - 1);
    if ( (_DWORD)v5 )
    {
      v5 = (unsigned int)(v5 - 1);
      if ( (_DWORD)v5 )
      {
        v5 = (unsigned int)(v5 - 1);
        if ( (_DWORD)v5 )
        {
          v5 = (unsigned int)(v5 - 1);
          if ( (_DWORD)v5 )
          {
            v5 = (unsigned int)(v5 - 1);
            if ( (_DWORD)v5 )
            {
              v5 = (unsigned int)(v5 - 1);
              if ( (_DWORD)v5 )
              {
                if ( (_DWORD)v5 != 1 )
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
  RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 40), (char *)a2, (__int64)v4, v5);
  v10 = 0LL;
  while ( 1 )
  {
    v11 = -1LL << (*(_DWORD *)(a1 + 4) & 0x1F);
    v12 = v11 & v7;
    if ( v10 )
      goto LABEL_24;
    v13 = *(_DWORD *)(a1 + 4) >> 5;
    if ( !v13 )
      break;
    v10 = *(_QWORD *)(a1 + 8)
        + 8
        * ((((v11 & (unsigned __int64)v7) >> 56)
          + 37
          * ((unsigned __int8)((v11 & (unsigned __int64)v7) >> 48)
           + 37
           * ((unsigned __int8)((unsigned __int16)((v11 & (unsigned __int64)v7) >> 32) >> 8)
            + 37
            * ((unsigned __int8)((v11 & (unsigned __int64)v7) >> 32)
             + 37
             * ((((unsigned int)v11 & (unsigned int)v7) >> 24)
              + 37
              * ((unsigned __int8)(((unsigned int)v11 & (unsigned int)v7) >> 16)
               + 37 * ((unsigned __int8)((unsigned __int16)(v11 & v7) >> 8) + 37 * ((unsigned __int8)v12 + 11623883)))))))) & (unsigned int)(v13 - 1));
LABEL_24:
    while ( 1 )
    {
      v10 = *(_QWORD *)v10;
      if ( (v10 & 1) != 0 )
        break;
      if ( v12 == (v11 & *(_QWORD *)(v10 + 8)) )
        goto LABEL_28;
    }
    v10 = 0LL;
LABEL_28:
    if ( !v10 )
      goto LABEL_36;
    if ( sub_18010DCB4(v10, v3) )
      goto LABEL_32;
  }
  v10 = 0LL;
LABEL_32:
  if ( v10 )
  {
    if ( !(unsigned int)sub_18010DC58((volatile signed __int32 *)(v10 + 16)) )
      v10 = 0LL;
    RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 40));
    return v10;
  }
LABEL_36:
  RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 40));
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 48))(8 * *v3 + 24, *(_QWORD *)(a1 + 64));
  v15 = (_QWORD *)v14;
  if ( !v14 )
    return 0LL;
  *(_QWORD *)v14 = 0LL;
  *(_QWORD *)(v14 + 8) = 0LL;
  *(_QWORD *)(v14 + 16) = 0LL;
  *(_DWORD *)(v14 + 16) &= 0xFF000001;
  *(_DWORD *)(v14 + 16) |= 1u;
  *(_BYTE *)(v14 + 19) = *(_BYTE *)v3;
  *(_QWORD *)(v14 + 8) = v7;
  memmove((void *)(v14 + 24), *((const void **)v3 + 1), 8LL * *v3);
  RtlAcquireSRWLockExclusive(a1 + 40, v16, v17, v18);
  v10 = 0LL;
  while ( 1 )
  {
    v19 = v7 & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
    if ( v10 )
      goto LABEL_42;
    v20 = *(_DWORD *)(a1 + 4) >> 5;
    if ( !v20 )
      break;
    v10 = *(_QWORD *)(a1 + 8)
        + 8
        * ((HIBYTE(v19)
          + 37
          * (BYTE6(v19)
           + 37
           * (BYTE5(v19)
            + 37
            * (BYTE4(v19)
             + 37 * (BYTE3(v19) + 37 * (BYTE2(v19) + 37 * (BYTE1(v19) + 37 * ((unsigned __int8)v19 + 11623883)))))))) & (unsigned int)(v20 - 1));
LABEL_42:
    while ( 1 )
    {
      v10 = *(_QWORD *)v10;
      if ( (v10 & 1) != 0 )
        break;
      if ( v19 == ((-1LL << (*(_DWORD *)(a1 + 4) & 0x1F)) & *(_QWORD *)(v10 + 8)) )
        goto LABEL_46;
    }
    v10 = 0LL;
LABEL_46:
    if ( !v10 )
      goto LABEL_53;
    if ( sub_18010DCB4(v10, v3) )
      goto LABEL_50;
  }
  v10 = 0LL;
LABEL_50:
  if ( v10 )
  {
    if ( !(unsigned int)sub_18010DC58((volatile signed __int32 *)(v10 + 16)) )
      v10 = 0LL;
    goto LABEL_75;
  }
LABEL_53:
  v21 = *(_DWORD *)(a1 + 4);
  v22 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 56);
  v23 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)a1 < 2 * (v21 >> 5) )
    goto LABEL_74;
  v24 = -1;
  v25 = 2 * ((unsigned __int64)v21 >> 5);
  if ( v25 > 0xFFFFFFFF )
    goto LABEL_74;
  v26 = (unsigned int)v25;
  if ( (unsigned int)v25 < 4 )
    v26 = 4LL;
  v27 = (char *)(*(__int64 (__fastcall **)(__int64, __int64))(a1 + 48))(8LL * (unsigned int)v26, v23);
  if ( v27 )
  {
    if ( (((_DWORD)v26 - 1) & (unsigned int)v26) != 0 )
    {
      do
      {
        ++v24;
        LODWORD(v26) = (unsigned int)v26 >> 1;
      }
      while ( (_DWORD)v26 );
      v26 = (unsigned int)(1 << v24);
    }
    if ( (unsigned int)v26 > 0x4000000 )
      v26 = 0x4000000LL;
    v28 = (unsigned int)v26;
    if ( v27 > &v27[8 * v26] )
      v28 = 0LL;
    if ( v28 )
      memset64(v27, a1 | 1, v28);
    v29 = 0LL;
    v30 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
    if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v31 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          v32 = *(_QWORD **)(v31 + 8LL * (unsigned int)v29);
          if ( ((unsigned __int8)v32 & 1) != 0 )
            break;
          *(_QWORD *)(v31 + 8LL * (unsigned int)v29) = *v32;
          v33 = ((((unsigned __int64)v30 & v32[1]) >> 56)
               + 37
               * ((unsigned __int8)(((unsigned __int64)v30 & v32[1]) >> 48)
                + 37
                * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v30 & v32[1]) >> 32) >> 8)
                 + 37
                 * ((unsigned __int8)(((unsigned __int64)v30 & v32[1]) >> 32)
                  + 37
                  * ((((unsigned int)v30 & (_DWORD)v32[1]) >> 24)
                   + 37
                   * ((unsigned __int8)(((unsigned int)v30 & (_DWORD)v32[1]) >> 16)
                    + 37
                    * (37 * ((unsigned __int8)(v30 & v32[1]) + 11623883)
                     + (unsigned __int8)((unsigned __int16)(v30 & v32[1]) >> 8)))))))) & (unsigned int)(v26 - 1);
          *v32 = *(_QWORD *)&v27[8 * v33];
          *(_QWORD *)&v27[8 * v33] = v32;
        }
        v29 = (unsigned int)(v29 + 1);
      }
      while ( (unsigned int)v29 < *(_DWORD *)(a1 + 4) >> 5 );
    }
    v34 = *(_QWORD *)(a1 + 8);
    v21 = (32 * v26) | *(_DWORD *)(a1 + 4) & 0x1F;
    *(_QWORD *)(a1 + 8) = v27;
    *(_DWORD *)(a1 + 4) = v21;
    if ( v34 )
    {
      v22(v34, v23, v29);
      v21 = *(_DWORD *)(a1 + 4);
    }
    goto LABEL_74;
  }
  v21 = *(_DWORD *)(a1 + 4);
  if ( v21 >= 0x20 )
  {
LABEL_74:
    v35 = v21;
    v10 = (__int64)v15;
    v36 = v15[1] & (-1LL << (v21 & 0x1F));
    v37 = *(_QWORD *)(a1 + 8);
    v38 = (HIBYTE(v36)
         + 37
         * (BYTE6(v36)
          + 37
          * (BYTE5(v36)
           + 37
           * (BYTE4(v36)
            + 37 * (BYTE3(v36) + 37 * (BYTE2(v36) + 37 * (37 * ((unsigned __int8)v36 + 11623883) + BYTE1(v36)))))))) & ((v35 >> 5) - 1);
    *v15 = *(_QWORD *)(v37 + 8 * v38);
    *(_QWORD *)(v37 + 8 * v38) = v15;
    ++*(_DWORD *)a1;
    v15 = 0LL;
    goto LABEL_75;
  }
  v10 = 0LL;
LABEL_75:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 40));
  if ( v15 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(a1 + 56))(v15, *(_QWORD *)(a1 + 64));
  return v10;
}
