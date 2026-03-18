/*
 * XREFs of ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800647B0
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x180061E80 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z @ 0x180065870 (-GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z.c)
 *     ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x180065CF0 (-BuildGrid@Mesh@@AEAAJHHH@Z.c)
 *     ?Init@Mesh@@AEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@@Z @ 0x180066730 (-Init@Mesh@@AEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z @ 0x180069FD0 (-Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ComputeMeshPositions@CoordMap@@QEBAJAEAV?$DynArray@M$0A@@@0AEBUD2D_RECT_F@@M@Z @ 0x1800A01A4 (-ComputeMeshPositions@CoordMap@@QEBAJAEAV-$DynArray@M$0A@@@0AEBUD2D_RECT_F@@M@Z.c)
 *     ?GetAllHollowRects@CoordMap@@QEBAJAEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x1800A0244 (-GetAllHollowRects@CoordMap@@QEBAJAEAV-$DynArray@UD2D_RECT_F@@$0A@@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@M$0A@@@QEAAJPEFBMI@Z @ 0x1800B2C9C (-AddMultipleAndSet@-$DynArray@M$0A@@@QEAAJPEFBMI@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$0DAAAAAA@$0BAAAAAA@$0CAAAAAA@@Mesh@@CAKK@Z @ 0x1800B9C20 (--$ComputeAntialiasBorderFlags@$0DAAAAAA@$0BAAAAAA@$0CAAAAAA@@Mesh@@CAKK@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$0DAA@$0BAA@$0CAA@@Mesh@@CAKK@Z @ 0x1800B9C54 (--$ComputeAntialiasBorderFlags@$0DAA@$0BAA@$0CAA@@Mesh@@CAKK@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$0DAAAA@$0BAAAA@$0CAAAA@@Mesh@@CAKK@Z @ 0x1800B9C88 (--$ComputeAntialiasBorderFlags@$0DAAAA@$0BAAAA@$0CAAAA@@Mesh@@CAKK@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z @ 0x1800B9E7C (--$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z.c)
 *     ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x1800BC5BC (--_GMeshGraph@Mesh@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1801523FC (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?FindRectIndices@Mesh@@AEAA_NAEBUD2D_RECT_F@@V?$span@$$CBM@gsl@@1PEAH222@Z @ 0x1801545B4 (-FindRectIndices@Mesh@@AEAA_NAEBUD2D_RECT_F@@V-$span@$$CBM@gsl@@1PEAH222@Z.c)
 *     ?ComputeTexPositions@CoordMap@@QEBAJHV?$span@$$CBM@gsl@@0AEAV?$DynArray@M$0A@@@1M@Z @ 0x180155634 (-ComputeTexPositions@CoordMap@@QEBAJHV-$span@$$CBM@gsl@@0AEAV-$DynArray@M$0A@@@1M@Z.c)
 */

__int64 __fastcall Mesh::CreateRectangleMesh(
        Mesh *this,
        const struct Mesh::ContentInfo *a2,
        const struct D2D_RECT_F *a3,
        unsigned int a4)
{
  const struct Mesh::ContentInfo *v5; // r15
  int v7; // ebx
  __int64 v8; // rdx
  unsigned int v9; // r8d
  bool v10; // zf
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  int v15; // r12d
  __int64 v16; // r11
  int v17; // r10d
  __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // eax
  float v21; // xmm1_4
  float v22; // xmm0_4
  unsigned int v23; // r14d
  __int64 v24; // rsi
  __int64 v25; // r10
  _DWORD *v26; // rbx
  _DWORD *v27; // r15
  __int64 v28; // r11
  int i; // r10d
  __int64 v30; // r9
  int v31; // xmm0_4
  int v32; // xmm1_4
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  char v36; // bl
  _BYTE *v37; // rcx
  unsigned int v38; // r14d
  __int64 v39; // rsi
  __int64 *v40; // r14
  int v41; // eax
  int *v42; // rcx
  unsigned int v43; // edx
  Mesh::MeshGraph **v44; // rsi
  struct Mesh::MeshGraph *v45; // r15
  Mesh::MeshGraph *v46; // rcx
  __int64 v47; // rbx
  void *v48; // rcx
  int v49; // r8d
  unsigned __int16 *v50; // rdx
  int Triangles; // eax
  __int64 v52; // rax
  int *v54; // rax
  int v55; // eax
  int AllHollowRects; // eax
  unsigned int v57; // esi
  unsigned int v58; // r14d
  unsigned int v59; // r15d
  FLOAT *v60; // rax
  int v61; // edx
  int v62; // r10d
  int v63; // r9d
  int v64; // r11d
  unsigned int v65; // r8d
  __int64 v66; // rsi
  int v67; // eax
  int v68; // r9d
  unsigned int v69; // [rsp+20h] [rbp-E0h]
  int v70; // [rsp+30h] [rbp-D0h]
  int v71; // [rsp+40h] [rbp-C0h] BYREF
  int v72; // [rsp+44h] [rbp-BCh] BYREF
  int v73; // [rsp+48h] [rbp-B8h] BYREF
  int v74; // [rsp+4Ch] [rbp-B4h] BYREF
  const struct Mesh::ContentInfo *v75; // [rsp+50h] [rbp-B0h]
  struct D2D_RECT_F v76; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v77; // [rsp+68h] [rbp-98h]
  Mesh::MeshGraph **v78; // [rsp+70h] [rbp-90h]
  struct Mesh::MeshGraph *v79; // [rsp+78h] [rbp-88h] BYREF
  char v80; // [rsp+80h] [rbp-80h]
  __int128 v81; // [rsp+90h] [rbp-70h] BYREF
  __int128 v82; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v83; // [rsp+B0h] [rbp-50h]
  __int128 v84; // [rsp+C0h] [rbp-40h]
  __int128 v85; // [rsp+D0h] [rbp-30h]
  __int128 v86; // [rsp+E0h] [rbp-20h]
  void *v87; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE *v88; // [rsp+F8h] [rbp-8h]
  int v89; // [rsp+100h] [rbp+0h]
  __int64 v90; // [rsp+104h] [rbp+4h]
  _BYTE v91[48]; // [rsp+110h] [rbp+10h] BYREF
  void *v92; // [rsp+140h] [rbp+40h] BYREF
  _BYTE *v93; // [rsp+148h] [rbp+48h]
  int v94; // [rsp+150h] [rbp+50h]
  int v95[2]; // [rsp+154h] [rbp+54h]
  _BYTE v96[48]; // [rsp+160h] [rbp+60h] BYREF
  void *lpMem; // [rsp+190h] [rbp+90h] BYREF
  _BYTE *v98; // [rsp+198h] [rbp+98h]
  int v99; // [rsp+1A0h] [rbp+A0h]
  __int64 v100; // [rsp+1A4h] [rbp+A4h]
  _BYTE v101[48]; // [rsp+1B0h] [rbp+B0h] BYREF
  void *v102; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE *v103; // [rsp+1E8h] [rbp+E8h]
  int v104; // [rsp+1F0h] [rbp+F0h]
  __int64 v105; // [rsp+1F4h] [rbp+F4h]
  _BYTE v106[48]; // [rsp+200h] [rbp+100h] BYREF
  _QWORD v107[2]; // [rsp+230h] [rbp+130h] BYREF
  int v108; // [rsp+240h] [rbp+140h]
  __int64 v109; // [rsp+244h] [rbp+144h]
  _BYTE v110[48]; // [rsp+250h] [rbp+150h] BYREF

  v77 = a4;
  v5 = a2;
  v75 = a2;
  v7 = Mesh::Init(this, a2, a3);
  if ( v7 < 0 )
  {
LABEL_72:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xBFu);
LABEL_73:
    if ( v7 )
      goto LABEL_74;
    return (unsigned int)v7;
  }
  while ( 1 )
  {
    v94 = 10;
    v92 = v96;
    v8 = 0LL;
    *(_QWORD *)v95 = 10LL;
    v93 = v96;
    v9 = 0;
    v10 = (*((_BYTE *)this + 237) & 1) == 0;
    v87 = v91;
    v88 = v91;
    v11 = *((_QWORD *)this + 22);
    v89 = 10;
    v90 = 10LL;
    if ( !v10 )
    {
      v12 = CoordMap::ComputeMeshPositions(
              *((_QWORD *)v5 + 5),
              (unsigned int)&v92,
              (unsigned int)&v87,
              (_DWORD)a3,
              *(_DWORD *)(v11 + 4));
      v7 = v12;
      if ( v12 >= 0 )
        goto LABEL_10;
      v69 = 210;
      goto LABEL_112;
    }
    if ( (float)(a3->right - a3->left) > *(float *)(v11 + 4) )
    {
      v12 = DynArray<float,0>::AddMultipleAndSet(&v92, a3, 1LL);
      v7 = v12;
      if ( v12 < 0 )
      {
        v69 = 219;
        goto LABEL_112;
      }
      v12 = DynArray<float,0>::AddMultipleAndSet(&v92, &a3->right, 1LL);
      v7 = v12;
      if ( v12 < 0 )
      {
        v69 = 220;
        goto LABEL_112;
      }
      v8 = (unsigned int)v95[1];
      v9 = HIDWORD(v90);
    }
    if ( (float)(a3->bottom - a3->top) > *(float *)(*((_QWORD *)this + 22) + 4LL) )
    {
      v12 = DynArray<float,0>::AddMultipleAndSet(&v87, &a3->top, 1LL);
      v7 = v12;
      if ( v12 < 0 )
      {
        v69 = 228;
      }
      else
      {
        v12 = DynArray<float,0>::AddMultipleAndSet(&v87, &a3->bottom, 1LL);
        v7 = v12;
        if ( v12 >= 0 )
        {
LABEL_10:
          v9 = HIDWORD(v90);
          v8 = (unsigned int)v95[1];
          goto LABEL_11;
        }
        v69 = 229;
      }
LABEL_112:
      v68 = v12;
LABEL_114:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v68, v69);
LABEL_117:
      DynArrayImpl<1>::~DynArrayImpl<1>(&v87);
      DynArrayImpl<1>::~DynArrayImpl<1>(&v92);
      goto LABEL_73;
    }
LABEL_11:
    if ( (unsigned int)v8 < 2 || v9 < 2 )
      break;
    if ( v9 > 0x19 || (unsigned int)v8 > 0x19 )
    {
      v7 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xF6u);
      goto LABEL_125;
    }
    v13 = *((_DWORD *)this + 41);
    v14 = v8 * v9;
    if ( (unsigned int)v8 * v9 > v13 )
    {
      *((_BYTE *)this + 236) |= 4u;
      goto LABEL_71;
    }
    v15 = *((_DWORD *)this + 42);
    if ( v15 + v14 > (int)v13 )
    {
      v7 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x109u);
      goto LABEL_125;
    }
    v16 = 0LL;
    *((_DWORD *)this + 42) = v15 + v14;
    v17 = v15;
    do
    {
      v18 = 0LL;
      if ( (_DWORD)v8 )
      {
        do
        {
          *(_BYTE *)(v17 * *((_DWORD *)this + 40) + *((_QWORD *)this + 19) + 24LL) = 0;
          v19 = *((_QWORD *)this + 19);
          v20 = v17 * *((_DWORD *)this + 40);
          ++v17;
          v21 = *((float *)v92 + v18);
          v18 = (unsigned int)(v18 + 1);
          v22 = *((float *)v87 + v16) - *((float *)this + 51);
          *(float *)(v20 + v19) = v21 - *((float *)this + 50);
          *(float *)(v20 + v19 + 4) = v22;
          *(_OWORD *)(v20 + v19 + 8) = *(_OWORD *)v5;
          v8 = (unsigned int)v95[1];
        }
        while ( (unsigned int)v18 < v95[1] );
        v9 = HIDWORD(v90);
      }
      v16 = (unsigned int)(v16 + 1);
    }
    while ( (unsigned int)v16 < v9 );
    v104 = 10;
    v102 = v106;
    v23 = 0;
    v105 = 10LL;
    v103 = v106;
    lpMem = v101;
    v98 = v101;
    v99 = 10;
    v100 = 10LL;
    if ( *((int *)this + 6) > 0 )
    {
      v24 = 0LL;
      do
      {
        if ( *(_BYTE *)(56LL * v23 + *(_QWORD *)this + 52) )
        {
          v25 = *((_QWORD *)v5 + 5);
          if ( v25 )
          {
            *(_QWORD *)&v83 = v87;
            *(_QWORD *)&v84 = v92;
            v54 = (int *)*((_QWORD *)this + 22);
            *((_QWORD *)&v83 + 1) = v9;
            v70 = *v54;
            *((_QWORD *)&v84 + 1) = v8;
            v81 = v83;
            v82 = v84;
            v55 = CoordMap::ComputeTexPositions(
                    v25,
                    v23,
                    (unsigned int)&v82,
                    (unsigned int)&v81,
                    (__int64)&v102,
                    (__int64)&lpMem,
                    v70);
            v7 = v55;
            if ( v55 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v55, 0x12Bu);
              goto LABEL_116;
            }
            v26 = v102;
            v27 = lpMem;
            v8 = (unsigned int)v95[1];
            v9 = HIDWORD(v90);
          }
          else
          {
            v26 = v92;
            v27 = v87;
          }
          v28 = 0LL;
          for ( i = v15; (unsigned int)v28 < v9; v28 = (unsigned int)(v28 + 1) )
          {
            v30 = 0LL;
            if ( (_DWORD)v8 )
            {
              do
              {
                v31 = v26[v30];
                v30 = (unsigned int)(v30 + 1);
                v32 = v27[v28];
                v33 = i * *((_DWORD *)this + 40);
                ++i;
                v34 = *((_QWORD *)this + 19) + v33;
                *(_DWORD *)(v34 + v24 + 28) = v31;
                *(_DWORD *)(v34 + v24 + 32) = v32;
                v8 = (unsigned int)v95[1];
              }
              while ( (unsigned int)v30 < v95[1] );
              v9 = HIDWORD(v90);
            }
          }
          v5 = v75;
        }
        ++v23;
        v24 += 8LL;
      }
      while ( (signed int)v23 < *((_DWORD *)this + 6) );
    }
    v35 = *((_QWORD *)v5 + 5);
    v36 = 1;
    if ( v35 )
    {
      v108 = 3;
      v107[0] = v110;
      v109 = 3LL;
      v107[1] = v110;
      AllHollowRects = CoordMap::GetAllHollowRects(v35, v107);
      v7 = AllHollowRects;
      if ( AllHollowRects < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, AllHollowRects, 0x146u);
        DynArrayImpl<1>::~DynArrayImpl<1>(v107);
LABEL_116:
        DynArrayImpl<1>::~DynArrayImpl<1>(&lpMem);
        DynArrayImpl<1>::~DynArrayImpl<1>(&v102);
        goto LABEL_117;
      }
      v57 = HIDWORD(v109);
      v58 = 0;
      v36 = 1;
      if ( HIDWORD(v109) )
      {
        v59 = v95[1];
        do
        {
          v60 = (FLOAT *)(v107[0] + 16LL * v58);
          if ( *v60 < a3->left )
            v76.left = a3->left;
          else
            v76.left = *v60;
          if ( v60[1] < a3->top )
            v76.top = a3->top;
          else
            v76.top = v60[1];
          if ( a3->right < v60[2] )
            v76.right = a3->right;
          else
            v76.right = v60[2];
          if ( a3->bottom < v60[3] )
            v76.bottom = a3->bottom;
          else
            v76.bottom = v60[3];
          if ( !IsEmpty(&v76) )
          {
            *(_QWORD *)&v85 = v87;
            *(_QWORD *)&v86 = v92;
            *((_QWORD *)&v85 + 1) = HIDWORD(v90);
            *((_QWORD *)&v86 + 1) = v59;
            v82 = v85;
            v73 = -1;
            v74 = -1;
            v71 = -1;
            v72 = -1;
            v81 = v86;
            if ( (unsigned __int8)Mesh::FindRectIndices(
                                    (_DWORD)this,
                                    (unsigned int)&v76,
                                    (unsigned int)&v81,
                                    (unsigned int)&v82,
                                    (__int64)&v73,
                                    (__int64)&v71,
                                    (__int64)&v74,
                                    (__int64)&v72) )
            {
              v61 = v71;
              v36 = 0;
              v62 = v72;
              if ( v71 <= v72 )
              {
                v63 = v73;
                v64 = v74;
                do
                {
                  if ( v63 <= v64 )
                  {
                    v65 = v15 + v59 * v61 + v63;
                    v66 = (unsigned int)(v64 - v63 + 1);
                    do
                    {
                      *(_BYTE *)((int)(v65 * *((_DWORD *)this + 40)) + *((_QWORD *)this + 19) + 24LL) = 1;
                      v67 = v65 * *((_DWORD *)this + 40);
                      ++v65;
                      *(_OWORD *)(v67 + *((_QWORD *)this + 19) + 8LL) = 0LL;
                      --v66;
                    }
                    while ( v66 );
                    v59 = v95[1];
                  }
                  ++v61;
                }
                while ( v61 <= v62 );
                v57 = HIDWORD(v109);
              }
            }
          }
          ++v58;
        }
        while ( v58 < v57 );
        v5 = v75;
      }
      DynArrayImpl<1>::~DynArrayImpl<1>(v107);
      LODWORD(v8) = v95[1];
      v9 = HIDWORD(v90);
    }
    *((_BYTE *)this + 236) |= 0x22u;
    v37 = lpMem;
    *((_DWORD *)this + 53) = v8;
    *((_DWORD *)this + 52) = v9;
    if ( v37 != v98 )
    {
      WPF::ProcessHeapImpl::Free(v37);
      lpMem = 0LL;
    }
    if ( v102 != v103 )
      WPF::ProcessHeapImpl::Free(v102);
    v38 = v77;
    if ( v77 )
    {
      *((_BYTE *)this + 236) |= 0x40u;
      *((_DWORD *)this + 55) = Mesh::ComputeAntialiasBorderFlags<50331648,16777216,33554432>(v38);
      *((_DWORD *)this + 56) = Mesh::ComputeAntialiasBorderFlags<3,1,2>(v38);
      *((_DWORD *)this + 57) = Mesh::ComputeAntialiasBorderFlags<768,256,512>(v38);
      *((_DWORD *)this + 58) = Mesh::ComputeAntialiasBorderFlags<196608,65536,131072>(v38);
    }
    if ( !v36 )
      goto LABEL_61;
    v39 = 0LL;
    if ( *((_DWORD *)this + 52) != 2 )
      goto LABEL_58;
    if ( *((_DWORD *)this + 53) != 2 )
      goto LABEL_58;
    v40 = (__int64 *)((char *)this + 192);
    if ( this == (Mesh *)-192LL )
      goto LABEL_58;
    v39 = *v40;
    if ( *v40 )
    {
      if ( *(_DWORD *)(v39 + 128) )
        goto LABEL_58;
    }
    v41 = Mesh::BuildGrid(this, v8, 2, 2);
    v7 = v41;
    if ( v41 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0x4F8u);
    }
    else
    {
      if ( !v39 )
      {
        v42 = (int *)*((_QWORD *)this + 22);
        v78 = (Mesh::MeshGraph **)((char *)this + 192);
        v79 = 0LL;
        v80 = 1;
        v7 = Mesh::MeshGraph::Create(v42[8], v42[14], v42[22], 3 * (v42[25] + 2 * (v42[23] - v42[26])), &v79);
        if ( v80 )
        {
          v44 = v78;
          v45 = v79;
          v46 = *v78;
          if ( v79 != *v78 )
          {
            if ( v46 )
              Mesh::MeshGraph::`scalar deleting destructor'(v46, v43);
            *v44 = v45;
          }
          v5 = v75;
        }
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x501u);
          goto LABEL_59;
        }
        v39 = *v40;
      }
      v47 = *((_QWORD *)this + 22);
      memcpy_0(*(void **)(v39 + 16), *(const void **)(v47 + 16), (__int64)*(int *)(v47 + 32) << 6);
      memcpy_0(*(void **)(v39 + 40), *(const void **)(v47 + 40), 88LL * *(int *)(v47 + 56));
      v48 = *(void **)(v39 + 72);
      *(_QWORD *)(v39 + 64) = *(_QWORD *)(v47 + 64);
      memcpy_0(v48, *(const void **)(v47 + 72), 88LL * *(int *)(v47 + 88));
      v49 = *(_DWORD *)(v39 + 120);
      v50 = *(unsigned __int16 **)(v39 + 112);
      *(_DWORD *)(v39 + 32) = *(_DWORD *)(v47 + 32);
      *(_DWORD *)(v39 + 56) = *(_DWORD *)(v47 + 56);
      *(_DWORD *)(v39 + 88) = *(_DWORD *)(v47 + 88);
      *(_DWORD *)(v39 + 92) = *(_DWORD *)(v47 + 92);
      *(_DWORD *)(v39 + 96) = *(_DWORD *)(v47 + 96);
      *(_DWORD *)(v39 + 100) = *(_DWORD *)(v47 + 100);
      *(_DWORD *)(v39 + 104) = *(_DWORD *)(v47 + 104);
      Triangles = Mesh::GenerateTriangles(this, v50, v49, (int *)(v39 + 128));
      v7 = Triangles;
      if ( Triangles >= 0 )
      {
        v52 = *((_QWORD *)this + 22);
        *(_QWORD *)(v52 + 64) = 0LL;
        *(_DWORD *)(v52 + 32) = 0;
        *(_DWORD *)(v52 + 56) = 0;
        *(_QWORD *)(v52 + 88) = 0LL;
        *(_QWORD *)(v52 + 96) = 0LL;
        *(_DWORD *)(v52 + 104) = 0;
        *(_DWORD *)(v52 + 128) = 0;
LABEL_58:
        *((_QWORD *)this + 23) = v39;
        v7 = 0;
        goto LABEL_59;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Triangles, 0x509u);
    }
    if ( v39 )
    {
      *(_QWORD *)(v39 + 64) = 0LL;
      *(_DWORD *)(v39 + 32) = 0;
      *(_DWORD *)(v39 + 56) = 0;
      *(_QWORD *)(v39 + 88) = 0LL;
      *(_QWORD *)(v39 + 96) = 0LL;
      *(_DWORD *)(v39 + 104) = 0;
      *(_DWORD *)(v39 + 128) = 0;
    }
LABEL_59:
    if ( (*((_BYTE *)this + 236) & 4) == 0 )
    {
      if ( v7 >= 0 )
      {
LABEL_61:
        if ( v87 != v88 )
        {
          WPF::ProcessHeapImpl::Free(v87);
          v87 = 0LL;
        }
        if ( v92 != v93 )
          WPF::ProcessHeapImpl::Free(v92);
        return 0LL;
      }
      v69 = 426;
      v68 = v7;
      goto LABEL_114;
    }
LABEL_71:
    DynArrayImpl<1>::~DynArrayImpl<1>(&v87);
    DynArrayImpl<1>::~DynArrayImpl<1>(&v92);
    v7 = Mesh::Init(this, v5, a3);
    if ( v7 < 0 )
      goto LABEL_72;
  }
  v7 = 1;
LABEL_125:
  DynArrayImpl<1>::~DynArrayImpl<1>(&v87);
  DynArrayImpl<1>::~DynArrayImpl<1>(&v92);
LABEL_74:
  *((_BYTE *)this + 236) &= ~1u;
  return (unsigned int)v7;
}
