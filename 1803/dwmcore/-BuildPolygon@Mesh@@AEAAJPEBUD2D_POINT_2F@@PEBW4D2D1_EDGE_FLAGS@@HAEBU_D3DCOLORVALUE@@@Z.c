/*
 * XREFs of ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x18017CF78
 * Callers:
 *     ?CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x18017DA20 (-CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z @ 0x1800B32DC (--$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800DD3E3 (sqrtf_0.c)
 *     ?AllocateVertex@Mesh@@AEAAJHPEAH@Z @ 0x18013F5C8 (-AllocateVertex@Mesh@@AEAAJHPEAH@Z.c)
 *     ?AllocateEdge@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshEdge@2@@Z @ 0x18013F72C (-AllocateEdge@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshEdge@2@@Z.c)
 *     ?AllocateLine@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshLine@2@@Z @ 0x18013F758 (-AllocateLine@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshLine@2@@Z.c)
 *     ?AllocateVertex@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshVertex@2@@Z @ 0x18013F784 (-AllocateVertex@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshVertex@2@@Z.c)
 *     ?AddPolygon@MeshGraph@Mesh@@QEAAJPEAUMeshEdge@2@@Z @ 0x18013F7B0 (-AddPolygon@MeshGraph@Mesh@@QEAAJPEAUMeshEdge@2@@Z.c)
 *     ?ComputeNormalizedLine@MeshGraph@Mesh@@SA?AVLine2d@2@AEBUD2D_VECTOR_2F@@0@Z @ 0x18017D814 (-ComputeNormalizedLine@MeshGraph@Mesh@@SA-AVLine2d@2@AEBUD2D_VECTOR_2F@@0@Z.c)
 *     ?ComputeRadialIndex@MeshGraph@Mesh@@SAMAEBVLine2d@2@@Z @ 0x18017D928 (-ComputeRadialIndex@MeshGraph@Mesh@@SAMAEBVLine2d@2@@Z.c)
 *     ?InsertEdge@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@@Z @ 0x18017DD54 (-InsertEdge@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@@Z.c)
 */

__int64 __fastcall Mesh::BuildPolygon(
        Mesh::MeshGraph **this,
        const struct D2D_POINT_2F *a2,
        const enum D2D1_EDGE_FLAGS *a3,
        int a4,
        const struct _D3DCOLORVALUE *a5)
{
  int v5; // r8d
  unsigned int v7; // esi
  int v8; // r12d
  __int64 v9; // rcx
  unsigned int v10; // r15d
  struct Mesh::MeshVertex *v11; // rax
  unsigned int v12; // r14d
  int v13; // r13d
  struct Mesh::MeshVertex *v14; // rbx
  __m128 x_low; // xmm10
  struct Mesh::MeshVertex *v16; // r9
  __m128 y_low; // xmm11
  __int64 v18; // rax
  float v19; // xmm6_4
  float v20; // xmm9_4
  float v21; // xmm7_4
  float v22; // xmm8_4
  float v23; // xmm0_4
  int Vertex; // eax
  int v25; // edx
  int v26; // ebx
  Mesh::MeshGraph *v27; // rcx
  Mesh::MeshGraph *v28; // rcx
  Mesh::MeshGraph *v29; // rcx
  unsigned int v30; // ecx
  __int64 v31; // r9
  int v32; // r11d
  int v33; // r8d
  char *v34; // rcx
  char *v35; // rdx
  int v36; // xmm0_4
  int v37; // xmm1_4
  unsigned int v38; // r8d
  _QWORD *v39; // r13
  char *v40; // r14
  __int64 v41; // r10
  char *v42; // rsi
  __int64 v43; // rcx
  unsigned int v44; // eax
  unsigned __int64 v45; // xmm0_8
  int v46; // eax
  _DWORD *v47; // r9
  unsigned int v48; // eax
  int v49; // eax
  int v50; // r9d
  float *v51; // rbx
  float v52; // xmm7_4
  float v53; // xmm6_4
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r15
  float *v57; // rax
  char *v58; // r15
  float v59; // xmm8_4
  float v60; // xmm9_4
  float v61; // xmm7_4
  char *v62; // r12
  float v63; // xmm6_4
  float v64; // xmm0_4
  float *v65; // rax
  float v66; // xmm1_4
  __int128 v67; // xmm0
  int v68; // eax
  __int64 v69; // rdx
  int v70; // eax
  Mesh::MeshGraph *v71; // rax
  Mesh::MeshGraph *v72; // rax
  Mesh::MeshGraph *v73; // rax
  Mesh::MeshGraph *v74; // rax
  __int64 v75; // rdx
  unsigned int v77; // [rsp+28h] [rbp-E0h]
  int v78[2]; // [rsp+38h] [rbp-D0h] BYREF
  struct Mesh::MeshVertex *v79; // [rsp+40h] [rbp-C8h] BYREF
  struct Mesh::MeshLine *v80; // [rsp+48h] [rbp-C0h] BYREF
  struct Mesh::MeshEdge *v81; // [rsp+50h] [rbp-B8h] BYREF
  struct Mesh::MeshVertex *v82; // [rsp+58h] [rbp-B0h] BYREF
  char *v83; // [rsp+60h] [rbp-A8h] BYREF
  struct Mesh::MeshVertex *v84; // [rsp+68h] [rbp-A0h]
  _QWORD v85[3]; // [rsp+70h] [rbp-98h] BYREF
  int v86; // [rsp+88h] [rbp-80h]
  const enum D2D1_EDGE_FLAGS *v87; // [rsp+90h] [rbp-78h]
  _QWORD v88[2]; // [rsp+98h] [rbp-70h] BYREF
  int v89; // [rsp+A8h] [rbp-60h]
  unsigned int v90; // [rsp+ACh] [rbp-5Ch]
  unsigned int v91; // [rsp+B0h] [rbp-58h]
  _BYTE v92[32]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v93[2]; // [rsp+D8h] [rbp-30h] BYREF
  int v94; // [rsp+E8h] [rbp-20h]
  int v95[3]; // [rsp+ECh] [rbp-1Ch]
  _BYTE v96[64]; // [rsp+F8h] [rbp-10h] BYREF

  v87 = a3;
  v93[0] = v96;
  v5 = a4 - 1;
  LODWORD(v81) = a4;
  v93[1] = v96;
  v85[0] = a2;
  v94 = 8;
  v7 = 0;
  *(_QWORD *)v95 = 8LL;
  v91 = 0;
  v8 = 0;
  v89 = 8;
  v90 = 8;
  v9 = -1LL;
  v88[0] = v92;
  v88[1] = v92;
  v78[0] = a4 - 1;
  v80 = (struct Mesh::MeshLine *)-1LL;
  if ( a4 <= 0 )
    goto LABEL_69;
  v10 = v78[0];
  v11 = 0LL;
  v12 = v78[0];
  v13 = a4;
  v82 = 0LL;
  v14 = (struct Mesh::MeshVertex *)v5;
  v79 = (struct Mesh::MeshVertex *)-1LL;
  while ( 1 )
  {
    if ( v13 < 3 )
    {
LABEL_10:
      if ( v7 >= 3 )
      {
        Vertex = Mesh::AllocateVertex((Mesh *)this, v7, v78);
        v26 = Vertex;
        if ( Vertex < 0 )
        {
          v77 = 1034;
        }
        else
        {
          v27 = this[22];
          v79 = 0LL;
          Vertex = Mesh::MeshGraph::AllocateVertex(v27, v25, &v79);
          v26 = Vertex;
          if ( Vertex < 0 )
          {
            v77 = 1037;
          }
          else
          {
            v28 = this[22];
            v80 = 0LL;
            Vertex = Mesh::MeshGraph::AllocateLine(v28, v95[1], &v80);
            v26 = Vertex;
            if ( Vertex < 0 )
            {
              v77 = 1040;
            }
            else
            {
              v29 = this[22];
              v81 = 0LL;
              Vertex = Mesh::MeshGraph::AllocateEdge(v29, 2 * v95[1], &v81);
              v26 = Vertex;
              if ( Vertex >= 0 )
              {
                v30 = v95[1];
                v31 = 0LL;
                if ( v95[1] )
                {
                  v32 = v78[0];
                  do
                  {
                    v33 = v31 + v32;
                    v34 = (char *)v79 + 64 * (unsigned __int64)(unsigned int)v31;
                    v35 = (char *)this[19] + *((_DWORD *)this + 40) * ((int)v31 + v32);
                    v35[24] = 0;
                    v36 = *(_DWORD *)(v93[0] + 8 * v31);
                    v37 = *(_DWORD *)(v93[0] + 8 * v31 + 4);
                    v31 = (unsigned int)(v31 + 1);
                    *(_DWORD *)v35 = v36;
                    *((_DWORD *)v35 + 1) = v37;
                    *(struct _D3DCOLORVALUE *)(v35 + 8) = *(const struct _D3DCOLORVALUE *)&a5->r;
                    *(_DWORD *)v34 = v33;
                    *((_QWORD *)v34 + 1) = v35;
                    *((_QWORD *)v34 + 3) = 0LL;
                    *((_QWORD *)v34 + 4) = 0LL;
                    *((_DWORD *)v34 + 10) = 0;
                    *((_DWORD *)v34 + 13) = 0;
                    *((_DWORD *)v34 + 12) = 0;
                    v30 = v95[1];
                  }
                  while ( (unsigned int)v31 < v95[1] );
                }
                v38 = 0;
                if ( !v30 )
                {
LABEL_62:
                  v26 = 0;
                  *((_QWORD *)this[22] + 8) = v80;
                  goto LABEL_70;
                }
                while ( 1 )
                {
                  v78[0] = v38 + 1;
                  v39 = (_QWORD *)((char *)v79 + 64 * (unsigned __int64)((v38 + 1) % v30));
                  v40 = (char *)v79 + 64 * (unsigned __int64)v38;
                  v41 = (v38 + 1) % v30;
                  v42 = (char *)v80 + 88 * v38;
                  v84 = (struct Mesh::MeshVertex *)v38;
                  if ( v38 )
                    v43 = v38 - 1;
                  else
                    v43 = v30 - 1;
                  v83 = (char *)v80 + 88 * v43;
                  v51 = (float *)*((_QWORD *)v40 + 1);
                  v52 = *v51;
                  v53 = v51[1];
                  v85[0] = (char *)v80 + 88 * v41;
                  v54 = 2 * v38;
                  v55 = (unsigned int)(v54 + 1);
                  v56 = 88 * v54;
                  v57 = (float *)v39[1];
                  v58 = (char *)v81 + v56;
                  v59 = *v57;
                  v60 = v57[1];
                  v61 = v52 - *v57;
                  v62 = (char *)v81 + 88 * v55;
                  v63 = v53 - v60;
                  v64 = sqrtf_0((float)(v61 * v61) + (float)(v63 * v63));
                  v65 = (float *)this[22];
                  *((float *)&v82 + 1) = (float)(1.0 / v64) * v63;
                  *(float *)&v82 = (float)(1.0 / v64) * v61;
                  v66 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v64) & _xmm);
                  if ( *v65 > v66 )
                    goto LABEL_69;
                  Mesh::MeshGraph::ComputeNormalizedLine(&v85[1], v51, &v82);
                  if ( (_BYTE)v86 )
                  {
                    *v51 = v59;
                  }
                  else
                  {
                    if ( !BYTE1(v86) )
                      goto LABEL_53;
                    v51[1] = v60;
                  }
                  v85[1] = **((_QWORD **)v40 + 1);
LABEL_53:
                  v67 = *(_OWORD *)&v85[1];
                  *(_QWORD *)v42 = this[22];
                  v68 = v86;
                  *(_OWORD *)(v42 + 8) = v67;
                  *((_DWORD *)v42 + 6) = v68;
                  *((_DWORD *)v42 + 7) = 0;
                  *((_QWORD *)v42 + 6) = 0LL;
                  *((_QWORD *)v42 + 7) = 0LL;
                  *((_DWORD *)v42 + 16) = 0;
                  *(float *)&v67 = Mesh::MeshGraph::ComputeRadialIndex((const struct Mesh::Line2d *)(v42 + 8));
                  *((_QWORD *)v42 + 9) = v83;
                  *((_QWORD *)v42 + 10) = v85[0];
                  *((_DWORD *)v42 + 8) = v67;
                  *((_DWORD *)v58 + 4) = v69;
                  *((_QWORD *)v58 + 9) = v69;
                  *((_QWORD *)v58 + 10) = v69;
                  *((_QWORD *)v58 + 7) = v69;
                  *((_QWORD *)v58 + 8) = v69;
                  *(_QWORD *)v58 = v40;
                  *((_QWORD *)v58 + 1) = v42;
                  *((_QWORD *)v58 + 4) = v40;
                  *((_QWORD *)v58 + 3) = v40;
                  *((_QWORD *)v58 + 6) = v40;
                  *((_QWORD *)v58 + 5) = v40;
                  Mesh::MeshEdgeList::InsertEdge((Mesh::MeshEdgeList *)(v40 + 16), (struct Mesh::MeshEdge *)v58);
                  Mesh::MeshEdgeList::InsertEdge((Mesh::MeshEdgeList *)(v42 + 40), (struct Mesh::MeshEdge *)v58);
                  *(_QWORD *)v62 = v39;
                  *((_DWORD *)v62 + 4) = 0;
                  *((_QWORD *)v62 + 9) = 0LL;
                  *((_QWORD *)v62 + 10) = 0LL;
                  *((_QWORD *)v62 + 7) = 0LL;
                  *((_QWORD *)v62 + 8) = 0LL;
                  *((_QWORD *)v62 + 1) = v42;
                  *((_QWORD *)v62 + 4) = v39;
                  *((_QWORD *)v62 + 3) = v39;
                  *((_QWORD *)v62 + 6) = v39;
                  *((_QWORD *)v62 + 5) = v39;
                  Mesh::MeshEdgeList::InsertEdge((Mesh::MeshEdgeList *)(v39 + 2), (struct Mesh::MeshEdge *)v62);
                  Mesh::MeshEdgeList::InsertEdge((Mesh::MeshEdgeList *)(v42 + 40), (struct Mesh::MeshEdge *)v62);
                  v70 = *((_DWORD *)v42 + 7);
                  if ( *((char **)v42 + 6) == v58 )
                  {
                    *((_DWORD *)v42 + 7) = v70 | 1;
                    v71 = this[22];
                    *((_DWORD *)v58 + 4) |= 4u;
                    ++*((_DWORD *)v71 + 25);
                    v72 = this[22];
                    *((_DWORD *)v62 + 4) |= 2u;
                    ++*((_DWORD *)v72 + 24);
                    if ( (*(_BYTE *)(*((_QWORD *)v40 + 4) + 16LL) & 8) != 0 )
                    {
                      Vertex = Mesh::MeshGraph::AddPolygon(this[22], *((struct Mesh::MeshEdge **)v40 + 3));
                      v26 = Vertex;
                      if ( Vertex < 0 )
                      {
                        v77 = 1123;
                        goto LABEL_67;
                      }
                    }
                  }
                  else
                  {
                    *((_DWORD *)v42 + 7) = v70 | 2;
                    v73 = this[22];
                    *((_DWORD *)v62 + 4) |= 8u;
                    ++*((_DWORD *)v73 + 25);
                    v74 = this[22];
                    *((_DWORD *)v58 + 4) |= 2u;
                    ++*((_DWORD *)v74 + 24);
                    v75 = v39[3];
                    if ( (*(_BYTE *)(v75 + 16) & 4) != 0 )
                    {
                      Vertex = Mesh::MeshGraph::AddPolygon(this[22], (struct Mesh::MeshEdge *)v75);
                      v26 = Vertex;
                      if ( Vertex < 0 )
                      {
                        v77 = 1135;
                        goto LABEL_67;
                      }
                    }
                  }
                  *((_DWORD *)v42 + 7) |= Mesh::ComputeAntialiasBorderFlags<3,1,2>(*(_DWORD *)(v88[0] + 4LL * (_QWORD)v84));
                  if ( (v42[28] & 0xC) != 0 )
                    *((_BYTE *)this + 236) |= 0x40u;
                  v38 = v78[0];
                  v30 = v95[1];
                  if ( v78[0] >= (unsigned int)v95[1] )
                    goto LABEL_62;
                }
              }
              v77 = 1043;
            }
          }
        }
LABEL_67:
        v50 = Vertex;
        goto LABEL_45;
      }
LABEL_69:
      v26 = 1;
      goto LABEL_70;
    }
    x_low = (__m128)LODWORD(a2[(_QWORD)v11].x);
    v16 = (struct Mesh::MeshVertex *)((char *)v11 + 1);
    y_low = (__m128)LODWORD(a2[(_QWORD)v11].y);
    v18 = v9;
    v84 = v16;
    if ( v8 != v5 )
      v18 = (__int64)v16;
    v19 = x_low.m128_f32[0] - a2[(_QWORD)v14].x;
    v20 = y_low.m128_f32[0] - a2[(_QWORD)v14].y;
    v21 = a2[v18].x - a2[(_QWORD)v14].x;
    v22 = a2[v18].y - a2[(_QWORD)v14].y;
    v23 = sqrtf_0((float)(v21 * v21) + (float)(v22 * v22));
    if ( v23 == 0.0
      || *((float *)this[22] + 1) > (float)((float)(v19 * (float)(v22 * (float)(1.0 / v23)))
                                          - (float)(v20 * (float)(v21 * (float)(1.0 / v23)))) )
    {
      --v13;
      goto LABEL_8;
    }
    x_low.m128_f32[0] = x_low.m128_f32[0] - *((float *)this + 50);
    y_low.m128_f32[0] = y_low.m128_f32[0] - *((float *)this + 51);
    v44 = v7 + 1;
    if ( v7 + 1 >= v7 )
      v10 = v7 + 1;
    v45 = _mm_unpacklo_ps(x_low, y_low).m128_u64[0];
    v26 = v44 < v7 ? 0x80070216 : 0;
    v83 = (char *)v45;
    if ( v44 < v7 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0xB5u);
    }
    else if ( v10 > v95[0] )
    {
      v46 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v93, 8u, 1, &v83);
      v26 = v46;
      if ( v46 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0xC0u);
    }
    else
    {
      *(_QWORD *)(v93[0] + 8LL * v7) = v45;
      v95[1] = v10;
    }
    if ( v26 < 0 )
      break;
    v47 = (_DWORD *)((char *)v87 + 4 * v8);
    v48 = v91 + 1;
    if ( v91 + 1 >= v91 )
      v12 = v91 + 1;
    v26 = v48 < v91 ? 0x80070216 : 0;
    if ( v48 < v91 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0xB5u);
    }
    else if ( v12 > v90 )
    {
      v49 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v88, 4u, 1, v47);
      v26 = v49;
      if ( v49 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0xC0u);
    }
    else
    {
      *(_DWORD *)(v88[0] + 4LL * v91) = *v47;
      v91 = v12;
    }
    if ( v26 < 0 )
    {
      v77 = 1016;
      goto LABEL_44;
    }
    v7 = v95[1];
    v14 = v82;
    if ( (int)v80 < 0 )
    {
      LODWORD(v80) = v8;
      v9 = (__int64)v82;
      v79 = v82;
      goto LABEL_9;
    }
LABEL_8:
    v9 = (__int64)v79;
LABEL_9:
    v11 = v84;
    ++v8;
    a2 = (const struct D2D_POINT_2F *)v85[0];
    v5 = v78[0];
    v82 = v84;
    if ( v8 >= (int)v81 )
      goto LABEL_10;
  }
  v77 = 1015;
LABEL_44:
  v50 = v26;
LABEL_45:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, v77);
LABEL_70:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v88);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v93);
  return (unsigned int)v26;
}
