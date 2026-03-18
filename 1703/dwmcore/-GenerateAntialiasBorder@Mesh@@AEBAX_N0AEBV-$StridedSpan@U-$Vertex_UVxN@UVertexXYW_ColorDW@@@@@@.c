/*
 * XREFs of ?GenerateAntialiasBorder@Mesh@@AEBAX_N0AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@UVertexAAFixup_UVxN@@@@HPEAHPEAGH3@Z @ 0x18003B754
 * Callers:
 *     ?GenerateGeometry@Mesh@@QEAAJ_N0AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@UVertexAAFixup_UVxN@@@@HPEAHGPEAG3@Z @ 0x18003D250 (-GenerateGeometry@Mesh@@QEAAJ_N0AEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV-$S.c)
 * Callees:
 *     ?GenerateGridAntialiasBorder@Mesh@@AEBAX_N0AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@UVertexAAFixup_UVxN@@@@HPEAHPEAGH3@Z @ 0x18003B030 (-GenerateGridAntialiasBorder@Mesh@@AEBAX_N0AEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXYW_ColorDW@@.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     sqrtf_0 @ 0x1800D53C0 (sqrtf_0.c)
 */

signed int *__fastcall Mesh::GenerateAntialiasBorder(
        __int64 a1,
        char a2,
        char a3,
        __int64 *a4,
        __int64 a5,
        int a6,
        int *a7,
        __int64 a8,
        int a9,
        signed int *a10)
{
  __int64 *v10; // r11
  char v11; // r10
  int v13; // r13d
  signed int v14; // esi
  char v15; // al
  signed int *result; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  int v19; // esi
  char v20; // dl
  float v21; // xmm13_4
  float v22; // xmm14_4
  int **v23; // rax
  int **v24; // rcx
  int **v25; // r13
  __int64 v26; // r14
  bool v27; // zf
  _QWORD *v28; // r15
  int v29; // edx
  __m128 v30; // xmm6
  __m128 v31; // xmm7
  __m128 v32; // xmm10
  __m128 v33; // xmm11
  int v34; // ecx
  _DWORD *v35; // r9
  int v36; // r8d
  float *v37; // rbx
  int v38; // r8d
  int v39; // edx
  float v40; // xmm9_4
  float v41; // xmm8_4
  int v42; // eax
  __m128 v43; // xmm1
  float v44; // xmm2_4
  float v45; // xmm9_4
  __m128 v46; // xmm1
  __m128 v47; // xmm0
  __m128 v48; // xmm0
  __m128 v49; // xmm1
  __m128 v50; // xmm0
  __m128 v51; // xmm1
  __int64 v52; // r8
  _DWORD *v53; // r9
  int v54; // edi
  __int64 v55; // r11
  __int16 v56; // r13
  int v57; // ebx
  __int16 *v58; // r10
  int v59; // r14d
  __int16 **v60; // rcx
  __int16 v61; // r9
  __int16 v62; // cx
  __int64 v63; // rax
  int v64; // esi
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  int v70; // [rsp+48h] [rbp-C0h]
  int v71; // [rsp+58h] [rbp-B0h] BYREF
  signed int v72; // [rsp+5Ch] [rbp-ACh]
  __int64 v73; // [rsp+60h] [rbp-A8h]
  void *Src; // [rsp+68h] [rbp-A0h]
  _DWORD *v75; // [rsp+70h] [rbp-98h]
  int **v76; // [rsp+78h] [rbp-90h]
  int **v77; // [rsp+80h] [rbp-88h]
  int v78; // [rsp+178h] [rbp+70h]
  float *v79; // [rsp+178h] [rbp+70h]

  v10 = a4;
  v11 = a2;
  v13 = *a7;
  v78 = *a7;
  a9 = *a7;
  v14 = *a10;
  v15 = *(_BYTE *)(a1 + 236) & 0x30;
  v72 = v14;
  v71 = v14;
  if ( v15 == 32 )
  {
    Mesh::GenerateGridAntialiasBorder(a1, a2, a3, a4, a5, a6, &a9, a8, v70, (unsigned int *)&v71);
    v13 = a9;
    v14 = v71;
    goto LABEL_3;
  }
  v17 = *(_QWORD *)(a1 + 176);
  v71 = 0;
  LODWORD(v73) = v13;
  v18 = *(_QWORD *)(v17 + 64);
  if ( v18 )
  {
    v19 = v78;
    do
    {
      if ( (*(_BYTE *)(v18 + 28) & 0xC) != 0 )
      {
        v20 = 0;
        v27 = (*(_BYTE *)(v18 + 28) & 2) == 0;
        Src = *(void **)(v18 + 16);
        v21 = *(float *)&Src;
        v22 = *((float *)&Src + 1);
        LOBYTE(a9) = 0;
        if ( v27 )
        {
          v23 = *(int ***)(v18 + 48);
          v24 = *(int ***)(v18 + 56);
        }
        else
        {
          v23 = *(int ***)(v18 + 56);
          v20 = 1;
          v24 = *(int ***)(v18 + 48);
          LODWORD(v21) = (unsigned int)Src ^ _xmm;
          LOBYTE(a9) = 1;
          LODWORD(v22) = HIDWORD(Src) ^ _xmm;
        }
        v77 = v24;
        v25 = v23;
        v76 = v23;
        if ( v23 )
        {
          while ( 1 )
          {
            v26 = 0LL;
            if ( v25 == v23 )
              break;
            if ( v25 != v24 || (v26 = *(_QWORD *)(v18 + 80), (*(_BYTE *)(v26 + 28) & 0xC) != 0xC) )
            {
LABEL_20:
              v28 = 0LL;
              v29 = *((_DWORD *)v10 + 2);
              v30 = 0LL;
              v79 = 0LL;
              v31 = 0LL;
              v32 = 0LL;
              v33 = 0LL;
              v34 = **v25;
              v35 = (_DWORD *)(*v10 + v29 * v34);
              v75 = v35;
              v36 = *(_DWORD *)(a5 + 8);
              v37 = (float *)(*(_QWORD *)a5 + v34 * v36);
              Src = v37;
              if ( v11 && (*(_BYTE *)(v18 + 28) & 0xC) == 0xC )
              {
                ++v71;
                v38 = v19 * v36;
                v39 = v19 * v29;
                ++v19;
                v79 = (float *)(*(_QWORD *)a5 + v38);
                v28 = (_QWORD *)(*v10 + v39);
                memcpy_0(v28, v35, (unsigned int)(8 * a6 + 16));
                v37 = (float *)Src;
                memcpy_0(v79, Src, (unsigned int)(8 * a6 + 16));
                v35 = v75;
                v79[3] = 0.0;
                if ( *(_BYTE *)(a1 + 236) < 0x80u )
                  *((_DWORD *)v28 + 3) = 0;
                else
                  *((_BYTE *)v28 + 15) = 0;
              }
              v40 = v22 * 0.5;
              v41 = COERCE_FLOAT(LODWORD(v21) ^ _xmm) * 0.5;
              if ( v26 )
              {
                v42 = *(_DWORD *)(v26 + 28);
                Src = *(void **)(v26 + 16);
                v43 = (__m128)(unsigned int)Src;
                v44 = *((float *)&Src + 1);
                if ( (v42 & 2) != 0 )
                {
                  v43 = _mm_xor_ps((__m128)(unsigned int)Src, (__m128)(unsigned int)_xmm);
                  LODWORD(v44) = HIDWORD(Src) ^ _xmm;
                }
                v45 = (float)(v40 * v43.m128_f32[0]) + (float)(v41 * v44);
                v41 = v45 * v44;
                v40 = v45 * v43.m128_f32[0];
                if ( (v42 & 0xC) != 0 )
                {
                  v46 = _mm_xor_ps(v43, (__m128)(unsigned int)_xmm);
                  v46.m128_f32[0] = (float)((float)(v46.m128_f32[0] * v22) + (float)(v44 * v21)) * 0.5;
                  v47 = v46;
                  v46.m128_f32[0] = v46.m128_f32[0] * v22;
                  v47.m128_f32[0] = v47.m128_f32[0] * v21;
                  if ( (v42 & 4) != 0 )
                  {
                    v30 = 0LL;
                    v31 = 0LL;
                    v30.m128_f32[0] = 0.0 - v47.m128_f32[0];
                    v31.m128_f32[0] = 0.0 - v46.m128_f32[0];
                  }
                  else if ( (v42 & 8) != 0 )
                  {
                    v30 = v47;
                    v31 = v46;
                    v30.m128_f32[0] = v47.m128_f32[0] + 0.0;
                    v31.m128_f32[0] = v46.m128_f32[0] + 0.0;
                  }
                  if ( v28 )
                  {
                    if ( (v42 & 8) != 0 )
                    {
                      v32 = v47;
                      v33 = v46;
                      v32.m128_f32[0] = v47.m128_f32[0] + 0.0;
                      v33.m128_f32[0] = v46.m128_f32[0] + 0.0;
                    }
                    else if ( (v42 & 4) != 0 )
                    {
                      v32 = 0LL;
                      v33 = 0LL;
                      v32.m128_f32[0] = 0.0 - v47.m128_f32[0];
                      v33.m128_f32[0] = 0.0 - v46.m128_f32[0];
                    }
                  }
                }
              }
              if ( (*(_BYTE *)(v18 + 28) & 4) != 0 )
              {
                v30.m128_f32[0] = v30.m128_f32[0] - v40;
                v31.m128_f32[0] = v31.m128_f32[0] - v41;
              }
              else if ( (*(_BYTE *)(v18 + 28) & 8) != 0 )
              {
                v30.m128_f32[0] = v30.m128_f32[0] + v40;
                v31.m128_f32[0] = v31.m128_f32[0] + v41;
              }
              v48 = v30;
              v49 = v31;
              v48.m128_f32[0] = v30.m128_f32[0] + *v37;
              v49.m128_f32[0] = v31.m128_f32[0] + v37[1];
              v35[2] = 1065353216;
              *(_QWORD *)v35 = _mm_unpacklo_ps(v48, v49).m128_u64[0];
              v37[2] = sqrtf_0((float)(v31.m128_f32[0] * v31.m128_f32[0]) + (float)(v30.m128_f32[0] * v30.m128_f32[0]));
              if ( v28 )
              {
                v32.m128_f32[0] = v32.m128_f32[0] + v40;
                v33.m128_f32[0] = v33.m128_f32[0] + v41;
                v50 = v32;
                v50.m128_f32[0] = v32.m128_f32[0] + *v79;
                v51 = v33;
                v51.m128_f32[0] = v33.m128_f32[0] + v79[1];
                *((_DWORD *)v28 + 2) = 1065353216;
                *v28 = _mm_unpacklo_ps(v50, v51).m128_u64[0];
                v79[2] = sqrtf_0((float)(v33.m128_f32[0] * v33.m128_f32[0]) + (float)(v32.m128_f32[0] * v32.m128_f32[0]));
              }
              if ( !a3 )
              {
                v52 = 0LL;
                if ( *(_DWORD *)(a1 + 24) )
                {
                  v53 = v75;
                  do
                  {
                    if ( *(_BYTE *)(56LL * (unsigned int)v52 + *(_QWORD *)a1 + 52) )
                    {
                      *(float *)&v53[2 * v52 + 4] = v30.m128_f32[0] + v37[2 * v52 + 4];
                      *(float *)&v53[2 * v52 + 5] = v31.m128_f32[0] + v37[2 * v52 + 5];
                      if ( v28 )
                      {
                        *(float *)&v28[v52 + 2] = v32.m128_f32[0] + v79[2 * v52 + 4];
                        *((float *)&v28[v52 + 2] + 1) = v33.m128_f32[0] + v79[2 * v52 + 5];
                      }
                    }
                    v52 = (unsigned int)(v52 + 1);
                  }
                  while ( (unsigned int)v52 < *(_DWORD *)(a1 + 24) );
                }
              }
              v11 = a2;
              v20 = a9;
              v10 = a4;
              goto LABEL_52;
            }
            if ( v26 != *(_QWORD *)(*(_QWORD *)(a1 + 176) + 64LL) )
            {
              v27 = (*(_BYTE *)(v18 + 28) & 0xC) == 12;
LABEL_19:
              if ( v27 )
                goto LABEL_20;
            }
LABEL_52:
            if ( v20 )
              v25 = (int **)v25[7];
            else
              v25 = (int **)v25[8];
            v23 = v76;
            v24 = v77;
            if ( !v25 )
            {
              v78 = v19;
              goto LABEL_57;
            }
          }
          v26 = *(_QWORD *)(v18 + 72);
          if ( (*(_BYTE *)(v26 + 28) & 0xC) != 0xC )
            goto LABEL_20;
          if ( (*(_BYTE *)(v18 + 28) & 0xC) != 0xC )
            goto LABEL_52;
          v27 = v18 == *(_QWORD *)(*(_QWORD *)(a1 + 176) + 64LL);
          goto LABEL_19;
        }
      }
LABEL_57:
      v18 = *(_QWORD *)(v18 + 80);
    }
    while ( v18 != *(_QWORD *)(*(_QWORD *)(a1 + 176) + 64LL) && v18 );
    v14 = v72;
    v13 = v78;
  }
  if ( v11 )
  {
    v54 = 0;
    v55 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 64LL);
    if ( v55 )
    {
      v56 = v73;
      while ( 1 )
      {
        if ( (*(_BYTE *)(v55 + 28) & 0xC) == 0xC )
        {
          v57 = *(_DWORD *)(v55 + 28) & 2;
          v58 = v57 ? *(__int16 **)(v55 + 56) : *(__int16 **)(v55 + 48);
          if ( v58 )
            break;
        }
LABEL_80:
        v55 = *(_QWORD *)(v55 + 80);
        if ( v55 == *(_QWORD *)(*(_QWORD *)(a1 + 176) + 64LL) || !v55 )
        {
          v13 = v78;
          goto LABEL_3;
        }
      }
      v59 = v54 + 1;
      while ( 1 )
      {
        v60 = (__int16 **)(v57 ? *((_QWORD *)v58 + 7) : *((_QWORD *)v58 + 8));
        if ( v60 )
          break;
        if ( (*(_BYTE *)(*(_QWORD *)(v55 + 80) + 28LL) & 0xC) != 0xC )
          goto LABEL_75;
LABEL_76:
        if ( v57 )
          v58 = (__int16 *)*((_QWORD *)v58 + 7);
        else
          v58 = (__int16 *)*((_QWORD *)v58 + 8);
        if ( !v58 )
          goto LABEL_80;
      }
      v61 = **(_WORD **)v58;
      v62 = **v60;
      v63 = v14;
      v64 = v14 + 1;
      *(_WORD *)(a8 + 2 * v63) = v54 + v56;
      v65 = v64++;
      *(_WORD *)(a8 + 2 * v65) = v56 + v59 % v71;
      v66 = v64++;
      *(_WORD *)(a8 + 2 * v66) = v62;
      v67 = v64++;
      *(_WORD *)(a8 + 2 * v67) = v54 + v56;
      v68 = v64++;
      *(_WORD *)(a8 + 2 * v68) = v62;
      v69 = v64;
      v14 = v64 + 1;
      *(_WORD *)(a8 + 2 * v69) = v61;
LABEL_75:
      ++v54;
      ++v59;
      goto LABEL_76;
    }
  }
LABEL_3:
  *a7 = v13;
  result = a10;
  *a10 = v14;
  return result;
}
