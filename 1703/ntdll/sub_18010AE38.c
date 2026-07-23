/*
 * XREFs of sub_18010AE38 @ 0x18010AE38
 * Callers:
 *     sub_18010ABF8 @ 0x18010ABF8 (sub_18010ABF8.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_18010ADA8 @ 0x18010ADA8 (sub_18010ADA8.c)
 *     sub_18010AE04 @ 0x18010AE04 (sub_18010AE04.c)
 */

__int64 __fastcall sub_18010AE38(__int64 a1, unsigned int *a2)
{
  unsigned __int8 *v3; // r8
  unsigned __int64 v5; // r9
  __int64 v6; // rdi
  __int64 v7; // r10
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  __int64 v16; // rbx
  unsigned int v17; // r10d
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r14
  unsigned int v21; // r10d
  __int64 v22; // r8
  void (__fastcall *v23)(_QWORD, _QWORD); // r15
  __int64 v24; // r13
  char v25; // di
  unsigned __int64 v26; // rbx
  char *v27; // rax
  unsigned __int64 v28; // rcx
  unsigned int v29; // edi
  __int64 v30; // r10
  __int64 v31; // r15
  _QWORD *v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int v35; // edi
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v39; // [rsp+60h] [rbp+40h]
  __int64 v40; // [rsp+60h] [rbp+40h]
  __int64 v41; // [rsp+60h] [rbp+40h]
  void (__fastcall *v42)(_QWORD, _QWORD); // [rsp+68h] [rbp+48h]

  v3 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
  v5 = 8LL * *a2;
  v6 = 314159LL;
  if ( v5 >= 8 )
  {
    v7 = *a2;
    v5 = 0LL;
    do
    {
      v8 = v3[6] + 37 * (v3[5] + 37 * (v3[4] + 37 * (v3[3] + 37 * (v3[2] + 37 * (v3[1] + 37 * (*v3 + 37 * v6))))));
      v9 = v3[7];
      v3 += 8;
      v6 = v9 + 37 * v8;
      --v7;
    }
    while ( v7 );
  }
  if ( v5 - 1 <= 6 )
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
                  goto LABEL_19;
                v6 = *v3++ + 37 * v6;
              }
              v6 = *v3++ + 37 * v6;
            }
            v6 = *v3++ + 37 * v6;
          }
          v6 = *v3++ + 37 * v6;
        }
        v6 = *v3++ + 37 * v6;
      }
      v6 = *v3++ + 37 * v6;
    }
    v6 = *v3 + 37 * v6;
  }
LABEL_19:
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 40));
  v16 = 0LL;
  while ( 1 )
  {
    v17 = *(_DWORD *)(a1 + 4);
    v18 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
    v19 = v18 & v6;
    if ( v16 )
      goto LABEL_23;
    if ( v17 < 0x20 )
      break;
    v39 = v18 & v6;
    v16 = *(_QWORD *)(a1 + 8)
        + 8LL
        * ((37
          * (BYTE6(v39)
           + 37
           * (BYTE5(v39)
            + 37
            * (BYTE4(v39)
             + 37 * (BYTE3(v39) + 37 * (BYTE2(v39) + 37 * (BYTE1(v39) + 37 * ((unsigned __int8)v19 + 11623883)))))))
          + HIBYTE(v39)) & ((v17 >> 5) - 1));
LABEL_23:
    while ( 1 )
    {
      v16 = *(_QWORD *)v16;
      if ( (v16 & 1) != 0 )
        break;
      if ( v19 == (v18 & *(_QWORD *)(v16 + 8)) )
        goto LABEL_27;
    }
    v16 = 0LL;
LABEL_27:
    if ( !v16 )
      goto LABEL_35;
    if ( sub_18010AE04(v16, a2) )
      goto LABEL_31;
  }
  v16 = 0LL;
LABEL_31:
  if ( v16 )
  {
    if ( !(unsigned int)sub_18010ADA8((volatile signed __int32 *)(v16 + 16)) )
      v16 = 0LL;
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 40));
    return v16;
  }
LABEL_35:
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 40));
  v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 48))(8 * *a2 + 24, *(_QWORD *)(a1 + 64));
  if ( !v20 )
    return 0LL;
  *(_QWORD *)v20 = 0LL;
  *(_QWORD *)(v20 + 8) = 0LL;
  *(_QWORD *)(v20 + 16) = 0LL;
  *(_DWORD *)(v20 + 16) &= 0xFF000001;
  *(_DWORD *)(v20 + 16) |= 1u;
  *(_BYTE *)(v20 + 19) = *(_BYTE *)a2;
  *(_QWORD *)(v20 + 8) = v6;
  memmove((void *)(v20 + 24), *((const void **)a2 + 1), 8LL * *a2);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  v16 = 0LL;
  while ( 1 )
  {
    v21 = *(_DWORD *)(a1 + 4);
    v22 = v6 & (-1LL << (*(_BYTE *)(a1 + 4) & 0x1F));
    if ( v16 )
      goto LABEL_41;
    if ( v21 < 0x20 )
      break;
    v16 = *(_QWORD *)(a1 + 8)
        + 8LL
        * ((37
          * (BYTE6(v22)
           + 37
           * (BYTE5(v22)
            + 37
            * (BYTE4(v22)
             + 37 * (BYTE3(v22) + 37 * (BYTE2(v22) + 37 * (BYTE1(v22) + 37 * ((unsigned __int8)v22 + 11623883)))))))
          + HIBYTE(v22)) & ((v21 >> 5) - 1));
LABEL_41:
    while ( 1 )
    {
      v16 = *(_QWORD *)v16;
      if ( (v16 & 1) != 0 )
        break;
      if ( v22 == ((-1LL << (*(_BYTE *)(a1 + 4) & 0x1F)) & *(_QWORD *)(v16 + 8)) )
        goto LABEL_45;
    }
    v16 = 0LL;
LABEL_45:
    if ( !v16 )
      goto LABEL_52;
    if ( sub_18010AE04(v16, a2) )
      goto LABEL_49;
  }
  v16 = 0LL;
LABEL_49:
  if ( v16 )
  {
    if ( !(unsigned int)sub_18010ADA8((volatile signed __int32 *)(v16 + 16)) )
      v16 = 0LL;
    goto LABEL_75;
  }
LABEL_52:
  v23 = *(void (__fastcall **)(_QWORD, _QWORD))(a1 + 56);
  v24 = *(_QWORD *)(a1 + 64);
  v42 = v23;
  if ( *(_DWORD *)a1 < (unsigned int)(2 * (*(_DWORD *)(a1 + 4) >> 5)) )
    goto LABEL_74;
  v25 = -1;
  v26 = 2 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5);
  if ( v26 > 0xFFFFFFFF )
    goto LABEL_74;
  if ( (unsigned int)v26 < 4 )
    v26 = 4LL;
  v27 = (char *)(*(__int64 (__fastcall **)(__int64, __int64))(a1 + 48))(8LL * (unsigned int)v26, v24);
  if ( v27 )
  {
    if ( (((_DWORD)v26 - 1) & (unsigned int)v26) != 0 )
    {
      do
      {
        ++v25;
        LODWORD(v26) = (unsigned int)v26 >> 1;
      }
      while ( (_DWORD)v26 );
      v26 = (unsigned int)(1 << v25);
    }
    if ( (unsigned int)v26 > 0x4000000 )
      v26 = 0x4000000LL;
    v28 = (8 * v26 + 7) >> 3;
    if ( v27 > &v27[8 * v26] )
      v28 = 0LL;
    if ( v28 )
      memset64(v27, a1 | 1, v28);
    v29 = 0;
    v30 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
    if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v31 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          v32 = *(_QWORD **)(v31 + 8LL * v29);
          if ( ((unsigned __int8)v32 & 1) != 0 )
            break;
          *(_QWORD *)(v31 + 8LL * v29) = *v32;
          v40 = v30 & v32[1];
          v33 = (37
               * (BYTE6(v40)
                + 37
                * (BYTE5(v40)
                 + 37
                 * (BYTE4(v40)
                  + 37 * (BYTE3(v40) + 37 * (BYTE2(v40) + 37 * (BYTE1(v40) + 37 * ((unsigned __int8)v40 + 11623883)))))))
               + HIBYTE(v40)) & (unsigned int)(v26 - 1);
          *v32 = *(_QWORD *)&v27[8 * v33];
          *(_QWORD *)&v27[8 * v33] = v32;
        }
        ++v29;
      }
      while ( v29 < *(_DWORD *)(a1 + 4) >> 5 );
      v23 = v42;
    }
    *(_DWORD *)(a1 + 4) &= 0x1Fu;
    v34 = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 4) |= 32 * v26;
    *(_QWORD *)(a1 + 8) = v27;
    if ( v34 )
      v23(v34, v24);
    goto LABEL_74;
  }
  if ( *(_DWORD *)(a1 + 4) >= 0x20u )
  {
LABEL_74:
    v16 = v20;
    v35 = *(_DWORD *)(a1 + 4);
    v41 = *(_QWORD *)(v20 + 8) & (-1LL << (v35 & 0x1F));
    v36 = *(_QWORD *)(a1 + 8);
    v37 = (37
         * (BYTE6(v41)
          + 37
          * (BYTE5(v41)
           + 37
           * (BYTE4(v41)
            + 37 * (BYTE3(v41) + 37 * (BYTE2(v41) + 37 * (BYTE1(v41) + 37 * ((unsigned __int8)v41 + 11623883)))))))
         + HIBYTE(v41)) & ((v35 >> 5) - 1);
    *(_QWORD *)v20 = *(_QWORD *)(v36 + 8 * v37);
    *(_QWORD *)(v36 + 8 * v37) = v20;
    v20 = 0LL;
    ++*(_DWORD *)a1;
    goto LABEL_75;
  }
  v16 = 0LL;
LABEL_75:
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  if ( v20 )
    (*(void (__fastcall **)(__int64, _QWORD))(a1 + 56))(v20, *(_QWORD *)(a1 + 64));
  return v16;
}
