/*
 * XREFs of ?GenerateAntialiasBorder@Mesh@@AEBAX_N0AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@UVertexAAFixup_UVxN@@@@HPEAHPEAGH3@Z @ 0x180065720
 * Callers:
 *     ?GenerateGeometry@Mesh@@QEAAJ_N0AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@UVertexAAFixup_UVxN@@@@HPEAHGPEAG3@Z @ 0x180064ED0 (-GenerateGeometry@Mesh@@QEAAJ_N0AEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV-$S.c)
 * Callees:
 *     ?GenerateGridAntialiasBorder@Mesh@@AEBAX_N0AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@UVertexAAFixup_UVxN@@@@HPEAHPEAGH3@Z @ 0x180063B80 (-GenerateGridAntialiasBorder@Mesh@@AEBAX_N0AEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXYW_ColorDW@@.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 *     sqrtf_0 @ 0x1800C5DAA (sqrtf_0.c)
 */

signed int *__fastcall Mesh::GenerateAntialiasBorder(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        int a6,
        _DWORD *a7,
        __int64 a8,
        int a9,
        signed int *a10)
{
  _DWORD *v10; // r13
  char v11; // r11
  int v13; // r12d
  signed int v14; // esi
  char v15; // al
  signed int *result; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  int v19; // esi
  float v20; // xmm13_4
  char v21; // dl
  float v22; // xmm14_4
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r12
  __int64 v26; // rbp
  bool v27; // zf
  float *v28; // r14
  int v29; // edx
  float *v30; // r13
  __int64 v31; // r9
  float v32; // xmm6_4
  float v33; // xmm7_4
  float v34; // xmm10_4
  float v35; // xmm11_4
  float *v36; // r10
  int v37; // r8d
  float *v38; // rbx
  int v39; // edx
  int v40; // r8d
  float v41; // xmm9_4
  float v42; // xmm8_4
  int v43; // eax
  float v44; // xmm2_4
  float v45; // xmm3_4
  float v46; // xmm0_4
  float v47; // xmm1_4
  float v48; // xmm0_4
  float v49; // xmm2_4
  float v50; // xmm0_4
  float v51; // xmm1_4
  float v52; // xmm1_4
  float v53; // xmm0_4
  __int64 i; // r8
  int v55; // edi
  __int64 v56; // r11
  __int16 v57; // r13
  int v58; // ebx
  __int16 *v59; // r10
  int v60; // ebp
  __int16 **v61; // rcx
  __int16 v62; // r9
  __int16 v63; // cx
  __int64 v64; // rax
  int v65; // esi
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  int v71; // [rsp+40h] [rbp-128h]
  int v72; // [rsp+50h] [rbp-118h] BYREF
  signed int v73; // [rsp+54h] [rbp-114h]
  int v74; // [rsp+58h] [rbp-110h]
  __int64 v75; // [rsp+60h] [rbp-108h]
  __int64 v76; // [rsp+68h] [rbp-100h]
  void *Src; // [rsp+70h] [rbp-F8h]
  int v78; // [rsp+170h] [rbp+8h]
  float *v79; // [rsp+170h] [rbp+8h]
  __int64 v82; // [rsp+188h] [rbp+20h]

  v82 = a4;
  v10 = a7;
  v11 = a2;
  v13 = *a7;
  v78 = *a7;
  a9 = *a7;
  v14 = *a10;
  v15 = *(_BYTE *)(a1 + 236) & 0x30;
  v73 = v14;
  v72 = v14;
  if ( v15 == 32 )
  {
    Mesh::GenerateGridAntialiasBorder(a1, a2, a3, (__int64 *)a4, a5, a6, &a9, a8, v71, (unsigned int *)&v72);
    v13 = a9;
    v14 = v72;
    goto LABEL_3;
  }
  v17 = *(_QWORD *)(a1 + 176);
  v72 = 0;
  v74 = v13;
  v18 = *(_QWORD *)(v17 + 64);
  if ( v18 )
  {
    v19 = v78;
    do
    {
      if ( (*(_BYTE *)(v18 + 28) & 0xC) != 0 )
      {
        v20 = *(float *)(v18 + 16);
        v21 = 0;
        v27 = (*(_BYTE *)(v18 + 28) & 2) == 0;
        v22 = *(float *)(v18 + 20);
        LOBYTE(a9) = 0;
        if ( v27 )
        {
          v23 = *(_QWORD *)(v18 + 48);
          v24 = *(_QWORD *)(v18 + 56);
        }
        else
        {
          v23 = *(_QWORD *)(v18 + 56);
          v21 = 1;
          v24 = *(_QWORD *)(v18 + 48);
          LODWORD(v20) ^= _xmm;
          LOBYTE(a9) = 1;
          LODWORD(v22) ^= _xmm;
        }
        v76 = v24;
        v25 = v23;
        v75 = v23;
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
              v29 = *(_DWORD *)(a4 + 8);
              v30 = 0LL;
              v31 = *(_QWORD *)a4;
              v32 = 0.0;
              v33 = 0.0;
              v34 = 0.0;
              v35 = 0.0;
              v36 = (float *)(v31 + v29 * **(_DWORD **)v25);
              v79 = v36;
              v37 = *(_DWORD *)(a5 + 8);
              v38 = (float *)(*(_QWORD *)a5 + **(_DWORD **)v25 * v37);
              Src = v38;
              if ( v11 && (*(_BYTE *)(v18 + 28) & 0xC) == 0xC )
              {
                ++v72;
                v39 = v19 * v29;
                v40 = v19 * v37;
                ++v19;
                v28 = (float *)(v31 + v39);
                v30 = (float *)(*(_QWORD *)a5 + v40);
                memcpy_0(v28, v36, (unsigned int)(8 * a6 + 16));
                v38 = (float *)Src;
                memcpy_0(v30, Src, (unsigned int)(8 * a6 + 16));
                v30[3] = 0.0;
                v36 = v79;
                if ( *(char *)(a1 + 236) >= 0 )
                  v28[3] = 0.0;
                else
                  *((_BYTE *)v28 + 15) = 0;
              }
              v41 = v22 * 0.5;
              v42 = COERCE_FLOAT(LODWORD(v20) ^ _xmm) * 0.5;
              if ( v26 )
              {
                v43 = *(_DWORD *)(v26 + 28);
                v44 = *(float *)(v26 + 16);
                v45 = *(float *)(v26 + 20);
                if ( (v43 & 2) != 0 )
                {
                  LODWORD(v44) ^= _xmm;
                  LODWORD(v45) ^= _xmm;
                }
                v46 = (float)(v41 * v44) + (float)(v42 * v45);
                v41 = v44 * v46;
                v42 = v45 * v46;
                if ( (v43 & 0xC) != 0 )
                {
                  v47 = (float)((float)(v20 * v45) + (float)(v22 * COERCE_FLOAT(LODWORD(v44) ^ _xmm))) * 0.5;
                  v48 = v20 * v47;
                  v49 = v22 * v47;
                  if ( (v43 & 4) != 0 )
                  {
                    v32 = 0.0 - v48;
                    v33 = 0.0 - v49;
                  }
                  else if ( (v43 & 8) != 0 )
                  {
                    v32 = v48 + 0.0;
                    v33 = v49 + 0.0;
                  }
                  if ( v28 )
                  {
                    if ( (v43 & 8) != 0 )
                    {
                      v34 = v48 + 0.0;
                      v35 = v49 + 0.0;
                    }
                    else if ( (v43 & 4) != 0 )
                    {
                      v34 = 0.0 - v48;
                      v35 = 0.0 - v49;
                    }
                  }
                }
              }
              if ( (*(_BYTE *)(v18 + 28) & 4) != 0 )
              {
                v32 = v32 - v41;
                v33 = v33 - v42;
              }
              else if ( (*(_BYTE *)(v18 + 28) & 8) != 0 )
              {
                v32 = v32 + v41;
                v33 = v33 + v42;
              }
              v50 = v33 + v38[1];
              v51 = v32 + *v38;
              v36[2] = 1.0;
              v36[1] = v50;
              *v36 = v51;
              v38[2] = sqrtf_0((float)(v33 * v33) + (float)(v32 * v32));
              if ( v28 )
              {
                v34 = v34 + v41;
                v35 = v35 + v42;
                v52 = v34 + *v30;
                v53 = v35 + v30[1];
                v28[2] = 1.0;
                *v28 = v52;
                v28[1] = v53;
                v30[2] = sqrtf_0((float)(v34 * v34) + (float)(v35 * v35));
              }
              if ( !a3 )
              {
                for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 24); i = (unsigned int)(i + 1) )
                {
                  if ( *(_BYTE *)(56LL * (unsigned int)i + *(_QWORD *)a1 + 52) )
                  {
                    v79[2 * i + 4] = v32 + v38[2 * i + 4];
                    v79[2 * i + 5] = v33 + v38[2 * i + 5];
                    if ( v28 )
                    {
                      v28[2 * i + 4] = v34 + v30[2 * i + 4];
                      v28[2 * i + 5] = v35 + v30[2 * i + 5];
                    }
                  }
                }
              }
              v11 = a2;
              a4 = v82;
              v21 = a9;
              goto LABEL_51;
            }
            if ( v26 != *(_QWORD *)(*(_QWORD *)(a1 + 176) + 64LL) )
            {
              v27 = (*(_BYTE *)(v18 + 28) & 0xC) == 12;
LABEL_19:
              if ( v27 )
                goto LABEL_20;
            }
LABEL_51:
            if ( v21 )
              v25 = *(_QWORD *)(v25 + 56);
            else
              v25 = *(_QWORD *)(v25 + 64);
            v23 = v75;
            v24 = v76;
            if ( !v25 )
            {
              v78 = v19;
              goto LABEL_56;
            }
          }
          v26 = *(_QWORD *)(v18 + 72);
          if ( (*(_BYTE *)(v26 + 28) & 0xC) != 0xC )
            goto LABEL_20;
          if ( (*(_BYTE *)(v18 + 28) & 0xC) != 0xC )
            goto LABEL_51;
          v27 = v18 == *(_QWORD *)(*(_QWORD *)(a1 + 176) + 64LL);
          goto LABEL_19;
        }
      }
LABEL_56:
      v18 = *(_QWORD *)(v18 + 80);
    }
    while ( v18 != *(_QWORD *)(*(_QWORD *)(a1 + 176) + 64LL) && v18 );
    v14 = v73;
    v13 = v78;
    v10 = a7;
  }
  if ( v11 )
  {
    v55 = 0;
    v56 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 64LL);
    if ( v56 )
    {
      v57 = v74;
      while ( 1 )
      {
        if ( (*(_BYTE *)(v56 + 28) & 0xC) == 0xC )
        {
          v58 = *(_DWORD *)(v56 + 28) & 2;
          v59 = v58 ? *(__int16 **)(v56 + 56) : *(__int16 **)(v56 + 48);
          if ( v59 )
            break;
        }
LABEL_79:
        v56 = *(_QWORD *)(v56 + 80);
        if ( v56 == *(_QWORD *)(*(_QWORD *)(a1 + 176) + 64LL) || !v56 )
        {
          v10 = a7;
          goto LABEL_3;
        }
      }
      v60 = v55 + 1;
      while ( 1 )
      {
        v61 = (__int16 **)(v58 ? *((_QWORD *)v59 + 7) : *((_QWORD *)v59 + 8));
        if ( v61 )
          break;
        if ( (*(_BYTE *)(*(_QWORD *)(v56 + 80) + 28LL) & 0xC) != 0xC )
          goto LABEL_74;
LABEL_75:
        if ( v58 )
          v59 = (__int16 *)*((_QWORD *)v59 + 7);
        else
          v59 = (__int16 *)*((_QWORD *)v59 + 8);
        if ( !v59 )
          goto LABEL_79;
      }
      v62 = **(_WORD **)v59;
      v63 = **v61;
      v64 = v14;
      v65 = v14 + 1;
      *(_WORD *)(a8 + 2 * v64) = v55 + v57;
      v66 = v65++;
      *(_WORD *)(a8 + 2 * v66) = v57 + v60 % v72;
      v67 = v65++;
      *(_WORD *)(a8 + 2 * v67) = v63;
      v68 = v65++;
      *(_WORD *)(a8 + 2 * v68) = v55 + v57;
      v69 = v65++;
      *(_WORD *)(a8 + 2 * v69) = v63;
      v70 = v65;
      v14 = v65 + 1;
      *(_WORD *)(a8 + 2 * v70) = v62;
LABEL_74:
      ++v55;
      ++v60;
      goto LABEL_75;
    }
  }
LABEL_3:
  result = a10;
  *a10 = v14;
  *v10 = v13;
  return result;
}
