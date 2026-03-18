/*
 * XREFs of ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x18003BD00
 * Callers:
 *     ?LookupCachedGridGraph@Mesh@@AEAAJPEAPEAUMeshGraph@1@@Z @ 0x18003BB10 (-LookupCachedGridGraph@Mesh@@AEAAJPEAPEAUMeshGraph@1@@Z.c)
 *     ?InitMeshGraph@Mesh@@AEAAJXZ @ 0x18015E560 (-InitMeshGraph@Mesh@@AEAAJXZ.c)
 * Callees:
 *     ?GetNode@LinearEdgeList@Mesh@@MEBAPEAUMeshEdgeNode@MeshEdge@2@PEBU42@@Z @ 0x18003DA50 (-GetNode@LinearEdgeList@Mesh@@MEBAPEAUMeshEdgeNode@MeshEdge@2@PEBU42@@Z.c)
 *     ?GetNode@RadialEdgeList@Mesh@@MEBAPEAUMeshEdgeNode@MeshEdge@2@PEBU42@@Z @ 0x18003DA60 (-GetNode@RadialEdgeList@Mesh@@MEBAPEAUMeshEdgeNode@MeshEdge@2@PEBU42@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Mesh::BuildGrid(Mesh *this, __int64 a2, int a3, unsigned int a4)
{
  unsigned int *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v8; // rcx
  char v9; // r11
  __m128 v10; // xmm4
  float v11; // xmm2_4
  __int64 v12; // r10
  float v13; // xmm0_4
  unsigned int v14; // r8d
  float *v15; // rdx
  __int64 v16; // r9
  float v17; // xmm1_4
  __m128 v18; // xmm3
  int v19; // ebx
  float v20; // xmm0_4
  char v21; // r9
  int v22; // r8d
  __int64 v23; // rsi
  __int64 v24; // rdx
  float v25; // xmm1_4
  __int64 v26; // rdx
  int v27; // r8d
  __int64 v28; // r12
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r14
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rcx
  __int64 v36; // rdx
  int v37; // r8d
  __int64 v38; // rdx
  _DWORD *v39; // r8
  _DWORD *v40; // rcx
  float v41; // xmm0_4
  __int128 v42; // xmm0
  int v43; // eax
  float v44; // xmm0_4
  _DWORD *v45; // r8
  __int64 v46; // rdx
  _DWORD *v47; // rcx
  __int128 v48; // xmm0
  unsigned int v49; // eax
  float v50; // xmm0_4
  int v51; // r8d
  __int64 v52; // r11
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rcx
  int v56; // r12d
  int v57; // r11d
  int v58; // r9d
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rax
  __int64 v62; // rdx
  bool v63; // r10
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***v64)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *); // r12
  int v65; // r10d
  struct Mesh::MeshEdge *v66; // rcx
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***v67)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *); // r15
  struct Mesh::MeshEdge *v68; // r14
  __int64 v69; // rsi
  const struct Mesh::MeshEdge *v70; // rbx
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v71)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  struct Mesh::MeshEdge::MeshEdgeNode *Node; // rax
  const struct Mesh::MeshEdge *v73; // rdi
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v74)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  struct Mesh::MeshEdge::MeshEdgeNode *v75; // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v76)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  struct Mesh::MeshEdge::MeshEdgeNode *v77; // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v78)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  struct Mesh::MeshEdge::MeshEdgeNode *v79; // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***v80)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *); // rbx
  __int64 v81; // rdi
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v82)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  Mesh::RadialEdgeList *v83; // rcx
  struct Mesh::MeshEdge::MeshEdgeNode *v84; // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v85)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  Mesh::RadialEdgeList *v86; // rcx
  struct Mesh::MeshEdge::MeshEdgeNode *v87; // rax
  __int64 v88; // rax
  int v89; // eax
  struct Mesh::MeshEdge *v90; // rdi
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall **v91)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *); // rsi
  const struct Mesh::MeshEdge *v92; // rdx
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v93)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  struct Mesh::MeshEdge::MeshEdgeNode *v94; // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v95)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  struct Mesh::MeshEdge::MeshEdgeNode *v96; // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v97)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  struct Mesh::MeshEdge::MeshEdgeNode *v98; // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall **v99)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *); // rsi
  const struct Mesh::MeshEdge *v100; // rdx
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v101)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  struct Mesh::MeshEdge::MeshEdgeNode *v102; // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v103)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  struct Mesh::MeshEdge::MeshEdgeNode *v104; // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v105)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  struct Mesh::MeshEdge::MeshEdgeNode *v106; // rax
  __int64 v107; // rax
  int v108; // eax
  bool v109; // sf
  int v110; // eax
  __int64 *v111; // r8
  __int64 v112; // r9
  int v113; // eax
  __int64 v114; // rcx
  __int64 v115; // rdx
  __int64 result; // rax
  int v117; // eax
  bool v118; // zf
  __int64 v119; // rax
  int v120; // eax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rcx
  __int64 v124; // rax
  float v125; // xmm8_4
  float v126; // xmm6_4
  float v127; // xmm7_4
  float v128; // xmm1_4
  float v129; // xmm7_4
  float v130; // xmm3_4
  float v131; // xmm6_4
  __int64 v132; // rcx
  __int64 v133; // rcx
  __int64 v134; // rcx
  bool v135; // [rsp+30h] [rbp-D0h]
  bool v136; // [rsp+31h] [rbp-CFh]
  int v137; // [rsp+34h] [rbp-CCh]
  int v138; // [rsp+38h] [rbp-C8h]
  int v139; // [rsp+3Ch] [rbp-C4h]
  int v141; // [rsp+44h] [rbp-BCh]
  int v142; // [rsp+48h] [rbp-B8h]
  __int64 v143; // [rsp+50h] [rbp-B0h]
  __int64 v144; // [rsp+50h] [rbp-B0h]
  int v145; // [rsp+58h] [rbp-A8h]
  int v146; // [rsp+5Ch] [rbp-A4h]
  __int64 v147; // [rsp+60h] [rbp-A0h]
  struct Mesh::MeshEdge *v148; // [rsp+68h] [rbp-98h]
  struct Mesh::MeshEdge *v149; // [rsp+68h] [rbp-98h]
  __int64 v150; // [rsp+70h] [rbp-90h]
  __int64 v151; // [rsp+78h] [rbp-88h]
  __int64 v152; // [rsp+80h] [rbp-80h]
  __int64 v153; // [rsp+88h] [rbp-78h]
  __int64 v154; // [rsp+90h] [rbp-70h]
  __int64 v155; // [rsp+98h] [rbp-68h]
  __int64 v156; // [rsp+A0h] [rbp-60h]
  int v157; // [rsp+A8h] [rbp-58h]
  __int64 v158; // [rsp+B0h] [rbp-50h]
  __int64 v159; // [rsp+B8h] [rbp-48h]
  __int64 v160; // [rsp+C0h] [rbp-40h]
  __int128 v161; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v162; // [rsp+D8h] [rbp-28h]
  __int64 v163; // [rsp+E0h] [rbp-20h]
  _DWORD v165[28]; // [rsp+F0h] [rbp-10h]
  unsigned __int32 v166; // [rsp+160h] [rbp+60h]
  char v167; // [rsp+164h] [rbp+64h] BYREF

  v4 = (unsigned int *)*((_QWORD *)this + 19);
  LODWORD(v5) = 1;
  v6 = a4;
  v8 = *((_QWORD *)this + 22);
  v9 = 1;
  v10 = (__m128)v4[1];
  v166 = v10.m128_i32[0];
  v11 = *(float *)(v8 + 4);
  v12 = (unsigned int)a3;
  v13 = v11 + v10.m128_f32[0];
  if ( a3 > 1 )
  {
    v14 = a4;
    v15 = (float *)&v167;
    v16 = (unsigned int)(v12 - 1);
    do
    {
      v17 = *(float *)((char *)v4 + (int)(v14 * *((_DWORD *)this + 40)) + 4);
      if ( v9 && v13 > v17 )
      {
        v9 = 0;
        *v15 = *(v15 - 1);
      }
      else
      {
        if ( v17 <= v13 )
          v17 = v13;
        *v15 = v17;
        v13 = v11 + v17;
        LODWORD(v5) = v5 + 1;
        v9 = 1;
      }
      v14 += v6;
      ++v15;
      --v16;
    }
    while ( v16 );
    v10 = (__m128)v166;
  }
  v18 = (__m128)*v4;
  v19 = 1;
  v165[0] = v18.m128_i32[0];
  v20 = v18.m128_f32[0] + v11;
  v21 = 1;
  v22 = 1;
  if ( (int)v6 > 1LL )
  {
    v23 = *((_QWORD *)this + 19);
    v24 = 1LL;
    do
    {
      v25 = *(float *)(v22 * *((_DWORD *)this + 40) + v23);
      if ( v21 && v20 > v25 )
      {
        v21 = 0;
        v165[v24] = v165[v24 - 1];
      }
      else
      {
        if ( v25 <= v20 )
          v25 = v20;
        *(float *)&v165[v24] = v25;
        v20 = v11 + v25;
        ++v19;
        v21 = 1;
      }
      ++v22;
      ++v24;
    }
    while ( v24 < (int)v6 );
    v18 = (__m128)v165[0];
  }
  v26 = *(int *)(v8 + 32);
  v27 = v26 + v12 * v6;
  if ( v27 > *(_DWORD *)(v8 + 24) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x301u);
    return 2147942414LL;
  }
  *(_DWORD *)(v8 + 32) = v27;
  v28 = *(_QWORD *)(v8 + 16) + (v26 << 6);
  v29 = *((_QWORD *)this + 22);
  v147 = v28;
  v30 = *(int *)(v29 + 56);
  if ( (int)v30 + (int)v5 > *(_DWORD *)(v29 + 48) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x304u);
    return 2147942414LL;
  }
  *(_DWORD *)(v29 + 56) = v30 + v5;
  v31 = *(_QWORD *)(v29 + 40) + 88 * v30;
  v32 = *((_QWORD *)this + 22);
  v155 = v31;
  v33 = *(int *)(v32 + 56);
  if ( (int)v33 + v19 > *(_DWORD *)(v32 + 48) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x307u);
    return 2147942414LL;
  }
  *(_DWORD *)(v32 + 56) = v33 + v19;
  v34 = *(_QWORD *)(v32 + 40) + 88 * v33;
  v35 = *((_QWORD *)this + 22);
  v154 = v34;
  v36 = *(int *)(v35 + 88);
  v37 = v36 + 2 * v5 * v19;
  if ( v37 > *(_DWORD *)(v35 + 80) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x30Bu);
    return 2147942414LL;
  }
  *(_DWORD *)(v35 + 88) = v37;
  v153 = *(_QWORD *)(v35 + 72) + 88 * v36;
  if ( (int)v12 > 0 )
  {
    v38 = 0LL;
    v39 = (_DWORD *)(v31 - 60);
    do
    {
      if ( v38 > 0 && *((float *)&v166 + v38) == *(float *)&v165[v38 + 27] )
      {
        *v39 |= 0x10u;
      }
      else
      {
        v40 = v39 + 15;
        v39 += 22;
        *(_QWORD *)&v161 = _mm_unpacklo_ps(v18, (__m128)*(&v166 + v38)).m128_u64[0];
        v41 = COERCE_DOUBLE(*(_QWORD *)&DOUBLE_1_0 & _xmm);
        if ( v41 < 0.0000011920929 )
        {
          LOWORD(v162) = 1;
          *((_QWORD *)&v161 + 1) = 0x3F80000000000000LL;
        }
        else
        {
          *((_QWORD *)&v161 + 1) = 1065353216LL;
          if ( (float)0.0 >= 0.0000011920929 )
            LOWORD(v162) = 0;
          else
            LOWORD(v162) = 256;
        }
        v42 = v161;
        *(_QWORD *)v40 = *((_QWORD *)this + 22);
        v43 = v162;
        *(_OWORD *)(v40 + 2) = v42;
        v40[6] = v43;
        v40[7] = 0;
        *((_QWORD *)v40 + 6) = 0LL;
        *((_QWORD *)v40 + 7) = 0LL;
        v40[16] = 0;
        if ( *((_BYTE *)v40 + 24) )
        {
          v44 = FLOAT_1_4142135;
        }
        else if ( *((_BYTE *)v40 + 25) )
        {
          v44 = 0.0;
        }
        else
        {
          v125 = *((float *)v40 + 4);
          v126 = *((float *)v40 + 5);
          v127 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v125) & _xmm);
          v44 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v126) & _xmm);
          if ( v127 <= v44 )
            v44 = 1.4142135 - v127;
          if ( (float)(v126 * v125) < 0.0 )
            LODWORD(v44) ^= _xmm;
        }
        *((float *)v40 + 8) = v44;
        *((_QWORD *)v40 + 9) = 0LL;
        *((_QWORD *)v40 + 10) = 0LL;
      }
      ++v38;
    }
    while ( v38 < (int)v12 );
  }
  *(_DWORD *)(v31 + 28) |= 1u;
  v160 = v31 + 88LL * ((int)v5 - 1);
  *(_DWORD *)(v160 + 28) |= 2u;
  if ( (int)v6 > 0 )
  {
    v45 = (_DWORD *)(v34 - 60);
    v46 = 0LL;
    while ( v46 > 0 && *(float *)&v165[v46] == *(float *)&v165[v46 - 1] )
    {
      *v45 |= 0x10u;
LABEL_45:
      if ( ++v46 >= (int)v6 )
        goto LABEL_46;
    }
    v47 = v45 + 15;
    *(_QWORD *)&v161 = _mm_unpacklo_ps((__m128)(unsigned int)v165[v46], v10).m128_u64[0];
    v45 += 22;
    if ( (float)0.0 >= 0.0000011920929 )
    {
      v128 = COERCE_DOUBLE(*(_QWORD *)&DOUBLE_1_0 & _xmm);
      if ( v128 < 0.0000011920929 )
      {
        LOWORD(v162) = 256;
        *((_QWORD *)&v161 + 1) = 1065353216LL;
        goto LABEL_42;
      }
      LOWORD(v162) = 0;
    }
    else
    {
      LOWORD(v162) = 1;
    }
    *((_QWORD *)&v161 + 1) = 0x3F80000000000000LL;
LABEL_42:
    v48 = v161;
    *(_QWORD *)v47 = *((_QWORD *)this + 22);
    v49 = v162;
    *(_OWORD *)(v47 + 2) = v48;
    *((_QWORD *)v47 + 3) = v49;
    *((_QWORD *)v47 + 6) = 0LL;
    *((_QWORD *)v47 + 7) = 0LL;
    v47[16] = 0;
    if ( *((_BYTE *)v47 + 24) )
    {
      v50 = FLOAT_1_4142135;
    }
    else if ( *((_BYTE *)v47 + 25) )
    {
      v50 = 0.0;
    }
    else
    {
      v129 = *((float *)v47 + 4);
      v130 = *((float *)v47 + 5);
      v131 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v129) & _xmm);
      v50 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v130) & _xmm);
      if ( v131 <= v50 )
        v50 = 1.4142135 - v131;
      if ( (float)(v130 * v129) < 0.0 )
        LODWORD(v50) ^= _xmm;
    }
    *((float *)v47 + 8) = v50;
    *((_QWORD *)v47 + 9) = 0LL;
    *((_QWORD *)v47 + 10) = 0LL;
    goto LABEL_45;
  }
LABEL_46:
  *(_DWORD *)(v34 + 28) |= 2u;
  v159 = v34 + 88LL * (v19 - 1);
  *(_DWORD *)(v159 + 28) |= 1u;
  v51 = 0;
  if ( (int)v12 > 0 )
  {
    v52 = 0LL;
    do
    {
      if ( (int)v6 > 0 )
      {
        v53 = v6;
        v54 = (v52 << 6) + v28 + 32;
        v52 += v6;
        do
        {
          v54 += 64LL;
          v55 = *((_QWORD *)this + 19) + v51 * *((_DWORD *)this + 40);
          *(_DWORD *)(v54 - 96) = v51++;
          *(_QWORD *)(v54 - 88) = v55;
          *(_QWORD *)(v54 - 72) = 0LL;
          *(_QWORD *)(v54 - 64) = 0LL;
          *(_DWORD *)(v54 - 56) = 0;
          *(_QWORD *)(v54 - 48) = 0LL;
          --v53;
        }
        while ( v53 );
      }
      --v12;
    }
    while ( v12 );
  }
  v5 = (int)v5;
  v56 = 0;
  v142 = 0;
  v57 = 0;
  v141 = 0;
  v137 = 0;
  v156 = v5;
  if ( (int)v5 <= 0 )
    goto LABEL_124;
  v58 = v6 - 1;
  v59 = 0LL;
  v152 = 0LL;
  v60 = 0LL;
  v157 = v19;
  v146 = v6 - 1;
  v61 = v19 - 1LL;
  v158 = v61;
  do
  {
    v62 = v31 + 88 * v59;
    v150 = v62;
    v63 = (*(_BYTE *)(v62 + 28) & 0x10) != 0;
    v135 = v63;
    v151 = v61;
    v139 = v58;
    if ( v61 < 0 )
      goto LABEL_121;
    v64 = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))(v62 + 40);
    v65 = v57 * v6;
    v66 = (struct Mesh::MeshEdge *)(v153 + 88 * v60);
    v67 = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))(88 * v61 + v34 + 40);
    v145 = v65;
    v137 += 2 * v19;
    while ( 1 )
    {
      v136 = (*((_BYTE *)v67 - 12) & 0x10) != 0;
      v68 = v66;
      v69 = v147 + ((__int64)(v58 + v65) << 6);
      v138 = v58 + v65;
      *(_QWORD *)v66 = v69;
      *((_QWORD *)v66 + 4) = v69;
      *((_QWORD *)v66 + 3) = v69;
      *((_QWORD *)v66 + 6) = v69;
      *((_QWORD *)v66 + 5) = v69;
      *((_QWORD *)v66 + 1) = v62;
      *((_DWORD *)v66 + 4) = 0;
      *((_QWORD *)v66 + 9) = 0LL;
      *((_QWORD *)v66 + 10) = 0LL;
      *((_QWORD *)v66 + 7) = 0LL;
      *((_QWORD *)v66 + 8) = 0LL;
      v70 = *(const struct Mesh::MeshEdge **)(v62 + 48);
      v143 = v60 + 1;
      v148 = (struct Mesh::MeshEdge *)((char *)v66 + 88);
      if ( v70 )
      {
        v71 = **v64;
        if ( v71 == Mesh::LinearEdgeList::GetNode )
          Node = Mesh::LinearEdgeList::GetNode((Mesh::LinearEdgeList *)v64, v70);
        else
          Node = v71((Mesh::LinearEdgeList *)v64, v70);
      }
      else
      {
        Node = (struct Mesh::MeshEdge::MeshEdgeNode *)(v64 + 2);
      }
      v73 = *(const struct Mesh::MeshEdge **)Node;
      if ( *(_QWORD *)Node )
        *((_QWORD *)(**v64)((Mesh::LinearEdgeList *)v64, *(const struct Mesh::MeshEdge **)Node) + 1) = v68;
      v74 = **v64;
      if ( v74 == Mesh::LinearEdgeList::GetNode )
        v75 = Mesh::LinearEdgeList::GetNode((Mesh::LinearEdgeList *)v64, v68);
      else
        v75 = v74((Mesh::LinearEdgeList *)v64, v68);
      *(_QWORD *)v75 = v73;
      v76 = **v64;
      if ( v76 == Mesh::LinearEdgeList::GetNode )
        v77 = Mesh::LinearEdgeList::GetNode((Mesh::LinearEdgeList *)v64, v68);
      else
        v77 = v76((Mesh::LinearEdgeList *)v64, v68);
      *((_QWORD *)v77 + 1) = v70;
      if ( v70 )
      {
        v78 = **v64;
        if ( v78 == Mesh::LinearEdgeList::GetNode )
          v79 = Mesh::LinearEdgeList::GetNode((Mesh::LinearEdgeList *)v64, v70);
        else
          v79 = v78((Mesh::LinearEdgeList *)v64, v70);
        *(_QWORD *)v79 = v68;
      }
      if ( v70 == (const struct Mesh::MeshEdge *)v64[1] )
        v64[1] = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall **)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))v68;
      if ( v73 == (const struct Mesh::MeshEdge *)v64[2] )
        v64[2] = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall **)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))v68;
      ++*((_DWORD *)v64 + 6);
      v80 = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *))(v69 + 16);
      v81 = *(_QWORD *)(v69 + 32);
      if ( v81 )
        *((_QWORD *)(**v80)((Mesh::RadialEdgeList *)(v69 + 16), *(const struct Mesh::MeshEdge **)(v69 + 32)) + 1) = v68;
      v82 = **v80;
      v83 = (Mesh::RadialEdgeList *)(v69 + 16);
      if ( v82 == Mesh::RadialEdgeList::GetNode )
        v84 = Mesh::RadialEdgeList::GetNode(v83, v68);
      else
        v84 = v82(v83, v68);
      *(_QWORD *)v84 = v81;
      v85 = **v80;
      v86 = (Mesh::RadialEdgeList *)(v69 + 16);
      if ( v85 == Mesh::RadialEdgeList::GetNode )
        v87 = Mesh::RadialEdgeList::GetNode(v86, v68);
      else
        v87 = v85(v86, v68);
      *((_QWORD *)v87 + 1) = 0LL;
      if ( !*(_QWORD *)(v69 + 24) )
        *(_QWORD *)(v69 + 24) = v68;
      if ( v81 == *(_QWORD *)(v69 + 32) )
        *(_QWORD *)(v69 + 32) = v68;
      ++*(_DWORD *)(v69 + 40);
      if ( (*((_BYTE *)v67 - 12) & 1) != 0 )
      {
        v88 = *((_QWORD *)this + 22);
        *((_DWORD *)v68 + 4) |= 2u;
        ++*(_DWORD *)(v88 + 96);
      }
      else
      {
        v117 = *(_DWORD *)(v150 + 28);
        if ( (v117 & 2) != 0 )
        {
          v122 = *((_QWORD *)this + 22);
          *((_DWORD *)v68 + 4) |= 8u;
          ++*(_DWORD *)(v122 + 100);
        }
        else
        {
          v118 = (v117 & 1) == 0;
          v119 = *((_QWORD *)this + 22);
          if ( v118 )
          {
            *((_DWORD *)v68 + 4) |= 1u;
            ++*(_DWORD *)(v119 + 92);
          }
          else
          {
            *((_DWORD *)v68 + 4) |= 4u;
            ++*(_DWORD *)(v119 + 100);
          }
        }
      }
      v89 = *((_DWORD *)v68 + 4);
      if ( (v89 & 5) != 0 )
      {
        v123 = *((_QWORD *)this + 22);
        if ( (v89 & 0x10A) == 0 )
        {
          *((_DWORD *)v68 + 4) = v89 | 0x100;
          ++*(_DWORD *)(v123 + 104);
        }
      }
      v144 = v143 + 1;
      v90 = v148;
      v149 = (struct Mesh::MeshEdge *)((char *)v148 + 88);
      *((_QWORD *)v90 + 1) = v67 - 5;
      *(_QWORD *)v90 = v69;
      *((_DWORD *)v90 + 4) = 0;
      *((_QWORD *)v90 + 9) = 0LL;
      *((_QWORD *)v90 + 10) = 0LL;
      *((_QWORD *)v90 + 7) = 0LL;
      *((_QWORD *)v90 + 8) = 0LL;
      *((_QWORD *)v90 + 4) = v69;
      *((_QWORD *)v90 + 3) = v69;
      *((_QWORD *)v90 + 6) = v69;
      *((_QWORD *)v90 + 5) = v69;
      v91 = v67[2];
      if ( v91 )
      {
        v92 = (const struct Mesh::MeshEdge *)v67[2];
        v93 = **v67;
        if ( v93 == Mesh::LinearEdgeList::GetNode )
          v94 = Mesh::LinearEdgeList::GetNode((Mesh::LinearEdgeList *)v67, v92);
        else
          v94 = v93((Mesh::LinearEdgeList *)v67, v92);
        *((_QWORD *)v94 + 1) = v90;
      }
      v95 = **v67;
      if ( v95 == Mesh::LinearEdgeList::GetNode )
        v96 = Mesh::LinearEdgeList::GetNode((Mesh::LinearEdgeList *)v67, v90);
      else
        v96 = v95((Mesh::LinearEdgeList *)v67, v90);
      *(_QWORD *)v96 = v91;
      v97 = **v67;
      if ( v97 == Mesh::LinearEdgeList::GetNode )
        v98 = Mesh::LinearEdgeList::GetNode((Mesh::LinearEdgeList *)v67, v90);
      else
        v98 = v97((Mesh::LinearEdgeList *)v67, v90);
      *((_QWORD *)v98 + 1) = 0LL;
      if ( !v67[1] )
        v67[1] = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall **)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))v90;
      if ( v91 == v67[2] )
        v67[2] = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall **)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))v90;
      ++*((_DWORD *)v67 + 6);
      v99 = v80[2];
      if ( v99 )
      {
        v100 = (const struct Mesh::MeshEdge *)v80[2];
        v101 = **v80;
        if ( v101 == Mesh::RadialEdgeList::GetNode )
          v102 = Mesh::RadialEdgeList::GetNode((Mesh::RadialEdgeList *)v80, v100);
        else
          v102 = v101((Mesh::RadialEdgeList *)v80, v100);
        *((_QWORD *)v102 + 1) = v90;
      }
      v103 = **v80;
      if ( v103 == Mesh::RadialEdgeList::GetNode )
        v104 = Mesh::RadialEdgeList::GetNode((Mesh::RadialEdgeList *)v80, v90);
      else
        v104 = v103((Mesh::RadialEdgeList *)v80, v90);
      *(_QWORD *)v104 = v99;
      v105 = **v80;
      if ( v105 == Mesh::RadialEdgeList::GetNode )
        v106 = Mesh::RadialEdgeList::GetNode((Mesh::RadialEdgeList *)v80, v90);
      else
        v106 = v105((Mesh::RadialEdgeList *)v80, v90);
      *((_QWORD *)v106 + 1) = 0LL;
      if ( !v80[1] )
        v80[1] = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall **)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *))v90;
      if ( v99 == v80[2] )
        v80[2] = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall **)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *))v90;
      ++*((_DWORD *)v80 + 6);
      if ( (*(_BYTE *)(v150 + 28) & 2) != 0 )
      {
        v107 = *((_QWORD *)this + 22);
        *((_DWORD *)v90 + 4) |= 2u;
        ++*(_DWORD *)(v107 + 96);
      }
      else
      {
        v120 = *((_DWORD *)v67 - 3);
        if ( (v120 & 1) != 0 )
        {
          v121 = *((_QWORD *)this + 22);
          *((_DWORD *)v90 + 4) |= 4u;
          ++*(_DWORD *)(v121 + 100);
        }
        else
        {
          v118 = (v120 & 2) == 0;
          v124 = *((_QWORD *)this + 22);
          if ( v118 )
          {
            *((_DWORD *)v90 + 4) |= 1u;
            ++*(_DWORD *)(v124 + 92);
          }
          else
          {
            *((_DWORD *)v90 + 4) |= 8u;
            ++*(_DWORD *)(v124 + 100);
          }
        }
      }
      v63 = v135;
      if ( v135 )
      {
        ++*(_DWORD *)(*(_QWORD *)v68 + 48LL);
        v132 = v147 + ((__int64)(int)(v138 + a4) << 6);
        *((_QWORD *)v68 + 6) = v132;
        *((_QWORD *)v68 + 5) = v132;
        *((_QWORD *)v90 + 4) = v132;
        *((_QWORD *)v90 + 6) = v132;
      }
      if ( v136 )
      {
        ++*(_DWORD *)(*(_QWORD *)v90 + 48LL);
        v133 = v147 + ((__int64)(v138 - 1) << 6);
        *((_QWORD *)v90 + 6) = v133;
        *((_QWORD *)v90 + 5) = v133;
        *((_QWORD *)v68 + 3) = v133;
        *((_QWORD *)v68 + 5) = v133;
      }
      if ( v135 )
      {
        if ( !v136 )
        {
LABEL_118:
          v108 = 1;
          goto LABEL_119;
        }
        v134 = v147 + ((__int64)(v138 + v146) << 6);
        *((_QWORD *)v68 + 5) = v134;
        *((_QWORD *)v90 + 6) = v134;
      }
      if ( !v136 )
        goto LABEL_118;
      v108 = 2;
LABEL_119:
      v67 -= 11;
      v58 = v139 - v108;
      v66 = v149;
      v62 = v150;
      v109 = --v151 < 0;
      v60 = v144;
      v139 -= v108;
      if ( v109 )
        break;
      v65 = v145;
    }
    v34 = v154;
    v31 = v155;
    LODWORD(v6) = a4;
    v59 = v152;
    v57 = v141;
    v5 = v156;
    v56 = v142;
    v19 = v157;
LABEL_121:
    if ( v63 )
      v110 = 2;
    else
      v110 = 1;
    v57 += v110;
    v58 = v6 - 1;
    v61 = v158;
    ++v56;
    ++v59;
    v141 = v57;
    v142 = v56;
    v152 = v59;
  }
  while ( v59 < v5 );
LABEL_124:
  v111 = (__int64 *)&v161;
  v112 = v160;
  v162 = v159;
  v113 = 0;
  *(_QWORD *)&v161 = v34;
  *((_QWORD *)&v161 + 1) = v31;
  v163 = v160;
  do
  {
    if ( v113 <= 0 )
      v114 = v112;
    else
      v114 = *(v111 - 1);
    v115 = *v111;
    ++v113;
    ++v111;
    *(_QWORD *)(v115 + 72) = v114;
    *(_QWORD *)(v115 + 80) = *((_QWORD *)&v161 + (v113 & 3));
  }
  while ( (unsigned int)v113 < 4 );
  result = 0LL;
  *(_QWORD *)(*((_QWORD *)this + 22) + 64LL) = v34;
  return result;
}
