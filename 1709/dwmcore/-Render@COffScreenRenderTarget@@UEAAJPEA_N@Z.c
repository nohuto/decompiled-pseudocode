/*
 * XREFs of ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x180078680
 * Callers:
 *     ?Render@CVisualCapture@@UEAAJPEA_N@Z @ 0x180078C70 (-Render@CVisualCapture@@UEAAJPEA_N@Z.c)
 *     ?Render@CIndirectSwapchainRenderTarget@@UEAAJPEA_N@Z @ 0x180137960 (-Render@CIndirectSwapchainRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180031B0C (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BE@@@2PEAVCHwndRenderTarget@@@Z @ 0x180041E30 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800426F0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x180042C58 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180043010 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?GetResampleMode@CVisual@@QEBA?AW4Enum@CompositionResampleMode@@XZ @ 0x18004E918 (-GetResampleMode@CVisual@@QEBA-AW4Enum@CompositionResampleMode@@XZ.c)
 *     ?SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z @ 0x180054B94 (-SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180059138 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetNeedsFlush@COffScreenRenderTarget@@IEBAJXZ @ 0x1800784F8 (-SetNeedsFlush@COffScreenRenderTarget@@IEBAJXZ.c)
 *     ?GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z @ 0x180079258 (-GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x1800AA880 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800AA8B8 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ??$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z @ 0x1800C0CA8 (--$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?MagnifierSetExclude@CComposition@@QEAAX_N@Z @ 0x180128450 (-MagnifierSetExclude@CComposition@@QEAAX_N@Z.c)
 *     ?PopStereoContext@CDrawingContext@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013DC08 (-PopStereoContext@CDrawingContext@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z @ 0x18013E324 (-PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z.c)
 */

__int64 __fastcall COffScreenRenderTarget::Render(COffScreenRenderTarget *this, bool *a2)
{
  unsigned int v3; // edi
  __int64 v4; // r14
  char v5; // si
  char v6; // r13
  int v7; // r12d
  CRenderTarget *v8; // r15
  signed int v9; // eax
  signed int v10; // eax
  bool v11; // r8
  signed int DrawingContext; // eax
  __int64 v13; // r14
  int v14; // eax
  unsigned int v15; // xmm0_4
  void (__fastcall *v16)(CRenderTarget *, __int64 *); // rax
  __int64 v17; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v18; // r8
  bool v19; // al
  int ResampleMode; // eax
  unsigned int v21; // eax
  struct CDrawingContext *v22; // r13
  signed int v23; // eax
  char v24; // di
  char v25; // al
  signed int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  bool v29; // zf
  unsigned int v31; // eax
  signed int v32; // eax
  struct CVisualTree *v33; // rdx
  signed int v34; // eax
  struct CProcessAttribution *v35; // [rsp+28h] [rbp-D8h]
  char v36; // [rsp+60h] [rbp-A0h]
  char v37; // [rsp+61h] [rbp-9Fh]
  bool v38; // [rsp+62h] [rbp-9Eh]
  char v39; // [rsp+64h] [rbp-9Ch]
  unsigned int v40; // [rsp+68h] [rbp-98h]
  int v41; // [rsp+6Ch] [rbp-94h]
  struct CDrawingContext *v42; // [rsp+70h] [rbp-90h] BYREF
  CSwRenderTargetGetBounds *v43; // [rsp+78h] [rbp-88h]
  __int128 v44; // [rsp+80h] [rbp-80h] BYREF
  __int64 v45[2]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v46; // [rsp+A0h] [rbp-60h]
  __int128 v47; // [rsp+B0h] [rbp-50h]
  __int128 v48; // [rsp+C0h] [rbp-40h]
  int v49; // [rsp+D0h] [rbp-30h]
  _OWORD v50[4]; // [rsp+E0h] [rbp-20h] BYREF
  int v51; // [rsp+120h] [rbp+20h]
  __m128 v52; // [rsp+130h] [rbp+30h] BYREF

  *a2 = 0;
  v3 = 0;
  v42 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  v37 = 0;
  LOBYTE(v7) = 0;
  v41 = 0;
  v44 = _xmm;
  if ( !*((_BYTE *)this + 146) )
    return v3;
  v8 = (COffScreenRenderTarget *)((char *)this - 64);
  v9 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 8) + 264LL))((char *)this - 64);
  v3 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x129u);
    goto LABEL_22;
  }
  if ( !*((_DWORD *)this + 44) )
    return v3;
  v5 = 1;
  CComposition::ShowHideCursors(*((CComposition **)this - 6), *((_BYTE *)this + 144) != 0);
  v10 = CVisualTree::PreCompute(*((CVisualTree **)this + 2));
  v3 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x141u);
  }
  else
  {
    DrawingContext = CRenderTarget::GetDrawingContext(v8, &v42, v11);
    v3 = DrawingContext;
    if ( DrawingContext >= 0 )
    {
      if ( *((_BYTE *)this + 145) )
      {
        CComposition::MagnifierSetExclude(*((CComposition **)this - 6), 1);
        v37 = 1;
      }
      *(_BYTE *)(*((_QWORD *)this - 6) + 1296LL) = 1;
      v13 = *((_QWORD *)this + 2);
      if ( !v13 )
      {
LABEL_25:
        *(_BYTE *)(*((_QWORD *)this - 6) + 1296LL) = 0;
LABEL_26:
        if ( v37 )
          CComposition::MagnifierSetExclude(*((CComposition **)this - 6), 0);
        goto LABEL_28;
      }
      v14 = *((_DWORD *)this + 60);
      v52.m128_u64[0] = 0LL;
      v49 = 0;
      v4 = *(_QWORD *)(v13 + 24);
      *(float *)&v15 = (float)v14;
      v16 = *(void (__fastcall **)(CRenderTarget *, __int64 *))(*(_QWORD *)v8 + 256LL);
      v52.m128_u64[1] = __PAIR64__((float)*((int *)this + 61), v15);
      v16(v8, v45);
      v50[0] = *(_OWORD *)v45;
      v50[1] = v46;
      v50[2] = v47;
      v50[3] = v48;
      v51 = v49;
      v19 = CMILMatrix::Invert((CMILMatrix *)v50, v17, v18);
      v6 = *(_DWORD *)(v4 + 96);
      v7 = (int)(*(_DWORD *)(v4 + 96) << 18) >> 28;
      v38 = v19;
      v39 = v6;
      ResampleMode = CVisual::GetResampleMode(v4);
      *(_BYTE *)(v4 + 96) |= 2u;
      *(_DWORD *)(v4 + 96) &= 0xFFFFC7FF;
      *(_DWORD *)(v4 + 96) |= 0x400u;
      v41 = ResampleMode;
      CVisual::SetResampleMode(v4, *((_DWORD *)this + 18));
      v21 = 0;
      v40 = 0;
      if ( *((_DWORD *)this + 44) )
      {
        v22 = v42;
        while ( 1 )
        {
          v36 = 0;
          v35 = (struct CProcessAttribution *)*((_QWORD *)this + 7);
          v43 = *(CSwRenderTargetGetBounds **)(*((_QWORD *)this + 19) + 8LL * v21);
          v23 = CDrawingContext::BeginFrame(v22, v43, &v44, 0, (__int64)v45, v35, 0, 0LL);
          v3 = v23;
          if ( v23 < 0 )
            break;
          if ( (*(unsigned int (__fastcall **)(CRenderTarget *, _QWORD))(*(_QWORD *)v8 + 288LL))(v8, v40) )
          {
            v31 = (*(__int64 (__fastcall **)(CRenderTarget *, _QWORD))(*(_QWORD *)v8 + 288LL))(v8, v40);
            v32 = CDrawingContext::PushStereoContext(v22, v31, 0LL);
            v3 = v32;
            if ( v32 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v32, 0x182u);
              goto LABEL_21;
            }
            v36 = 1;
          }
          v24 = 0;
          if ( v38 )
          {
            v33 = (struct CVisualTree *)*((_QWORD *)this + 2);
            v42 = 0LL;
            CDrawingContext::CalculateOcclusion((struct CComposition **)v22, v33, 1LL, (__int64)&v52, 0, 1, &v42);
          }
          if ( *((_BYTE *)this + 147) && *((_BYTE *)this + 148) )
            v24 = 1;
          v25 = (*(__int64 (__fastcall **)(CRenderTarget *))(*(_QWORD *)v8 + 296LL))(v8);
          v26 = CDrawingContext::DrawVisualTree(
                  v22,
                  *((_QWORD *)this + 2),
                  &v52,
                  0LL,
                  0x7FFFFFFF,
                  v25,
                  0,
                  1,
                  0,
                  1,
                  1,
                  v24);
          v3 = v26;
          if ( v26 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v26, 0x19Eu);
            goto LABEL_21;
          }
          if ( v36 )
          {
            v34 = CDrawingContext::PopStereoContext(v22, 0LL);
            v3 = v34;
            if ( v34 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v34, 0x1A2u);
              goto LABEL_21;
            }
          }
          CDrawingContext::EndFrame(v22, v27, v28);
          v29 = !g_LockAndReadOffscreenTarget;
          *((_BYTE *)this + 147) = *((_BYTE *)v22 + 6835);
          if ( !v29 )
            (*(void (__fastcall **)(CSwRenderTargetGetBounds *, _QWORD, _QWORD))(*(_QWORD *)v43 + 184LL))(v43, 0LL, 0LL);
          v21 = v40 + 1;
          v40 = v21;
          if ( v21 >= *((_DWORD *)this + 44) )
            goto LABEL_21;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v23, 0x17Eu);
LABEL_21:
        v6 = v39;
      }
LABEL_22:
      if ( v4 )
      {
        *(_BYTE *)(v4 + 96) = v6;
        *(_DWORD *)(v4 + 96) &= 0xFFFFC3FF;
        *(_DWORD *)(v4 + 96) |= (v7 & 0xF) << 10;
        CVisual::SetResampleMode(v4, v41);
      }
      if ( !v5 )
        goto LABEL_26;
      goto LABEL_25;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, DrawingContext, 0x143u);
  }
LABEL_28:
  if ( (v3 & 0x80000000) != 0 )
    ReleaseInterface<CDrawingContext>((char *)this + 40);
  else
    COffScreenRenderTarget::SetNeedsFlush(v8);
  CComposition::RestoreCursors(*((CComposition **)this - 6));
  return v3;
}
