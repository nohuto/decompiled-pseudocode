/*
 * XREFs of ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x18015D704
 * Callers:
 *     ?CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x18015E1C8 (-CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z @ 0x1800C5AD4 (--$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800D53C0 (sqrtf_0.c)
 *     ?AllocateVertex@Mesh@@AEAAJHPEAH@Z @ 0x180133414 (-AllocateVertex@Mesh@@AEAAJHPEAH@Z.c)
 *     ?AddPolygon@MeshGraph@Mesh@@QEAAJPEAUMeshEdge@2@@Z @ 0x180133570 (-AddPolygon@MeshGraph@Mesh@@QEAAJPEAUMeshEdge@2@@Z.c)
 *     ?AllocateEdge@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshEdge@2@@Z @ 0x180133594 (-AllocateEdge@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshEdge@2@@Z.c)
 *     ?AllocateLine@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshLine@2@@Z @ 0x1801335C0 (-AllocateLine@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshLine@2@@Z.c)
 *     ?AllocateVertex@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshVertex@2@@Z @ 0x1801335EC (-AllocateVertex@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshVertex@2@@Z.c)
 *     ?ComputeNormalizedLine@MeshGraph@Mesh@@SA?AVLine2d@2@AEBUD2D_VECTOR_2F@@0@Z @ 0x18015DFC4 (-ComputeNormalizedLine@MeshGraph@Mesh@@SA-AVLine2d@2@AEBUD2D_VECTOR_2F@@0@Z.c)
 *     ?ComputeRadialIndex@MeshGraph@Mesh@@SAMAEBVLine2d@2@@Z @ 0x18015E0D0 (-ComputeRadialIndex@MeshGraph@Mesh@@SAMAEBVLine2d@2@@Z.c)
 *     ?InsertEdge@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@@Z @ 0x18015E628 (-InsertEdge@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@@Z.c)
 */

__int64 __fastcall Mesh::BuildPolygon(
        Mesh::MeshGraph **this,
        const struct D2D_POINT_2F *a2,
        const enum D2D1_EDGE_FLAGS *a3,
        int a4,
        const struct _D3DCOLORVALUE *a5)
{
  unsigned int v5; // esi
  __int64 v7; // r9
  int v9; // r14d
  const struct D2D_POINT_2F *v10; // r8
  int v11; // r10d
  unsigned int v12; // r12d
  struct Mesh::MeshEdge *v13; // rbx
  struct Mesh::MeshLine *v14; // rdx
  struct Mesh::MeshVertex *p_y; // rcx
  int v16; // r15d
  __int64 v17; // rax
  float v18; // xmm7_4
  float v19; // xmm6_4
  __m128 v20; // xmm8
  __m128 v21; // xmm9
  float v22; // xmm10_4
  float v23; // xmm11_4
  float v24; // xmm1_4
  struct Mesh::MeshVertex *v25; // rcx
  int Vertex; // eax
  int v27; // edx
  int v28; // ebx
  Mesh::MeshGraph *v29; // rcx
  Mesh::MeshGraph *v30; // rcx
  Mesh::MeshGraph *v31; // rcx
  unsigned int v32; // ecx
  __int64 v33; // r9
  int v34; // r11d
  int v35; // edx
  char *v36; // r8
  char *v37; // rcx
  __m128 v38; // xmm1
  __m128 v39; // xmm0
  unsigned int v40; // r8d
  _QWORD *v41; // r13
  char *v42; // r14
  __int64 v43; // r10
  char *v44; // rsi
  __int64 v45; // rcx
  unsigned int v46; // edx
  unsigned int v47; // eax
  unsigned __int64 v48; // xmm0_8
  int v49; // eax
  _DWORD *v50; // r9
  unsigned int v51; // eax
  int v52; // eax
  int v53; // r9d
  float *v54; // rbx
  float v55; // xmm6_4
  float v56; // xmm7_4
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // r15
  float *v60; // rax
  char *v61; // r15
  float v62; // xmm6_4
  float v63; // xmm7_4
  char *v64; // r12
  float v65; // xmm0_4
  float *v66; // rax
  float v67; // xmm1_4
  __int128 v68; // xmm0
  int v69; // eax
  __int64 v70; // rdx
  Mesh::MeshGraph *v71; // rax
  Mesh::MeshGraph *v72; // rax
  Mesh::MeshGraph *v73; // rax
  Mesh::MeshGraph *v74; // rax
  __int64 v75; // rdx
  unsigned int v77; // [rsp+28h] [rbp-E0h]
  int v78[2]; // [rsp+38h] [rbp-D0h] BYREF
  struct Mesh::MeshVertex *v79; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v80; // [rsp+48h] [rbp-C0h]
  struct Mesh::MeshLine *v81; // [rsp+50h] [rbp-B8h] BYREF
  struct Mesh::MeshEdge *v82; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v83; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v84; // [rsp+68h] [rbp-A0h]
  _QWORD v85[3]; // [rsp+70h] [rbp-98h] BYREF
  int v86; // [rsp+88h] [rbp-80h]
  unsigned __int64 v87; // [rsp+90h] [rbp-78h] BYREF
  const enum D2D1_EDGE_FLAGS *v88; // [rsp+98h] [rbp-70h]
  void *v89[2]; // [rsp+A8h] [rbp-60h] BYREF
  int v90; // [rsp+B8h] [rbp-50h]
  unsigned int v91; // [rsp+BCh] [rbp-4Ch]
  unsigned int v92; // [rsp+C0h] [rbp-48h]
  _BYTE v93[32]; // [rsp+C8h] [rbp-40h] BYREF
  void *v94[2]; // [rsp+E8h] [rbp-20h] BYREF
  int v95; // [rsp+F8h] [rbp-10h]
  int v96[3]; // [rsp+FCh] [rbp-Ch]
  _BYTE v97[64]; // [rsp+108h] [rbp+0h] BYREF

  v88 = a3;
  v94[0] = v97;
  v5 = 0;
  v92 = 0;
  v94[1] = v97;
  v85[0] = a2;
  v7 = -1LL;
  v89[0] = v93;
  v83 = -1LL;
  v9 = 0;
  v89[1] = v93;
  v95 = 8;
  v10 = a2;
  *(_QWORD *)v96 = 8LL;
  v90 = 8;
  v91 = 8;
  if ( a4 <= 0 )
    goto LABEL_69;
  v11 = a4 - 1;
  v12 = v78[0];
  v13 = 0LL;
  v14 = (struct Mesh::MeshLine *)(8LL * (a4 - 1));
  p_y = (struct Mesh::MeshVertex *)&v10->y;
  v82 = 0LL;
  v84 = -4LL - (_QWORD)v10;
  v16 = a4;
  v80 = -1LL;
  v81 = v14;
  v79 = (struct Mesh::MeshVertex *)&v10->y;
  while ( 1 )
  {
    if ( v16 < 3 )
    {
LABEL_10:
      if ( v5 >= 3 )
      {
        Vertex = Mesh::AllocateVertex((Mesh *)this, v5, v78);
        v28 = Vertex;
        if ( Vertex < 0 )
        {
          v77 = 1110;
        }
        else
        {
          v29 = this[22];
          v79 = 0LL;
          Vertex = Mesh::MeshGraph::AllocateVertex(v29, v27, &v79);
          v28 = Vertex;
          if ( Vertex < 0 )
          {
            v77 = 1113;
          }
          else
          {
            v30 = this[22];
            v81 = 0LL;
            Vertex = Mesh::MeshGraph::AllocateLine(v30, v96[1], &v81);
            v28 = Vertex;
            if ( Vertex < 0 )
            {
              v77 = 1116;
            }
            else
            {
              v31 = this[22];
              v82 = 0LL;
              Vertex = Mesh::MeshGraph::AllocateEdge(v31, 2 * v96[1], &v82);
              v28 = Vertex;
              if ( Vertex >= 0 )
              {
                v32 = v96[1];
                v33 = 0LL;
                if ( v96[1] )
                {
                  v34 = v78[0];
                  do
                  {
                    v35 = v33 + v34;
                    v36 = (char *)v79 + 64 * (unsigned __int64)(unsigned int)v33;
                    v37 = (char *)this[19] + *((_DWORD *)this + 40) * ((int)v33 + v34);
                    v37[24] = 0;
                    v38 = (__m128)*((unsigned int *)v94[0] + 2 * v33);
                    v39 = (__m128)*((unsigned int *)v94[0] + 2 * v33 + 1);
                    v33 = (unsigned int)(v33 + 1);
                    *(_QWORD *)v37 = _mm_unpacklo_ps(v38, v39).m128_u64[0];
                    *(struct _D3DCOLORVALUE *)(v37 + 8) = *(const struct _D3DCOLORVALUE *)&a5->r;
                    *(_DWORD *)v36 = v35;
                    *((_QWORD *)v36 + 1) = v37;
                    *((_QWORD *)v36 + 3) = 0LL;
                    *((_QWORD *)v36 + 4) = 0LL;
                    *((_DWORD *)v36 + 10) = 0;
                    *((_DWORD *)v36 + 13) = 0;
                    *((_DWORD *)v36 + 12) = 0;
                    v32 = v96[1];
                  }
                  while ( (unsigned int)v33 < v96[1] );
                }
                v40 = 0;
                if ( !v32 )
                {
LABEL_62:
                  v28 = 0;
                  *((_QWORD *)this[22] + 8) = v81;
                  goto LABEL_70;
                }
                while ( 1 )
                {
                  v78[0] = v40 + 1;
                  v41 = (_QWORD *)((char *)v79 + 64 * (unsigned __int64)((v40 + 1) % v32));
                  v42 = (char *)v79 + 64 * (unsigned __int64)v40;
                  v43 = (v40 + 1) % v32;
                  v44 = (char *)v81 + 88 * v40;
                  v84 = v40;
                  if ( v40 )
                    v45 = v40 - 1;
                  else
                    v45 = v32 - 1;
                  v80 = (__int64)v81 + 88 * v45;
                  v54 = (float *)*((_QWORD *)v42 + 1);
                  v55 = *v54;
                  v56 = v54[1];
                  v85[0] = (char *)v81 + 88 * v43;
                  v57 = 2 * v40;
                  v58 = (unsigned int)(v57 + 1);
                  v59 = 88 * v57;
                  v60 = (float *)v41[1];
                  v61 = (char *)v82 + v59;
                  v62 = v55 - *v60;
                  v63 = v56 - v60[1];
                  v64 = (char *)v82 + 88 * v58;
                  v65 = sqrtf_0((float)(v63 * v63) + (float)(v62 * v62));
                  v66 = (float *)this[22];
                  *((float *)&v83 + 1) = (float)(1.0 / v65) * v63;
                  *(float *)&v83 = (float)(1.0 / v65) * v62;
                  v67 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v65) & _xmm);
                  if ( *v66 > v67 )
                    goto LABEL_69;
                  Mesh::MeshGraph::ComputeNormalizedLine(&v85[1], v54, &v83);
                  if ( (_BYTE)v86 )
                  {
                    *v54 = *(float *)v41[1];
                  }
                  else
                  {
                    if ( !BYTE1(v86) )
                      goto LABEL_53;
                    v54[1] = *(float *)(v41[1] + 4LL);
                  }
                  v85[1] = **((_QWORD **)v42 + 1);
LABEL_53:
                  v68 = *(_OWORD *)&v85[1];
                  *(_QWORD *)v44 = this[22];
                  v69 = v86;
                  *(_OWORD *)(v44 + 8) = v68;
                  *((_DWORD *)v44 + 6) = v69;
                  *((_DWORD *)v44 + 7) = 0;
                  *((_QWORD *)v44 + 6) = 0LL;
                  *((_QWORD *)v44 + 7) = 0LL;
                  *((_DWORD *)v44 + 16) = 0;
                  *(float *)&v68 = Mesh::MeshGraph::ComputeRadialIndex((const struct Mesh::Line2d *)(v44 + 8));
                  *((_QWORD *)v44 + 9) = v80;
                  *((_QWORD *)v44 + 10) = v85[0];
                  *((_DWORD *)v44 + 8) = v68;
                  *((_DWORD *)v61 + 4) = v70;
                  *((_QWORD *)v61 + 9) = v70;
                  *((_QWORD *)v61 + 10) = v70;
                  *((_QWORD *)v61 + 7) = v70;
                  *((_QWORD *)v61 + 8) = v70;
                  *(_QWORD *)v61 = v42;
                  *((_QWORD *)v61 + 1) = v44;
                  *((_QWORD *)v61 + 4) = v42;
                  *((_QWORD *)v61 + 3) = v42;
                  *((_QWORD *)v61 + 6) = v42;
                  *((_QWORD *)v61 + 5) = v42;
                  Mesh::MeshEdgeList::InsertEdge((Mesh::MeshEdgeList *)(v42 + 16), (struct Mesh::MeshEdge *)v61);
                  Mesh::MeshEdgeList::InsertEdge((Mesh::MeshEdgeList *)(v44 + 40), (struct Mesh::MeshEdge *)v61);
                  *(_QWORD *)v64 = v41;
                  *((_DWORD *)v64 + 4) = 0;
                  *((_QWORD *)v64 + 9) = 0LL;
                  *((_QWORD *)v64 + 10) = 0LL;
                  *((_QWORD *)v64 + 7) = 0LL;
                  *((_QWORD *)v64 + 8) = 0LL;
                  *((_QWORD *)v64 + 1) = v44;
                  *((_QWORD *)v64 + 4) = v41;
                  *((_QWORD *)v64 + 3) = v41;
                  *((_QWORD *)v64 + 6) = v41;
                  *((_QWORD *)v64 + 5) = v41;
                  Mesh::MeshEdgeList::InsertEdge((Mesh::MeshEdgeList *)(v41 + 2), (struct Mesh::MeshEdge *)v64);
                  Mesh::MeshEdgeList::InsertEdge((Mesh::MeshEdgeList *)(v44 + 40), (struct Mesh::MeshEdge *)v64);
                  if ( *((char **)v44 + 6) == v61 )
                  {
                    *((_DWORD *)v44 + 7) |= 1u;
                    v71 = this[22];
                    *((_DWORD *)v61 + 4) |= 4u;
                    ++*((_DWORD *)v71 + 25);
                    v72 = this[22];
                    *((_DWORD *)v64 + 4) |= 2u;
                    ++*((_DWORD *)v72 + 24);
                    if ( (*(_BYTE *)(*((_QWORD *)v42 + 4) + 16LL) & 8) != 0 )
                    {
                      Vertex = Mesh::MeshGraph::AddPolygon(this[22], *((struct Mesh::MeshEdge **)v42 + 3));
                      v28 = Vertex;
                      if ( Vertex < 0 )
                      {
                        v77 = 1199;
                        goto LABEL_67;
                      }
                    }
                  }
                  else
                  {
                    *((_DWORD *)v44 + 7) |= 2u;
                    v73 = this[22];
                    *((_DWORD *)v64 + 4) |= 8u;
                    ++*((_DWORD *)v73 + 25);
                    v74 = this[22];
                    *((_DWORD *)v61 + 4) |= 2u;
                    ++*((_DWORD *)v74 + 24);
                    v75 = v41[3];
                    if ( (*(_BYTE *)(v75 + 16) & 4) != 0 )
                    {
                      Vertex = Mesh::MeshGraph::AddPolygon(this[22], (struct Mesh::MeshEdge *)v75);
                      v28 = Vertex;
                      if ( Vertex < 0 )
                      {
                        v77 = 1211;
                        goto LABEL_67;
                      }
                    }
                  }
                  *((_DWORD *)v44 + 7) |= Mesh::ComputeAntialiasBorderFlags<3,1,2>(*((_DWORD *)v89[0] + v84));
                  if ( (v44[28] & 0xC) != 0 )
                    *((_BYTE *)this + 236) |= 0x40u;
                  v40 = v78[0];
                  v32 = v96[1];
                  if ( v78[0] >= (unsigned int)v96[1] )
                    goto LABEL_62;
                }
              }
              v77 = 1119;
            }
          }
        }
LABEL_67:
        v53 = Vertex;
        goto LABEL_45;
      }
LABEL_69:
      v28 = 1;
      goto LABEL_70;
    }
    v17 = v7;
    if ( v9 != v11 )
      v17 = (__int64)v13 + 1;
    v18 = v10[v17].x - *(float *)((char *)v14 + (_QWORD)v10);
    v19 = v10[v17].y - *(float *)((char *)v14 + (_QWORD)v10 + 4);
    v20 = (__m128)*((unsigned int *)p_y - 1);
    v21 = (__m128)*(unsigned int *)p_y;
    v22 = *((float *)p_y - 1) - *(float *)((char *)v14 + (_QWORD)v10);
    v23 = *(float *)p_y - *(float *)((char *)v14 + (_QWORD)v10 + 4);
    v24 = sqrtf_0((float)(v19 * v19) + (float)(v18 * v18));
    if ( v24 == 0.0
      || *((float *)this[22] + 1) > (float)((float)((float)(v19 * (float)(1.0 / v24)) * v22)
                                          - (float)((float)(v18 * (float)(1.0 / v24)) * v23)) )
    {
      v25 = v79;
      --v16;
      v14 = v81;
      goto LABEL_8;
    }
    v46 = v78[0];
    v47 = v5 + 1;
    v20.m128_f32[0] = v20.m128_f32[0] - *((float *)this + 50);
    v21.m128_f32[0] = v21.m128_f32[0] - *((float *)this + 51);
    if ( v5 + 1 >= v5 )
      v46 = v5 + 1;
    v78[0] = v46;
    v48 = _mm_unpacklo_ps(v20, v21).m128_u64[0];
    v28 = v47 < v5 ? 0x80070216 : 0;
    v87 = v48;
    if ( v47 < v5 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0xB5u);
    }
    else if ( v46 > v96[0] )
    {
      v49 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v94, 8u, 1, &v87);
      v28 = v49;
      if ( v49 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, 0xC0u);
    }
    else
    {
      *((_QWORD *)v94[0] + v5) = v48;
      v96[1] = v46;
    }
    if ( v28 < 0 )
      break;
    v50 = (_DWORD *)((char *)v88 + 4 * v9);
    v51 = v92 + 1;
    if ( v92 + 1 >= v92 )
      v12 = v92 + 1;
    v28 = v51 < v92 ? 0x80070216 : 0;
    if ( v51 < v92 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0xB5u);
    }
    else if ( v12 > v91 )
    {
      v52 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v89, 4u, 1, v50);
      v28 = v52;
      if ( v52 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v52, 0xC0u);
    }
    else
    {
      *((_DWORD *)v89[0] + v92) = *v50;
      v92 = v12;
    }
    if ( v28 < 0 )
    {
      v77 = 1092;
      goto LABEL_44;
    }
    v25 = v79;
    v13 = v82;
    v14 = (struct Mesh::MeshVertex *)((char *)v79 + v84);
    v5 = v96[1];
    v81 = (struct Mesh::MeshVertex *)((char *)v79 + v84);
    if ( (int)v83 < 0 )
    {
      LODWORD(v83) = v9;
      v7 = (__int64)v82;
      v80 = (__int64)v82;
      goto LABEL_9;
    }
LABEL_8:
    v7 = v80;
LABEL_9:
    v10 = (const struct D2D_POINT_2F *)v85[0];
    v11 = a4 - 1;
    v13 = (struct Mesh::MeshEdge *)((char *)v13 + 1);
    p_y = (struct Mesh::MeshVertex *)((char *)v25 + 8);
    ++v9;
    v82 = v13;
    v79 = p_y;
    if ( v9 >= a4 )
      goto LABEL_10;
  }
  v77 = 1091;
LABEL_44:
  v53 = v28;
LABEL_45:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v53, v77);
LABEL_70:
  DynArrayImpl<1>::~DynArrayImpl<1>(v89);
  DynArrayImpl<1>::~DynArrayImpl<1>(v94);
  return (unsigned int)v28;
}
