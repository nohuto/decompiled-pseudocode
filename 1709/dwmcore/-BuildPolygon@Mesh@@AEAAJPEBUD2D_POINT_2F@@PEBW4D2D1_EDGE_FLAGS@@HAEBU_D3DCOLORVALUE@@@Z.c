/*
 * XREFs of ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x1801538A0
 * Callers:
 *     ?CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x18015435C (-CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z @ 0x1800B9E7C (--$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800C5DAA (sqrtf_0.c)
 *     ?AllocateVertex@Mesh@@AEAAJHPEAH@Z @ 0x18011C858 (-AllocateVertex@Mesh@@AEAAJHPEAH@Z.c)
 *     ?AddPolygon@MeshGraph@Mesh@@QEAAJPEAUMeshEdge@2@@Z @ 0x18011C9B4 (-AddPolygon@MeshGraph@Mesh@@QEAAJPEAUMeshEdge@2@@Z.c)
 *     ?AllocateEdge@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshEdge@2@@Z @ 0x18011C9D8 (-AllocateEdge@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshEdge@2@@Z.c)
 *     ?AllocateLine@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshLine@2@@Z @ 0x18011CA04 (-AllocateLine@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshLine@2@@Z.c)
 *     ?AllocateVertex@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshVertex@2@@Z @ 0x18011CA30 (-AllocateVertex@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshVertex@2@@Z.c)
 *     ?ComputeNormalizedLine@MeshGraph@Mesh@@SA?AVLine2d@2@AEBUD2D_VECTOR_2F@@0@Z @ 0x180154164 (-ComputeNormalizedLine@MeshGraph@Mesh@@SA-AVLine2d@2@AEBUD2D_VECTOR_2F@@0@Z.c)
 *     ?ComputeRadialIndex@MeshGraph@Mesh@@SAMAEBVLine2d@2@@Z @ 0x180154264 (-ComputeRadialIndex@MeshGraph@Mesh@@SAMAEBVLine2d@2@@Z.c)
 *     ?InsertEdge@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@@Z @ 0x1801547C8 (-InsertEdge@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@@Z.c)
 */

__int64 __fastcall Mesh::BuildPolygon(
        Mesh::MeshGraph **this,
        struct D2D_POINT_2F *a2,
        const enum D2D1_EDGE_FLAGS *a3,
        int a4,
        const struct _D3DCOLORVALUE *a5)
{
  int v5; // r10d
  unsigned int v6; // esi
  __int64 v8; // r9
  int v10; // r14d
  struct Mesh::MeshEdge *v11; // r8
  struct Mesh::MeshLine *v12; // rcx
  unsigned int v13; // r12d
  int v14; // r15d
  signed __int64 v15; // rbx
  __int64 v16; // rax
  float v17; // xmm7_4
  float v18; // xmm8_4
  __m128 x_low; // xmm10
  __m128 y_low; // xmm11
  float v21; // xmm6_4
  float v22; // xmm9_4
  float v23; // xmm0_4
  struct Mesh::MeshVertex *v24; // rdx
  struct Mesh::MeshLine *v25; // rcx
  int Vertex; // eax
  int v27; // edx
  signed int v28; // ebx
  Mesh::MeshGraph *v29; // rcx
  Mesh::MeshGraph *v30; // rcx
  Mesh::MeshGraph *v31; // rcx
  unsigned int v32; // ecx
  __int64 v33; // r9
  int v34; // r11d
  int v35; // r8d
  char *v36; // rcx
  char *v37; // rdx
  int v38; // xmm0_4
  int v39; // xmm1_4
  unsigned int v40; // r8d
  _QWORD *v41; // r13
  char *v42; // r14
  __int64 v43; // r10
  char *v44; // rsi
  __int64 v45; // rcx
  unsigned int v46; // edx
  unsigned int v47; // eax
  unsigned __int64 v48; // xmm0_8
  signed int v49; // eax
  _DWORD *v50; // r9
  unsigned int v51; // eax
  signed int v52; // eax
  DWORD v53; // r9d
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
  struct Mesh::MeshLine *v80; // [rsp+48h] [rbp-C0h]
  struct Mesh::MeshLine *v81; // [rsp+50h] [rbp-B8h] BYREF
  struct Mesh::MeshEdge *v82; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v83; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v84; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v85[3]; // [rsp+70h] [rbp-98h] BYREF
  int v86; // [rsp+88h] [rbp-80h]
  void *v87[2]; // [rsp+98h] [rbp-70h] BYREF
  int v88; // [rsp+A8h] [rbp-60h]
  unsigned int v89; // [rsp+ACh] [rbp-5Ch]
  unsigned int v90; // [rsp+B0h] [rbp-58h]
  _BYTE v91[32]; // [rsp+B8h] [rbp-50h] BYREF
  void *v92[2]; // [rsp+D8h] [rbp-30h] BYREF
  int v93; // [rsp+E8h] [rbp-20h]
  int v94[3]; // [rsp+ECh] [rbp-1Ch]
  _BYTE v95[64]; // [rsp+F8h] [rbp-10h] BYREF

  v85[0] = a3;
  v92[0] = v95;
  v5 = a4 - 1;
  v82 = (struct Mesh::MeshEdge *)a2;
  v92[1] = v95;
  v6 = 0;
  v90 = 0;
  v87[0] = v91;
  v8 = -1LL;
  v87[1] = v91;
  v83 = -1LL;
  v10 = 0;
  v93 = 8;
  *(_QWORD *)v94 = 8LL;
  v11 = (struct Mesh::MeshEdge *)a2;
  v88 = 8;
  v89 = 8;
  if ( a4 <= 0 )
    goto LABEL_69;
  v12 = 0LL;
  v13 = v78[0];
  v14 = a4;
  v80 = 0LL;
  v15 = 8LL * v5;
  v81 = (struct Mesh::MeshLine *)-1LL;
  v79 = (struct Mesh::MeshVertex *)a2;
  while ( 1 )
  {
    if ( v14 < 3 )
    {
LABEL_10:
      if ( v6 >= 3 )
      {
        Vertex = Mesh::AllocateVertex((Mesh *)this, v6, v78);
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
            Vertex = Mesh::MeshGraph::AllocateLine(v30, v94[1], &v81);
            v28 = Vertex;
            if ( Vertex < 0 )
            {
              v77 = 1116;
            }
            else
            {
              v31 = this[22];
              v82 = 0LL;
              Vertex = Mesh::MeshGraph::AllocateEdge(v31, 2 * v94[1], &v82);
              v28 = Vertex;
              if ( Vertex >= 0 )
              {
                v32 = v94[1];
                v33 = 0LL;
                if ( v94[1] )
                {
                  v34 = v78[0];
                  do
                  {
                    v35 = v33 + v34;
                    v36 = (char *)v79 + 64 * (unsigned __int64)(unsigned int)v33;
                    v37 = (char *)this[19] + *((_DWORD *)this + 40) * ((int)v33 + v34);
                    v37[24] = 0;
                    v38 = *((_DWORD *)v92[0] + 2 * v33);
                    v39 = *((_DWORD *)v92[0] + 2 * v33 + 1);
                    v33 = (unsigned int)(v33 + 1);
                    *(_DWORD *)v37 = v38;
                    *((_DWORD *)v37 + 1) = v39;
                    *(struct _D3DCOLORVALUE *)(v37 + 8) = *(const struct _D3DCOLORVALUE *)&a5->r;
                    *(_DWORD *)v36 = v35;
                    *((_QWORD *)v36 + 1) = v37;
                    *((_QWORD *)v36 + 3) = 0LL;
                    *((_QWORD *)v36 + 4) = 0LL;
                    *((_DWORD *)v36 + 10) = 0;
                    *((_DWORD *)v36 + 13) = 0;
                    *((_DWORD *)v36 + 12) = 0;
                    v32 = v94[1];
                  }
                  while ( (unsigned int)v33 < v94[1] );
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
                  v80 = (struct Mesh::MeshLine *)((char *)v81 + 88 * v45);
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
                  v65 = sqrtf_0((float)(v62 * v62) + (float)(v63 * v63));
                  v66 = (float *)this[22];
                  *((float *)&v83 + 1) = v63 * (float)(1.0 / v65);
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
                  *((_DWORD *)v44 + 7) |= Mesh::ComputeAntialiasBorderFlags<3,1,2>(*((_DWORD *)v87[0] + v84));
                  if ( (v44[28] & 0xC) != 0 )
                    *((_BYTE *)this + 236) |= 0x40u;
                  v40 = v78[0];
                  v32 = v94[1];
                  if ( v78[0] >= (unsigned int)v94[1] )
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
    v16 = v8;
    if ( v10 != v5 )
      v16 = (__int64)v12 + 1;
    v17 = *((float *)v11 + 2 * v16) - *(float *)((char *)v11 + v15);
    v18 = *((float *)v11 + 2 * v16 + 1) - *(float *)((char *)v11 + v15 + 4);
    x_low = (__m128)LODWORD(a2->x);
    y_low = (__m128)LODWORD(a2->y);
    v21 = a2->x - *(float *)((char *)v11 + v15);
    v22 = a2->y - *(float *)((char *)v11 + v15 + 4);
    v23 = sqrtf_0((float)(v18 * v18) + (float)(v17 * v17));
    if ( v23 == 0.0
      || *((float *)this[22] + 1) > (float)((float)(v21 * (float)(v18 * (float)(1.0 / v23)))
                                          - (float)(v22 * (float)(v17 * (float)(1.0 / v23)))) )
    {
      v24 = v79;
      --v14;
      v11 = v82;
      goto LABEL_8;
    }
    v46 = v78[0];
    v47 = v6 + 1;
    x_low.m128_f32[0] = x_low.m128_f32[0] - *((float *)this + 50);
    y_low.m128_f32[0] = y_low.m128_f32[0] - *((float *)this + 51);
    if ( v6 + 1 >= v6 )
      v46 = v6 + 1;
    v78[0] = v46;
    v48 = _mm_unpacklo_ps(x_low, y_low).m128_u64[0];
    v28 = v47 < v6 ? 0x80070216 : 0;
    v84 = v48;
    if ( v47 < v6 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v28, 0xB5u);
    }
    else if ( v46 > v94[0] )
    {
      v49 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v92, 8u, 1, &v84);
      v28 = v49;
      if ( v49 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v49, 0xC0u);
    }
    else
    {
      *((_QWORD *)v92[0] + v6) = v48;
      v94[1] = v46;
    }
    if ( v28 < 0 )
      break;
    v50 = (_DWORD *)(v85[0] + 4LL * v10);
    v51 = v90 + 1;
    if ( v90 + 1 >= v90 )
      v13 = v90 + 1;
    v28 = v51 < v90 ? 0x80070216 : 0;
    if ( v51 < v90 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v28, 0xB5u);
    }
    else if ( v13 > v89 )
    {
      v52 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v87, 4u, 1, v50);
      v28 = v52;
      if ( v52 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v52, 0xC0u);
    }
    else
    {
      *((_DWORD *)v87[0] + v90) = *v50;
      v90 = v13;
    }
    if ( v28 < 0 )
    {
      v77 = 1092;
      goto LABEL_44;
    }
    v24 = v79;
    v11 = v82;
    v6 = v94[1];
    v15 = v79 - v82;
    if ( (int)v83 < 0 )
    {
      v25 = v80;
      v8 = (__int64)v80;
      v81 = v80;
      LODWORD(v83) = v10;
      goto LABEL_9;
    }
LABEL_8:
    v25 = v80;
    v8 = (__int64)v81;
LABEL_9:
    v12 = (struct Mesh::MeshLine *)((char *)v25 + 1);
    v5 = a4 - 1;
    a2 = (struct D2D_POINT_2F *)((char *)v24 + 8);
    v80 = v12;
    ++v10;
    v79 = (struct Mesh::MeshVertex *)a2;
    if ( v10 >= a4 )
      goto LABEL_10;
  }
  v77 = 1091;
LABEL_44:
  v53 = v28;
LABEL_45:
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v53, v77);
LABEL_70:
  DynArrayImpl<1>::~DynArrayImpl<1>(v87);
  DynArrayImpl<1>::~DynArrayImpl<1>(v92);
  return (unsigned int)v28;
}
