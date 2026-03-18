/*
 * XREFs of ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800B4740
 * Callers:
 *     ?Render@CIndirectSwapchainRenderTarget@@UEAAJ_NPEA_N@Z @ 0x180149090 (-Render@CIndirectSwapchainRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180012220 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18005B5EC (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x18005B624 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DJ@@@2PEAVCHwndRenderTarget@@@Z @ 0x1800AA100 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800AAB10 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAPEAVCOcclusionContext@@@Z @ 0x1800AB078 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z @ 0x1800B4CD8 (-GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B7040 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ??$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z @ 0x1800CA50C (--$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x1800D45E0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z @ 0x18012D120 (-PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z.c)
 *     ?PopStereoContext@CDrawingContext@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18012D294 (-PopStereoContext@CDrawingContext@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?MagnifierSetExclude@CComposition@@QEAAX_N@Z @ 0x18013F798 (-MagnifierSetExclude@CComposition@@QEAAX_N@Z.c)
 */

__int64 __fastcall COffScreenRenderTarget::Render(COffScreenRenderTarget *this, __int64 a2, bool *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // r14
  char v6; // si
  char v7; // r13
  int v8; // r12d
  CRenderTarget *v9; // r15
  int v10; // eax
  int v11; // eax
  bool v12; // r8
  int DrawingContext; // eax
  __int64 v14; // r14
  int v15; // eax
  float v16; // xmm0_4
  float v17; // xmm1_4
  void (__fastcall *v18)(CRenderTarget *, __int64 *); // rax
  __int64 v19; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v20; // r8
  bool v21; // al
  int v22; // r12d
  unsigned int v23; // eax
  CDrawingContext *v24; // r13
  int v25; // eax
  char v26; // al
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned int v31; // eax
  int v32; // eax
  struct CVisualTree *v33; // rdx
  int v34; // eax
  __int64 v35; // [rsp+28h] [rbp-D8h]
  char v36; // [rsp+60h] [rbp-A0h]
  char v37; // [rsp+61h] [rbp-9Fh]
  bool v38; // [rsp+62h] [rbp-9Eh]
  char v39; // [rsp+64h] [rbp-9Ch]
  unsigned int v40; // [rsp+68h] [rbp-98h]
  struct CDrawingContext *v41; // [rsp+70h] [rbp-90h] BYREF
  CSwRenderTargetGetBounds *v42; // [rsp+78h] [rbp-88h]
  __int128 v43; // [rsp+80h] [rbp-80h] BYREF
  __int64 v44[2]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v45; // [rsp+A0h] [rbp-60h]
  __int128 v46; // [rsp+B0h] [rbp-50h]
  __int128 v47; // [rsp+C0h] [rbp-40h]
  int v48; // [rsp+D0h] [rbp-30h]
  _OWORD v49[4]; // [rsp+E0h] [rbp-20h] BYREF
  int v50; // [rsp+120h] [rbp+20h]
  int v51[4]; // [rsp+130h] [rbp+30h] BYREF

  *a3 = 0;
  v4 = 0;
  v41 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  v37 = 0;
  LOBYTE(v8) = 0;
  v43 = _xmm;
  if ( !*((_BYTE *)this + 224) )
    return v4;
  v9 = (COffScreenRenderTarget *)((char *)this - 64);
  v10 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 8) + 248LL))((char *)this - 64);
  v4 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x135u);
    goto LABEL_21;
  }
  if ( !*((_DWORD *)this + 42) )
    return v4;
  v6 = 1;
  CComposition::ShowHideCursors(*((CComposition **)this - 6), *((_BYTE *)this + 136) != 0);
  v11 = CVisualTree::PreCompute(*((CVisualTree **)this + 2));
  v4 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x14Du);
  }
  else
  {
    DrawingContext = CRenderTarget::GetDrawingContext(v9, &v41, v12);
    v4 = DrawingContext;
    if ( DrawingContext >= 0 )
    {
      if ( *((_BYTE *)this + 137) )
      {
        CComposition::MagnifierSetExclude(*((CComposition **)this - 6), 1);
        v37 = 1;
      }
      *(_BYTE *)(*((_QWORD *)this - 6) + 1360LL) = 1;
      v14 = *((_QWORD *)this + 2);
      if ( !v14 )
      {
LABEL_24:
        *(_BYTE *)(*((_QWORD *)this - 6) + 1360LL) = 0;
LABEL_25:
        if ( v37 )
          CComposition::MagnifierSetExclude(*((CComposition **)this - 6), 0);
        goto LABEL_27;
      }
      v15 = *((_DWORD *)this + 60);
      v51[0] = 0;
      v51[1] = 0;
      v48 = 0;
      v5 = *(_QWORD *)(v14 + 24);
      v16 = (float)v15;
      v17 = (float)*((int *)this + 61);
      v18 = *(void (__fastcall **)(CRenderTarget *, __int64 *))(*(_QWORD *)v9 + 240LL);
      *(float *)&v51[2] = v16;
      *(float *)&v51[3] = v17;
      v18(v9, v44);
      v49[0] = *(_OWORD *)v44;
      v49[1] = v45;
      v49[2] = v46;
      v49[3] = v47;
      v50 = v48;
      v21 = CMILMatrix::Invert((CMILMatrix *)v49, v19, v20);
      v22 = *(_DWORD *)(v5 + 92);
      *(_BYTE *)(v5 + 92) |= 2u;
      *(_DWORD *)(v5 + 92) &= 0xFFFFC7FF;
      *(_DWORD *)(v5 + 92) |= 0x400u;
      v7 = v22;
      v38 = v21;
      v23 = 0;
      v8 = v22 << 18 >> 28;
      v39 = v7;
      v40 = 0;
      if ( *((_DWORD *)this + 42) )
      {
        v24 = v41;
        while ( 1 )
        {
          v36 = 0;
          v35 = *((_QWORD *)this + 7);
          v42 = *(CSwRenderTargetGetBounds **)(*((_QWORD *)this + 18) + 8LL * v23);
          v25 = CDrawingContext::BeginFrame(v24, v42, &v43, 0, (__int64)v44, v35, 0, 0LL);
          v4 = v25;
          if ( v25 < 0 )
            break;
          if ( (*(unsigned int (__fastcall **)(CRenderTarget *, _QWORD))(*(_QWORD *)v9 + 264LL))(v9, v40) )
          {
            v31 = (*(__int64 (__fastcall **)(CRenderTarget *, _QWORD))(*(_QWORD *)v9 + 264LL))(v9, v40);
            v32 = CDrawingContext::PushStereoContext(v24, v31);
            v4 = v32;
            if ( v32 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x18Cu);
              goto LABEL_20;
            }
            v36 = 1;
          }
          if ( v38 )
          {
            v33 = (struct CVisualTree *)*((_QWORD *)this + 2);
            v41 = 0LL;
            CDrawingContext::CalculateOcclusion(v24, v33, 1u, (__int64)v51, 1, &v41);
          }
          v26 = (*(__int64 (__fastcall **)(CRenderTarget *))(*(_QWORD *)v9 + 272LL))(v9);
          v27 = CDrawingContext::DrawVisualTree(v24, 0x7FFFFFFF, v26, 0, 1, 0, 1, 1);
          v4 = v27;
          if ( v27 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x1A6u);
            goto LABEL_20;
          }
          if ( v36 )
          {
            v34 = CDrawingContext::PopStereoContext(v24, 0LL);
            v4 = v34;
            if ( v34 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0x1AAu);
              goto LABEL_20;
            }
          }
          CDrawingContext::EndFrame(v24, v28, v29);
          if ( g_LockAndReadOffscreenTarget )
            (*(void (__fastcall **)(CSwRenderTargetGetBounds *, _QWORD, _QWORD))(*(_QWORD *)v42 + 176LL))(v42, 0LL, 0LL);
          v23 = v40 + 1;
          v40 = v23;
          if ( v23 >= *((_DWORD *)this + 42) )
            goto LABEL_20;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x188u);
LABEL_20:
        v7 = v39;
      }
LABEL_21:
      if ( v5 )
      {
        *(_BYTE *)(v5 + 92) = v7;
        *(_DWORD *)(v5 + 92) &= 0xFFFFC3FF;
        *(_DWORD *)(v5 + 92) |= (v8 & 0xF) << 10;
      }
      if ( !v6 )
        goto LABEL_25;
      goto LABEL_24;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, DrawingContext, 0x14Fu);
  }
LABEL_27:
  if ( (v4 & 0x80000000) != 0 )
    ReleaseInterface<CDrawingContext>((char *)this + 40);
  CComposition::RestoreCursors(*((CComposition **)this - 6));
  return v4;
}
