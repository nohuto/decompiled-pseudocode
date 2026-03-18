/*
 * XREFs of RtlInternTableIntern @ 0x140559B0C
 * Callers:
 *     PopEtStringIntern @ 0x140559704 (PopEtStringIntern.c)
 *     PopEtAppIdIntern @ 0x1405599E0 (PopEtAppIdIntern.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     RtlpInternEntryFind @ 0x140559F1C (RtlpInternEntryFind.c)
 *     RtlpInternEntryHash @ 0x14055A068 (RtlpInternEntryHash.c)
 *     RtlpInternEntryCreate @ 0x14055A478 (RtlpInternEntryCreate.c)
 *     RtlpInternHashBucketsAllocate @ 0x140653D9C (RtlpInternHashBucketsAllocate.c)
 *     RtlpInternHashBucketsFree @ 0x140654740 (RtlpInternHashBucketsFree.c)
 */

__int64 __fastcall RtlInternTableIntern(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rdx
  void (__fastcall *v9)(__int64, __int64); // rax
  int v10; // ecx
  __int64 v12; // rdi
  _QWORD *v13; // r14
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r15
  unsigned int v16; // edi
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  void (__fastcall *v19)(__int64, _QWORD *, __int64); // rax
  char v20; // di
  unsigned __int64 v21; // rax
  __int64 v22; // rsi
  char *v23; // r8
  unsigned __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // r10
  __int64 v27; // r13
  _QWORD *v28; // r11
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // [rsp+50h] [rbp+8h] BYREF

  *(_DWORD *)(a2 + 24) = 0;
  v4 = RtlpInternEntryHash(a2, &v33);
  LOBYTE(v5) = 1;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 16) + 16LL))(a1, v5);
  v6 = v33;
  v7 = RtlpInternEntryFind(a1, a2, v4, v33);
  LOBYTE(v8) = 1;
  v9 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 16) + 24LL);
  if ( v7 )
  {
    v9(a1, v8);
    goto LABEL_3;
  }
  v12 = *(_QWORD *)(a1 + 24);
  v9(a1, v8);
  v13 = (_QWORD *)RtlpInternEntryCreate(a1, a2, v4, v6);
  if ( !v13 )
  {
    v7 = 0LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 16) + 16LL))(a1, 0LL);
  if ( v12 == *(_QWORD *)(a1 + 24) || (v7 = RtlpInternEntryFind(a1, a2, v4, v6)) == 0 )
  {
    v14 = *(unsigned int *)(a1 + 4);
    if ( *(_DWORD *)a1 >= (unsigned int)(2 * (*(_DWORD *)(a1 + 4) >> 5)) )
    {
      v20 = -1;
      v21 = 2 * (v14 >> 5);
      if ( v21 <= 0xFFFFFFFF )
      {
        v22 = (unsigned int)v21;
        if ( (unsigned int)v21 < 4 )
          v22 = 4LL;
        v23 = (char *)RtlpInternHashBucketsAllocate(8LL * (unsigned int)v22, a1);
        if ( v23 )
        {
          if ( (((_DWORD)v22 - 1) & (unsigned int)v22) != 0 )
          {
            do
            {
              ++v20;
              LODWORD(v22) = (unsigned int)v22 >> 1;
            }
            while ( (_DWORD)v22 );
            v22 = (unsigned int)(1 << v20);
          }
          if ( (unsigned int)v22 > 0x4000000 )
            v22 = 0x4000000LL;
          v24 = (unsigned int)v22;
          if ( v23 > &v23[8 * v22] )
            v24 = 0LL;
          if ( v24 )
            memset64(v23, a1 | 1, v24);
          v25 = 0LL;
          v26 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
          if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
          {
            do
            {
              v27 = *(_QWORD *)(a1 + 8);
              while ( 1 )
              {
                v28 = *(_QWORD **)(v27 + 8LL * (unsigned int)v25);
                if ( ((unsigned __int8)v28 & 1) != 0 )
                  break;
                *(_QWORD *)(v27 + 8LL * (unsigned int)v25) = *v28;
                v29 = ((((unsigned __int64)v26 & v28[1]) >> 56)
                     + 37
                     * ((unsigned __int8)(((unsigned __int64)v26 & v28[1]) >> 48)
                      + 37
                      * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v26 & v28[1]) >> 32) >> 8)
                       + 37
                       * ((unsigned __int8)(((unsigned __int64)v26 & v28[1]) >> 32)
                        + 37
                        * ((((unsigned int)v26 & (_DWORD)v28[1]) >> 24)
                         + 37
                         * ((unsigned __int8)(((unsigned int)v26 & (_DWORD)v28[1]) >> 16)
                          + 37
                          * (37 * ((unsigned __int8)(v26 & v28[1]) + 11623883)
                           + (unsigned __int8)((unsigned __int16)(v26 & v28[1]) >> 8)))))))) & (unsigned int)(v22 - 1);
                *v28 = *(_QWORD *)&v23[8 * v29];
                *(_QWORD *)&v23[8 * v29] = v28;
              }
              v25 = (unsigned int)(v25 + 1);
            }
            while ( (unsigned int)v25 < *(_DWORD *)(a1 + 4) >> 5 );
          }
          v30 = *(_QWORD *)(a1 + 8);
          LODWORD(v14) = (32 * v22) | *(_DWORD *)(a1 + 4) & 0x1F;
          *(_QWORD *)(a1 + 8) = v23;
          *(_DWORD *)(a1 + 4) = v14;
          if ( v30 )
          {
            RtlpInternHashBucketsFree(v30, a1, v23, v25);
            LODWORD(v14) = *(_DWORD *)(a1 + 4);
          }
        }
        else
        {
          LODWORD(v14) = *(_DWORD *)(a1 + 4);
          if ( (unsigned int)v14 < 0x20 )
          {
            v7 = 0LL;
            goto LABEL_11;
          }
        }
      }
    }
    v15 = v13[1] & (-1LL << (v14 & 0x1F));
    v16 = (unsigned int)v14 >> 5;
    v17 = *(_QWORD *)(a1 + 8);
    v18 = (HIBYTE(v15)
         + 37
         * (BYTE6(v15)
          + 37
          * (BYTE5(v15)
           + 37
           * (BYTE4(v15)
            + 37 * (BYTE3(v15) + 37 * (BYTE2(v15) + 37 * (37 * ((unsigned __int8)v15 + 11623883) + BYTE1(v15)))))))) & (v16 - 1);
    *v13 = *(_QWORD *)(v17 + 8 * v18);
    *(_QWORD *)(v17 + 8 * v18) = v13;
    ++*(_DWORD *)a1;
    ++*(_QWORD *)(a1 + 24);
    *(_DWORD *)(a2 + 24) |= 2u;
    v19 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)(a1 + 16) + 32LL);
    if ( v19 )
      v19(a1, v13, a2);
    v7 = (__int64)v13;
    v13 = 0LL;
  }
LABEL_11:
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 16) + 24LL))(a1, 0LL);
  if ( v13 )
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(a1 + 16) + 8LL))(a1, v13);
LABEL_3:
  v10 = *(_DWORD *)(a2 + 24);
  if ( (v10 & 3) == 1 )
  {
    v31 = 0LL;
    if ( *(_QWORD *)(a2 + 16) )
    {
      v32 = 0LL;
      do
      {
        v32 += 32LL;
        ++v31;
        *(_QWORD *)(v32 + *(_QWORD *)(a2 + 8) - 24) = 0LL;
      }
      while ( v31 < *(_QWORD *)(a2 + 16) );
      v10 = *(_DWORD *)(a2 + 24);
    }
    *(_DWORD *)(a2 + 24) = v10 & 0xFFFFFFFE;
  }
  return v7;
}
