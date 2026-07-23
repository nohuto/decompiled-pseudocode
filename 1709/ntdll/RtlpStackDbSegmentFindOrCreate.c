/*
 * XREFs of RtlpStackDbSegmentFindOrCreate @ 0x18010DC60
 * Callers:
 *     RtlpStackDbEntryCreate @ 0x18010DA20 (RtlpStackDbEntryCreate.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     RtlpStackDbRefCountIncrement @ 0x18010DBD0 (RtlpStackDbRefCountIncrement.c)
 *     RtlpStackDbSegmentComparitor @ 0x18010DC2C (RtlpStackDbSegmentComparitor.c)
 */

__int64 __fastcall RtlpStackDbSegmentFindOrCreate(__int64 a1, unsigned int *a2)
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
  __int64 v18; // r9
  int v19; // r8d
  __int64 v20; // r14
  __int64 v21; // r9
  int v22; // r8d
  void (__fastcall *v23)(_QWORD, _QWORD); // r15
  __int64 v24; // r13
  char v25; // di
  unsigned __int64 v26; // rax
  __int64 v27; // rbx
  char *v28; // rax
  unsigned __int64 v29; // rcx
  unsigned int v30; // edi
  __int64 v31; // r10
  __int64 v32; // r15
  _QWORD *v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned int v36; // edi
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v40; // [rsp+60h] [rbp+40h]
  __int64 v41; // [rsp+60h] [rbp+40h]
  __int64 v42; // [rsp+60h] [rbp+40h]
  void (__fastcall *v43)(_QWORD, _QWORD); // [rsp+68h] [rbp+48h]

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
    v17 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
    v18 = v17 & v7;
    if ( v16 )
      goto LABEL_24;
    v19 = *(_DWORD *)(a1 + 4) >> 5;
    if ( !v19 )
      break;
    v40 = v17 & v7;
    v16 = *(_QWORD *)(a1 + 8)
        + 8LL
        * ((37
          * (BYTE6(v40)
           + 37
           * (BYTE5(v40)
            + 37
            * (BYTE4(v40)
             + 37 * (BYTE3(v40) + 37 * (BYTE2(v40) + 37 * (BYTE1(v40) + 37 * ((unsigned __int8)v18 + 11623883)))))))
          + HIBYTE(v40)) & (unsigned int)(v19 - 1));
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
    if ( RtlpStackDbSegmentComparitor(v16, a2) )
      goto LABEL_32;
  }
  v16 = 0LL;
LABEL_32:
  if ( v16 )
  {
    if ( !(unsigned int)RtlpStackDbRefCountIncrement((volatile signed __int32 *)(v16 + 16)) )
      v16 = 0LL;
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 40));
    return v16;
  }
LABEL_36:
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
  *(_QWORD *)(v20 + 8) = v7;
  memmove((void *)(v20 + 24), *((const void **)a2 + 1), 8LL * *a2);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  v16 = 0LL;
  while ( 1 )
  {
    v21 = v7 & (-1LL << (*(_BYTE *)(a1 + 4) & 0x1F));
    if ( v16 )
      goto LABEL_42;
    v22 = *(_DWORD *)(a1 + 4) >> 5;
    if ( !v22 )
      break;
    v16 = *(_QWORD *)(a1 + 8)
        + 8LL
        * ((37
          * (BYTE6(v21)
           + 37
           * (BYTE5(v21)
            + 37
            * (BYTE4(v21)
             + 37 * (BYTE3(v21) + 37 * (BYTE2(v21) + 37 * (BYTE1(v21) + 37 * ((unsigned __int8)v21 + 11623883)))))))
          + HIBYTE(v21)) & (unsigned int)(v22 - 1));
LABEL_42:
    while ( 1 )
    {
      v16 = *(_QWORD *)v16;
      if ( (v16 & 1) != 0 )
        break;
      if ( v21 == ((-1LL << (*(_BYTE *)(a1 + 4) & 0x1F)) & *(_QWORD *)(v16 + 8)) )
        goto LABEL_46;
    }
    v16 = 0LL;
LABEL_46:
    if ( !v16 )
      goto LABEL_53;
    if ( RtlpStackDbSegmentComparitor(v16, a2) )
      goto LABEL_50;
  }
  v16 = 0LL;
LABEL_50:
  if ( v16 )
  {
    if ( !(unsigned int)RtlpStackDbRefCountIncrement((volatile signed __int32 *)(v16 + 16)) )
      v16 = 0LL;
    goto LABEL_76;
  }
LABEL_53:
  v23 = *(void (__fastcall **)(_QWORD, _QWORD))(a1 + 56);
  v24 = *(_QWORD *)(a1 + 64);
  v43 = v23;
  if ( *(_DWORD *)a1 < (unsigned int)(2 * (*(_DWORD *)(a1 + 4) >> 5)) )
    goto LABEL_75;
  v25 = -1;
  v26 = 2 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5);
  if ( v26 > 0xFFFFFFFF )
    goto LABEL_75;
  v27 = (unsigned int)v26;
  if ( (unsigned int)v26 < 4 )
    v27 = 4LL;
  v28 = (char *)(*(__int64 (__fastcall **)(__int64, __int64))(a1 + 48))(8LL * (unsigned int)v27, v24);
  if ( v28 )
  {
    if ( (((_DWORD)v27 - 1) & (unsigned int)v27) != 0 )
    {
      do
      {
        ++v25;
        LODWORD(v27) = (unsigned int)v27 >> 1;
      }
      while ( (_DWORD)v27 );
      v27 = (unsigned int)(1 << v25);
    }
    if ( (unsigned int)v27 > 0x4000000 )
      v27 = 0x4000000LL;
    v29 = (unsigned int)v27;
    if ( v28 > &v28[8 * v27] )
      v29 = 0LL;
    if ( v29 )
      memset64(v28, a1 | 1, v29);
    v30 = 0;
    v31 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
    if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v32 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          v33 = *(_QWORD **)(v32 + 8LL * v30);
          if ( ((unsigned __int8)v33 & 1) != 0 )
            break;
          *(_QWORD *)(v32 + 8LL * v30) = *v33;
          v41 = v31 & v33[1];
          v34 = (37
               * (BYTE6(v41)
                + 37
                * (BYTE5(v41)
                 + 37
                 * (BYTE4(v41)
                  + 37 * (BYTE3(v41) + 37 * (BYTE2(v41) + 37 * (BYTE1(v41) + 37 * ((unsigned __int8)v41 + 11623883)))))))
               + HIBYTE(v41)) & (unsigned int)(v27 - 1);
          *v33 = *(_QWORD *)&v28[8 * v34];
          *(_QWORD *)&v28[8 * v34] = v33;
        }
        ++v30;
      }
      while ( v30 < *(_DWORD *)(a1 + 4) >> 5 );
      v23 = v43;
    }
    *(_DWORD *)(a1 + 4) &= 0x1Fu;
    v35 = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 4) |= 32 * v27;
    *(_QWORD *)(a1 + 8) = v28;
    if ( v35 )
      v23(v35, v24);
    goto LABEL_75;
  }
  if ( *(_DWORD *)(a1 + 4) >= 0x20u )
  {
LABEL_75:
    v16 = v20;
    v36 = *(_DWORD *)(a1 + 4);
    v42 = *(_QWORD *)(v20 + 8) & (-1LL << (v36 & 0x1F));
    v37 = *(_QWORD *)(a1 + 8);
    v38 = (37
         * (BYTE6(v42)
          + 37
          * (BYTE5(v42)
           + 37
           * (BYTE4(v42)
            + 37 * (BYTE3(v42) + 37 * (BYTE2(v42) + 37 * (BYTE1(v42) + 37 * ((unsigned __int8)v42 + 11623883)))))))
         + HIBYTE(v42)) & ((v36 >> 5) - 1);
    *(_QWORD *)v20 = *(_QWORD *)(v37 + 8 * v38);
    *(_QWORD *)(v37 + 8 * v38) = v20;
    v20 = 0LL;
    ++*(_DWORD *)a1;
    goto LABEL_76;
  }
  v16 = 0LL;
LABEL_76:
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  if ( v20 )
    (*(void (__fastcall **)(__int64, _QWORD))(a1 + 56))(v20, *(_QWORD *)(a1 + 64));
  return v16;
}
