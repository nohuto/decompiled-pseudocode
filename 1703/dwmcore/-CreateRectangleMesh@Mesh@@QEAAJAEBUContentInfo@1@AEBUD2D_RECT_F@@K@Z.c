/*
 * XREFs of ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x18003CCC0
 * Callers:
 *     ?AppendHWPrimitive@CDrawListPrimitiveBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x180040260 (-AppendHWPrimitive@CDrawListPrimitiveBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVerte.c)
 * Callees:
 *     ?LookupCachedGridGraph@Mesh@@AEAAJPEAPEAUMeshGraph@1@@Z @ 0x18003BB10 (-LookupCachedGridGraph@Mesh@@AEAAJPEAPEAUMeshGraph@1@@Z.c)
 *     ?Init@Mesh@@AEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@@Z @ 0x18003C950 (-Init@Mesh@@AEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?GetAllHollowRects@CoordMap@@QEBAJAEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x180058040 (-GetAllHollowRects@CoordMap@@QEBAJAEAV-$DynArray@UD2D_RECT_F@@$0A@@@@Z.c)
 *     ?ComputeMeshPositions@CoordMap@@QEBAJAEAV?$DynArray@M$0A@@@0AEBUD2D_RECT_F@@M@Z @ 0x180058078 (-ComputeMeshPositions@CoordMap@@QEBAJAEAV-$DynArray@M$0A@@@0AEBUD2D_RECT_F@@M@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArray@M$0A@@@QEAAJPEFBMI@Z @ 0x1800BF7F8 (-AddMultipleAndSet@-$DynArray@M$0A@@@QEAAJPEFBMI@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$0DAAAAAA@$0BAAAAAA@$0CAAAAAA@@Mesh@@CAKK@Z @ 0x1800C58C8 (--$ComputeAntialiasBorderFlags@$0DAAAAAA@$0BAAAAAA@$0CAAAAAA@@Mesh@@CAKK@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$0DAA@$0BAA@$0CAA@@Mesh@@CAKK@Z @ 0x1800C58FC (--$ComputeAntialiasBorderFlags@$0DAA@$0BAA@$0CAA@@Mesh@@CAKK@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$0DAAAA@$0BAAAA@$0CAAAA@@Mesh@@CAKK@Z @ 0x1800C5930 (--$ComputeAntialiasBorderFlags@$0DAAAA@$0BAAAA@$0CAAAA@@Mesh@@CAKK@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z @ 0x1800C5AD4 (--$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18015C31C (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?FindRectIndices@Mesh@@AEAA_NAEBUD2D_RECT_F@@V?$ArrayRef@M@@1PEAH222@Z @ 0x18015E41C (-FindRectIndices@Mesh@@AEAA_NAEBUD2D_RECT_F@@V-$ArrayRef@M@@1PEAH222@Z.c)
 *     ?ComputeTexPositions@CoordMap@@QEBAJHV?$ArrayRef@M@@0AEAV?$DynArray@M$0A@@@1M@Z @ 0x18015F5BC (-ComputeTexPositions@CoordMap@@QEBAJHV-$ArrayRef@M@@0AEAV-$DynArray@M$0A@@@1M@Z.c)
 */

__int64 __fastcall Mesh::CreateRectangleMesh(
        struct Mesh::MeshGraph **this,
        const struct Mesh::ContentInfo *a2,
        const struct D2D_RECT_F *a3,
        unsigned int a4)
{
  unsigned int v4; // r12d
  const struct Mesh::ContentInfo *v6; // r13
  int v8; // edi
  unsigned int v9; // r14d
  bool v10; // zf
  unsigned int v11; // r8d
  __int64 v12; // r9
  struct Mesh::MeshGraph *v13; // rax
  int v14; // eax
  __int64 v15; // r9
  int v16; // eax
  int v17; // eax
  __int64 v18; // r9
  int v19; // eax
  unsigned int v20; // ecx
  int v21; // eax
  int v22; // esi
  unsigned int v23; // r10d
  int v24; // edi
  unsigned int v25; // r11d
  int v26; // eax
  __int64 v27; // rcx
  char *v28; // rdx
  __m128 v29; // xmm0
  __m128 v30; // xmm1
  bool v31; // cc
  __int64 v32; // rsi
  __int64 v33; // rcx
  unsigned int *v34; // r12
  unsigned int *v35; // r13
  int v36; // r11d
  unsigned int i; // edi
  unsigned int v38; // r10d
  int v39; // ecx
  __int64 v40; // rax
  __int64 v41; // rcx
  char v42; // di
  _BYTE *v43; // rcx
  int v44; // eax
  int v46; // eax
  struct Mesh::MeshGraph *v47; // rdx
  int v48; // xmm0_4
  int v49; // eax
  int AllHollowRects; // eax
  unsigned int v51; // r14d
  unsigned int v52; // r12d
  int v53; // r13d
  FLOAT *v54; // rax
  int v55; // edx
  int v56; // r10d
  int v57; // r8d
  int v58; // r11d
  int v59; // r9d
  __int64 v60; // r14
  int v61; // eax
  int v62; // [rsp+40h] [rbp-C0h] BYREF
  int v63; // [rsp+44h] [rbp-BCh] BYREF
  int v64; // [rsp+48h] [rbp-B8h] BYREF
  int v65; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v66; // [rsp+50h] [rbp-B0h]
  struct D2D_RECT_F v67; // [rsp+58h] [rbp-A8h] BYREF
  const struct Mesh::ContentInfo *v68; // [rsp+68h] [rbp-98h]
  void *v69; // [rsp+70h] [rbp-90h] BYREF
  int v70; // [rsp+78h] [rbp-88h]
  void *v71; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v72; // [rsp+88h] [rbp-78h]
  void *v73; // [rsp+90h] [rbp-70h] BYREF
  int v74; // [rsp+98h] [rbp-68h]
  void *v75; // [rsp+A0h] [rbp-60h] BYREF
  int v76; // [rsp+A8h] [rbp-58h]
  void *v77; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE *v78; // [rsp+B8h] [rbp-48h]
  int v79; // [rsp+C0h] [rbp-40h]
  __int64 v80; // [rsp+C4h] [rbp-3Ch]
  _BYTE v81[48]; // [rsp+D0h] [rbp-30h] BYREF
  void *lpMem; // [rsp+100h] [rbp+0h] BYREF
  _BYTE *v83; // [rsp+108h] [rbp+8h]
  int v84; // [rsp+110h] [rbp+10h]
  __int64 v85; // [rsp+114h] [rbp+14h]
  _BYTE v86[48]; // [rsp+120h] [rbp+20h] BYREF
  void *v87; // [rsp+150h] [rbp+50h] BYREF
  _BYTE *v88; // [rsp+158h] [rbp+58h]
  int v89; // [rsp+160h] [rbp+60h]
  __int64 v90; // [rsp+164h] [rbp+64h]
  _BYTE v91[48]; // [rsp+170h] [rbp+70h] BYREF
  void *v92; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE *v93; // [rsp+1A8h] [rbp+A8h]
  int v94; // [rsp+1B0h] [rbp+B0h]
  __int64 v95; // [rsp+1B4h] [rbp+B4h]
  _BYTE v96[48]; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v97[2]; // [rsp+1F0h] [rbp+F0h] BYREF
  int v98; // [rsp+200h] [rbp+100h]
  __int64 v99; // [rsp+204h] [rbp+104h]
  _BYTE v100[48]; // [rsp+210h] [rbp+110h] BYREF

  v4 = a4;
  v66 = a4;
  v68 = a2;
  v6 = a2;
  v8 = Mesh::Init((Mesh *)this, a2, a3);
  if ( v8 < 0 )
  {
LABEL_55:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xBFu);
LABEL_56:
    if ( !v8 )
      return (unsigned int)v8;
    goto LABEL_57;
  }
  v9 = 0;
  while ( 1 )
  {
    v10 = (*((_BYTE *)this + 237) & 1) == 0;
    lpMem = v86;
    v11 = 0;
    v84 = 10;
    v83 = v86;
    v12 = 0LL;
    v85 = 10LL;
    v77 = v81;
    v78 = v81;
    v13 = this[22];
    v79 = 10;
    v80 = 10LL;
    if ( !v10 )
    {
      v46 = CoordMap::ComputeMeshPositions(
              *((_QWORD *)v6 + 5),
              (unsigned int)&lpMem,
              (unsigned int)&v77,
              (_DWORD)a3,
              *((_DWORD *)v13 + 1));
      v8 = v46;
      if ( v46 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, 0xD2u);
LABEL_93:
        DynArrayImpl<1>::~DynArrayImpl<1>(&v77);
        DynArrayImpl<1>::~DynArrayImpl<1>(&lpMem);
        goto LABEL_56;
      }
      goto LABEL_11;
    }
    if ( (float)(a3->right - a3->left) > *((float *)v13 + 1) )
    {
      v14 = DynArray<float,0>::AddMultipleAndSet(&lpMem, a3, 1LL, 0LL);
      v8 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xDBu);
        goto LABEL_93;
      }
      v16 = DynArray<float,0>::AddMultipleAndSet(&lpMem, &a3->right, 1LL, v15);
      v8 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xDCu);
        goto LABEL_93;
      }
      v11 = HIDWORD(v85);
      v12 = HIDWORD(v80);
    }
    if ( (float)(a3->bottom - a3->top) > *((float *)this[22] + 1) )
    {
      v17 = DynArray<float,0>::AddMultipleAndSet(&v77, &a3->top, 1LL, v12);
      v8 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xE4u);
        goto LABEL_93;
      }
      v19 = DynArray<float,0>::AddMultipleAndSet(&v77, &a3->bottom, 1LL, v18);
      v8 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xE5u);
        goto LABEL_93;
      }
LABEL_11:
      LODWORD(v12) = HIDWORD(v80);
      v11 = HIDWORD(v85);
    }
    if ( v11 < 2 || (unsigned int)v12 < 2 )
    {
      v8 = 1;
      goto LABEL_102;
    }
    if ( (unsigned int)v12 > 0x19 || v11 > 0x19 )
    {
      v8 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xF6u);
LABEL_102:
      DynArrayImpl<1>::~DynArrayImpl<1>(&v77);
      DynArrayImpl<1>::~DynArrayImpl<1>(&lpMem);
LABEL_57:
      *((_BYTE *)this + 236) &= ~1u;
      return (unsigned int)v8;
    }
    v20 = *((_DWORD *)this + 41);
    v21 = v11 * v12;
    if ( v11 * (unsigned int)v12 > v20 )
    {
      *((_BYTE *)this + 236) |= 4u;
      goto LABEL_54;
    }
    v22 = *((_DWORD *)this + 42);
    v62 = v22;
    if ( v22 + v21 > (int)v20 )
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x109u);
      goto LABEL_102;
    }
    *((_DWORD *)this + 42) = v22 + v21;
    v23 = 0;
    v24 = v22;
    do
    {
      v25 = 0;
      if ( v11 )
      {
        do
        {
          *((_BYTE *)this[19] + v24 * *((_DWORD *)this + 40) + 24) = 0;
          v26 = *((_DWORD *)this + 40) * v24++;
          v27 = v25++;
          v28 = (char *)this[19] + v26;
          v29 = (__m128)*((unsigned int *)lpMem + v27);
          v29.m128_f32[0] = v29.m128_f32[0] - *((float *)this + 50);
          v30 = (__m128)*((unsigned int *)v77 + v23);
          v30.m128_f32[0] = v30.m128_f32[0] - *((float *)this + 51);
          *(_QWORD *)v28 = _mm_unpacklo_ps(v29, v30).m128_u64[0];
          *(_OWORD *)(v28 + 8) = *(_OWORD *)v6;
          v11 = HIDWORD(v85);
        }
        while ( v25 < HIDWORD(v85) );
        LODWORD(v12) = HIDWORD(v80);
      }
      ++v23;
    }
    while ( v23 < (unsigned int)v12 );
    v31 = *((_DWORD *)this + 6) <= 0;
    v92 = v96;
    v93 = v96;
    v87 = v91;
    v88 = v91;
    v94 = 10;
    v95 = 10LL;
    v89 = 10;
    v90 = 10LL;
    if ( !v31 )
    {
      v32 = 0LL;
      while ( 1 )
      {
        if ( *((_BYTE *)*this + 56 * v9 + 52) )
        {
          v33 = *((_QWORD *)v6 + 5);
          if ( v33 )
          {
            v47 = this[22];
            v69 = v77;
            v48 = *(_DWORD *)v47;
            v71 = lpMem;
            v70 = v12;
            v72 = v11;
            v49 = CoordMap::ComputeTexPositions(
                    v33,
                    v9,
                    (unsigned int)&v71,
                    (unsigned int)&v69,
                    (__int64)&v92,
                    (__int64)&v87,
                    v48);
            v8 = v49;
            if ( v49 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, 0x12Bu);
              goto LABEL_92;
            }
            v34 = (unsigned int *)v92;
            v35 = (unsigned int *)v87;
            v11 = HIDWORD(v85);
            LODWORD(v12) = HIDWORD(v80);
          }
          else
          {
            v34 = (unsigned int *)lpMem;
            v35 = (unsigned int *)v77;
          }
          v36 = v62;
          for ( i = 0; i < (unsigned int)v12; ++i )
          {
            v38 = 0;
            if ( v11 )
            {
              do
              {
                v39 = *((_DWORD *)this + 40) * v36++;
                v40 = (int)v38++;
                *(_QWORD *)((char *)this[19] + v32 + v39 + 28) = _mm_unpacklo_ps((__m128)v34[v40], (__m128)v35[i]).m128_u64[0];
                v11 = HIDWORD(v85);
              }
              while ( v38 < HIDWORD(v85) );
              LODWORD(v12) = HIDWORD(v80);
            }
          }
          v6 = v68;
        }
        ++v9;
        v32 += 8LL;
        if ( (signed int)v9 >= *((_DWORD *)this + 6) )
        {
          v22 = v62;
          v4 = v66;
          break;
        }
      }
    }
    v41 = *((_QWORD *)v6 + 5);
    v42 = 1;
    if ( v41 )
    {
      v98 = 3;
      v97[0] = v100;
      v99 = 3LL;
      v97[1] = v100;
      AllHollowRects = CoordMap::GetAllHollowRects(v41, v97);
      v8 = AllHollowRects;
      if ( AllHollowRects < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, AllHollowRects, 0x146u);
        DynArrayImpl<1>::~DynArrayImpl<1>(v97);
LABEL_92:
        DynArrayImpl<1>::~DynArrayImpl<1>(&v87);
        DynArrayImpl<1>::~DynArrayImpl<1>(&v92);
        goto LABEL_93;
      }
      v51 = HIDWORD(v99);
      v52 = 0;
      v42 = 1;
      if ( HIDWORD(v99) )
      {
        v53 = HIDWORD(v85);
        do
        {
          v54 = (FLOAT *)(v97[0] + 16LL * v52);
          if ( *v54 < a3->left )
            v67.left = a3->left;
          else
            v67.left = *v54;
          if ( v54[1] < a3->top )
            v67.top = a3->top;
          else
            v67.top = v54[1];
          if ( a3->right < v54[2] )
            v67.right = a3->right;
          else
            v67.right = v54[2];
          if ( a3->bottom < v54[3] )
            v67.bottom = a3->bottom;
          else
            v67.bottom = v54[3];
          if ( !IsEmpty(&v67) )
          {
            v74 = HIDWORD(v80);
            v73 = v77;
            v75 = lpMem;
            v64 = -1;
            v65 = -1;
            v62 = -1;
            v63 = -1;
            v76 = v53;
            if ( (unsigned __int8)Mesh::FindRectIndices(
                                    (_DWORD)this,
                                    (unsigned int)&v67,
                                    (unsigned int)&v75,
                                    (unsigned int)&v73,
                                    (__int64)&v64,
                                    (__int64)&v62,
                                    (__int64)&v65,
                                    (__int64)&v63) )
            {
              v55 = v62;
              v42 = 0;
              v56 = v63;
              if ( v62 <= v63 )
              {
                v57 = v64;
                v58 = v65;
                do
                {
                  if ( v57 <= v58 )
                  {
                    v59 = v22 + v55 * v53 + v57;
                    v60 = (unsigned int)(v58 - v57 + 1);
                    do
                    {
                      *((_BYTE *)this[19] + v59 * *((_DWORD *)this + 40) + 24) = 1;
                      v61 = *((_DWORD *)this + 40) * v59++;
                      *(_OWORD *)((char *)this[19] + v61 + 8) = 0LL;
                      --v60;
                    }
                    while ( v60 );
                    v53 = HIDWORD(v85);
                  }
                  ++v55;
                }
                while ( v55 <= v56 );
                v51 = HIDWORD(v99);
              }
            }
          }
          ++v52;
        }
        while ( v52 < v51 );
        v6 = v68;
      }
      DynArrayImpl<1>::~DynArrayImpl<1>(v97);
      v11 = HIDWORD(v85);
      LODWORD(v12) = HIDWORD(v80);
      v4 = v66;
    }
    *((_BYTE *)this + 236) |= 0x22u;
    v43 = v87;
    *((_DWORD *)this + 53) = v11;
    *((_DWORD *)this + 52) = v12;
    if ( v43 == v88 )
    {
      v9 = 0;
    }
    else
    {
      WPF::ProcessHeapImpl::Free(v43);
      v9 = 0;
      v87 = 0LL;
    }
    if ( v92 != v93 )
      WPF::ProcessHeapImpl::Free(v92);
    if ( v4 )
    {
      *((_BYTE *)this + 236) |= 0x40u;
      *((_DWORD *)this + 55) = Mesh::ComputeAntialiasBorderFlags<50331648,16777216,33554432>(v4);
      *((_DWORD *)this + 56) = Mesh::ComputeAntialiasBorderFlags<3,1,2>(v4);
      *((_DWORD *)this + 57) = Mesh::ComputeAntialiasBorderFlags<768,256,512>(v4);
      *((_DWORD *)this + 58) = Mesh::ComputeAntialiasBorderFlags<196608,65536,131072>(v4);
    }
    if ( !v42 )
      goto LABEL_46;
    v44 = Mesh::LookupCachedGridGraph((Mesh *)this, this + 23);
    v8 = v44;
    if ( (*((_BYTE *)this + 236) & 4) == 0 )
      break;
LABEL_54:
    DynArrayImpl<1>::~DynArrayImpl<1>(&v77);
    DynArrayImpl<1>::~DynArrayImpl<1>(&lpMem);
    v8 = Mesh::Init((Mesh *)this, v6, a3);
    if ( v8 < 0 )
      goto LABEL_55;
  }
  if ( v44 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v44, 0x1AAu);
    goto LABEL_93;
  }
LABEL_46:
  if ( v77 != v78 )
  {
    WPF::ProcessHeapImpl::Free(v77);
    v77 = 0LL;
  }
  if ( lpMem != v83 )
    WPF::ProcessHeapImpl::Free(lpMem);
  return 0LL;
}
