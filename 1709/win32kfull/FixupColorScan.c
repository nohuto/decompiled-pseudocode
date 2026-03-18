/*
 * XREFs of FixupColorScan @ 0x1C013311C
 * Callers:
 *     GetFixupScan @ 0x1C007A57C (GetFixupScan.c)
 *     RepDIB_CY @ 0x1C007A620 (RepDIB_CY.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
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
  int v12; // edi
  int v13; // r11d
  int v14; // esi
  unsigned __int64 v15; // rcx
  _DWORD *v16; // r15
  _BYTE *v17; // r10
  int v18; // r14d
  __int64 v19; // r12
  __int64 v20; // r13
  __int64 v21; // r9
  int v22; // ebx
  int v23; // edx
  bool v24; // zf
  void *result; // rax
  int v26; // r8d
  int v27; // r8d
  int v28; // r8d
  int v29; // r10d
  int v30; // esi
  int v31; // r11d
  int v32; // edi
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
  int v45; // [rsp+38h] [rbp-71h]
  int v46; // [rsp+3Ch] [rbp-6Dh]
  _BYTE *v47; // [rsp+40h] [rbp-69h]
  __int64 v48; // [rsp+48h] [rbp-61h]
  __int64 v49; // [rsp+48h] [rbp-61h]
  int v50; // [rsp+50h] [rbp-59h]
  int v51; // [rsp+54h] [rbp-55h]
  int v52; // [rsp+58h] [rbp-51h]
  unsigned int v53; // [rsp+5Ch] [rbp-4Dh]
  int v54; // [rsp+60h] [rbp-49h]
  int v55; // [rsp+64h] [rbp-45h]
  unsigned int v56; // [rsp+68h] [rbp-41h]
  _BYTE v57[48]; // [rsp+70h] [rbp-39h]
  size_t Size; // [rsp+A0h] [rbp-9h]
  __m128i v59; // [rsp+A8h] [rbp-1h]
  __int64 v60; // [rsp+B8h] [rbp+Fh]
  int v63; // [rsp+120h] [rbp+77h]
  int v64; // [rsp+128h] [rbp+7Fh]

  v2 = a1->m128i_i32[0];
  v3 = a2;
  v4 = a1[4].m128i_u32[0];
  v5 = a1;
  v6 = a1[3].m128i_u32[2];
  v56 = v4;
  v59 = a1[31];
  *(__m128i *)v57 = a1[30];
  v7 = a1[32];
  *(__m128i *)&v57[16] = v59;
  Size = a1[33].m128i_u64[0];
  v8 = HIDWORD(Size);
  *(__m128i *)&v57[32] = v7;
  if ( (a1->m128i_i32[0] & 0x20) != 0 )
  {
    v15 = v7.m128i_i64[0];
    v5->m128i_i32[0] = v2 & 0xFFFFFFDF;
    v8 = HIDWORD(Size) + 1;
  }
  else
  {
    v55 = HIDWORD(a1[33].m128i_i64[0]);
    if ( SHIDWORD(Size) <= 1 )
    {
      v15 = _mm_srli_si128(v7, 8).m128i_u64[0];
    }
    else
    {
      v9 = *(__m128i *)&v57[24];
      v10 = *(void **)v57;
      v48 = *(_QWORD *)v57;
      *(_OWORD *)v57 = *(_OWORD *)&v57[8];
      *(_QWORD *)&v57[32] = v7.m128i_i64[1];
      v59 = v9;
      *(_QWORD *)&v57[40] = v48;
      memmove(v10, *(const void **)&v57[24], (unsigned int)Size);
      v7.m128i_i64[0] = _mm_srli_si128(v9, 8).m128i_u64[0];
      if ( v5[3].m128i_i32[3] <= 0 )
      {
        memmove((void *)v7.m128i_i64[0], *(const void **)&v57[8], (unsigned int)Size);
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
      v12 = **(_DWORD **)&v57[8] & 0xFFFFFF;
      v13 = **(_DWORD **)&v57[24] & 0xFFFFFF;
      v14 = *(_DWORD *)(*(_QWORD *)&v57[8] + 6LL) & 0xFFFFFF;
      v63 = *(_DWORD *)(*(_QWORD *)&v57[24] + 6LL) & 0xFFFFFF;
      v52 = v6 - 1;
      v15 = v7.m128i_u64[1];
      v43 = *(unsigned __int8 *)(*(_QWORD *)&v57[8] + 3LL)
          + 4 * (*(unsigned __int8 *)(*(_QWORD *)&v57[8] + 5LL) + 2 * *(unsigned __int8 *)(*(_QWORD *)&v57[8] + 4LL));
      if ( (_DWORD)v6 != 1 )
      {
        v16 = (_DWORD *)(*(_QWORD *)&v57[24] + 9LL);
        v17 = (_BYTE *)(v48 + 5);
        v18 = *(_DWORD *)(*(_QWORD *)&v57[8] + 3LL) & 0xFFFFFF;
        v19 = *(_QWORD *)&v57[8] - *(_QWORD *)&v57[24];
        v47 = (_BYTE *)(v48 + 5);
        v20 = v7.m128i_i64[0] - *(_QWORD *)&v57[24];
        v60 = *(_QWORD *)v57 - *(_QWORD *)&v57[24];
        v21 = v7.m128i_i64[1] - *(_QWORD *)&v57[24];
        v22 = *(_DWORD *)(*(_QWORD *)&v57[24] + 3LL) & 0xFFFFFF;
        v49 = v7.m128i_i64[1] - *(_QWORD *)&v57[24];
        do
        {
          v39 = v12;
          v23 = v18;
          v45 = v13;
          v46 = v18;
          v12 = v18;
          v41 = v22;
          v18 = v14;
          v13 = v22;
          v22 = v63;
          v63 = *v16 & 0xFFFFFF;
          v14 = *(_DWORD *)((char *)v16 + v19) & 0xFFFFFF;
          v53 = v43;
          v54 = *((unsigned __int8 *)v16 + v19 - 1);
          v42 = v22;
          v40 = v14;
          v43 = *((unsigned __int8 *)v16 + v19 - 3) + 4 * (v54 + 2 * *((unsigned __int8 *)v16 + v19 - 2));
          if ( v23 != v18 && !(v12 ^ v22 | v13 ^ v18) )
          {
            v51 = *(_DWORD *)((char *)v16 + v60 - 6) & 0xFFFFFF;
            v44 = *(_DWORD *)((char *)v16 + v20 - 6) & 0xFFFFFF;
            v50 = *(_DWORD *)((char *)v16 + v60 - 3) & 0xFFFFFF;
            v64 = *(_DWORD *)((char *)v16 + v20 - 3) & 0xFFFFFF;
            if ( v12 ^ v14 | v13 ^ v63 | v18 ^ v39 | v22 ^ v45
              && v12 ^ v44 | v13 ^ *(_DWORD *)((char *)v16 + v60 - 6) & 0xFFFFFF | v18 ^ v64 | v22 ^ *(_DWORD *)((char *)v16 + v60 - 3) & 0xFFFFFF )
            {
              if ( v53 < v43 )
              {
                v28 = *(_DWORD *)((char *)v16 + v21 - 3);
                v29 = (unsigned __int8)v12;
                v30 = (unsigned __int8)v22;
                v31 = v22 & 0xFF00;
                *((_BYTE *)v16 + v21 - 3) = ((unsigned __int8)v12
                                           + *((unsigned __int8 *)v16 + v20 - 3)
                                           + 12 * (unsigned __int8)v28
                                           + (unsigned __int8)v39
                                           + (unsigned int)(unsigned __int8)v22
                                           + 8) >> 4;
                v32 = v12 & 0xFF00;
                *((_BYTE *)v16 + v21 - 2) = (v32 + (v39 & 0xFF00) + 2048 + v31 + (v64 & 0xFF00) + 12 * (v28 & 0xFF00u)) >> 12;
                v33 = v22 & 0xFF0000;
                *((_BYTE *)v16 + v49 - 1) = ((v46 & 0xFF0000)
                                           + (v64 & 0xFF0000)
                                           + 12 * (v28 & 0xFF0000)
                                           + (v39 & 0xFF0000)
                                           + v33
                                           + 0x80000) >> 20;
                v34 = *(_DWORD *)(v47 - 2);
                v35 = v29 + (unsigned __int8)v51;
                v17 = v47;
                *(v47 - 2) = (v35 + 12 * (unsigned __int8)v34 + (unsigned int)(unsigned __int8)v63 + v30 + 8) >> 4;
                *(v47 - 1) = (v32 + (v63 & 0xFF00) + 2048 + v31 + (v51 & 0xFF00) + 12 * (v34 & 0xFF00u)) >> 12;
                *v47 = ((v46 & 0xFF0000) + (v51 & 0xFF0000) + 12 * (v34 & 0xFF0000) + (v63 & 0xFF0000) + v33 + 0x80000) >> 20;
              }
              else
              {
                v26 = *(_DWORD *)((char *)v16 + v21 - 6);
                *((_BYTE *)v16 + v21 - 6) = ((unsigned __int8)v18
                                           + (unsigned __int8)v14
                                           + 8
                                           + (unsigned __int8)v13
                                           + *((unsigned __int8 *)v16 + v20 - 6)
                                           + 12 * (unsigned int)(unsigned __int8)v26) >> 4;
                *((_BYTE *)v16 + v21 - 5) = ((v18 & 0xFF00)
                                           + (v14 & 0xFF00)
                                           + 2048
                                           + (v41 & 0xFF00)
                                           + (v44 & 0xFF00)
                                           + 12 * (v26 & 0xFF00u)) >> 12;
                *((_BYTE *)v16 + v49 - 4) = ((v18 & 0xFF0000)
                                           + (v14 & 0xFF0000)
                                           + 0x80000
                                           + (v41 & 0xFF0000)
                                           + (v44 & 0xFF0000)
                                           + 12 * (v26 & 0xFF0000)) >> 20;
                v27 = *(_DWORD *)(v47 + 1);
                v47[1] = ((unsigned __int8)v13
                        + (unsigned __int8)v50
                        + 12 * (unsigned __int8)v27
                        + (unsigned __int8)v45
                        + (unsigned int)(unsigned __int8)v18
                        + 8) >> 4;
                v17 = v47;
                v47[2] = ((v18 & 0xFF00) + (v45 & 0xFF00)
                                         + 2048
                                         + (v41 & 0xFF00)
                                         + (v50 & 0xFF00)
                                         + 12 * (v27 & 0xFF00u)) >> 12;
                v47[3] = ((v18 & 0xFF0000)
                        + (v45 & 0xFF0000)
                        + 0x80000
                        + (v41 & 0xFF0000)
                        + (v50 & 0xFF0000)
                        + 12 * (v27 & 0xFF0000)) >> 20;
              }
              v21 = v7.m128i_i64[1] - *(_QWORD *)&v57[24];
              v14 = v40;
              v12 = v46;
              v13 = v41;
              v22 = v42;
            }
            else
            {
              v36 = ((unsigned int)*((unsigned __int8 *)v16 + v19 - 4) + v54 + 1) >> 1;
              v17[3] = v36;
              *v17 = v36;
              *((_BYTE *)v16 + v21 - 1) = v36;
              *((_BYTE *)v16 + v21 - 4) = v36;
              v37 = (*((unsigned __int8 *)v16 + v19 - 5) + 1 + (unsigned int)*((unsigned __int8 *)v16 + v19 - 2)) >> 1;
              v17[2] = v37;
              *(v17 - 1) = v37;
              *((_BYTE *)v16 + v21 - 2) = v37;
              *((_BYTE *)v16 + v21 - 5) = v37;
              v38 = (*((unsigned __int8 *)v16 + v19 - 6) + (unsigned int)*((unsigned __int8 *)v16 + v19 - 3) + 1) >> 1;
              v17[1] = v38;
              *(v17 - 2) = v38;
              *((_BYTE *)v16 + v21 - 3) = v38;
              *((_BYTE *)v16 + v21 - 6) = v38;
            }
          }
          v17 += 3;
          v16 = (_DWORD *)((char *)v16 + 3);
          v24 = v52-- == 1;
          v47 = v17;
        }
        while ( !v24 );
        v5 = a1;
        v15 = v7.m128i_u64[1];
      }
      v8 = v55;
      v3 = a2;
      v4 = v56;
    }
  }
  if ( v3 )
    memmove(v3, (const void *)(v15 + 3), v4);
  result = v3;
  HIDWORD(Size) = v8 - 1;
  v5[30] = *(__m128i *)v57;
  v5[31] = v59;
  v5[32] = *(__m128i *)&v57[32];
  v5[33].m128i_i64[0] = Size;
  return result;
}
