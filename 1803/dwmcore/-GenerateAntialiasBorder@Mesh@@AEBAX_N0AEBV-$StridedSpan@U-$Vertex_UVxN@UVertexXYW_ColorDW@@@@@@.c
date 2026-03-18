/*
 * XREFs of ?GenerateAntialiasBorder@Mesh@@AEBAX_N0AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@UVertexAAFixup_UVxN@@@@HPEAHPEAGH3@Z @ 0x1800B06FC
 * Callers:
 *     ?GenerateGeometry@Mesh@@QEAAJ_N0AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@UVertexAAFixup_UVxN@@@@HPEAHGPEAG3@Z @ 0x1800B2340 (-GenerateGeometry@Mesh@@QEAAJ_N0AEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV-$S.c)
 * Callees:
 *     ?GenerateGridAntialiasBorder@Mesh@@AEBAX_N0AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@UVertexAAFixup_UVxN@@@@HPEAHPEAGH3@Z @ 0x1800AFBA0 (-GenerateGridAntialiasBorder@Mesh@@AEBAX_N0AEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXYW_ColorDW@@.c)
 *     sqrtf_0 @ 0x1800DD3E3 (sqrtf_0.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 */

_DWORD *__fastcall Mesh::GenerateAntialiasBorder(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        _DWORD *a7,
        __int64 a8,
        int a9,
        _DWORD *a10)
{
  _DWORD *v10; // r12
  char v11; // r11
  int v13; // r13d
  int v14; // edx
  char v15; // al
  _DWORD *result; // rax
  __int64 v17; // rbx
  __int64 v18; // rdi
  float v19; // xmm13_4
  char v20; // dl
  float v21; // xmm14_4
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r14
  __int64 v25; // rsi
  bool v26; // zf
  float *v27; // rbp
  int v28; // edx
  float *v29; // rbx
  __int64 v30; // r9
  float v31; // xmm6_4
  float v32; // xmm7_4
  float v33; // xmm10_4
  float v34; // xmm11_4
  float *v35; // r10
  int v36; // r8d
  float *v37; // r12
  int v38; // r8d
  int v39; // edx
  unsigned int v40; // ebx
  size_t v41; // r8
  float v42; // xmm9_4
  float v43; // xmm8_4
  int v44; // eax
  float v45; // xmm2_4
  float v46; // xmm3_4
  float v47; // xmm0_4
  int v48; // eax
  float v49; // xmm1_4
  float v50; // xmm0_4
  float v51; // xmm2_4
  int v52; // ecx
  float v53; // xmm0_4
  float v54; // xmm1_4
  float v55; // xmm1_4
  float v56; // xmm0_4
  __int64 i; // r8
  __int64 v58; // rbx
  int v59; // esi
  __int64 v60; // r14
  int v61; // edi
  __int16 *v62; // r11
  int v63; // ebp
  __int16 **v64; // rcx
  __int16 v65; // r10
  __int16 v66; // r8
  int v67; // ecx
  int v68; // [rsp+40h] [rbp-118h]
  __int16 v69; // [rsp+50h] [rbp-108h]
  float *v70; // [rsp+58h] [rbp-100h]
  __int64 v71; // [rsp+60h] [rbp-F8h]
  __int64 v72; // [rsp+68h] [rbp-F0h]
  float *v73; // [rsp+70h] [rbp-E8h]
  int v74; // [rsp+160h] [rbp+8h]
  int v76; // [rsp+170h] [rbp+18h] BYREF
  __int64 v77; // [rsp+178h] [rbp+20h]

  v77 = a4;
  LOBYTE(v76) = a3;
  v10 = a7;
  v11 = a2;
  v13 = *a7;
  v76 = *a7;
  v14 = *a10;
  v15 = *(_BYTE *)(a1 + 236) & 0x30;
  v74 = *a10;
  a9 = *a10;
  if ( v15 == 32 )
  {
    Mesh::GenerateGridAntialiasBorder(a1, v11, a3, (__int64 *)a4, a5, a6, &v76, a8, v68, (unsigned int *)&a9);
    v14 = a9;
    v13 = v76;
    goto LABEL_3;
  }
  v17 = *(_QWORD *)(a1 + 176);
  a9 = 0;
  v69 = v13;
  v18 = *(_QWORD *)(v17 + 64);
  if ( v18 )
  {
    do
    {
      if ( (*(_BYTE *)(v18 + 28) & 0xC) != 0 )
      {
        v19 = *(float *)(v18 + 16);
        v20 = 0;
        v26 = (*(_BYTE *)(v18 + 28) & 2) == 0;
        v21 = *(float *)(v18 + 20);
        LOBYTE(v76) = 0;
        if ( v26 )
        {
          v22 = *(_QWORD *)(v18 + 48);
          v23 = *(_QWORD *)(v18 + 56);
        }
        else
        {
          LODWORD(v19) ^= _xmm;
          v20 = 1;
          LODWORD(v21) ^= _xmm;
          v22 = *(_QWORD *)(v18 + 56);
          v23 = *(_QWORD *)(v18 + 48);
          LOBYTE(v76) = 1;
        }
        v72 = v23;
        v24 = v22;
        v71 = v22;
        if ( v22 )
        {
          while ( 1 )
          {
            v25 = 0LL;
            if ( v24 == v22 )
              break;
            if ( v24 != v23 || (v25 = *(_QWORD *)(v18 + 80), (*(_BYTE *)(v25 + 28) & 0xC) != 0xC) )
            {
LABEL_19:
              v27 = 0LL;
              v28 = *(_DWORD *)(a4 + 8);
              v29 = 0LL;
              v30 = *(_QWORD *)a4;
              v31 = 0.0;
              v32 = 0.0;
              v33 = 0.0;
              v34 = 0.0;
              v35 = (float *)(v30 + v28 * **(_DWORD **)v24);
              v70 = v35;
              v36 = *(_DWORD *)(a5 + 8);
              v37 = (float *)(*(_QWORD *)a5 + **(_DWORD **)v24 * v36);
              if ( v11 && (*(_BYTE *)(v18 + 28) & 0xC) == 0xC )
              {
                ++a9;
                v38 = v13 * v36;
                v39 = v13 * v28;
                ++v13;
                v73 = (float *)(*(_QWORD *)a5 + v38);
                v27 = (float *)(v30 + v39);
                v40 = 8 * a6 + 16;
                memcpy_0(v27, v35, v40);
                v41 = v40;
                v29 = v73;
                memcpy_0(v73, v37, v41);
                v73[3] = 0.0;
                v35 = v70;
                if ( *(char *)(a1 + 236) >= 0 )
                  v27[3] = 0.0;
                else
                  *((_BYTE *)v27 + 15) = 0;
              }
              v42 = v21 * 0.5;
              v43 = v19 * -0.5;
              if ( v25 )
              {
                v44 = *(_DWORD *)(v25 + 28);
                v45 = *(float *)(v25 + 16);
                v46 = *(float *)(v25 + 20);
                if ( (v44 & 2) != 0 )
                {
                  LODWORD(v45) ^= _xmm;
                  LODWORD(v46) ^= _xmm;
                }
                v47 = (float)(v43 * v46) + (float)(v42 * v45);
                v43 = v46 * v47;
                v42 = v45 * v47;
                if ( (v44 & 0xC) != 0 )
                {
                  v48 = *(_DWORD *)(v25 + 28) & 8;
                  v49 = (float)((float)(v19 * v46) - (float)(v21 * v45)) * 0.5;
                  v50 = v19 * v49;
                  v51 = v21 * v49;
                  v52 = *(_DWORD *)(v25 + 28) & 4;
                  if ( v52 )
                  {
                    v31 = 0.0 - v50;
                    v32 = 0.0 - v51;
                  }
                  else if ( v48 )
                  {
                    v31 = v50 + 0.0;
                    v32 = v51 + 0.0;
                  }
                  if ( v27 )
                  {
                    if ( v48 )
                    {
                      v33 = v50 + 0.0;
                      v34 = v51 + 0.0;
                    }
                    else if ( v52 )
                    {
                      v33 = 0.0 - v50;
                      v34 = 0.0 - v51;
                    }
                  }
                }
              }
              if ( (*(_BYTE *)(v18 + 28) & 4) != 0 )
              {
                v31 = v31 - v42;
                v32 = v32 - v43;
              }
              else if ( (*(_BYTE *)(v18 + 28) & 8) != 0 )
              {
                v31 = v31 + v42;
                v32 = v32 + v43;
              }
              v53 = v32 + v37[1];
              v54 = v31 + *v37;
              v35[2] = 1.0;
              v35[1] = v53;
              *v35 = v54;
              v37[2] = sqrtf_0((float)(v32 * v32) + (float)(v31 * v31));
              if ( v27 )
              {
                v33 = v42 + v33;
                v55 = v33 + *v29;
                v34 = v43 + v34;
                v56 = v34 + v29[1];
                v27[2] = 1.0;
                *v27 = v55;
                v27[1] = v56;
                v29[2] = sqrtf_0((float)(v34 * v34) + (float)(v33 * v33));
              }
              for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 24); i = (unsigned int)(i + 1) )
              {
                if ( *(_BYTE *)(56LL * (unsigned int)i + *(_QWORD *)a1 + 52) )
                {
                  v70[2 * i + 4] = v31 + v37[2 * i + 4];
                  v70[2 * i + 5] = v32 + v37[2 * i + 5];
                  if ( v27 )
                  {
                    v27[2 * i + 4] = v33 + v29[2 * i + 4];
                    v27[2 * i + 5] = v34 + v29[2 * i + 5];
                  }
                }
              }
              v20 = v76;
              a4 = v77;
              v11 = a2;
              goto LABEL_49;
            }
            if ( v25 != *(_QWORD *)(*(_QWORD *)(a1 + 176) + 64LL) )
            {
              v26 = (*(_BYTE *)(v18 + 28) & 0xC) == 12;
LABEL_18:
              if ( v26 )
                goto LABEL_19;
            }
LABEL_49:
            if ( v20 )
              v24 = *(_QWORD *)(v24 + 56);
            else
              v24 = *(_QWORD *)(v24 + 64);
            v22 = v71;
            v23 = v72;
            if ( !v24 )
              goto LABEL_53;
          }
          v25 = *(_QWORD *)(v18 + 72);
          if ( (*(_BYTE *)(v25 + 28) & 0xC) != 0xC )
            goto LABEL_19;
          if ( (*(_BYTE *)(v18 + 28) & 0xC) != 0xC )
            goto LABEL_49;
          v26 = v18 == *(_QWORD *)(*(_QWORD *)(a1 + 176) + 64LL);
          goto LABEL_18;
        }
      }
LABEL_53:
      v17 = *(_QWORD *)(a1 + 176);
      v18 = *(_QWORD *)(v18 + 80);
    }
    while ( v18 != *(_QWORD *)(v17 + 64) && v18 );
    v14 = v74;
    v10 = a7;
  }
  if ( v11 )
  {
    v58 = *(_QWORD *)(v17 + 64);
    v59 = 0;
    if ( v58 )
    {
      v60 = a8;
      while ( 1 )
      {
        if ( (*(_BYTE *)(v58 + 28) & 0xC) == 0xC )
        {
          v61 = *(_DWORD *)(v58 + 28) & 2;
          v62 = v61 ? *(__int16 **)(v58 + 56) : *(__int16 **)(v58 + 48);
          if ( v62 )
            break;
        }
LABEL_76:
        v58 = *(_QWORD *)(v58 + 80);
        if ( v58 == *(_QWORD *)(*(_QWORD *)(a1 + 176) + 64LL) || !v58 )
        {
          v10 = a7;
          goto LABEL_3;
        }
      }
      v63 = v59 + 1;
      while ( 1 )
      {
        v64 = (__int16 **)(v61 ? *((_QWORD *)v62 + 7) : *((_QWORD *)v62 + 8));
        if ( v64 )
          break;
        if ( (*(_BYTE *)(*(_QWORD *)(v58 + 80) + 28LL) & 0xC) != 0xC )
          goto LABEL_71;
LABEL_72:
        if ( v61 )
          v62 = (__int16 *)*((_QWORD *)v62 + 7);
        else
          v62 = (__int16 *)*((_QWORD *)v62 + 8);
        if ( !v62 )
          goto LABEL_76;
      }
      v65 = **(_WORD **)v62;
      v66 = **v64;
      *(_WORD *)(v60 + 2LL * v14) = v59 + v69;
      *(_WORD *)(v60 + 2LL * (v14 + 1)) = v69 + v63 % a9;
      *(_WORD *)(v60 + 2LL * (v14 + 2)) = v66;
      *(_WORD *)(v60 + 2LL * (v14 + 3)) = v59 + v69;
      v67 = v14 + 5;
      *(_WORD *)(v60 + 2LL * (v14 + 4)) = v66;
      v14 += 6;
      *(_WORD *)(v60 + 2LL * v67) = v65;
LABEL_71:
      ++v59;
      ++v63;
      goto LABEL_72;
    }
  }
LABEL_3:
  result = a10;
  *a10 = v14;
  *v10 = v13;
  return result;
}
