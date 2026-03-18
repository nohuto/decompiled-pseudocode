/*
 * XREFs of ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x180065CF0
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800647B0 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?InitMeshGraph@Mesh@@AEAAJXZ @ 0x180154700 (-InitMeshGraph@Mesh@@AEAAJXZ.c)
 * Callees:
 *     ?GetNode@LinearEdgeList@Mesh@@MEBAPEAUMeshEdgeNode@MeshEdge@2@PEBU42@@Z @ 0x180066BC0 (-GetNode@LinearEdgeList@Mesh@@MEBAPEAUMeshEdgeNode@MeshEdge@2@PEBU42@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Mesh::BuildGrid(Mesh *this, __int64 a2, int a3, int a4)
{
  __int64 v4; // rdx
  __int64 v5; // rsi
  float *v6; // r10
  Mesh *v7; // r15
  int v8; // edi
  char v9; // r14
  __int64 v10; // r12
  float v11; // xmm2_4
  float v12; // xmm4_4
  float v13; // xmm0_4
  __int64 v14; // r11
  float *v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  float *v18; // rcx
  float v19; // xmm1_4
  float v20; // xmm3_4
  int v21; // ebx
  float v22; // xmm0_4
  char v23; // r9
  __int64 v24; // r14
  __int64 v25; // rcx
  int v26; // r8d
  float v27; // xmm1_4
  __int64 v28; // rcx
  int v29; // r8d
  __int64 v30; // r12
  __int64 v31; // rcx
  __int64 v32; // r12
  __int64 v33; // rdx
  __int64 v34; // r13
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rdi
  __int64 v38; // rcx
  __int64 v39; // rdx
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
  __int64 v58; // rcx
  int v59; // r9d
  int v60; // r10d
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // r8
  bool v65; // r11
  int v66; // r9d
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***v67)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *); // rcx
  __int64 v68; // rdx
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***v69)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *); // r13
  __int64 v70; // r15
  const struct Mesh::MeshEdge **v71; // rsi
  __int64 v72; // rdi
  __int64 v73; // r12
  const struct Mesh::MeshEdge *v74; // rbx
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v75)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  struct Mesh::MeshEdge::MeshEdgeNode *Node; // rax
  const struct Mesh::MeshEdge *v77; // r14
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v78)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  const struct Mesh::MeshEdge **v79; // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v80)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v81)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  struct Mesh::MeshEdge::MeshEdgeNode *v82; // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***v83)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *); // rbx
  __int64 v84; // rsi
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v85)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  _QWORD *v86; // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v87)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  __int64 v88; // rax
  int v89; // eax
  __int64 v90; // rsi
  __int64 v91; // r12
  __int64 v92; // r14
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall **v93)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *); // rdi
  const struct Mesh::MeshEdge *v94; // rdx
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v95)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  struct Mesh::MeshEdge::MeshEdgeNode *v96; // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v97)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***v98)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v99)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall **v100)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *); // rdi
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v101)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  __int64 v102; // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v103)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***v104)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v105)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *); // rax
  __int64 v106; // rax
  int v107; // eax
  bool v108; // sf
  int v109; // eax
  __int64 *v110; // r8
  __int64 v111; // r9
  int v112; // eax
  __int64 v113; // rcx
  __int64 v114; // rdx
  __int64 result; // rax
  int v116; // eax
  bool v117; // zf
  __int64 v118; // rax
  int v119; // eax
  __int64 v120; // rax
  __int64 v121; // rcx
  __int64 v122; // rax
  __int64 v123; // rax
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
  int v140; // [rsp+40h] [rbp-C0h]
  Mesh::LinearEdgeList *v141; // [rsp+48h] [rbp-B8h]
  int v142; // [rsp+50h] [rbp-B0h]
  int v143; // [rsp+54h] [rbp-ACh]
  int v144; // [rsp+58h] [rbp-A8h]
  int v145; // [rsp+5Ch] [rbp-A4h]
  int v146; // [rsp+60h] [rbp-A0h]
  int v147; // [rsp+64h] [rbp-9Ch]
  __int64 v148; // [rsp+68h] [rbp-98h]
  __int64 v149; // [rsp+68h] [rbp-98h]
  __int64 v150; // [rsp+70h] [rbp-90h]
  __int64 v151; // [rsp+78h] [rbp-88h]
  __int64 v152; // [rsp+80h] [rbp-80h]
  __int64 v153; // [rsp+88h] [rbp-78h]
  __int64 v154; // [rsp+90h] [rbp-70h]
  __int64 v155; // [rsp+98h] [rbp-68h]
  __int64 v156; // [rsp+A0h] [rbp-60h]
  __int64 v157; // [rsp+A8h] [rbp-58h]
  __int64 v158; // [rsp+B0h] [rbp-50h]
  int v159; // [rsp+B8h] [rbp-48h]
  __int64 v160; // [rsp+C0h] [rbp-40h]
  __int64 v161; // [rsp+C8h] [rbp-38h]
  __int64 v162; // [rsp+D0h] [rbp-30h]
  __int128 v163; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v164; // [rsp+E8h] [rbp-18h]
  __int64 v165; // [rsp+F0h] [rbp-10h]
  float v167[28]; // [rsp+100h] [rbp+0h]
  float v168; // [rsp+170h] [rbp+70h]
  char v169; // [rsp+174h] [rbp+74h] BYREF

  v4 = *((_QWORD *)this + 22);
  LODWORD(v5) = 1;
  v6 = (float *)*((_QWORD *)this + 19);
  v7 = this;
  v8 = *((_DWORD *)this + 40);
  v9 = 1;
  v10 = a4;
  v11 = *(float *)(v4 + 4);
  v12 = v6[1];
  v168 = v12;
  v13 = v11 + v12;
  v14 = (unsigned int)a3;
  if ( a3 > 1 )
  {
    v15 = (float *)&v169;
    v16 = (unsigned int)(v14 - 1);
    v17 = (int)v10 * v8;
    v18 = (float *)((char *)v6 + v17 + 4);
    do
    {
      v19 = *v18;
      if ( v9 && v13 > v19 )
      {
        v9 = 0;
        *v15 = *(v15 - 1);
      }
      else
      {
        if ( v19 <= v13 )
          v19 = v13;
        *v15 = v19;
        v13 = v11 + v19;
        LODWORD(v5) = v5 + 1;
        v9 = 1;
      }
      v18 = (float *)((char *)v18 + v17);
      ++v15;
      --v16;
    }
    while ( v16 );
    v12 = v168;
  }
  v21 = 1;
  v167[0] = *v6;
  v20 = v167[0];
  v22 = v167[0] + v11;
  v23 = 1;
  v24 = v10;
  if ( v10 > 1 )
  {
    v25 = 1LL;
    v26 = v8;
    do
    {
      v27 = *(float *)((char *)v6 + v26);
      if ( v23 && v22 > v27 )
      {
        v23 = 0;
        v167[v25] = v167[v25 - 1];
      }
      else
      {
        if ( v27 <= v22 )
          v27 = v22;
        v167[v25] = v27;
        v22 = v11 + v27;
        ++v21;
        v23 = 1;
      }
      v26 += v8;
      ++v25;
    }
    while ( v25 < v10 );
    v20 = v167[0];
  }
  v28 = *(int *)(v4 + 32);
  v29 = v28 + v14 * v10;
  if ( v29 > *(_QWORD *)(v4 + 24) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x301u);
    return 2147942414LL;
  }
  *(_DWORD *)(v4 + 32) = v29;
  v30 = v28;
  v31 = *((_QWORD *)v7 + 22);
  v32 = *(_QWORD *)(v4 + 16) + (v30 << 6);
  v152 = v32;
  v33 = *(int *)(v31 + 56);
  if ( (int)v33 + (int)v5 > *(_QWORD *)(v31 + 48) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x304u);
    return 2147942414LL;
  }
  *(_DWORD *)(v31 + 56) = v33 + v5;
  v34 = *(_QWORD *)(v31 + 40) + 88 * v33;
  v35 = *((_QWORD *)v7 + 22);
  v157 = v34;
  v36 = *(int *)(v35 + 56);
  if ( (int)v36 + v21 > *(_QWORD *)(v35 + 48) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x307u);
    return 2147942414LL;
  }
  *(_DWORD *)(v35 + 56) = v36 + v21;
  v37 = *(_QWORD *)(v35 + 40) + 88 * v36;
  v38 = *((_QWORD *)v7 + 22);
  v156 = v37;
  v39 = *(int *)(v38 + 88);
  v40 = v39 + 2 * v5 * v21;
  if ( v40 > *(_QWORD *)(v38 + 80) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x30Bu);
    return 2147942414LL;
  }
  v41 = 0LL;
  *(_DWORD *)(v38 + 88) = v40;
  v155 = *(_QWORD *)(v38 + 72) + 88 * v39;
  if ( (int)v14 > 0 )
  {
    v42 = 0LL;
    v43 = (_DWORD *)(v34 - 60);
    do
    {
      if ( v42 > 0 && *(&v168 + v42) == v167[v42 + 27] )
      {
        *v43 |= 0x10u;
      }
      else
      {
        v44 = v43 + 15;
        *((float *)&v163 + 1) = *(&v168 + v42);
        *(float *)&v163 = v20;
        v43 += 22;
        v45 = COERCE_DOUBLE(*(_QWORD *)&DOUBLE_1_0 & _xmm);
        if ( v45 < 0.0000011920929 )
        {
          LOWORD(v164) = 1;
          *((_QWORD *)&v163 + 1) = 0x3F80000000000000LL;
        }
        else
        {
          *((_QWORD *)&v163 + 1) = 1065353216LL;
          if ( (float)0.0 >= 0.0000011920929 )
            LOWORD(v164) = 0;
          else
            LOWORD(v164) = 256;
        }
        v46 = v163;
        *(_QWORD *)v44 = *((_QWORD *)v7 + 22);
        v47 = v164;
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
  *(_DWORD *)(v34 + 28) |= 1u;
  v162 = v34 + 88LL * ((int)v5 - 1);
  *(_DWORD *)(v162 + 28) |= 2u;
  if ( v24 > 0 )
  {
    v49 = 0LL;
    v50 = (_DWORD *)(v37 - 60);
    while ( v49 > 0 && v167[v49] == v167[v49 - 1] )
    {
      *v50 |= 0x10u;
LABEL_45:
      if ( ++v49 >= v24 )
        goto LABEL_46;
    }
    v51 = v50 + 15;
    *(float *)&v163 = v167[v49];
    *((float *)&v163 + 1) = v12;
    v50 += 22;
    if ( (float)0.0 >= 0.0000011920929 )
    {
      v127 = COERCE_DOUBLE(*(_QWORD *)&DOUBLE_1_0 & _xmm);
      if ( v127 < 0.0000011920929 )
      {
        LOWORD(v164) = 256;
        *((_QWORD *)&v163 + 1) = 1065353216LL;
        goto LABEL_42;
      }
      LOWORD(v164) = 0;
    }
    else
    {
      LOWORD(v164) = 1;
    }
    *((_QWORD *)&v163 + 1) = 0x3F80000000000000LL;
LABEL_42:
    v52 = v163;
    *(_QWORD *)v51 = *((_QWORD *)v7 + 22);
    v53 = v164;
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
    goto LABEL_45;
  }
LABEL_46:
  *(_DWORD *)(v37 + 28) |= 2u;
  v161 = v37 + 88LL * (v21 - 1);
  *(_DWORD *)(v161 + 28) |= 1u;
  v55 = 0;
  if ( (int)v14 > 0 )
  {
    do
    {
      if ( (int)v24 > 0 )
      {
        v56 = (unsigned int)v24;
        v57 = (v41 << 6) + v32 + 32;
        v41 += (unsigned int)v24;
        do
        {
          v57 += 64LL;
          v58 = *((_QWORD *)v7 + 19) + *((_DWORD *)v7 + 40) * v55;
          *(_DWORD *)(v57 - 96) = v55++;
          *(_QWORD *)(v57 - 88) = v58;
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
  v5 = (int)v5;
  v59 = 0;
  v145 = 0;
  v140 = 0;
  v142 = 0;
  v158 = v5;
  if ( (int)v5 > 0 )
  {
    v60 = v24 - 1;
    v61 = 0LL;
    v150 = 0LL;
    v62 = 0LL;
    v154 = 0LL;
    v159 = v21;
    v63 = v21 - 1LL;
    v146 = v24 - 1;
    v160 = v63;
    while ( 1 )
    {
      v64 = v34 + 88 * v62;
      v151 = v64;
      v65 = (*(_BYTE *)(v64 + 28) & 0x10) != 0;
      v136 = v65;
      v153 = v63;
      v144 = v60;
      if ( v63 < 0 )
        goto LABEL_121;
      v66 = v140 * v24;
      v67 = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))(v64 + 40);
      v141 = (Mesh::LinearEdgeList *)(v64 + 40);
      v68 = v155 + 88 * v61;
      v69 = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))(88 * v63 + v37 + 40);
      v147 = v140 * v24;
      v142 += 2 * v21;
      do
      {
        v137 = (*((_BYTE *)v69 - 12) & 0x10) != 0;
        v70 = v68;
        v71 = (const struct Mesh::MeshEdge **)(v68 + 56);
        v72 = v32 + ((__int64)(v60 + v66) << 6);
        *(_QWORD *)(v68 + 72) = 0LL;
        *(_QWORD *)v68 = v72;
        v73 = v68 + 72;
        *(_QWORD *)(v68 + 8) = v64;
        *(_DWORD *)(v68 + 16) = 0;
        *(_QWORD *)(v68 + 80) = 0LL;
        *(_QWORD *)(v68 + 56) = 0LL;
        *(_QWORD *)(v68 + 64) = 0LL;
        *(_QWORD *)(v68 + 32) = v72;
        *(_QWORD *)(v68 + 24) = v72;
        *(_QWORD *)(v68 + 48) = v72;
        *(_QWORD *)(v68 + 40) = v72;
        v74 = *(const struct Mesh::MeshEdge **)(v64 + 48);
        v143 = v60 + v66;
        v148 = v68 + 88;
        if ( v74 )
        {
          v75 = **v67;
          if ( v75 == Mesh::LinearEdgeList::GetNode )
            Node = Mesh::LinearEdgeList::GetNode((Mesh::LinearEdgeList *)v67, v74);
          else
            Node = v75((Mesh::LinearEdgeList *)v67, v74);
          v67 = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))v141;
        }
        else
        {
          Node = (struct Mesh::MeshEdge::MeshEdgeNode *)(v67 + 2);
        }
        v77 = *(const struct Mesh::MeshEdge **)Node;
        if ( *(_QWORD *)Node )
        {
          v131 = (__int64)(**v67)((Mesh::LinearEdgeList *)v67, *(const struct Mesh::MeshEdge **)Node);
          v67 = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))v141;
          *(_QWORD *)(v131 + 8) = v70;
        }
        v78 = **v67;
        if ( v78 == Mesh::LinearEdgeList::GetNode )
        {
          v79 = v71;
        }
        else
        {
          v79 = (const struct Mesh::MeshEdge **)v78((Mesh::LinearEdgeList *)v67, (const struct Mesh::MeshEdge *)v70);
          v67 = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))v141;
        }
        *v79 = v77;
        v80 = **v67;
        if ( v80 != Mesh::LinearEdgeList::GetNode )
        {
          v132 = (__int64)v80((Mesh::LinearEdgeList *)v67, (const struct Mesh::MeshEdge *)v70);
          v67 = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))v141;
          v71 = (const struct Mesh::MeshEdge **)v132;
        }
        v71[1] = v74;
        if ( v74 )
        {
          v81 = **v67;
          if ( v81 == Mesh::LinearEdgeList::GetNode )
            v82 = Mesh::LinearEdgeList::GetNode((Mesh::LinearEdgeList *)v67, v74);
          else
            v82 = v81((Mesh::LinearEdgeList *)v67, v74);
          v67 = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))v141;
          *(_QWORD *)v82 = v70;
        }
        if ( v74 == (const struct Mesh::MeshEdge *)v67[1] )
          v67[1] = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall **)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))v70;
        if ( v77 == (const struct Mesh::MeshEdge *)v67[2] )
          v67[2] = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall **)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))v70;
        ++*((_DWORD *)v67 + 6);
        v83 = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *))(v72 + 16);
        v84 = *(_QWORD *)(v72 + 32);
        if ( v84 )
          *((_QWORD *)(**v83)((Mesh::RadialEdgeList *)(v72 + 16), *(const struct Mesh::MeshEdge **)(v72 + 32)) + 1) = v70;
        v85 = **v83;
        if ( v85 == Mesh::RadialEdgeList::GetNode )
          v86 = (_QWORD *)(v70 + 72);
        else
          v86 = (_QWORD *)v85((Mesh::RadialEdgeList *)(v72 + 16), (const struct Mesh::MeshEdge *)v70);
        *v86 = v84;
        v87 = **v83;
        if ( v87 != Mesh::RadialEdgeList::GetNode )
          v73 = (__int64)v87((Mesh::RadialEdgeList *)(v72 + 16), (const struct Mesh::MeshEdge *)v70);
        *(_QWORD *)(v73 + 8) = 0LL;
        if ( !*(_QWORD *)(v72 + 24) )
          *(_QWORD *)(v72 + 24) = v70;
        if ( v84 == *(_QWORD *)(v72 + 32) )
          *(_QWORD *)(v72 + 32) = v70;
        ++*(_DWORD *)(v72 + 40);
        if ( (*((_BYTE *)v69 - 12) & 1) != 0 )
        {
          v88 = *((_QWORD *)this + 22);
          *(_DWORD *)(v70 + 16) |= 2u;
          ++*(_DWORD *)(v88 + 96);
        }
        else
        {
          v116 = *(_DWORD *)(v151 + 28);
          if ( (v116 & 2) != 0 )
          {
            v122 = *((_QWORD *)this + 22);
            *(_DWORD *)(v70 + 16) |= 8u;
            ++*(_DWORD *)(v122 + 100);
          }
          else
          {
            v117 = (v116 & 1) == 0;
            v118 = *((_QWORD *)this + 22);
            if ( v117 )
            {
              *(_DWORD *)(v70 + 16) |= 1u;
              ++*(_DWORD *)(v118 + 92);
            }
            else
            {
              *(_DWORD *)(v70 + 16) |= 4u;
              ++*(_DWORD *)(v118 + 100);
            }
          }
        }
        v89 = *(_DWORD *)(v70 + 16);
        if ( (v89 & 5) != 0 )
        {
          v121 = *((_QWORD *)this + 22);
          if ( (v89 & 0x10A) == 0 )
          {
            *(_DWORD *)(v70 + 16) = v89 | 0x100;
            ++*(_DWORD *)(v121 + 104);
          }
        }
        v150 += 2LL;
        v90 = v148;
        *(_QWORD *)(v148 + 72) = 0LL;
        v149 = v148 + 88;
        v91 = v90 + 72;
        v92 = v90 + 56;
        *(_QWORD *)(v90 + 56) = 0LL;
        *(_QWORD *)v90 = v72;
        *(_QWORD *)(v90 + 8) = v69 - 5;
        *(_DWORD *)(v90 + 16) = 0;
        *(_QWORD *)(v90 + 80) = 0LL;
        *(_QWORD *)(v90 + 64) = 0LL;
        *(_QWORD *)(v90 + 32) = v72;
        *(_QWORD *)(v90 + 24) = v72;
        *(_QWORD *)(v90 + 48) = v72;
        *(_QWORD *)(v90 + 40) = v72;
        v93 = v69[2];
        if ( v93 )
        {
          v94 = (const struct Mesh::MeshEdge *)v69[2];
          v95 = **v69;
          if ( v95 == Mesh::LinearEdgeList::GetNode )
            v96 = Mesh::LinearEdgeList::GetNode((Mesh::LinearEdgeList *)v69, v94);
          else
            v96 = v95((Mesh::LinearEdgeList *)v69, v94);
          *((_QWORD *)v96 + 1) = v90;
        }
        v97 = **v69;
        if ( v97 == Mesh::LinearEdgeList::GetNode )
          v98 = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))(v90 + 56);
        else
          v98 = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))v97((Mesh::LinearEdgeList *)v69, (const struct Mesh::MeshEdge *)v90);
        *v98 = v93;
        v99 = **v69;
        if ( v99 != Mesh::LinearEdgeList::GetNode )
          v92 = (__int64)v99((Mesh::LinearEdgeList *)v69, (const struct Mesh::MeshEdge *)v90);
        *(_QWORD *)(v92 + 8) = 0LL;
        if ( !v69[1] )
          v69[1] = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall **)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))v90;
        if ( v93 == v69[2] )
          v69[2] = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall **)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))v90;
        ++*((_DWORD *)v69 + 6);
        v100 = v83[2];
        if ( v100 )
        {
          v101 = **v83;
          if ( v101 == Mesh::RadialEdgeList::GetNode )
            v102 = (__int64)(v100 + 9);
          else
            v102 = (__int64)v101((Mesh::RadialEdgeList *)v83, (const struct Mesh::MeshEdge *)v83[2]);
          *(_QWORD *)(v102 + 8) = v90;
        }
        v103 = **v83;
        if ( v103 == Mesh::RadialEdgeList::GetNode )
          v104 = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *))(v90 + 72);
        else
          v104 = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *))v103((Mesh::RadialEdgeList *)v83, (const struct Mesh::MeshEdge *)v90);
        *v104 = v100;
        v105 = **v83;
        if ( v105 != Mesh::RadialEdgeList::GetNode )
          v91 = (__int64)v105((Mesh::RadialEdgeList *)v83, (const struct Mesh::MeshEdge *)v90);
        *(_QWORD *)(v91 + 8) = 0LL;
        if ( !v83[1] )
          v83[1] = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall **)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *))v90;
        if ( v100 == v83[2] )
          v83[2] = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall **)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *))v90;
        v64 = v151;
        ++*((_DWORD *)v83 + 6);
        if ( (*(_BYTE *)(v151 + 28) & 2) != 0 )
        {
          v106 = *((_QWORD *)this + 22);
          *(_DWORD *)(v90 + 16) |= 2u;
          ++*(_DWORD *)(v106 + 96);
        }
        else
        {
          v119 = *((_DWORD *)v69 - 3);
          if ( (v119 & 1) != 0 )
          {
            v120 = *((_QWORD *)this + 22);
            *(_DWORD *)(v90 + 16) |= 4u;
            ++*(_DWORD *)(v120 + 100);
          }
          else
          {
            v117 = (v119 & 2) == 0;
            v123 = *((_QWORD *)this + 22);
            if ( v117 )
            {
              *(_DWORD *)(v90 + 16) |= 1u;
              ++*(_DWORD *)(v123 + 92);
            }
            else
            {
              *(_DWORD *)(v90 + 16) |= 8u;
              ++*(_DWORD *)(v123 + 100);
            }
          }
        }
        v65 = v136;
        v32 = v152;
        if ( v136 )
        {
          ++*(_DWORD *)(*(_QWORD *)v70 + 48LL);
          v133 = v152 + ((__int64)(v143 + a4) << 6);
          *(_QWORD *)(v70 + 48) = v133;
          *(_QWORD *)(v70 + 40) = v133;
          *(_QWORD *)(v90 + 32) = v133;
          *(_QWORD *)(v90 + 48) = v133;
        }
        if ( v137 )
        {
          ++*(_DWORD *)(*(_QWORD *)v90 + 48LL);
          v134 = v152 + ((__int64)(v143 - 1) << 6);
          *(_QWORD *)(v90 + 48) = v134;
          *(_QWORD *)(v90 + 40) = v134;
          *(_QWORD *)(v70 + 24) = v134;
          *(_QWORD *)(v70 + 40) = v134;
        }
        if ( v136 )
        {
          if ( !v137 )
          {
LABEL_118:
            v107 = 1;
            goto LABEL_119;
          }
          v135 = v152 + ((__int64)(v143 + v146) << 6);
          *(_QWORD *)(v70 + 40) = v135;
          *(_QWORD *)(v90 + 48) = v135;
        }
        if ( !v137 )
          goto LABEL_118;
        v107 = 2;
LABEL_119:
        v69 -= 11;
        v60 = v144 - v107;
        v67 = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::LinearEdgeList *__hidden, const struct Mesh::MeshEdge *))v141;
        v68 = v149;
        v108 = --v153 < 0;
        v66 = v147;
        v144 -= v107;
      }
      while ( !v108 );
      v37 = v156;
      v34 = v157;
      v62 = v154;
      LODWORD(v24) = a4;
      v61 = v150;
      v59 = v140;
      v5 = v158;
      v21 = v159;
LABEL_121:
      if ( v65 )
        v109 = 2;
      else
        v109 = 1;
      ++v145;
      v60 = v24 - 1;
      v59 += v109;
      ++v62;
      v63 = v160;
      v140 = v59;
      v154 = v62;
      if ( v62 >= v5 )
      {
        v7 = this;
        break;
      }
    }
  }
  v110 = (__int64 *)&v163;
  v111 = v162;
  v164 = v161;
  v112 = 0;
  *(_QWORD *)&v163 = v37;
  *((_QWORD *)&v163 + 1) = v34;
  v165 = v162;
  do
  {
    if ( v112 <= 0 )
      v113 = v111;
    else
      v113 = *(v110 - 1);
    v114 = *v110;
    ++v112;
    ++v110;
    *(_QWORD *)(v114 + 72) = v113;
    *(_QWORD *)(v114 + 80) = *((_QWORD *)&v163 + (v112 & 3));
  }
  while ( (unsigned int)v112 < 4 );
  result = 0LL;
  *(_QWORD *)(*((_QWORD *)v7 + 22) + 64LL) = v37;
  return result;
}
