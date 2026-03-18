/*
 * XREFs of ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x1800B0CF0
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800B1C50 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?InitMeshGraph@Mesh@@AEAAJXZ @ 0x18017DC84 (-InitMeshGraph@Mesh@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetNode@LinearEdgeList@Mesh@@MEBAPEAUMeshEdgeNode@MeshEdge@2@PEBU42@@Z @ 0x1800B2B80 (-GetNode@LinearEdgeList@Mesh@@MEBAPEAUMeshEdgeNode@MeshEdge@2@PEBU42@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Mesh::BuildGrid(Mesh *this, __int64 a2, int a3, int a4)
{
  __int64 v4; // rdx
  int v5; // edi
  float *v6; // r10
  Mesh *v7; // r14
  int v8; // ebx
  char v9; // si
  __int64 v10; // r15
  float v11; // xmm2_4
  float v12; // xmm4_4
  float v13; // xmm0_4
  __int64 v14; // r11
  float *v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  float *v18; // rcx
  float v19; // xmm1_4
  float v20; // xmm1_4
  float v21; // xmm3_4
  int v22; // r13d
  float v23; // xmm0_4
  char v24; // r9
  __int64 v25; // rsi
  __int64 v26; // rcx
  int v27; // r8d
  float v28; // xmm1_4
  float v29; // xmm1_4
  __int64 v30; // rcx
  int v31; // r8d
  __int64 v32; // r12
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r15
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rbx
  __int64 v39; // rcx
  int v40; // r8d
  __int64 v41; // r10
  __int64 v42; // rdx
  _DWORD *v43; // r8
  _DWORD *v44; // rcx
  float v45; // xmm1_4
  __int128 v46; // xmm0
  unsigned int v47; // eax
  float v48; // xmm0_4
  __int64 v49; // rdx
  _DWORD *v50; // r8
  _DWORD *v51; // rcx
  __int128 v52; // xmm0
  unsigned int v53; // eax
  float v54; // xmm0_4
  int v55; // r8d
  __int64 v56; // r9
  __int64 v57; // rdx
  int v58; // r9d
  int v59; // eax
  __int64 v60; // rdi
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // rcx
  bool v64; // r11
  int v65; // r10d
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***v66)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *); // r13
  int v67; // edx
  __int64 v68; // r9
  __int64 v69; // r8
  __int64 v70; // rdi
  __int64 v71; // r12
  __int64 v72; // r15
  __int64 v73; // rsi
  const struct Mesh::MeshEdge *v74; // rbx
  const struct Mesh::MeshEdge *v75; // rdx
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v76)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  struct Mesh::MeshEdge::MeshEdgeNode *Node; // rax
  const struct Mesh::MeshEdge *v78; // r14
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v79)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  const struct Mesh::MeshEdge **v80; // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v81)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v82)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  struct Mesh::MeshEdge::MeshEdgeNode *v83; // rax
  __int64 v84; // rsi
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v85)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  _QWORD *v86; // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v87)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***v88)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *); // r8
  __int64 v89; // rax
  int v90; // eax
  __int64 v91; // rsi
  __int64 v92; // r13
  __int64 v93; // r14
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall **v94)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *); // r15
  const struct Mesh::MeshEdge *v95; // rdx
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v96)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  struct Mesh::MeshEdge::MeshEdgeNode *v97; // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v98)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***v99)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v100)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  __int64 v101; // r14
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v102)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  __int64 v103; // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v104)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  _QWORD *v105; // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v106)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
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
  __int64 v117; // rcx
  int v118; // edx
  int v119; // eax
  int v120; // edx
  __int64 v121; // rcx
  int v122; // eax
  __int64 v123; // rcx
  float v124; // xmm8_4
  float v125; // xmm6_4
  float v126; // xmm7_4
  float v127; // xmm1_4
  float v128; // xmm7_4
  float v129; // xmm3_4
  float v130; // xmm6_4
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rcx
  __int64 v134; // rcx
  __int64 v135; // rcx
  bool v136; // [rsp+30h] [rbp-D0h]
  bool v137; // [rsp+31h] [rbp-CFh]
  __int64 v139; // [rsp+38h] [rbp-C8h]
  __int64 v140; // [rsp+38h] [rbp-C8h]
  __int64 v141; // [rsp+40h] [rbp-C0h]
  Mesh::LinearEdgeList *v142; // [rsp+48h] [rbp-B8h]
  int v143; // [rsp+50h] [rbp-B0h]
  int v144; // [rsp+54h] [rbp-ACh]
  int v145; // [rsp+58h] [rbp-A8h]
  int v146; // [rsp+5Ch] [rbp-A4h]
  int v147; // [rsp+60h] [rbp-A0h]
  int v148; // [rsp+64h] [rbp-9Ch]
  __int64 v150; // [rsp+70h] [rbp-90h]
  int v151; // [rsp+78h] [rbp-88h]
  int v152; // [rsp+7Ch] [rbp-84h]
  __int64 v153; // [rsp+80h] [rbp-80h]
  __int64 v154; // [rsp+88h] [rbp-78h]
  __int64 v155; // [rsp+90h] [rbp-70h]
  __int64 v156; // [rsp+98h] [rbp-68h]
  __int64 v157; // [rsp+A0h] [rbp-60h]
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***v158)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *); // [rsp+A8h] [rbp-58h]
  __int64 v159; // [rsp+B0h] [rbp-50h]
  __int64 v160; // [rsp+B8h] [rbp-48h]
  __int64 v161; // [rsp+C0h] [rbp-40h]
  __int64 v162; // [rsp+C8h] [rbp-38h]
  __int64 v163; // [rsp+D0h] [rbp-30h]
  __int64 v164; // [rsp+D8h] [rbp-28h]
  __int128 v165; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v166; // [rsp+F0h] [rbp-10h]
  __int64 v167; // [rsp+F8h] [rbp-8h]
  float v168[28]; // [rsp+100h] [rbp+0h]
  float v169; // [rsp+170h] [rbp+70h]
  char v170; // [rsp+174h] [rbp+74h] BYREF

  v4 = *((_QWORD *)this + 22);
  v5 = 1;
  v6 = (float *)*((_QWORD *)this + 19);
  v7 = this;
  v8 = *((_DWORD *)this + 40);
  v9 = 1;
  v10 = a4;
  v11 = *(float *)(v4 + 4);
  v12 = v6[1];
  v169 = v12;
  v13 = v11 + v12;
  v14 = (unsigned int)a3;
  if ( a3 > 1 )
  {
    v15 = (float *)&v170;
    v16 = v8 * a4;
    v17 = (unsigned int)(v14 - 1);
    v18 = (float *)((char *)v6 + v16 + 4);
    do
    {
      v19 = *v18;
      if ( v9 && v13 > v19 )
      {
        v20 = *(v15 - 1);
        v9 = 0;
      }
      else
      {
        v20 = fmaxf(v19, v13);
        ++v5;
        v9 = 1;
        v13 = v11 + v20;
      }
      *v15 = v20;
      v18 = (float *)((char *)v18 + v16);
      ++v15;
      --v17;
    }
    while ( v17 );
    v12 = v169;
  }
  v22 = 1;
  v168[0] = *v6;
  v21 = v168[0];
  v143 = 1;
  v23 = v168[0] + v11;
  v24 = 1;
  v25 = v10;
  if ( v10 > 1 )
  {
    v26 = 1LL;
    v27 = v8;
    do
    {
      v28 = *(float *)((char *)v6 + v27);
      if ( v24 && v23 > v28 )
      {
        v24 = 0;
        v168[v26] = v168[v26 - 1];
      }
      else
      {
        v29 = fmaxf(v28, v23);
        ++v22;
        v24 = 1;
        v168[v26] = v29;
        v23 = v11 + v29;
      }
      v27 += v8;
      ++v26;
    }
    while ( v26 < v10 );
    v21 = v168[0];
    v143 = v22;
  }
  v30 = *(int *)(v4 + 32);
  v31 = v30 + v14 * v10;
  if ( v31 > *(_QWORD *)(v4 + 16) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2B5u);
    return 2147942414LL;
  }
  v32 = *(_QWORD *)(v4 + 24) + (v30 << 6);
  *(_DWORD *)(v4 + 32) = v31;
  v33 = *((_QWORD *)v7 + 22);
  v150 = v32;
  v34 = *(int *)(v33 + 56);
  if ( (int)v34 + v5 > *(_QWORD *)(v33 + 40) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2B8u);
    return 2147942414LL;
  }
  v35 = *(_QWORD *)(v33 + 48) + 88 * v34;
  *(_DWORD *)(v33 + 56) = v34 + v5;
  v36 = *((_QWORD *)v7 + 22);
  v160 = v35;
  v37 = *(int *)(v36 + 56);
  if ( (int)v37 + v22 > *(_QWORD *)(v36 + 40) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2BBu);
    return 2147942414LL;
  }
  v38 = *(_QWORD *)(v36 + 48) + 88 * v37;
  *(_DWORD *)(v36 + 56) = v37 + v22;
  v39 = *((_QWORD *)v7 + 22);
  v159 = v38;
  v40 = *(_DWORD *)(v39 + 88) + 2 * v5 * v22;
  if ( v40 > *(_QWORD *)(v39 + 72) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2BFu);
    return 2147942414LL;
  }
  v41 = 0LL;
  v156 = *(int *)(v39 + 88);
  v157 = *(_QWORD *)(v39 + 80);
  *(_DWORD *)(v39 + 88) = v40;
  if ( (int)v14 > 0 )
  {
    v42 = 0LL;
    v43 = (_DWORD *)(v35 - 60);
    do
    {
      if ( v42 > 0 && *(&v169 + v42) == v168[v42 + 27] )
      {
        *v43 |= 0x10u;
      }
      else
      {
        v44 = v43 + 15;
        *((float *)&v165 + 1) = *(&v169 + v42);
        *(float *)&v165 = v21;
        v43 += 22;
        v45 = COERCE_DOUBLE(*(_QWORD *)&DOUBLE_1_0 & _xmm);
        if ( v45 < 0.0000011920929 )
        {
          LOWORD(v166) = 1;
          *((_QWORD *)&v165 + 1) = 0x3F80000000000000LL;
        }
        else
        {
          *((_QWORD *)&v165 + 1) = 1065353216LL;
          if ( (float)0.0 >= 0.0000011920929 )
            LOWORD(v166) = 0;
          else
            LOWORD(v166) = 256;
        }
        v46 = v165;
        *(_QWORD *)v44 = *((_QWORD *)v7 + 22);
        v47 = v166;
        *(_OWORD *)(v44 + 2) = v46;
        *((_QWORD *)v44 + 3) = v47;
        *((_QWORD *)v44 + 6) = 0LL;
        *((_QWORD *)v44 + 7) = 0LL;
        v44[16] = 0;
        if ( *((_BYTE *)v44 + 24) )
        {
          v48 = FLOAT_1_4142135;
        }
        else if ( *((_BYTE *)v44 + 25) )
        {
          v48 = 0.0;
        }
        else
        {
          v124 = *((float *)v44 + 4);
          v125 = *((float *)v44 + 5);
          v126 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v124) & _xmm);
          v48 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v125) & _xmm);
          if ( v126 <= v48 )
            v48 = 1.4142135 - v126;
          if ( (float)(v125 * v124) < 0.0 )
            LODWORD(v48) ^= _xmm;
        }
        *((float *)v44 + 8) = v48;
        *((_QWORD *)v44 + 9) = 0LL;
        *((_QWORD *)v44 + 10) = 0LL;
      }
      ++v42;
    }
    while ( v42 < (int)v14 );
  }
  *(_DWORD *)(v35 + 28) |= 1u;
  v164 = v35 + 88LL * (v5 - 1);
  *(_DWORD *)(v164 + 28) |= 2u;
  if ( v25 > 0 )
  {
    v49 = 0LL;
    v50 = (_DWORD *)(v38 - 60);
    while ( v49 > 0 && v168[v49] == v168[v49 - 1] )
    {
      *v50 |= 0x10u;
LABEL_41:
      if ( ++v49 >= v25 )
        goto LABEL_42;
    }
    v51 = v50 + 15;
    *(float *)&v165 = v168[v49];
    *((float *)&v165 + 1) = v12;
    v50 += 22;
    if ( (float)0.0 >= 0.0000011920929 )
    {
      v127 = COERCE_DOUBLE(*(_QWORD *)&DOUBLE_1_0 & _xmm);
      if ( v127 < 0.0000011920929 )
      {
        LOWORD(v166) = 256;
        *((_QWORD *)&v165 + 1) = 1065353216LL;
        goto LABEL_38;
      }
      LOWORD(v166) = 0;
    }
    else
    {
      LOWORD(v166) = 1;
    }
    *((_QWORD *)&v165 + 1) = 0x3F80000000000000LL;
LABEL_38:
    v52 = v165;
    *(_QWORD *)v51 = *((_QWORD *)v7 + 22);
    v53 = v166;
    *(_OWORD *)(v51 + 2) = v52;
    *((_QWORD *)v51 + 3) = v53;
    *((_QWORD *)v51 + 6) = 0LL;
    *((_QWORD *)v51 + 7) = 0LL;
    v51[16] = 0;
    if ( *((_BYTE *)v51 + 24) )
    {
      v54 = FLOAT_1_4142135;
    }
    else if ( *((_BYTE *)v51 + 25) )
    {
      v54 = 0.0;
    }
    else
    {
      v128 = *((float *)v51 + 4);
      v129 = *((float *)v51 + 5);
      v130 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v128) & _xmm);
      v54 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v129) & _xmm);
      if ( v130 <= v54 )
        v54 = 1.4142135 - v130;
      if ( (float)(v129 * v128) < 0.0 )
        LODWORD(v54) ^= _xmm;
    }
    *((float *)v51 + 8) = v54;
    *((_QWORD *)v51 + 9) = 0LL;
    *((_QWORD *)v51 + 10) = 0LL;
    goto LABEL_41;
  }
LABEL_42:
  *(_DWORD *)(v38 + 28) |= 2u;
  v55 = 0;
  v163 = v38 + 88LL * (v22 - 1);
  *(_DWORD *)(v163 + 28) |= 1u;
  if ( (int)v14 > 0 )
  {
    do
    {
      if ( (int)v25 > 0 )
      {
        v56 = (unsigned int)v25;
        v57 = (v41 << 6) + v32 + 32;
        v41 += (unsigned int)v25;
        do
        {
          v57 += 64LL;
          *(_QWORD *)(v57 - 88) = *((_QWORD *)v7 + 19) + *((_DWORD *)v7 + 40) * v55;
          *(_DWORD *)(v57 - 96) = v55++;
          *(_QWORD *)(v57 - 72) = 0LL;
          *(_QWORD *)(v57 - 64) = 0LL;
          *(_DWORD *)(v57 - 56) = 0;
          *(_QWORD *)(v57 - 48) = 0LL;
          --v56;
        }
        while ( v56 );
      }
      --v14;
    }
    while ( v14 );
  }
  v58 = 0;
  v162 = v5;
  v148 = 0;
  v147 = 0;
  v144 = 0;
  if ( v5 <= 0 )
    goto LABEL_119;
  v59 = v25 - 1;
  v60 = v22 - 1LL;
  v155 = 0LL;
  v161 = v60;
  v61 = 0LL;
  v62 = 0LL;
  v153 = 0LL;
  v151 = v25 - 1;
  do
  {
    v63 = v35 + 88 * v61;
    v141 = v63;
    v64 = (*(_BYTE *)(v63 + 28) & 0x10) != 0;
    v136 = v64;
    v65 = v59;
    v154 = v60;
    v146 = v59;
    if ( v60 < 0 )
      goto LABEL_116;
    v66 = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))(v63 + 40);
    v67 = v58 * v25;
    v152 = v58 * v25;
    v68 = v157 + 88 * (v62 + v156);
    v158 = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))(v63 + 40);
    v69 = 88 * v60 + v38 + 40;
    v142 = (Mesh::LinearEdgeList *)v69;
    v144 += 2 * v143;
    do
    {
      v137 = (*(_BYTE *)(v69 - 12) & 0x10) != 0;
      v70 = v32 + ((__int64)(v67 + v65) << 6);
      v145 = v67 + v65;
      v71 = v68;
      v72 = v68 + 72;
      *(_QWORD *)(v68 + 56) = 0LL;
      v73 = v68 + 56;
      *(_QWORD *)(v68 + 72) = 0LL;
      v139 = v68 + 88;
      *(_QWORD *)v68 = v70;
      *(_QWORD *)(v68 + 8) = v63;
      *(_DWORD *)(v68 + 16) = 0;
      *(_QWORD *)(v68 + 80) = 0LL;
      *(_QWORD *)(v68 + 64) = 0LL;
      *(_QWORD *)(v68 + 32) = v70;
      *(_QWORD *)(v68 + 24) = v70;
      *(_QWORD *)(v68 + 48) = v70;
      *(_QWORD *)(v68 + 40) = v70;
      v74 = *(const struct Mesh::MeshEdge **)(v63 + 48);
      if ( v74 )
      {
        v75 = *(const struct Mesh::MeshEdge **)(v63 + 48);
        v76 = **v66;
        if ( v76 == Mesh::LinearEdgeList::GetNode )
          Node = Mesh::LinearEdgeList::GetNode((Mesh::LinearEdgeList *)v66, v75);
        else
          Node = v76((Mesh::LinearEdgeList *)v66, v75);
      }
      else
      {
        Node = (struct Mesh::MeshEdge::MeshEdgeNode *)(v66 + 2);
      }
      v78 = *(const struct Mesh::MeshEdge **)Node;
      if ( *(_QWORD *)Node )
        *((_QWORD *)(**v66)((Mesh::LinearEdgeList *)v66, *(const struct Mesh::MeshEdge **)Node) + 1) = v71;
      v79 = **v66;
      if ( v79 == Mesh::LinearEdgeList::GetNode )
        v80 = (const struct Mesh::MeshEdge **)(v71 + 56);
      else
        v80 = (const struct Mesh::MeshEdge **)v79((Mesh::LinearEdgeList *)v66, (const struct Mesh::MeshEdge *)v71);
      *v80 = v78;
      v81 = **v66;
      if ( v81 != Mesh::LinearEdgeList::GetNode )
        v73 = (__int64)v81((Mesh::LinearEdgeList *)v66, (const struct Mesh::MeshEdge *)v71);
      *(_QWORD *)(v73 + 8) = v74;
      if ( v74 )
      {
        v82 = **v66;
        if ( v82 == Mesh::LinearEdgeList::GetNode )
          v83 = Mesh::LinearEdgeList::GetNode((Mesh::LinearEdgeList *)v66, v74);
        else
          v83 = v82((Mesh::LinearEdgeList *)v66, v74);
        *(_QWORD *)v83 = v71;
      }
      if ( v74 == (const struct Mesh::MeshEdge *)v66[1] )
        v66[1] = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall **)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))v71;
      if ( v78 == (const struct Mesh::MeshEdge *)v66[2] )
        v66[2] = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall **)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))v71;
      ++*((_DWORD *)v66 + 6);
      v84 = *(_QWORD *)(v70 + 32);
      if ( v84 )
        *(_QWORD *)((**(__int64 (__fastcall ***)(__int64, _QWORD))(v70 + 16))(v70 + 16, *(_QWORD *)(v70 + 32)) + 8) = v71;
      v85 = **(struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *))(v70 + 16);
      if ( v85 == Mesh::RadialEdgeList::GetNode )
        v86 = (_QWORD *)(v71 + 72);
      else
        v86 = (_QWORD *)v85((Mesh::RadialEdgeList *)(v70 + 16), (const struct Mesh::MeshEdge *)v71);
      *v86 = v84;
      v87 = **(struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *))(v70 + 16);
      if ( v87 != Mesh::RadialEdgeList::GetNode )
        v72 = (__int64)v87((Mesh::RadialEdgeList *)(v70 + 16), (const struct Mesh::MeshEdge *)v71);
      *(_QWORD *)(v72 + 8) = 0LL;
      if ( !*(_QWORD *)(v70 + 24) )
        *(_QWORD *)(v70 + 24) = v71;
      if ( v84 == *(_QWORD *)(v70 + 32) )
        *(_QWORD *)(v70 + 32) = v71;
      v88 = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))v142;
      ++*(_DWORD *)(v70 + 40);
      if ( (*((_BYTE *)v142 - 12) & 1) != 0 )
      {
        v89 = *((_QWORD *)this + 22);
        *(_DWORD *)(v71 + 16) |= 2u;
        ++*(_DWORD *)(v89 + 96);
      }
      else
      {
        v117 = *((_QWORD *)this + 22);
        v118 = *(_DWORD *)(v141 + 28);
        v119 = *(_DWORD *)(v71 + 16);
        if ( (v118 & 2) != 0 )
        {
          *(_DWORD *)(v71 + 16) = v119 | 8;
          ++*(_DWORD *)(v117 + 100);
        }
        else if ( (v118 & 1) != 0 )
        {
          *(_DWORD *)(v71 + 16) = v119 | 4;
          ++*(_DWORD *)(v117 + 100);
        }
        else
        {
          *(_DWORD *)(v71 + 16) = v119 | 1;
          ++*(_DWORD *)(v117 + 92);
        }
      }
      v90 = *(_DWORD *)(v71 + 16);
      if ( (v90 & 5) != 0 )
      {
        v123 = *((_QWORD *)this + 22);
        if ( (v90 & 0x10A) == 0 )
        {
          *(_DWORD *)(v71 + 16) = v90 | 0x100;
          ++*(_DWORD *)(v123 + 104);
        }
      }
      v153 += 2LL;
      v91 = v139;
      v68 = v139 + 88;
      *(_QWORD *)(v139 + 72) = 0LL;
      v92 = v139 + 72;
      *(_QWORD *)(v139 + 56) = 0LL;
      v93 = v139 + 56;
      v140 = v139 + 88;
      *(_QWORD *)v91 = v70;
      *(_QWORD *)(v91 + 8) = (char *)v142 - 40;
      *(_DWORD *)(v91 + 16) = 0;
      *(_QWORD *)(v91 + 80) = 0LL;
      *(_QWORD *)(v91 + 64) = 0LL;
      *(_QWORD *)(v91 + 32) = v70;
      *(_QWORD *)(v91 + 24) = v70;
      *(_QWORD *)(v91 + 48) = v70;
      *(_QWORD *)(v91 + 40) = v70;
      v94 = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall **)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))*((_QWORD *)v142 + 2);
      if ( v94 )
      {
        v95 = (const struct Mesh::MeshEdge *)*((_QWORD *)v142 + 2);
        v96 = **(struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))v142;
        if ( v96 == Mesh::LinearEdgeList::GetNode )
          v97 = Mesh::LinearEdgeList::GetNode(v142, v95);
        else
          v97 = v96(v142, v95);
        v88 = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))v142;
        v68 = v140;
        *((_QWORD *)v97 + 1) = v91;
      }
      v98 = **v88;
      if ( v98 == Mesh::LinearEdgeList::GetNode )
      {
        v99 = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))(v91 + 56);
      }
      else
      {
        v99 = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))v98((Mesh::LinearEdgeList *)v88, (const struct Mesh::MeshEdge *)v91);
        v88 = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))v142;
        v68 = v140;
      }
      *v99 = v94;
      v100 = **v88;
      if ( v100 != Mesh::LinearEdgeList::GetNode )
      {
        v131 = (__int64)v100((Mesh::LinearEdgeList *)v88, (const struct Mesh::MeshEdge *)v91);
        v88 = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))v142;
        v68 = v140;
        v93 = v131;
      }
      *(_QWORD *)(v93 + 8) = 0LL;
      if ( !v88[1] )
        v88[1] = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall **)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))v91;
      if ( v94 == v88[2] )
        v88[2] = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall **)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))v91;
      ++*((_DWORD *)v88 + 6);
      v101 = *(_QWORD *)(v70 + 32);
      if ( v101 )
      {
        v102 = **(struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *))(v70 + 16);
        if ( v102 == Mesh::RadialEdgeList::GetNode )
        {
          v103 = v101 + 72;
        }
        else
        {
          v103 = (__int64)v102((Mesh::RadialEdgeList *)(v70 + 16), *(const struct Mesh::MeshEdge **)(v70 + 32));
          v88 = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))v142;
          v68 = v140;
        }
        *(_QWORD *)(v103 + 8) = v91;
      }
      v104 = **(struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *))(v70 + 16);
      if ( v104 == Mesh::RadialEdgeList::GetNode )
      {
        v105 = (_QWORD *)(v91 + 72);
      }
      else
      {
        v105 = (_QWORD *)v104((Mesh::RadialEdgeList *)(v70 + 16), (const struct Mesh::MeshEdge *)v91);
        v88 = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))v142;
        v68 = v140;
      }
      *v105 = v101;
      v106 = **(struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *))(v70 + 16);
      if ( v106 != Mesh::RadialEdgeList::GetNode )
      {
        v132 = ((__int64 (__fastcall *)(__int64, __int64, struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *)))v106)(
                 v70 + 16,
                 v91,
                 v88);
        v88 = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))v142;
        v68 = v140;
        v92 = v132;
      }
      *(_QWORD *)(v92 + 8) = 0LL;
      if ( !*(_QWORD *)(v70 + 24) )
        *(_QWORD *)(v70 + 24) = v91;
      if ( v101 == *(_QWORD *)(v70 + 32) )
        *(_QWORD *)(v70 + 32) = v91;
      v63 = v141;
      ++*(_DWORD *)(v70 + 40);
      v7 = this;
      if ( (*(_BYTE *)(v141 + 28) & 2) != 0 )
      {
        v107 = *((_QWORD *)this + 22);
        *(_DWORD *)(v91 + 16) |= 2u;
        ++*(_DWORD *)(v107 + 96);
        goto LABEL_107;
      }
      v120 = *((_DWORD *)v88 - 3);
      v121 = *((_QWORD *)this + 22);
      v122 = *(_DWORD *)(v91 + 16);
      if ( (v120 & 1) != 0 )
      {
        *(_DWORD *)(v91 + 16) = v122 | 4;
        ++*(_DWORD *)(v121 + 100);
LABEL_129:
        v63 = v141;
        goto LABEL_107;
      }
      if ( (v120 & 2) == 0 )
      {
        *(_DWORD *)(v91 + 16) = v122 | 1;
        ++*(_DWORD *)(v121 + 92);
        goto LABEL_129;
      }
      *(_DWORD *)(v91 + 16) = v122 | 8;
      ++*(_DWORD *)(v121 + 100);
      v63 = v141;
LABEL_107:
      v64 = v136;
      if ( v136 )
      {
        ++*(_DWORD *)(*(_QWORD *)v71 + 48LL);
        v133 = v150 + ((__int64)(v145 + a4) << 6);
        *(_QWORD *)(v71 + 48) = v133;
        *(_QWORD *)(v71 + 40) = v133;
        *(_QWORD *)(v91 + 32) = v133;
        *(_QWORD *)(v91 + 48) = v133;
        v63 = v141;
      }
      if ( v137 )
      {
        ++*(_DWORD *)(*(_QWORD *)v91 + 48LL);
        v134 = v150 + ((__int64)(v145 - 1) << 6);
        *(_QWORD *)(v91 + 48) = v134;
        *(_QWORD *)(v91 + 40) = v134;
        *(_QWORD *)(v71 + 24) = v134;
        *(_QWORD *)(v71 + 40) = v134;
        v63 = v141;
      }
      if ( v136 )
      {
        if ( !v137 )
        {
LABEL_113:
          v108 = 1;
          goto LABEL_114;
        }
        v135 = v150 + ((__int64)(v145 + v151) << 6);
        *(_QWORD *)(v71 + 40) = v135;
        *(_QWORD *)(v91 + 48) = v135;
        v63 = v141;
      }
      if ( !v137 )
        goto LABEL_113;
      v108 = 2;
LABEL_114:
      v69 = (__int64)(v88 - 11);
      v65 = v146 - v108;
      v66 = v158;
      v32 = v150;
      v109 = --v154 < 0;
      v67 = v152;
      v146 -= v108;
      v142 = (Mesh::LinearEdgeList *)v69;
    }
    while ( !v109 );
    v38 = v159;
    v35 = v160;
    v61 = v155;
    LODWORD(v25) = a4;
    v62 = v153;
    v58 = v147;
    v60 = v161;
LABEL_116:
    if ( v64 )
      v110 = 2;
    else
      v110 = 1;
    ++v148;
    v58 += v110;
    ++v61;
    v147 = v58;
    v59 = v25 - 1;
    v155 = v61;
  }
  while ( v61 < v162 );
LABEL_119:
  v111 = (__int64 *)&v165;
  v112 = v164;
  v166 = v163;
  v113 = 0;
  *(_QWORD *)&v165 = v38;
  *((_QWORD *)&v165 + 1) = v35;
  v167 = v164;
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
    *(_QWORD *)(v115 + 80) = *((_QWORD *)&v165 + (v113 & 3));
  }
  while ( (unsigned int)v113 < 4 );
  result = 0LL;
  *(_QWORD *)(*((_QWORD *)v7 + 22) + 64LL) = v38;
  return result;
}
