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

__int64 __fastcall RtlpStackDbSegmentFindOrCreate(__int64 a1, __int64 a2)
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
  __int64 v12; // r9
  int v13; // r8d
  __int64 v14; // r14
  unsigned __int64 v15; // rdx
  unsigned __int64 *v16; // r8
  __int64 v17; // r9
  __int64 v18; // r9
  int v19; // r8d
  void (__fastcall *v20)(_QWORD, _QWORD); // r15
  __int64 v21; // r13
  char v22; // di
  unsigned __int64 v23; // rax
  __int64 v24; // rbx
  char *v25; // rax
  unsigned __int64 v26; // rcx
  unsigned int v27; // edi
  __int64 v28; // r10
  __int64 v29; // r15
  _QWORD *v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // edi
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v37; // [rsp+60h] [rbp+40h]
  __int64 v38; // [rsp+60h] [rbp+40h]
  __int64 v39; // [rsp+60h] [rbp+40h]
  void (__fastcall *v40)(_QWORD, _QWORD); // [rsp+68h] [rbp+48h]

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
    v11 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
    v12 = v11 & v7;
    if ( v10 )
      goto LABEL_24;
    v13 = *(_DWORD *)(a1 + 4) >> 5;
    if ( !v13 )
      break;
    v37 = v11 & v7;
    v10 = *(_QWORD *)(a1 + 8)
        + 8LL
        * ((37
          * (BYTE6(v37)
           + 37
           * (BYTE5(v37)
            + 37
            * (BYTE4(v37)
             + 37 * (BYTE3(v37) + 37 * (BYTE2(v37) + 37 * (BYTE1(v37) + 37 * ((unsigned __int8)v12 + 11623883)))))))
          + HIBYTE(v37)) & (unsigned int)(v13 - 1));
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
    if ( RtlpStackDbSegmentComparitor(v10, v3) )
      goto LABEL_32;
  }
  v10 = 0LL;
LABEL_32:
  if ( v10 )
  {
    if ( !(unsigned int)RtlpStackDbRefCountIncrement((volatile signed __int32 *)(v10 + 16)) )
      v10 = 0LL;
    RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 40));
    return v10;
  }
LABEL_36:
  RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 40));
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 48))(8 * *v3 + 24, *(_QWORD *)(a1 + 64));
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
  RtlAcquireSRWLockExclusive(a1 + 40, v15, v16, v17);
  v10 = 0LL;
  while ( 1 )
  {
    v18 = v7 & (-1LL << (*(_BYTE *)(a1 + 4) & 0x1F));
    if ( v10 )
      goto LABEL_42;
    v19 = *(_DWORD *)(a1 + 4) >> 5;
    if ( !v19 )
      break;
    v10 = *(_QWORD *)(a1 + 8)
        + 8LL
        * ((37
          * (BYTE6(v18)
           + 37
           * (BYTE5(v18)
            + 37
            * (BYTE4(v18)
             + 37 * (BYTE3(v18) + 37 * (BYTE2(v18) + 37 * (BYTE1(v18) + 37 * ((unsigned __int8)v18 + 11623883)))))))
          + HIBYTE(v18)) & (unsigned int)(v19 - 1));
LABEL_42:
    while ( 1 )
    {
      v10 = *(_QWORD *)v10;
      if ( (v10 & 1) != 0 )
        break;
      if ( v18 == ((-1LL << (*(_BYTE *)(a1 + 4) & 0x1F)) & *(_QWORD *)(v10 + 8)) )
        goto LABEL_46;
    }
    v10 = 0LL;
LABEL_46:
    if ( !v10 )
      goto LABEL_53;
    if ( RtlpStackDbSegmentComparitor(v10, v3) )
      goto LABEL_50;
  }
  v10 = 0LL;
LABEL_50:
  if ( v10 )
  {
    if ( !(unsigned int)RtlpStackDbRefCountIncrement((volatile signed __int32 *)(v10 + 16)) )
      v10 = 0LL;
    goto LABEL_76;
  }
LABEL_53:
  v20 = *(void (__fastcall **)(_QWORD, _QWORD))(a1 + 56);
  v21 = *(_QWORD *)(a1 + 64);
  v40 = v20;
  if ( *(_DWORD *)a1 < (unsigned int)(2 * (*(_DWORD *)(a1 + 4) >> 5)) )
    goto LABEL_75;
  v22 = -1;
  v23 = 2 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5);
  if ( v23 > 0xFFFFFFFF )
    goto LABEL_75;
  v24 = (unsigned int)v23;
  if ( (unsigned int)v23 < 4 )
    v24 = 4LL;
  v25 = (char *)(*(__int64 (__fastcall **)(__int64, __int64))(a1 + 48))(8LL * (unsigned int)v24, v21);
  if ( v25 )
  {
    if ( (((_DWORD)v24 - 1) & (unsigned int)v24) != 0 )
    {
      do
      {
        ++v22;
        LODWORD(v24) = (unsigned int)v24 >> 1;
      }
      while ( (_DWORD)v24 );
      v24 = (unsigned int)(1 << v22);
    }
    if ( (unsigned int)v24 > 0x4000000 )
      v24 = 0x4000000LL;
    v26 = (unsigned int)v24;
    if ( v25 > &v25[8 * v24] )
      v26 = 0LL;
    if ( v26 )
      memset64(v25, a1 | 1, v26);
    v27 = 0;
    v28 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
    if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v29 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          v30 = *(_QWORD **)(v29 + 8LL * v27);
          if ( ((unsigned __int8)v30 & 1) != 0 )
            break;
          *(_QWORD *)(v29 + 8LL * v27) = *v30;
          v38 = v28 & v30[1];
          v31 = (37
               * (BYTE6(v38)
                + 37
                * (BYTE5(v38)
                 + 37
                 * (BYTE4(v38)
                  + 37 * (BYTE3(v38) + 37 * (BYTE2(v38) + 37 * (BYTE1(v38) + 37 * ((unsigned __int8)v38 + 11623883)))))))
               + HIBYTE(v38)) & (unsigned int)(v24 - 1);
          *v30 = *(_QWORD *)&v25[8 * v31];
          *(_QWORD *)&v25[8 * v31] = v30;
        }
        ++v27;
      }
      while ( v27 < *(_DWORD *)(a1 + 4) >> 5 );
      v20 = v40;
    }
    *(_DWORD *)(a1 + 4) &= 0x1Fu;
    v32 = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 4) |= 32 * v24;
    *(_QWORD *)(a1 + 8) = v25;
    if ( v32 )
      v20(v32, v21);
    goto LABEL_75;
  }
  if ( *(_DWORD *)(a1 + 4) >= 0x20u )
  {
LABEL_75:
    v10 = v14;
    v33 = *(_DWORD *)(a1 + 4);
    v39 = *(_QWORD *)(v14 + 8) & (-1LL << (v33 & 0x1F));
    v34 = *(_QWORD *)(a1 + 8);
    v35 = (37
         * (BYTE6(v39)
          + 37
          * (BYTE5(v39)
           + 37
           * (BYTE4(v39)
            + 37 * (BYTE3(v39) + 37 * (BYTE2(v39) + 37 * (BYTE1(v39) + 37 * ((unsigned __int8)v39 + 11623883)))))))
         + HIBYTE(v39)) & ((v33 >> 5) - 1);
    *(_QWORD *)v14 = *(_QWORD *)(v34 + 8 * v35);
    *(_QWORD *)(v34 + 8 * v35) = v14;
    v14 = 0LL;
    ++*(_DWORD *)a1;
    goto LABEL_76;
  }
  v10 = 0LL;
LABEL_76:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 40));
  if ( v14 )
    (*(void (__fastcall **)(__int64, _QWORD))(a1 + 56))(v14, *(_QWORD *)(a1 + 64));
  return v10;
}
