/*
 * XREFs of ?DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1800D09EC
 * Callers:
 *     ?DrawMesh2D@CHwTextureRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x18019BCA0 (-DrawMesh2D@CHwTextureRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 *     ?DrawMesh2D@CHwDisplayRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x18019C3B0 (-DrawMesh2D@CHwDisplayRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ??1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ @ 0x180041E6C (--1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ.c)
 *     ??$ReleaseInterfaceNoNULL@VCHwBrush@@@@YAXPEAVCHwBrush@@@Z @ 0x18004A7F8 (--$ReleaseInterfaceNoNULL@VCHwBrush@@@@YAXPEAVCHwBrush@@@Z.c)
 *     ?DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEAVCHwBrush@@@Z @ 0x18004AA94 (-DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEA.c)
 *     ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x18004D470 (-GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18008F260 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z @ 0x18012F19C (-GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z.c)
 *     ?GetScratchDrawBitmapBrushNoAddRef@CHwSurfaceRenderTargetSharedData@@QEAAJPEAPEAVCMILBrushBitmap@@@Z @ 0x1801329E8 (-GetScratchDrawBitmapBrushNoAddRef@CHwSurfaceRenderTargetSharedData@@QEAAJPEAPEAVCMILBrushBitmap.c)
 *     ??0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@W4Enum@MilBitmapWrapMode@@PEBVCMILMatrix@@W4XSpaceDefinition@@@Z @ 0x180133324 (--0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@W4Enum@MilBit.c)
 *     Template_ffff @ 0x18016637C (Template_ffff.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::DrawMesh2D(
        CHwSurfaceRenderTarget *this,
        struct ID2DContext *a2,
        const struct ID2DContextOwner *a3,
        struct CContextState *a4,
        struct CGeometry2D *a5,
        struct IBitmapSource *a6)
{
  int v6; // ebx
  __int64 v8; // rax
  void *v10; // r13
  unsigned __int8 (__fastcall *v11)(CHwSurfaceRenderTarget *); // rax
  int v12; // eax
  __int64 v13; // rsi
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  int ScratchDrawBitmapBrushNoAddRef; // eax
  int v18; // eax
  int v19; // eax
  struct CMILBrushBitmap *v20; // rbx
  __int64 v21; // rax
  struct CMILBrush *v22; // rdx
  int v23; // eax
  __int64 v24; // rax
  CD2DContext **v25; // rbx
  __int64 (__fastcall *v26)(CHwSurfaceRenderTarget *); // rax
  int v27; // eax
  int v28; // r8d
  int D2DBrush; // eax
  int v30; // eax
  int MeshData; // eax
  unsigned int v32; // r14d
  __int64 v33; // rbx
  LPVOID v34; // rax
  unsigned int *v35; // rdx
  _OWORD *v36; // rcx
  struct MilVertexXYZDUV2 *v37; // r8
  __int64 v38; // rax
  int v39; // eax
  int v40; // r8d
  int v41; // eax
  __int64 *v42; // rdx
  __int64 *v43; // r8
  __int64 v44; // r9
  _QWORD *v45; // rcx
  _QWORD *v46; // rax
  CHwBitmapBrush *v47; // rcx
  int v48; // eax
  __int64 v50; // rdi
  __m128 v51; // xmm6
  __int64 (__fastcall *v52)(__int64); // rax
  float v53; // xmm3_4
  float v54; // xmm2_4
  __int64 (__fastcall *v55)(__int64, _QWORD, _QWORD, _OWORD *, int); // rax
  int v56; // eax
  int v57; // eax
  __int64 *v58; // rdx
  __int64 *i; // r8
  __int64 v60; // r9
  _QWORD *v61; // rcx
  _QWORD *v62; // rax
  __int64 v63; // [rsp+48h] [rbp-C0h] BYREF
  struct CMILBrushBitmap *v64; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v65; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v66[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct MilVertexXYZDUV2 *v67; // [rsp+68h] [rbp-A0h] BYREF
  struct CContextState *v68; // [rsp+70h] [rbp-98h]
  struct CHwBrush *v69; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v70; // [rsp+80h] [rbp-88h] BYREF
  __int64 v71; // [rsp+88h] [rbp-80h] BYREF
  __int64 v72; // [rsp+90h] [rbp-78h] BYREF
  __int64 v73; // [rsp+98h] [rbp-70h] BYREF
  __int64 (__fastcall ***v74)(_QWORD, GUID *, __int64 *); // [rsp+A0h] [rbp-68h] BYREF
  unsigned int *v75; // [rsp+A8h] [rbp-60h] BYREF
  const struct ID2DContextOwner *v76; // [rsp+B0h] [rbp-58h]
  __int64 v77; // [rsp+B8h] [rbp-50h] BYREF
  int v78; // [rsp+C0h] [rbp-48h]
  int v79; // [rsp+C4h] [rbp-44h]
  __int128 v80; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v81; // [rsp+D8h] [rbp-30h]
  __int128 v82; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v83; // [rsp+F0h] [rbp-18h]
  _QWORD v84[3]; // [rsp+F8h] [rbp-10h] BYREF
  int v85; // [rsp+110h] [rbp+8h]
  int v86; // [rsp+114h] [rbp+Ch]
  int v87; // [rsp+118h] [rbp+10h]
  __int128 v88; // [rsp+11Ch] [rbp+14h]
  __int64 v89; // [rsp+130h] [rbp+28h]
  __int128 v90; // [rsp+138h] [rbp+30h] BYREF
  _OWORD v91[4]; // [rsp+148h] [rbp+40h] BYREF

  v6 = 0;
  *((_BYTE *)a4 + 68) = 1;
  v8 = *(_QWORD *)this;
  v68 = a4;
  v10 = 0LL;
  v76 = a3;
  LODWORD(v63) = 0;
  v11 = *(unsigned __int8 (__fastcall **)(CHwSurfaceRenderTarget *))(v8 + 48);
  v69 = 0LL;
  v64 = 0LL;
  v72 = 0LL;
  v74 = 0LL;
  v73 = 0LL;
  v65 = 0LL;
  if ( !v11(this) )
    goto LABEL_30;
  v12 = (*(__int64 (__fastcall **)(CHwSurfaceRenderTarget *, __int64 *))(*(_QWORD *)this + 208LL))(this, &v71);
  LODWORD(v63) = v12;
  v6 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x25Cu);
    goto LABEL_30;
  }
  v13 = v71;
  ++*(_DWORD *)(v71 + 936);
  if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_DRAWEVENT) )
  {
    (*(void (__fastcall **)(struct CGeometry2D *, __int128 *))(*(_QWORD *)a5 + 152LL))(a5, &v80);
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v68 + 212, (__int64)&v80, (float *)&v77);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_ffff(v14, (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT, v15, v16, v78, v79);
  }
  ScratchDrawBitmapBrushNoAddRef = CHwSurfaceRenderTargetSharedData::GetScratchDrawBitmapBrushNoAddRef(
                                     (CHwSurfaceRenderTargetSharedData *)(v71 + 512),
                                     &v64);
  LODWORD(v63) = ScratchDrawBitmapBrushNoAddRef;
  v6 = ScratchDrawBitmapBrushNoAddRef;
  if ( ScratchDrawBitmapBrushNoAddRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ScratchDrawBitmapBrushNoAddRef, 0x269u);
    v58 = *(__int64 **)(v13 + 1016);
    for ( i = (__int64 *)(v13 + 1008); v58 != i; v58 = (__int64 *)v58[1] )
    {
      if ( *((_DWORD *)v58 + 8) != *(_DWORD *)(v13 + 936) )
        break;
      *((_DWORD *)v58 + 8) = 0;
    }
  }
  else
  {
    v77 = 0LL;
    v78 = 0;
    v18 = (*(__int64 (__fastcall **)(struct IBitmapSource *, __int64 *))(*(_QWORD *)a6 + 24LL))(a6, &v77);
    LODWORD(v63) = v18;
    v6 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x271u);
      v58 = *(__int64 **)(v13 + 1016);
      for ( i = (__int64 *)(v13 + 1008); v58 != i; v58 = (__int64 *)v58[1] )
      {
        if ( *((_DWORD *)v58 + 8) != *(_DWORD *)(v13 + 936) )
          break;
        *((_DWORD *)v58 + 8) = 0;
      }
    }
    else
    {
      HIDWORD(v77) = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a6 + 32LL))(a6);
      v19 = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a6 + 40LL))(a6);
      v20 = v64;
      v78 = v19;
      CMILBrushBitmapLocalSetterWrapper::CMILBrushBitmapLocalSetterWrapper(&v64, v64, a6);
      v84[0] = v68;
      v84[2] = v77;
      v84[1] = &CMILMatrix::Identity;
      v85 = v78;
      v86 = *((_DWORD *)this + 29);
      v21 = *(_QWORD *)a5;
      v87 = 1;
      v89 = 0LL;
      (*(void (__fastcall **)(struct CGeometry2D *, __int128 *))(v21 + 160))(a5, &v90);
      v22 = (struct CMILBrushBitmap *)((char *)v20 + 24);
      v88 = v90;
      if ( !v20 )
        v22 = 0LL;
      v23 = CHwSurfaceRenderTargetSharedData::DeriveHWBrush(
              (CHwSurfaceRenderTargetSharedData *)(v71 + 512),
              v22,
              (const struct CHwBrushContext *)v84,
              &v69);
      LODWORD(v63) = v23;
      v6 = v23;
      if ( v23 >= 0 )
      {
        v24 = *(_QWORD *)this;
        v25 = (CD2DContext **)v69;
        *(_QWORD *)&v80 = v69;
        v67 = 0LL;
        v26 = *(__int64 (__fastcall **)(CHwSurfaceRenderTarget *))(v24 + 40);
        v70 = 0;
        v75 = 0LL;
        v66[0] = 0;
        v27 = v26(this);
        if ( !v27 || (v28 = 2, v27 != 1) )
          v28 = 1;
        D2DBrush = CHwBitmapBrush::GetD2DBrush(v25, 1.0, v28, &v74);
        LODWORD(v63) = D2DBrush;
        v6 = D2DBrush;
        if ( D2DBrush < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBrush, 0x29Du);
          CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper((CMILBrushBitmapLocalSetterWrapper *)&v64);
          v42 = *(__int64 **)(v13 + 1016);
          v43 = (__int64 *)(v13 + 1008);
          while ( v42 != v43 && *((_DWORD *)v42 + 8) == *(_DWORD *)(v13 + 936) )
          {
            *((_DWORD *)v42 + 8) = 0;
            v42 = (__int64 *)v42[1];
          }
        }
        else
        {
          v30 = (**v74)(v74, &GUID_2cd906aa_12e2_11dc_9fed_001143a055f9, &v72);
          LODWORD(v63) = v30;
          v6 = v30;
          if ( v30 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x2A0u);
            CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper((CMILBrushBitmapLocalSetterWrapper *)&v64);
            v42 = *(__int64 **)(v13 + 1016);
            v43 = (__int64 *)(v13 + 1008);
            while ( v42 != v43 && *((_DWORD *)v42 + 8) == *(_DWORD *)(v13 + 936) )
            {
              *((_DWORD *)v42 + 8) = 0;
              v42 = (__int64 *)v42[1];
            }
          }
          else
          {
            (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v72 + 120LL))(v72, &v73);
            MeshData = CGeometry2D::GetMeshData(a5, &v67, &v70, (const unsigned int **const)&v75, v66);
            LODWORD(v63) = MeshData;
            v6 = MeshData;
            if ( MeshData < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, MeshData, 0x2A7u);
              CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper((CMILBrushBitmapLocalSetterWrapper *)&v64);
              v42 = *(__int64 **)(v13 + 1016);
              v43 = (__int64 *)(v13 + 1008);
              while ( v42 != v43 && *((_DWORD *)v42 + 8) == *(_DWORD *)(v13 + 936) )
              {
                *((_DWORD *)v42 + 8) = 0;
                v42 = (__int64 *)v42[1];
              }
            }
            else
            {
              v32 = v66[0];
              v33 = v66[0];
              v34 = operator new(saturated_mul(v66[0], 0x20uLL));
              v10 = v34;
              if ( v34 )
              {
                if ( v32 )
                {
                  v35 = v75;
                  v36 = v34;
                  v37 = v67;
                  do
                  {
                    v38 = *v35++;
                    v38 *= 32LL;
                    *v36 = *(_OWORD *)((char *)v37 + v38);
                    v36 += 2;
                    *(v36 - 1) = *(_OWORD *)((char *)v37 + v38 + 16);
                    --v33;
                  }
                  while ( v33 );
                }
                v39 = (*(__int64 (__fastcall **)(struct ID2DContext *, __int64, __int64 *))(*(_QWORD *)a2 + 256LL))(
                        a2,
                        6LL,
                        &v65);
                LODWORD(v63) = v39;
                v6 = v39;
                if ( v39 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0x2B2u);
                  CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper((CMILBrushBitmapLocalSetterWrapper *)&v64);
                  v42 = *(__int64 **)(v13 + 1016);
                  v43 = (__int64 *)(v13 + 1008);
                  while ( v42 != v43 && *((_DWORD *)v42 + 8) == *(_DWORD *)(v13 + 936) )
                  {
                    *((_DWORD *)v42 + 8) = 0;
                    v42 = (__int64 *)v42[1];
                  }
                }
                else
                {
                  v91[0] = _xmm;
                  v91[1] = _xmm;
                  v91[2] = _xmm;
                  v50 = *(_QWORD *)(v80 + 16);
                  v91[3] = _xmm;
                  v51 = *(__m128 *)(v50 + 44);
                  v52 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v50 + 56LL);
                  v83 = *(_QWORD *)(v50 + 60);
                  v53 = (float)*(int *)(v52(v50) + 140);
                  v54 = (float)*(int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v50 + 56LL))(v50) + 136);
                  v55 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _OWORD *, int))(*(_QWORD *)v65 + 72LL);
                  *((float *)&v80 + 1) = _mm_shuffle_ps(v51, v51, 85).m128_f32[0] * v53;
                  *(float *)&v80 = v51.m128_f32[0] * v54;
                  *((float *)&v80 + 2) = _mm_shuffle_ps(v51, v51, 170).m128_f32[0] * v54;
                  *(float *)&v81 = *(float *)&v83 * v54;
                  *((float *)&v81 + 1) = *((float *)&v83 + 1) * v53;
                  *((float *)&v80 + 3) = _mm_shuffle_ps(v51, v51, 255).m128_f32[0] * v53;
                  v56 = v55(v65, 0LL, 0LL, v91, 64);
                  LODWORD(v63) = v56;
                  v6 = v56;
                  if ( v56 >= 0 )
                  {
                    v82 = v80;
                    v83 = v81;
                    v48 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int128 *, int))(*(_QWORD *)v65 + 72LL))(
                            v65,
                            1LL,
                            0LL,
                            &v82,
                            24);
                    LODWORD(v63) = v48;
                    v6 = v48;
                    if ( v48 < 0 )
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0x2C5u);
                      CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper((CMILBrushBitmapLocalSetterWrapper *)&v64);
                      v42 = *(__int64 **)(v13 + 1016);
                      v43 = (__int64 *)(v13 + 1008);
                      while ( v42 != v43 && *((_DWORD *)v42 + 8) == *(_DWORD *)(v13 + 936) )
                      {
                        *((_DWORD *)v42 + 8) = 0;
                        v42 = (__int64 *)v42[1];
                      }
                    }
                    else
                    {
                      (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v65 + 112LL))(
                        v65,
                        0LL,
                        v73,
                        1LL);
                      v57 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, void *, unsigned int))(*(_QWORD *)v65 + 64LL))(
                              v65,
                              L"vertices",
                              0LL,
                              v10,
                              32 * v32);
                      LODWORD(v63) = v57;
                      v6 = v57;
                      if ( v57 >= 0 )
                      {
                        v40 = 12;
                        if ( *((_DWORD *)v68 + 52) != 2 )
                          v40 = 0;
                        v41 = (*(__int64 (__fastcall **)(struct ID2DContext *, const struct ID2DContextOwner *, __int64, _QWORD, _QWORD, int, int))(*(_QWORD *)a2 + 96LL))(
                                a2,
                                v76,
                                v65,
                                0LL,
                                0LL,
                                1,
                                v40);
                        LODWORD(v63) = v41;
                        v6 = v41;
                        if ( v41 < 0 )
                        {
                          MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, 0x2D3u);
                          CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper((CMILBrushBitmapLocalSetterWrapper *)&v64);
                          v42 = *(__int64 **)(v13 + 1016);
                          v43 = (__int64 *)(v13 + 1008);
                          while ( v42 != v43 && *((_DWORD *)v42 + 8) == *(_DWORD *)(v13 + 936) )
                          {
                            *((_DWORD *)v42 + 8) = 0;
                            v42 = (__int64 *)v42[1];
                          }
                        }
                        else
                        {
                          CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper((CMILBrushBitmapLocalSetterWrapper *)&v64);
                          v42 = *(__int64 **)(v13 + 1016);
                          v43 = (__int64 *)(v13 + 1008);
                          while ( v42 != v43 && *((_DWORD *)v42 + 8) == *(_DWORD *)(v13 + 936) )
                          {
                            *((_DWORD *)v42 + 8) = 0;
                            v42 = (__int64 *)v42[1];
                          }
                        }
                      }
                      else
                      {
                        MilInstrumentationCheckHR(0x14u, 0LL, 0, v57, 0x2CCu);
                        CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper((CMILBrushBitmapLocalSetterWrapper *)&v64);
                        v42 = *(__int64 **)(v13 + 1016);
                        v43 = (__int64 *)(v13 + 1008);
                        while ( v42 != v43 && *((_DWORD *)v42 + 8) == *(_DWORD *)(v13 + 936) )
                        {
                          *((_DWORD *)v42 + 8) = 0;
                          v42 = (__int64 *)v42[1];
                        }
                      }
                    }
                  }
                  else
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v56, 0x2C2u);
                    CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper((CMILBrushBitmapLocalSetterWrapper *)&v64);
                    v42 = *(__int64 **)(v13 + 1016);
                    v43 = (__int64 *)(v13 + 1008);
                    while ( v42 != v43 && *((_DWORD *)v42 + 8) == *(_DWORD *)(v13 + 936) )
                    {
                      *((_DWORD *)v42 + 8) = 0;
                      v42 = (__int64 *)v42[1];
                    }
                  }
                }
              }
              else
              {
                v6 = -2147024882;
                LODWORD(v63) = -2147024882;
                MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2AAu);
                CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper((CMILBrushBitmapLocalSetterWrapper *)&v64);
                v42 = *(__int64 **)(v13 + 1016);
                v43 = (__int64 *)(v13 + 1008);
                while ( v42 != v43 && *((_DWORD *)v42 + 8) == *(_DWORD *)(v13 + 936) )
                {
                  *((_DWORD *)v42 + 8) = 0;
                  v42 = (__int64 *)v42[1];
                }
              }
            }
          }
        }
        v44 = *v42;
        if ( (__int64 *)*v42 != v43 )
        {
          v45 = *(_QWORD **)(v13 + 1016);
          *v42 = (__int64)v43;
          *(_QWORD *)(v13 + 1016) = v42;
          v46 = *(_QWORD **)(v13 + 1000);
          *v46 = v44;
          *(_QWORD *)(v44 + 8) = v46;
          *(_QWORD *)(v13 + 1000) = v45;
          *v45 = v13 + 992;
        }
        --*(_DWORD *)(v13 + 936);
        goto LABEL_30;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x290u);
      CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper((CMILBrushBitmapLocalSetterWrapper *)&v64);
      v58 = *(__int64 **)(v13 + 1016);
      i = (__int64 *)(v13 + 1008);
      while ( v58 != i && *((_DWORD *)v58 + 8) == *(_DWORD *)(v13 + 936) )
      {
        *((_DWORD *)v58 + 8) = 0;
        v58 = (__int64 *)v58[1];
      }
    }
  }
  v60 = *v58;
  if ( (__int64 *)*v58 != i )
  {
    v61 = *(_QWORD **)(v13 + 1016);
    *v58 = (__int64)i;
    *(_QWORD *)(v13 + 1016) = v58;
    v62 = *(_QWORD **)(v13 + 1000);
    *v62 = v60;
    *(_QWORD *)(v60 + 8) = v62;
    *(_QWORD *)(v13 + 1000) = v61;
    *v61 = v13 + 992;
  }
  --*(_DWORD *)(v13 + 936);
LABEL_30:
  *((_BYTE *)v68 + 68) = 0;
  TranslateDXGIorD3DErrorInContext(v6, 0, &v63);
  v47 = v69;
  if ( v69 )
  {
    (*(void (__fastcall **)(struct CHwBrush *))(*(_QWORD *)v69 + 24LL))(v69);
    v47 = v69;
  }
  ReleaseInterfaceNoNULL<CHwBrush>(v47);
  if ( v72 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
  ReleaseInterfaceNoNULL<CD2DPencil>(v73);
  if ( v65 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v65 + 112LL))(v65, 0LL, 0LL, 1LL);
  WPF::ProcessHeapImpl::Free(v10);
  return (unsigned int)v63;
}
