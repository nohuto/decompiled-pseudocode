/*
 * XREFs of ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x180176CCC
 * Callers:
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x1801BFF2C (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 * Callees:
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180012220 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180057184 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z @ 0x1800CA690 (--$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?AddMultipleAndSet@?$DynArray@UPendingStateChangeInfo@CInteractionTracker@@$0A@@@QEAAJPEFBUPendingStateChangeInfo@CInteractionTracker@@I@Z @ 0x18016C018 (-AddMultipleAndSet@-$DynArray@UPendingStateChangeInfo@CInteractionTracker@@$0A@@@QEAAJPEFBUPendi.c)
 *     ?ClassifyPoint@D2DVectorHelper@@YA?AW4Relation@1@AEBUD2D_VECTOR_4F@@0@Z @ 0x180176C74 (-ClassifyPoint@D2DVectorHelper@@YA-AW4Relation@1@AEBUD2D_VECTOR_4F@@0@Z.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z @ 0x1801773BC (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z.c)
 *     ?PlaneVectorIntersection@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x180177D78 (-PlaneVectorIntersection@D2DVectorHelper@@YA-AUD2D_VECTOR_4F@@AEBU2@00@Z.c)
 *     ?GetTranspose@CMILMatrix@@QEBA?AV1@XZ @ 0x180186310 (-GetTranspose@CMILMatrix@@QEBA-AV1@XZ.c)
 *     ?D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z @ 0x1801AFBFC (-D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z.c)
 */

__int64 __fastcall CPolygon::CompareAndSplit(
        CPolygon *this,
        struct CPolygon *a2,
        enum D2DVectorHelper::Relation *a3,
        struct CPolygon **a4,
        struct CPolygon **a5)
{
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // esi
  __int128 v13; // xmm0
  int v14; // r14d
  __int128 v15; // xmm1
  __int64 v16; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v17; // r8
  unsigned int v18; // edx
  unsigned int v19; // r9d
  __int64 Transpose; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int64 v24; // rdx
  int v25; // r8d
  __int128 v26; // xmm0
  int v27; // r12d
  struct D2D_VECTOR_4F v28; // xmm6
  __int64 v29; // rax
  int v30; // r8d
  __int64 v31; // rcx
  struct D2D_VECTOR_4F v32; // xmm7
  unsigned int v33; // r8d
  int v34; // r9d
  int v35; // r10d
  int v36; // r11d
  unsigned int v37; // r13d
  struct D2D_VECTOR_4F v38; // xmm0
  unsigned int v39; // r8d
  int v40; // eax
  unsigned int v41; // r8d
  int v42; // eax
  int v43; // eax
  struct D2D_VECTOR_4F v44; // xmm0
  unsigned int v45; // r8d
  int v46; // eax
  unsigned int v47; // r8d
  int v48; // eax
  int v49; // eax
  int v50; // eax
  unsigned int v51; // r8d
  int v52; // eax
  int v53; // eax
  unsigned int v54; // r8d
  int v55; // eax
  int v56; // eax
  unsigned int v57; // r8d
  int v58; // eax
  __int64 v59; // r9
  int v60; // eax
  __int64 v61; // r9
  int v62; // eax
  __int64 v63; // rax
  __int64 v64; // rax
  struct D2D_VECTOR_4F *v66; // [rsp+28h] [rbp-E0h]
  _QWORD v67[3]; // [rsp+30h] [rbp-D8h] BYREF
  int v68; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v69; // [rsp+50h] [rbp-B8h]
  __int64 v70; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v71; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v72; // [rsp+68h] [rbp-A0h]
  struct CPolygon **v73; // [rsp+70h] [rbp-98h]
  struct CPolygon **v74; // [rsp+78h] [rbp-90h]
  __int128 v75; // [rsp+88h] [rbp-80h] BYREF
  __int128 v76; // [rsp+98h] [rbp-70h]
  __int128 v77; // [rsp+A8h] [rbp-60h]
  __int128 v78; // [rsp+B8h] [rbp-50h]
  int v79; // [rsp+C8h] [rbp-40h]
  struct D2D_VECTOR_4F v80; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v81; // [rsp+E8h] [rbp-20h]
  __int128 v82; // [rsp+F8h] [rbp-10h]
  __int128 v83; // [rsp+108h] [rbp+0h]
  int v84; // [rsp+118h] [rbp+10h]
  struct D2D_VECTOR_4F v85; // [rsp+128h] [rbp+20h] BYREF
  int v86; // [rsp+138h] [rbp+30h]
  char v87[16]; // [rsp+140h] [rbp+38h] BYREF
  char v88[72]; // [rsp+150h] [rbp+48h] BYREF
  struct D2D_VECTOR_4F v89; // [rsp+198h] [rbp+90h] BYREF
  struct D2D_VECTOR_4F v90; // [rsp+1A8h] [rbp+A0h] BYREF
  int v91; // [rsp+1B8h] [rbp+B0h]
  struct D2D_VECTOR_4F v92; // [rsp+1C0h] [rbp+B8h] BYREF
  int v93; // [rsp+1D0h] [rbp+C8h]
  __int128 v94; // [rsp+1D8h] [rbp+D0h] BYREF
  void *v95[2]; // [rsp+1E8h] [rbp+E0h] BYREF
  int v96; // [rsp+1F8h] [rbp+F0h]
  __int64 v97; // [rsp+1FCh] [rbp+F4h]
  _BYTE v98[128]; // [rsp+208h] [rbp+100h] BYREF
  void *v99[2]; // [rsp+288h] [rbp+180h] BYREF
  int v100; // [rsp+298h] [rbp+190h]
  __int64 v101; // [rsp+29Ch] [rbp+194h]
  _BYTE v102[128]; // [rsp+2A8h] [rbp+1A0h] BYREF

  v73 = a4;
  *a4 = 0LL;
  v99[0] = v102;
  v99[1] = v102;
  v74 = a5;
  v95[0] = v98;
  *a5 = 0LL;
  v8 = *((_OWORD *)a2 + 9);
  v95[1] = v98;
  v9 = *((_OWORD *)a2 + 10);
  v10 = *((_DWORD *)a2 + 52);
  v11 = 0;
  v75 = v8;
  v12 = 0;
  v13 = *((_OWORD *)a2 + 11);
  v14 = 0;
  v100 = 6;
  v76 = v9;
  v15 = *((_OWORD *)a2 + 12);
  v101 = 6LL;
  v96 = 6;
  v97 = 6LL;
  v77 = v13;
  v78 = v15;
  v79 = v10;
  v84 = 0;
  v70 = 0LL;
  v71 = 0LL;
  if ( CMILMatrix::Invert((CMILMatrix *)&v75, (__int64)a2, a3) )
  {
    CMILMatrix::Multiply((CPolygon *)((char *)this + 144), (const struct CMILMatrix *)&v75, (struct CMILMatrix *)&v75);
  }
  else
  {
    v75 = _xmm;
    LOWORD(v79) = 32085;
    v76 = _xmm;
    v77 = _xmm;
    v78 = _xmm;
  }
  if ( CMILMatrix::Invert((CMILMatrix *)&v75, v16, v17) )
  {
    Transpose = CMILMatrix::GetTranspose(&v75, v88);
    v21 = *(_OWORD *)(Transpose + 16);
    v80 = *(struct D2D_VECTOR_4F *)Transpose;
    v22 = *(_OWORD *)(Transpose + 32);
    v81 = v21;
    v23 = *(_OWORD *)(Transpose + 48);
    LODWORD(Transpose) = *(_DWORD *)(Transpose + 64);
    v82 = v22;
    v83 = v23;
    v84 = Transpose;
  }
  else
  {
    v80 = (struct D2D_VECTOR_4F)_xmm;
    LOWORD(v84) = 32085;
    v81 = _xmm;
    v82 = _xmm;
    v83 = _xmm;
  }
  *(_OWORD *)&v67[1] = *((_OWORD *)this + 8);
  v94 = *(_OWORD *)&v67[1];
  D3DXVec4TransformArray(
    (struct D2DVector4 *)&v89,
    v18,
    (const struct D2DVector4 *)&v94,
    v19,
    (const struct D2DMatrix *)&v80,
    v67[0]);
  v24 = *((_QWORD *)a2 + 2);
  v25 = *((_DWORD *)a2 + 10);
  *(struct D2D_VECTOR_4F *)&v67[1] = v89;
  v26 = *(_OWORD *)(v24 + 20LL * (unsigned int)(v25 - 2));
  v27 = *(_DWORD *)(v24 + 20LL * (unsigned int)(v25 - 2) + 16);
  v68 = v27;
  *(_OWORD *)&v67[1] = v26;
  v92 = *(struct D2D_VECTOR_4F *)(v24 + 20LL * (unsigned int)(v25 - 1));
  v28 = v92;
  v93 = *(_DWORD *)(v24 + 20LL * (unsigned int)(v25 - 1) + 16);
  D2DVectorHelper::ClassifyPoint(&v89.x, (float *)&v67[1]);
  v69 = (unsigned int)D2DVectorHelper::ClassifyPoint(&v89.x, &v92.x);
  v29 = 0LL;
  if ( !v30 )
  {
LABEL_56:
    *(_DWORD *)a3 = 0;
    goto LABEL_57;
  }
  do
  {
    v31 = *((_QWORD *)a2 + 2);
    v32 = *(struct D2D_VECTOR_4F *)(v31 + 20 * v29);
    LODWORD(v72) = *(_DWORD *)(v31 + 20 * v29 + 16);
    v86 = v72;
    v85 = v32;
    v37 = D2DVectorHelper::ClassifyPoint(&v89.x, &v85.x);
    if ( v36 == 1 )
    {
      if ( v34 == 2 )
      {
        v38 = *D2DVectorHelper::PlaneVectorIntersection(
                 (D2DVectorHelper *)&v94,
                 &v89,
                 (const struct D2D_VECTOR_4F *)&v67[1],
                 &v92,
                 v66);
        v91 = v27;
        v90 = v38;
        v40 = DynArray<CInteractionTracker::PendingStateChangeInfo,0>::AddMultipleAndSet(
                (__int64)v99,
                (__int64)&v90,
                v39);
        v11 = v40;
        if ( v40 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, 0x121u);
          goto LABEL_57;
        }
        v91 = 0;
        v42 = DynArray<CInteractionTracker::PendingStateChangeInfo,0>::AddMultipleAndSet(
                (__int64)v95,
                (__int64)&v90,
                v41);
        v11 = v42;
        if ( v42 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, 0x124u);
          goto LABEL_57;
        }
      }
      v43 = DynArray<CInteractionTracker::PendingStateChangeInfo,0>::AddMultipleAndSet((__int64)v99, (__int64)&v92, v33);
      v11 = v43;
      if ( v43 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0x129u);
        goto LABEL_57;
      }
      ++v12;
      goto LABEL_32;
    }
    if ( v36 == 2 )
    {
      if ( v34 == 1 )
      {
        v44 = *D2DVectorHelper::PlaneVectorIntersection(
                 (D2DVectorHelper *)v87,
                 &v89,
                 (const struct D2D_VECTOR_4F *)&v67[1],
                 &v92,
                 v66);
        v91 = 0;
        v90 = v44;
        v46 = DynArray<CInteractionTracker::PendingStateChangeInfo,0>::AddMultipleAndSet(
                (__int64)v99,
                (__int64)&v90,
                v45);
        v11 = v46;
        if ( v46 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, 0x13Au);
          goto LABEL_57;
        }
        v91 = v27;
        v48 = DynArray<CInteractionTracker::PendingStateChangeInfo,0>::AddMultipleAndSet(
                (__int64)v95,
                (__int64)&v90,
                v47);
        v11 = v48;
        if ( v48 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0x13Du);
          goto LABEL_57;
        }
      }
      v49 = DynArray<CInteractionTracker::PendingStateChangeInfo,0>::AddMultipleAndSet((__int64)v95, (__int64)&v92, v33);
      v11 = v49;
      if ( v49 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, 0x143u);
        goto LABEL_57;
      }
      ++v14;
      goto LABEL_32;
    }
    v90 = v28;
    if ( v34 == 1 )
    {
      if ( v37 == 2 )
      {
        v91 = 0;
        v50 = DynArray<CInteractionTracker::PendingStateChangeInfo,0>::AddMultipleAndSet(
                (__int64)v99,
                (__int64)&v90,
                v33);
        v11 = v50;
        if ( v50 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v50, 0x155u);
          goto LABEL_57;
        }
        v91 = v93;
        v52 = DynArray<CInteractionTracker::PendingStateChangeInfo,0>::AddMultipleAndSet(
                (__int64)v95,
                (__int64)&v90,
                v51);
        v11 = v52;
        if ( v52 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v52, 0x158u);
          goto LABEL_57;
        }
        goto LABEL_32;
      }
    }
    else if ( v34 == 2 && v37 == 1 )
    {
      v91 = v35;
      v53 = DynArray<CInteractionTracker::PendingStateChangeInfo,0>::AddMultipleAndSet((__int64)v99, (__int64)&v90, v33);
      v11 = v53;
      if ( v53 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v53, 0x160u);
        goto LABEL_57;
      }
      v91 = 0;
      v55 = DynArray<CInteractionTracker::PendingStateChangeInfo,0>::AddMultipleAndSet((__int64)v95, (__int64)&v90, v54);
      v11 = v55;
      if ( v55 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v55, 0x163u);
        goto LABEL_57;
      }
      goto LABEL_32;
    }
    v56 = DynArray<CInteractionTracker::PendingStateChangeInfo,0>::AddMultipleAndSet((__int64)v99, (__int64)&v92, v33);
    v11 = v56;
    if ( v56 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v56, 0x167u);
      goto LABEL_57;
    }
    v58 = DynArray<CInteractionTracker::PendingStateChangeInfo,0>::AddMultipleAndSet((__int64)v95, (__int64)&v92, v57);
    v11 = v58;
    if ( v58 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v58, 0x168u);
      goto LABEL_57;
    }
LABEL_32:
    v27 = v93;
    v29 = (unsigned int)(HIDWORD(v69) + 1);
    v28 = v32;
    v59 = (unsigned int)v69;
    *(struct D2D_VECTOR_4F *)&v67[1] = v92;
    v69 = __PAIR64__(v29, v37);
    v68 = v93;
    v92 = v32;
    v93 = v72;
  }
  while ( (unsigned int)v29 < *((_DWORD *)a2 + 10) );
  if ( v12 )
  {
    if ( !v14 )
    {
      *(_DWORD *)a3 = 1;
      goto LABEL_57;
    }
  }
  else if ( !v14 )
  {
    goto LABEL_56;
  }
  if ( v12 )
  {
    *(_DWORD *)a3 = 3;
    v60 = CPolygon::Create(v99, a2, &v70, v59);
    v11 = v60;
    if ( v60 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v60, 0x18Au);
    }
    else
    {
      v62 = CPolygon::Create(v95, a2, &v71, v61);
      v11 = v62;
      if ( v62 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v62, 0x18Bu);
      }
      else
      {
        v63 = v70;
        v70 = 0LL;
        *v73 = (struct CPolygon *)v63;
        v64 = v71;
        v71 = 0LL;
        *v74 = (struct CPolygon *)v64;
      }
    }
  }
  else
  {
    *(_DWORD *)a3 = 2;
  }
LABEL_57:
  ReleaseInterface<ClipPlaneInfoRef>(&v70);
  ReleaseInterface<ClipPlaneInfoRef>(&v71);
  DynArrayImpl<1>::~DynArrayImpl<1>(v95);
  DynArrayImpl<1>::~DynArrayImpl<1>(v99);
  return v11;
}
