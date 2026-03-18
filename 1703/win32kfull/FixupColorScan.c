/*
 * XREFs of FixupColorScan @ 0x1C012F938
 * Callers:
 *     GetFixupScan @ 0x1C00A2E5C (GetFixupScan.c)
 *     RepDIB_CY @ 0x1C00A2F00 (RepDIB_CY.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

void *__fastcall FixupColorScan(__m128i *a1, void *a2)
{
  int v2; // eax
  void *v3; // rdi
  unsigned int v4; // edx
  __m128i *v5; // r14
  __int64 v6; // r15
  __m128i v7; // xmm0
  int v8; // ebx
  __m128i v9; // xmm1
  void *v10; // rcx
  __int64 v11; // rcx
  int v12; // esi
  int v13; // edi
  int v14; // r9d
  unsigned __int64 v15; // rcx
  _DWORD *v16; // r15
  _BYTE *v17; // r11
  int v18; // r14d
  __int64 v19; // r13
  __int64 v20; // r12
  __int64 v21; // r10
  int v22; // ebx
  int v23; // edx
  bool v24; // zf
  void *result; // rax
  int v26; // r8d
  int v27; // r10d
  int v28; // r8d
  int v29; // r8d
  int v30; // r11d
  int v31; // edi
  int v32; // esi
  int v33; // ebx
  int v34; // r8d
  int v35; // eax
  unsigned int v36; // ecx
  unsigned int v37; // edx
  unsigned int v38; // edx
  int v39; // [rsp+20h] [rbp-89h]
  int v40; // [rsp+24h] [rbp-85h]
  int v41; // [rsp+28h] [rbp-81h]
  int v42; // [rsp+2Ch] [rbp-7Dh]
  unsigned int v43; // [rsp+30h] [rbp-79h]
  int v44; // [rsp+34h] [rbp-75h]
  int v45; // [rsp+3Ch] [rbp-6Dh]
  __int64 v46; // [rsp+40h] [rbp-69h]
  __int64 v47; // [rsp+40h] [rbp-69h]
  int v48; // [rsp+48h] [rbp-61h]
  int v49; // [rsp+4Ch] [rbp-5Dh]
  int v50; // [rsp+50h] [rbp-59h]
  _BYTE *v51; // [rsp+58h] [rbp-51h]
  unsigned int v52; // [rsp+60h] [rbp-49h]
  int v53; // [rsp+64h] [rbp-45h]
  int v54; // [rsp+68h] [rbp-41h]
  unsigned int v55; // [rsp+6Ch] [rbp-3Dh]
  _BYTE v56[48]; // [rsp+70h] [rbp-39h]
  size_t Size; // [rsp+A0h] [rbp-9h]
  __m128i v58; // [rsp+A8h] [rbp-1h]
  __int64 v59; // [rsp+B8h] [rbp+Fh]
  int v62; // [rsp+120h] [rbp+77h]
  int v63; // [rsp+128h] [rbp+7Fh]

  v2 = a1->m128i_i32[0];
  v3 = a2;
  v4 = a1[4].m128i_u32[0];
  v5 = a1;
  v6 = a1[3].m128i_u32[2];
  v55 = v4;
  v58 = a1[31];
  *(__m128i *)v56 = a1[30];
  v7 = a1[32];
  *(__m128i *)&v56[16] = v58;
  Size = a1[33].m128i_u64[0];
  v8 = HIDWORD(Size);
  *(__m128i *)&v56[32] = v7;
  if ( (a1->m128i_i32[0] & 0x20) != 0 )
  {
    v15 = v7.m128i_i64[0];
    v5->m128i_i32[0] = v2 & 0xFFFFFFDF;
    v8 = HIDWORD(Size) + 1;
  }
  else
  {
    v54 = HIDWORD(a1[33].m128i_i64[0]);
    if ( SHIDWORD(Size) <= 1 )
    {
      v15 = _mm_srli_si128(v7, 8).m128i_u64[0];
    }
    else
    {
      v9 = *(__m128i *)&v56[24];
      v10 = *(void **)v56;
      v46 = *(_QWORD *)v56;
      *(_OWORD *)v56 = *(_OWORD *)&v56[8];
      *(_QWORD *)&v56[32] = v7.m128i_i64[1];
      v58 = v9;
      *(_QWORD *)&v56[40] = v46;
      memmove(v10, *(const void **)&v56[24], (unsigned int)Size);
      v7.m128i_i64[0] = _mm_srli_si128(v9, 8).m128i_u64[0];
      if ( v5[3].m128i_i32[3] <= 0 )
      {
        memmove((void *)v7.m128i_i64[0], *(const void **)&v56[8], (unsigned int)Size);
      }
      else
      {
        ((void (__fastcall *)(__int64 *, __int64))v5[1].m128i_i64[1])(&v5->m128i_i64[1], v7.m128i_i64[0] + 3);
        *(_WORD *)v7.m128i_i64[0] = *(_WORD *)(v7.m128i_i64[0] + 6);
        v11 = v7.m128i_i64[0] + 2 * v6;
        *(_BYTE *)(v7.m128i_i64[0] + 2) = *(_BYTE *)(v7.m128i_i64[0] + 8);
        *(_WORD *)(v6 + v11 + 3) = *(_WORD *)(v6 + v11 - 3);
        *(_BYTE *)(v6 + v11 + 5) = *(_BYTE *)(v6 + v11 - 1);
      }
      v12 = **(_DWORD **)&v56[8] & 0xFFFFFF;
      v13 = **(_DWORD **)&v56[24] & 0xFFFFFF;
      v14 = *(_DWORD *)(*(_QWORD *)&v56[8] + 6LL) & 0xFFFFFF;
      v62 = *(_DWORD *)(*(_QWORD *)&v56[24] + 6LL) & 0xFFFFFF;
      v50 = v6 - 1;
      v15 = v7.m128i_u64[1];
      v43 = *(unsigned __int8 *)(*(_QWORD *)&v56[8] + 3LL)
          + 4 * (*(unsigned __int8 *)(*(_QWORD *)&v56[8] + 5LL) + 2 * *(unsigned __int8 *)(*(_QWORD *)&v56[8] + 4LL));
      if ( (_DWORD)v6 != 1 )
      {
        v16 = (_DWORD *)(*(_QWORD *)&v56[24] + 9LL);
        v17 = (_BYTE *)(v46 + 5);
        v18 = *(_DWORD *)(*(_QWORD *)&v56[8] + 3LL) & 0xFFFFFF;
        v19 = v7.m128i_i64[0] - *(_QWORD *)&v56[24];
        v51 = (_BYTE *)(v46 + 5);
        v20 = *(_QWORD *)&v56[8] - *(_QWORD *)&v56[24];
        v59 = *(_QWORD *)v56 - *(_QWORD *)&v56[24];
        v21 = v7.m128i_i64[1] - *(_QWORD *)&v56[24];
        v22 = *(_DWORD *)(*(_QWORD *)&v56[24] + 3LL) & 0xFFFFFF;
        v47 = v7.m128i_i64[1] - *(_QWORD *)&v56[24];
        do
        {
          v40 = v12;
          v23 = v18;
          v44 = v13;
          v45 = v18;
          v12 = v18;
          v41 = v22;
          v18 = v14;
          v13 = v22;
          v22 = v62;
          v62 = *v16 & 0xFFFFFF;
          v14 = *(_DWORD *)((char *)v16 + v20) & 0xFFFFFF;
          v52 = v43;
          v53 = *((unsigned __int8 *)v16 + v20 - 1);
          v42 = v22;
          v43 = *((unsigned __int8 *)v16 + v20 - 3) + 4 * (v53 + 2 * *((unsigned __int8 *)v16 + v20 - 2));
          if ( v23 != v18 && !(v12 ^ v22 | v13 ^ v18) )
          {
            v49 = *(_DWORD *)((char *)v16 + v59 - 6) & 0xFFFFFF;
            v63 = *(_DWORD *)((char *)v16 + v19 - 6) & 0xFFFFFF;
            v48 = *(_DWORD *)((char *)v16 + v59 - 3) & 0xFFFFFF;
            v39 = *(_DWORD *)((char *)v16 + v19 - 3) & 0xFFFFFF;
            if ( v12 ^ v14 | v13 ^ v62 | v18 ^ v40 | v22 ^ v44
              && v12 ^ v63 | v13 ^ *(_DWORD *)((char *)v16 + v59 - 6) & 0xFFFFFF | v18 ^ v39 | v22 ^ *(_DWORD *)((char *)v16 + v59 - 3) & 0xFFFFFF )
            {
              if ( v52 < v43 )
              {
                v29 = *(_DWORD *)((char *)v16 + v21 - 3) & 0xFFFFFF;
                v30 = (unsigned __int8)v12;
                v31 = (unsigned __int8)v22;
                v32 = v22 & 0xFF00;
                *((_BYTE *)v16 + v21 - 3) = (v30
                                           + *((unsigned __int8 *)v16 + v19 - 3)
                                           + 12 * *((unsigned __int8 *)v16 + v21 - 3)
                                           + (unsigned __int8)v40
                                           + (unsigned int)(unsigned __int8)v22
                                           + 8) >> 4;
                *((_BYTE *)v16 + v47 - 2) = ((v45 & 0xFF00)
                                           + (v39 & 0xFF00)
                                           + 12 * (v29 & 0xFF00)
                                           + (v40 & 0xFF00u)
                                           + v32
                                           + 2048) >> 12;
                v33 = v22 & 0xFF0000;
                *((_BYTE *)v16 + v47 - 1) = ((v45 & 0xFF0000)
                                           + (v39 & 0xFF0000)
                                           + 12 * (v29 & 0xFF0000)
                                           + (v40 & 0xFF0000)
                                           + v33
                                           + 0x80000) >> 20;
                v34 = *(_DWORD *)(v51 - 2) & 0xFFFFFF;
                v35 = v30 + (unsigned __int8)v49;
                v17 = v51;
                *(v51 - 2) = (v35 + 12 * (unsigned __int8)*(v51 - 2) + (unsigned int)(unsigned __int8)v62 + v31 + 8) >> 4;
                *(v51 - 1) = ((v45 & 0xFF00) + (v49 & 0xFF00) + 12 * (v34 & 0xFF00) + (v62 & 0xFF00u) + v32 + 2048) >> 12;
                *v51 = ((v45 & 0xFF0000) + (v49 & 0xFF0000) + 12 * (v34 & 0xFF0000) + (v62 & 0xFF0000) + v33 + 0x80000) >> 20;
              }
              else
              {
                v26 = *(_DWORD *)((char *)v16 + v21 - 6) & 0xFFFFFF;
                *((_BYTE *)v16 + v21 - 6) = ((unsigned __int8)v18
                                           + (unsigned __int8)v14
                                           + 8
                                           + (unsigned __int8)v41
                                           + *((unsigned __int8 *)v16 + v19 - 6)
                                           + 12 * (unsigned int)*((unsigned __int8 *)v16 + v21 - 6)) >> 4;
                v27 = v41 & 0xFF00;
                *((_BYTE *)v16 + v47 - 5) = ((v18 & 0xFF00)
                                           + (v14 & 0xFF00)
                                           + 2048
                                           + v27
                                           + (v63 & 0xFF00)
                                           + 12 * (v26 & 0xFF00u)) >> 12;
                *((_BYTE *)v16 + v47 - 4) = ((v18 & 0xFF0000)
                                           + (v14 & 0xFF0000)
                                           + 0x80000
                                           + (v41 & 0xFF0000)
                                           + (v63 & 0xFF0000)
                                           + 12 * (v26 & 0xFF0000)) >> 20;
                v28 = *(_DWORD *)(v51 + 1) & 0xFFFFFF;
                v17 = v51;
                v51[1] = ((unsigned __int8)v18
                        + (unsigned __int8)v44
                        + 8
                        + (unsigned __int8)v41
                        + (unsigned __int8)v48
                        + 12 * (unsigned int)(unsigned __int8)v51[1]) >> 4;
                v51[2] = ((v18 & 0xFF00) + (v44 & 0xFF00) + 2048 + v27 + (v48 & 0xFF00) + 12 * (v28 & 0xFF00u)) >> 12;
                v51[3] = ((v18 & 0xFF0000)
                        + (v44 & 0xFF0000)
                        + 0x80000
                        + (v41 & 0xFF0000)
                        + (v48 & 0xFF0000)
                        + 12 * (v28 & 0xFF0000)) >> 20;
              }
              v21 = v7.m128i_i64[1] - *(_QWORD *)&v56[24];
              v12 = v45;
              v13 = v41;
              v22 = v42;
            }
            else
            {
              v36 = ((unsigned int)*((unsigned __int8 *)v16 + v20 - 4) + v53 + 1) >> 1;
              v17[3] = v36;
              *v17 = v36;
              *((_BYTE *)v16 + v21 - 1) = v36;
              *((_BYTE *)v16 + v21 - 4) = v36;
              v37 = (*((unsigned __int8 *)v16 + v20 - 5) + 1 + (unsigned int)*((unsigned __int8 *)v16 + v20 - 2)) >> 1;
              v17[2] = v37;
              *(v17 - 1) = v37;
              *((_BYTE *)v16 + v21 - 2) = v37;
              *((_BYTE *)v16 + v21 - 5) = v37;
              v38 = (*((unsigned __int8 *)v16 + v20 - 6) + (unsigned int)*((unsigned __int8 *)v16 + v20 - 3) + 1) >> 1;
              v17[1] = v38;
              *(v17 - 2) = v38;
              *((_BYTE *)v16 + v21 - 3) = v38;
              *((_BYTE *)v16 + v21 - 6) = v38;
            }
          }
          v17 += 3;
          v16 = (_DWORD *)((char *)v16 + 3);
          v24 = v50-- == 1;
          v51 = v17;
        }
        while ( !v24 );
        v5 = a1;
        v15 = v7.m128i_u64[1];
      }
      v8 = v54;
      v3 = a2;
      v4 = v55;
    }
  }
  if ( v3 )
    memmove(v3, (const void *)(v15 + 3), v4);
  result = v3;
  HIDWORD(Size) = v8 - 1;
  v5[30] = *(__m128i *)v56;
  v5[31] = v58;
  v5[32] = *(__m128i *)&v56[32];
  v5[33].m128i_i64[0] = Size;
  return result;
}
