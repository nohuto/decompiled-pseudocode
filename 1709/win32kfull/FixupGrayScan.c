/*
 * XREFs of FixupGrayScan @ 0x1C00077C0
 * Callers:
 *     GetFixupScan @ 0x1C007A57C (GetFixupScan.c)
 *     RepDIB_CY @ 0x1C007A620 (RepDIB_CY.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

void *__fastcall FixupGrayScan(__int64 a1, void *a2)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  unsigned int v4; // ecx
  void *v5; // rsi
  __m128i v6; // xmm0
  int v7; // edi
  __m128i v8; // xmm1
  __int64 v9; // r13
  void *v10; // rcx
  unsigned int v11; // r9d
  unsigned int v12; // edx
  unsigned __int64 v13; // r10
  int v14; // r12d
  unsigned __int8 *v15; // r8
  int v16; // edi
  __int64 v17; // rsi
  __int64 v18; // r15
  int v19; // r10d
  unsigned __int8 *v20; // r13
  unsigned int v21; // ebx
  int v22; // r14d
  unsigned int v23; // ecx
  unsigned int v24; // eax
  void *result; // rax
  unsigned int v26; // edx
  int v27; // [rsp+20h] [rbp-69h]
  unsigned int v28; // [rsp+24h] [rbp-65h]
  int v29; // [rsp+28h] [rbp-61h]
  int v30; // [rsp+2Ch] [rbp-5Dh]
  unsigned int v31; // [rsp+30h] [rbp-59h]
  int v32; // [rsp+34h] [rbp-55h]
  unsigned int v33; // [rsp+38h] [rbp-51h]
  int v34; // [rsp+3Ch] [rbp-4Dh]
  unsigned int v35; // [rsp+40h] [rbp-49h]
  _BYTE v36[48]; // [rsp+48h] [rbp-41h]
  size_t Size; // [rsp+78h] [rbp-11h]
  __m128i v38; // [rsp+80h] [rbp-9h]
  __int64 v39; // [rsp+90h] [rbp+7h]
  __int64 v40; // [rsp+98h] [rbp+Fh]
  unsigned int v43; // [rsp+100h] [rbp+77h]
  int v44; // [rsp+108h] [rbp+7Fh]

  v2 = *(unsigned int *)(a1 + 56);
  v3 = a1;
  v4 = *(_DWORD *)(a1 + 56);
  v5 = a2;
  v35 = v4;
  v38 = *(__m128i *)(v3 + 496);
  *(_OWORD *)v36 = *(_OWORD *)(v3 + 480);
  v6 = *(__m128i *)(v3 + 512);
  *(__m128i *)&v36[16] = v38;
  Size = *(_QWORD *)(v3 + 528);
  v7 = HIDWORD(Size);
  *(__m128i *)&v36[32] = v6;
  if ( (*(_DWORD *)v3 & 0x20) != 0 )
  {
    v13 = v6.m128i_i64[0];
    *(_DWORD *)v3 &= ~0x20u;
    v7 = HIDWORD(Size) + 1;
  }
  else
  {
    v34 = HIDWORD(*(_QWORD *)(v3 + 528));
    if ( SHIDWORD(Size) <= 1 )
    {
      v13 = _mm_srli_si128(v6, 8).m128i_u64[0];
    }
    else
    {
      v8 = *(__m128i *)&v36[24];
      v9 = *(_QWORD *)v36;
      v10 = *(void **)v36;
      *(_OWORD *)v36 = *(_OWORD *)&v36[8];
      *(_QWORD *)&v36[32] = v6.m128i_i64[1];
      v38 = v8;
      *(_QWORD *)&v36[40] = v10;
      memmove(v10, *(const void **)&v36[24], (unsigned int)Size);
      v6.m128i_i64[0] = _mm_srli_si128(v8, 8).m128i_u64[0];
      if ( *(int *)(v3 + 60) <= 0 )
      {
        memmove((void *)v6.m128i_i64[0], *(const void **)&v36[8], (unsigned int)Size);
      }
      else
      {
        (*(void (__fastcall **)(__int64, __int64))(v3 + 24))(v3 + 8, v6.m128i_i64[0] + 1);
        *(_BYTE *)v6.m128i_i64[0] = *(_BYTE *)(v6.m128i_i64[0] + 2);
        *(_BYTE *)(v2 + v6.m128i_i64[0] + 1) = *(_BYTE *)(v2 + v6.m128i_i64[0] - 1);
      }
      v11 = *(unsigned __int8 *)(*(_QWORD *)&v36[8] + 1LL);
      v12 = (unsigned __int8)**(_BYTE **)&v36[8];
      v13 = v6.m128i_u64[1];
      v43 = v11;
      v14 = v2 - 1;
      if ( v14 )
      {
        v15 = (unsigned __int8 *)(*(_QWORD *)&v36[24] + 3LL);
        v16 = (unsigned __int8)**(_BYTE **)&v36[24];
        v17 = v6.m128i_i64[0] - *(_QWORD *)&v36[24];
        v40 = *(_QWORD *)v36 - *(_QWORD *)&v36[24];
        v18 = *(_QWORD *)&v36[8] - *(_QWORD *)&v36[24];
        v19 = *(unsigned __int8 *)(*(_QWORD *)&v36[24] + 2LL);
        v20 = (unsigned __int8 *)(v9 + 1);
        v21 = *(unsigned __int8 *)(*(_QWORD *)&v36[8] + 2LL);
        v22 = *(unsigned __int8 *)(*(_QWORD *)&v36[24] + 1LL);
        v39 = v6.m128i_i64[1] - *(_QWORD *)&v36[24];
        do
        {
          v23 = v21;
          v24 = v11;
          v28 = v12;
          v27 = v16;
          v12 = v11;
          v31 = v43;
          v11 = v21;
          v21 = v15[v18];
          v16 = v22;
          v22 = v19;
          v19 = *v15;
          v43 = v11;
          v33 = v12;
          if ( v24 != v23 && !(v12 ^ v22 | v16 ^ v23) )
          {
            if ( v12 ^ v21 | v16 ^ v19 | v11 ^ v28 | v22 ^ v27
              && (v29 = v15[v40 - 2],
                  v30 = v15[v40 - 1],
                  v44 = v15[v17 - 2],
                  v32 = v15[v17 - 1],
                  v12 ^ v44 | v16 ^ v29 | v11 ^ v32 | v22 ^ v30) )
            {
              if ( v31 < v11 )
              {
                v15[v39 - 1] = (v12 + v22 + v28 + v32 + 12 * v15[v39 - 1] + 8) >> 4;
                *v20 = (v12 + v22 + v19 + v29 + 12 * *v20 + 8) >> 4;
              }
              else
              {
                v15[v39 - 2] = (v16 + v11 + v21 + v44 + 12 * v15[v39 - 2] + 8) >> 4;
                v20[1] = (v16 + v11 + v27 + v30 + 12 * v20[1] + 8) >> 4;
              }
            }
            else
            {
              v26 = (v15[v18 - 2] + (unsigned int)v15[v18 - 1] + 1) >> 1;
              v20[1] = v26;
              *v20 = v26;
              v15[v39 - 1] = v26;
              v15[v39 - 2] = v26;
              v12 = v33;
            }
          }
          ++v15;
          ++v20;
          --v14;
        }
        while ( v14 );
        v3 = a1;
        v7 = v34;
        v13 = v6.m128i_u64[1];
      }
      v5 = a2;
      v4 = v35;
    }
  }
  if ( v5 )
    memmove(v5, (const void *)(v13 + 1), v4);
  result = v5;
  HIDWORD(Size) = v7 - 1;
  *(_OWORD *)(v3 + 480) = *(_OWORD *)v36;
  *(__m128i *)(v3 + 496) = v38;
  *(_OWORD *)(v3 + 512) = *(_OWORD *)&v36[32];
  *(_QWORD *)(v3 + 528) = Size;
  return result;
}
