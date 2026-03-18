/*
 * XREFs of RtlInternTableIntern @ 0x140458D2C
 * Callers:
 *     PopEtAppIdIntern @ 0x140458C00 (PopEtAppIdIntern.c)
 *     PopEtStringIntern @ 0x140459884 (PopEtStringIntern.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     RtlpInternEntryFind @ 0x1404590CC (RtlpInternEntryFind.c)
 *     RtlpInternEntryHash @ 0x140459210 (RtlpInternEntryHash.c)
 *     RtlpInternEntryCreate @ 0x140459618 (RtlpInternEntryCreate.c)
 *     RtlpInternHashBucketsFree @ 0x140459A0C (RtlpInternHashBucketsFree.c)
 *     RtlpInternHashBucketsAllocate @ 0x140459A34 (RtlpInternHashBucketsAllocate.c)
 */

__int64 __fastcall RtlInternTableIntern(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rdx
  void (__fastcall *v9)(__int64, __int64); // rax
  __int64 v11; // rdi
  _QWORD *v12; // r15
  unsigned int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // rdx
  void (__fastcall *v16)(__int64, _QWORD *, __int64); // rax
  char v17; // di
  unsigned __int64 v18; // rax
  __int64 v19; // rsi
  char *v20; // r8
  unsigned __int64 v21; // rcx
  unsigned int v22; // edi
  __int64 v23; // r10
  __int64 v24; // r12
  _QWORD *v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // esi
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // [rsp+50h] [rbp+30h] BYREF

  *(_DWORD *)(a2 + 24) = 0;
  v4 = RtlpInternEntryHash(a2, &v31);
  LOBYTE(v5) = 1;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 16) + 16LL))(a1, v5);
  v6 = v31;
  v7 = RtlpInternEntryFind(a1, a2, v4, v31);
  LOBYTE(v8) = 1;
  v9 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 16) + 24LL);
  if ( v7 )
  {
    v9(a1, v8);
    goto LABEL_3;
  }
  v11 = *(_QWORD *)(a1 + 24);
  v9(a1, v8);
  v12 = (_QWORD *)RtlpInternEntryCreate(a1, a2, v4, v6);
  if ( !v12 )
  {
    v7 = 0LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 16) + 16LL))(a1, 0LL);
  if ( v11 == *(_QWORD *)(a1 + 24) || (v7 = RtlpInternEntryFind(a1, a2, v4, v6)) == 0 )
  {
    if ( *(_DWORD *)a1 >= (unsigned int)(2 * (*(_DWORD *)(a1 + 4) >> 5)) )
    {
      v17 = -1;
      v18 = 2 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5);
      if ( v18 <= 0xFFFFFFFF )
      {
        v19 = (unsigned int)v18;
        if ( (unsigned int)v18 < 4 )
          v19 = 4LL;
        v20 = (char *)RtlpInternHashBucketsAllocate(8LL * (unsigned int)v19, a1);
        if ( v20 )
        {
          if ( (((_DWORD)v19 - 1) & (unsigned int)v19) != 0 )
          {
            do
            {
              ++v17;
              LODWORD(v19) = (unsigned int)v19 >> 1;
            }
            while ( (_DWORD)v19 );
            v19 = (unsigned int)(1 << v17);
          }
          if ( (unsigned int)v19 > 0x4000000 )
            v19 = 0x4000000LL;
          v21 = (unsigned int)v19;
          if ( v20 > &v20[8 * v19] )
            v21 = 0LL;
          if ( v21 )
            memset64(v20, a1 | 1, v21);
          v22 = 0;
          v23 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
          if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
          {
            do
            {
              v24 = *(_QWORD *)(a1 + 8);
              while ( 1 )
              {
                v25 = *(_QWORD **)(v24 + 8LL * v22);
                if ( ((unsigned __int8)v25 & 1) != 0 )
                  break;
                *(_QWORD *)(v24 + 8LL * v22) = *v25;
                v31 = v23 & v25[1];
                v26 = (37
                     * (BYTE6(v31)
                      + 37
                      * (BYTE5(v31)
                       + 37
                       * (BYTE4(v31)
                        + 37
                        * (BYTE3(v31) + 37 * (BYTE2(v31) + 37 * (BYTE1(v31) + 37 * ((unsigned __int8)v31 + 11623883)))))))
                     + HIBYTE(v31)) & (unsigned int)(v19 - 1);
                *v25 = *(_QWORD *)&v20[8 * v26];
                *(_QWORD *)&v20[8 * v26] = v25;
              }
              ++v22;
            }
            while ( v22 < *(_DWORD *)(a1 + 4) >> 5 );
          }
          v27 = *(_QWORD *)(a1 + 8);
          v28 = *(_DWORD *)(a1 + 4) & 0x1F | (32 * v19);
          *(_QWORD *)(a1 + 8) = v20;
          *(_DWORD *)(a1 + 4) = v28;
          if ( v27 )
            RtlpInternHashBucketsFree(v27, a1);
        }
        else if ( *(_DWORD *)(a1 + 4) < 0x20u )
        {
          v7 = 0LL;
          goto LABEL_11;
        }
      }
    }
    v13 = *(_DWORD *)(a1 + 4);
    v31 = v12[1] & (-1LL << (v13 & 0x1F));
    v14 = *(_QWORD *)(a1 + 8);
    v15 = (37
         * (BYTE6(v31)
          + 37
          * (BYTE5(v31)
           + 37
           * (BYTE4(v31)
            + 37 * (BYTE3(v31) + 37 * (BYTE2(v31) + 37 * (BYTE1(v31) + 37 * ((unsigned __int8)v31 + 11623883)))))))
         + HIBYTE(v31)) & ((v13 >> 5) - 1);
    *v12 = *(_QWORD *)(v14 + 8 * v15);
    *(_QWORD *)(v14 + 8 * v15) = v12;
    ++*(_DWORD *)a1;
    ++*(_QWORD *)(a1 + 24);
    *(_DWORD *)(a2 + 24) |= 2u;
    v16 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)(a1 + 16) + 32LL);
    if ( v16 )
      v16(a1, v12, a2);
    v7 = (__int64)v12;
    v12 = 0LL;
  }
LABEL_11:
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 16) + 24LL))(a1, 0LL);
  if ( v12 )
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(a1 + 16) + 8LL))(a1, v12);
LABEL_3:
  if ( (*(_DWORD *)(a2 + 24) & 3) == 1 )
  {
    v29 = 0LL;
    if ( *(_QWORD *)(a2 + 16) )
    {
      v30 = 0LL;
      do
      {
        v30 += 32LL;
        ++v29;
        *(_QWORD *)(*(_QWORD *)(a2 + 8) + v30 - 24) = 0LL;
      }
      while ( v29 < *(_QWORD *)(a2 + 16) );
    }
    *(_DWORD *)(a2 + 24) &= ~1u;
  }
  return v7;
}
