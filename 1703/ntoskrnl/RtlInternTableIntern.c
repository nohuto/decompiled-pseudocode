/*
 * XREFs of RtlInternTableIntern @ 0x1406EF324
 * Callers:
 *     PopEtAppIdIntern @ 0x1406D0D60 (PopEtAppIdIntern.c)
 *     PopEtStringIntern @ 0x1406D33A8 (PopEtStringIntern.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     RtlpInternEntryCreate @ 0x1406EF6D8 (RtlpInternEntryCreate.c)
 *     RtlpInternEntryFind @ 0x1406EF828 (RtlpInternEntryFind.c)
 *     RtlpInternEntryHash @ 0x1406EF974 (RtlpInternEntryHash.c)
 *     RtlpInternHashBucketsAllocate @ 0x1406EFBC4 (RtlpInternHashBucketsAllocate.c)
 *     RtlpInternHashBucketsFree @ 0x1406EFBE0 (RtlpInternHashBucketsFree.c)
 */

__int64 __fastcall RtlInternTableIntern(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rdx
  void (__fastcall *v9)(__int64, __int64); // rax
  __int64 v10; // rdi
  _QWORD *v11; // r15
  char v12; // di
  unsigned __int64 v13; // rsi
  char *v14; // r8
  unsigned __int64 v15; // rcx
  unsigned int v16; // edi
  __int64 v17; // r10
  __int64 v18; // r12
  _QWORD *v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  unsigned int v23; // edi
  __int64 v24; // rcx
  __int64 v25; // rdx
  void (__fastcall *v26)(__int64, _QWORD *, __int64); // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v30; // [rsp+50h] [rbp+30h] BYREF

  *(_DWORD *)(a2 + 24) = 0;
  v4 = RtlpInternEntryHash(a2, &v30);
  LOBYTE(v5) = 1;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 16) + 16LL))(a1, v5);
  v6 = v30;
  v7 = RtlpInternEntryFind(a1, a2, v4, v30);
  LOBYTE(v8) = 1;
  v9 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 16) + 24LL);
  if ( v7 )
  {
    v9(a1, v8);
    goto LABEL_33;
  }
  v10 = *(_QWORD *)(a1 + 24);
  v9(a1, v8);
  v11 = (_QWORD *)RtlpInternEntryCreate(a1, a2, v4, v6);
  if ( !v11 )
  {
    v7 = 0LL;
    goto LABEL_33;
  }
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 16) + 16LL))(a1, 0LL);
  if ( v10 == *(_QWORD *)(a1 + 24) || (v7 = RtlpInternEntryFind(a1, a2, v4, v6)) == 0 )
  {
    if ( *(_DWORD *)a1 < (unsigned int)(2 * (*(_DWORD *)(a1 + 4) >> 5)) )
      goto LABEL_28;
    v12 = -1;
    v13 = 2 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5);
    if ( v13 > 0xFFFFFFFF )
      goto LABEL_28;
    if ( (unsigned int)v13 < 4 )
      v13 = 4LL;
    v14 = (char *)RtlpInternHashBucketsAllocate(8LL * (unsigned int)v13, a1);
    if ( v14 )
    {
      if ( (((_DWORD)v13 - 1) & (unsigned int)v13) != 0 )
      {
        do
        {
          ++v12;
          LODWORD(v13) = (unsigned int)v13 >> 1;
        }
        while ( (_DWORD)v13 );
        v13 = (unsigned int)(1 << v12);
      }
      if ( (unsigned int)v13 > 0x4000000 )
        v13 = 0x4000000LL;
      v15 = (8 * v13 + 7) >> 3;
      if ( v14 > &v14[8 * v13] )
        v15 = 0LL;
      if ( v15 )
        memset64(v14, a1 | 1, v15);
      v16 = 0;
      v17 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
      if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v18 = *(_QWORD *)(a1 + 8);
          while ( 1 )
          {
            v19 = *(_QWORD **)(v18 + 8LL * v16);
            if ( ((unsigned __int8)v19 & 1) != 0 )
              break;
            *(_QWORD *)(v18 + 8LL * v16) = *v19;
            v30 = v17 & v19[1];
            v20 = (37
                 * (BYTE6(v30)
                  + 37
                  * (BYTE5(v30)
                   + 37
                   * (BYTE4(v30)
                    + 37 * (BYTE3(v30) + 37 * (BYTE2(v30) + 37 * (BYTE1(v30) + 37 * ((unsigned __int8)v30 + 11623883)))))))
                 + HIBYTE(v30)) & (unsigned int)(v13 - 1);
            *v19 = *(_QWORD *)&v14[8 * v20];
            *(_QWORD *)&v14[8 * v20] = v19;
          }
          ++v16;
        }
        while ( v16 < *(_DWORD *)(a1 + 4) >> 5 );
      }
      v21 = *(_QWORD *)(a1 + 8);
      v22 = (32 * v13) | *(_DWORD *)(a1 + 4) & 0x1F;
      *(_QWORD *)(a1 + 8) = v14;
      *(_DWORD *)(a1 + 4) = v22;
      if ( v21 )
        RtlpInternHashBucketsFree(v21, a1);
      goto LABEL_28;
    }
    if ( *(_DWORD *)(a1 + 4) >= 0x20u )
    {
LABEL_28:
      v23 = *(_DWORD *)(a1 + 4);
      v30 = v11[1] & (-1LL << (v23 & 0x1F));
      v24 = *(_QWORD *)(a1 + 8);
      v25 = (37
           * (BYTE6(v30)
            + 37
            * (BYTE5(v30)
             + 37
             * (BYTE4(v30)
              + 37 * (BYTE3(v30) + 37 * (BYTE2(v30) + 37 * (BYTE1(v30) + 37 * ((unsigned __int8)v30 + 11623883)))))))
           + HIBYTE(v30)) & ((v23 >> 5) - 1);
      *v11 = *(_QWORD *)(v24 + 8 * v25);
      *(_QWORD *)(v24 + 8 * v25) = v11;
      ++*(_DWORD *)a1;
      ++*(_QWORD *)(a1 + 24);
      *(_DWORD *)(a2 + 24) |= 2u;
      v26 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)(a1 + 16) + 32LL);
      if ( v26 )
        v26(a1, v11, a2);
      v7 = (__int64)v11;
      v11 = 0LL;
      goto LABEL_31;
    }
    v7 = 0LL;
  }
LABEL_31:
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 16) + 24LL))(a1, 0LL);
  if ( v11 )
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(a1 + 16) + 8LL))(a1, v11);
LABEL_33:
  if ( (*(_DWORD *)(a2 + 24) & 3) == 1 )
  {
    v27 = 0LL;
    if ( *(_QWORD *)(a2 + 16) )
    {
      v28 = 0LL;
      do
      {
        v28 += 32LL;
        ++v27;
        *(_QWORD *)(*(_QWORD *)(a2 + 8) + v28 - 24) = 0LL;
      }
      while ( v27 < *(_QWORD *)(a2 + 16) );
    }
    *(_DWORD *)(a2 + 24) &= ~1u;
  }
  return v7;
}
