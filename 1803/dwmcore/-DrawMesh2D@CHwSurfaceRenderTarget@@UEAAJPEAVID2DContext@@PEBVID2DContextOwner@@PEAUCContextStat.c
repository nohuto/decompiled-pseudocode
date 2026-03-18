/*
 * XREFs of ?DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1801EC940
 * Callers:
 *     ?DrawMesh2D@CHwTextureRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1801E6660 (-DrawMesh2D@CHwTextureRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 *     ?DrawMesh2D@CHwDisplayRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1801E7390 (-DrawMesh2D@CHwDisplayRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180059E10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x1800B8C88 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0ffff @ 0x18019F56C (McTemplateU0ffff.c)
 *     ?GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z @ 0x1801B2474 (-GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z.c)
 *     ?DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEAVCHwBrush@@@Z @ 0x1801E9CB0 (-DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEA.c)
 *     ?GetScratchDrawBitmapBrushNoAddRef@CHwSurfaceRenderTargetSharedData@@QEAAJPEAPEAVCMILBrushBitmap@@@Z @ 0x1801E9E30 (-GetScratchDrawBitmapBrushNoAddRef@CHwSurfaceRenderTargetSharedData@@QEAAJPEAPEAVCMILBrushBitmap.c)
 *     ??0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@W4Enum@MilBitmapWrapMode@@PEBVCMILMatrix@@W4XSpaceDefinition@@@Z @ 0x1801EC8BC (--0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@W4Enum@MilBit.c)
 *     ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x1801F4AB0 (-GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 *     ??1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ @ 0x18020F340 (--1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ.c)
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
  void *v7; // r14
  __int64 v11; // rax
  int v12; // eax
  int ScratchDrawBitmapBrushNoAddRef; // eax
  struct CMILBrushBitmap *v14; // rbx
  __int64 v15; // rax
  struct CMILBrush *v16; // rdx
  struct CHwBrush *v17; // r13
  __int64 v18; // rdx
  __int64 v19; // r8
  int D2DBrush; // eax
  int v21; // eax
  int MeshData; // eax
  unsigned int v23; // esi
  __int64 v24; // rbx
  LPVOID v25; // rax
  unsigned int *v26; // rdx
  _OWORD *v27; // rcx
  struct MilVertexXYZDUV2 *v28; // r8
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rdi
  __m128 v32; // xmm6
  __int64 (__fastcall *v33)(__int64); // rax
  int v34; // ebx
  float v35; // xmm0_4
  float v36; // xmm9_4
  float v37; // xmm8_4
  float v38; // xmm10_4
  float v39; // xmm7_4
  float v40; // xmm6_4
  float v41; // xmm11_4
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // r8d
  int v46; // eax
  struct CHwBrush *v47; // rcx
  __int64 v49; // [rsp+48h] [rbp-C0h] BYREF
  struct CMILBrushBitmap *v50; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v51; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v52[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct CHwBrush *v53; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v54[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v55; // [rsp+78h] [rbp-90h] BYREF
  __int64 v56; // [rsp+80h] [rbp-88h] BYREF
  __int64 v57; // [rsp+88h] [rbp-80h] BYREF
  __int64 (__fastcall ***v58)(_QWORD, GUID *, __int64 *); // [rsp+90h] [rbp-78h] BYREF
  unsigned int *v59; // [rsp+98h] [rbp-70h] BYREF
  struct MilVertexXYZDUV2 *v60; // [rsp+A0h] [rbp-68h] BYREF
  const struct ID2DContextOwner *v61; // [rsp+A8h] [rbp-60h]
  float v62; // [rsp+B0h] [rbp-58h] BYREF
  float v63; // [rsp+B4h] [rbp-54h]
  float v64; // [rsp+B8h] [rbp-50h]
  float v65; // [rsp+BCh] [rbp-4Ch]
  unsigned __int64 v66; // [rsp+C0h] [rbp-48h]
  __int64 v67; // [rsp+C8h] [rbp-40h] BYREF
  int v68; // [rsp+D0h] [rbp-38h]
  _QWORD v69[3]; // [rsp+D8h] [rbp-30h] BYREF
  int v70; // [rsp+F0h] [rbp-18h]
  int v71; // [rsp+F4h] [rbp-14h]
  int v72; // [rsp+F8h] [rbp-10h]
  __int128 v73; // [rsp+FCh] [rbp-Ch]
  __int64 v74; // [rsp+110h] [rbp+8h]
  __int128 v75; // [rsp+118h] [rbp+10h] BYREF
  _OWORD v76[4]; // [rsp+128h] [rbp+20h] BYREF

  v6 = 0;
  LODWORD(v49) = 0;
  v7 = 0LL;
  v53 = 0LL;
  v50 = 0LL;
  v55 = 0LL;
  v58 = 0LL;
  v56 = 0LL;
  v51 = 0LL;
  *((_BYTE *)a4 + 68) = 1;
  v11 = *(_QWORD *)this;
  v61 = a3;
  if ( (*(unsigned __int8 (__fastcall **)(CHwSurfaceRenderTarget *))(v11 + 32))(this) )
  {
    v12 = (*(__int64 (__fastcall **)(CHwSurfaceRenderTarget *, __int64 *))(*(_QWORD *)this + 256LL))(this, &v57);
    LODWORD(v49) = v12;
    v6 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x210u);
    }
    else
    {
      if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context[0], &EVTDESC_ETWGUID_DRAWEVENT) )
      {
        (*(void (__fastcall **)(struct CGeometry2D *, __int64 *))(*(_QWORD *)a5 + 168LL))(a5, &v67);
        CMILMatrix::Transform2DBoundsHelper<0>((struct CContextState *)((char *)a4 + 212), (__int64)&v67, &v62);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0ffff(
            Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_ETWGUID_DRAWEVENT,
            v62,
            v63,
            SLOBYTE(v64),
            SLOBYTE(v65));
      }
      ScratchDrawBitmapBrushNoAddRef = CHwSurfaceRenderTargetSharedData::GetScratchDrawBitmapBrushNoAddRef(
                                         (CHwSurfaceRenderTargetSharedData *)(v57 + 496),
                                         &v50);
      LODWORD(v49) = ScratchDrawBitmapBrushNoAddRef;
      v6 = ScratchDrawBitmapBrushNoAddRef;
      if ( ScratchDrawBitmapBrushNoAddRef < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ScratchDrawBitmapBrushNoAddRef, 0x21Bu);
      }
      else
      {
        (*(void (__fastcall **)(struct IBitmapSource *, __int64 *))(*(_QWORD *)a6 + 24LL))(a6, &v67);
        v14 = v50;
        CMILBrushBitmapLocalSetterWrapper::CMILBrushBitmapLocalSetterWrapper(&v50, (__int64)v50, (int)a6);
        v74 = 0LL;
        v69[1] = &CMILMatrix::Identity;
        v70 = v68;
        v71 = *((_DWORD *)this + 29);
        v15 = *(_QWORD *)a5;
        v69[0] = a4;
        v69[2] = v67;
        v72 = 1;
        (*(void (__fastcall **)(struct CGeometry2D *, __int128 *))(v15 + 176))(a5, &v75);
        v73 = v75;
        if ( v14 )
          v16 = (struct CMILBrushBitmap *)((char *)v14 + 24);
        else
          v16 = 0LL;
        v6 = CHwSurfaceRenderTargetSharedData::DeriveHWBrush(
               (CHwSurfaceRenderTargetSharedData *)(v57 + 496),
               v16,
               (const struct CHwBrushContext *)v69,
               &v53);
        LODWORD(v49) = v6;
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x23Eu);
          CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper((CMILBrushBitmapLocalSetterWrapper *)&v50);
        }
        else
        {
          v17 = v53;
          v60 = 0LL;
          v54[0] = 0;
          v59 = 0LL;
          v52[0] = 0;
          v18 = *(unsigned int *)((*(__int64 (__fastcall **)(CHwSurfaceRenderTarget *, float *))(*(_QWORD *)this + 24LL))(
                                    this,
                                    &v62)
                                + 8);
          if ( !(_DWORD)v18 || (v19 = 2LL, (_DWORD)v18 != 1) )
            v19 = 1LL;
          D2DBrush = CHwBitmapBrush::GetD2DBrush(v17, v18, v19, &v58);
          LODWORD(v49) = D2DBrush;
          v6 = D2DBrush;
          if ( D2DBrush < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DBrush, 0x24Bu);
          }
          else
          {
            v21 = (**v58)(v58, &GUID_2cd906aa_12e2_11dc_9fed_001143a055f9, &v55);
            LODWORD(v49) = v21;
            v6 = v21;
            if ( v21 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x24Eu);
            }
            else
            {
              (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v55 + 120LL))(v55, &v56);
              MeshData = CGeometry2D::GetMeshData(a5, &v60, v54, (const unsigned int **const)&v59, v52);
              LODWORD(v49) = MeshData;
              v6 = MeshData;
              if ( MeshData < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, MeshData, 0x255u);
              }
              else
              {
                v23 = v52[0];
                v24 = v52[0];
                v25 = operator new(saturated_mul(v52[0], 0x20uLL));
                v7 = v25;
                if ( v25 )
                {
                  if ( v23 )
                  {
                    v26 = v59;
                    v27 = v25;
                    v28 = v60;
                    do
                    {
                      v29 = *v26++;
                      v29 *= 32LL;
                      *v27 = *(_OWORD *)((char *)v28 + v29);
                      v27 += 2;
                      *(v27 - 1) = *(_OWORD *)((char *)v28 + v29 + 16);
                      --v24;
                    }
                    while ( v24 );
                  }
                  v30 = (*(__int64 (__fastcall **)(struct ID2DContext *, __int64, __int64 *))(*(_QWORD *)a2 + 224LL))(
                          a2,
                          4LL,
                          &v51);
                  LODWORD(v49) = v30;
                  v6 = v30;
                  if ( v30 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x260u);
                  }
                  else
                  {
                    v31 = *((_QWORD *)v17 + 2);
                    v76[0] = _xmm;
                    v76[1] = _xmm;
                    v76[2] = _xmm;
                    v76[3] = _xmm;
                    v32 = *(__m128 *)(v31 + 44);
                    v33 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 56LL);
                    v66 = *(_QWORD *)(v31 + 60);
                    v34 = *(_DWORD *)(v33(v31) + 132);
                    v35 = (float)*(int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 56LL))(v31) + 128);
                    v36 = v32.m128_f32[0] * v35;
                    v37 = _mm_shuffle_ps(v32, v32, 170).m128_f32[0] * v35;
                    v38 = *(float *)&v66 * v35;
                    v39 = _mm_shuffle_ps(v32, v32, 85).m128_f32[0] * (float)v34;
                    v40 = _mm_shuffle_ps(v32, v32, 255).m128_f32[0] * (float)v34;
                    v41 = *((float *)&v66 + 1) * (float)v34;
                    v42 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _OWORD *, int))(*(_QWORD *)v51 + 72LL))(
                            v51,
                            0LL,
                            0LL,
                            v76,
                            64);
                    LODWORD(v49) = v42;
                    v6 = v42;
                    if ( v42 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0x270u);
                    }
                    else
                    {
                      v62 = v36;
                      v63 = v39;
                      v64 = v37;
                      v65 = v40;
                      v66 = __PAIR64__(LODWORD(v41), LODWORD(v38));
                      v43 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, float *, int))(*(_QWORD *)v51 + 72LL))(
                              v51,
                              1LL,
                              0LL,
                              &v62,
                              24);
                      LODWORD(v49) = v43;
                      v6 = v43;
                      if ( v43 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, 0x273u);
                      }
                      else
                      {
                        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v51 + 112LL))(
                          v51,
                          0LL,
                          v56,
                          1LL);
                        v44 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, void *, unsigned int))(*(_QWORD *)v51 + 64LL))(
                                v51,
                                L"vertices",
                                0LL,
                                v7,
                                32 * v23);
                        LODWORD(v49) = v44;
                        v6 = v44;
                        if ( v44 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0x27Au);
                        }
                        else
                        {
                          v45 = 12;
                          if ( *((_DWORD *)a4 + 52) != 2 )
                            v45 = 0;
                          v46 = (*(__int64 (__fastcall **)(struct ID2DContext *, const struct ID2DContextOwner *, __int64, _QWORD, _QWORD, int, int))(*(_QWORD *)a2 + 96LL))(
                                  a2,
                                  v61,
                                  v51,
                                  0LL,
                                  0LL,
                                  1,
                                  v45);
                          LODWORD(v49) = v46;
                          v6 = v46;
                          if ( v46 < 0 )
                            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0x281u);
                        }
                      }
                    }
                  }
                }
                else
                {
                  v6 = -2147024882;
                  LODWORD(v49) = -2147024882;
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x258u);
                }
              }
            }
          }
          CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper((CMILBrushBitmapLocalSetterWrapper *)&v50);
        }
      }
    }
  }
  *((_BYTE *)a4 + 68) = 0;
  TranslateDXGIorD3DErrorInContext(v6, 0, &v49);
  v47 = v53;
  if ( v53 )
  {
    (*(void (__fastcall **)(struct CHwBrush *))(*(_QWORD *)v53 + 24LL))(v53);
    v47 = v53;
  }
  ReleaseInterfaceNoNULL<CPolygon>((__int64)v47);
  if ( v55 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
  ReleaseInterfaceNoNULL<IWICBitmap>(v56);
  if ( v51 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v51 + 112LL))(v51, 0LL, 0LL, 1LL);
  operator delete(v7);
  return (unsigned int)v49;
}
