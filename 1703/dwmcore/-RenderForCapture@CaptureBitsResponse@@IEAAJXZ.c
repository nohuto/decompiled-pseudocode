/*
 * XREFs of ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18014A2C0
 * Callers:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x1800B0004 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18000F7A0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180011CDC (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18005B5EC (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x18005B624 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18009ADE8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DJ@@@2PEAVCHwndRenderTarget@@@Z @ 0x1800AA100 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800AAB10 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAPEAVCOcclusionContext@@@Z @ 0x1800AB078 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B4E20 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B7040 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x1800D45E0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x18012B740 (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x18012D0E8 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180134B34 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEBV-$TMilRect_@MUMilRectF@@U.c)
 */

__int64 __fastcall CaptureBitsResponse::RenderForCapture(CaptureBitsResponse *this)
{
  CDrawingContext *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // r13
  __int64 v5; // rax
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  char v8; // r14
  float v9; // xmm2_4
  CVisualTree *v10; // rcx
  __int64 v11; // rbx
  int v12; // ebx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  struct CVisualTree *v17; // rdx
  int v18; // eax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r15
  unsigned int v23; // r14d
  __int64 v24; // rcx
  __int64 v25; // rcx
  CComposeTop *v26; // rax
  __m128i v27; // xmm0
  float v28; // xmm2_4
  float v29; // xmm1_4
  int v30; // eax
  CDrawingContext *v32; // [rsp+68h] [rbp-59h] BYREF
  float v33; // [rsp+70h] [rbp-51h] BYREF
  float v34; // [rsp+74h] [rbp-4Dh] BYREF
  float v35[4]; // [rsp+78h] [rbp-49h] BYREF
  __int64 v36[2]; // [rsp+88h] [rbp-39h] BYREF
  __int128 v37; // [rsp+98h] [rbp-29h]
  __int128 v38; // [rsp+A8h] [rbp-19h]
  __int128 v39; // [rsp+B8h] [rbp-9h]
  __int16 v40; // [rsp+C8h] [rbp+7h]
  __int128 v41; // [rsp+D8h] [rbp+17h] BYREF

  v2 = 0LL;
  v3 = *((_QWORD *)this + 3) + 16LL;
  v32 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v5 = *((_QWORD *)this + 8);
  *(_QWORD *)&v41 = 0LL;
  *(_OWORD *)v36 = _xmm;
  v40 = 32085;
  v6 = _mm_cvtsi32_si128(*((_DWORD *)this + 22));
  v37 = _xmm;
  v7 = _mm_cvtsi32_si128(*((_DWORD *)this + 23));
  v38 = _xmm;
  v39 = _xmm;
  v8 = *(_BYTE *)(v5 + 32);
  *((float *)&v41 + 2) = _mm_cvtepi32_ps(v6).m128_f32[0] + 0.0;
  *((float *)&v41 + 3) = _mm_cvtepi32_ps(v7).m128_f32[0] + 0.0;
  CComposition::ShowHideCursors((CComposition *)v4, 0);
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 24) - 1.0)) & _xmm);
  if ( v9 >= 0.0000011920929 )
    CMILMatrix::Scale((CMILMatrix *)v36, *((float *)this + 24), *((float *)this + 24), 1.0);
  CMILMatrix::Translate((CMILMatrix *)v36, (float)-*((_DWORD *)this + 20), (float)-*((_DWORD *)this + 21));
  v10 = (CVisualTree *)*((_QWORD *)this + 8);
  if ( (*(_BYTE *)(*((_QWORD *)v10 + 3) + 88LL) & 0x1F) != 0 )
  {
    if ( v8 )
    {
      v11 = *((_QWORD *)v10 + 2) + 584LL;
      AcquireSRWLockExclusive((PSRWLOCK)v11);
      *(_DWORD *)(v11 + 8) = GetCurrentThreadId();
      v12 = CVisualTree::PreCompute(*((CVisualTree **)this + 8), 0LL);
      v13 = *(_QWORD *)(*((_QWORD *)this + 8) + 16LL) + 584LL;
      *(_DWORD *)(v13 + 8) = 0;
      ReleaseSRWLockExclusive((PSRWLOCK)v13);
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x223u);
        goto LABEL_34;
      }
    }
    else
    {
      v14 = CVisualTree::PreCompute(v10, 0LL);
      v12 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x227u);
        goto LABEL_34;
      }
    }
  }
  v15 = CDrawingContext::Create((struct CComposition *)v4, &v32);
  v12 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x22Bu);
    v2 = v32;
  }
  else
  {
    *(_BYTE *)(v4 + 1360) = 1;
    if ( !v8 && CVisual::GetEffectiveOffset(*(CVisual **)(*((_QWORD *)this + 8) + 24LL), &v34, &v33, v35) )
      CMILMatrix::Translate((CMILMatrix *)v36, COERCE_FLOAT(LODWORD(v34) ^ _xmm), COERCE_FLOAT(LODWORD(v33) ^ _xmm));
    v2 = v32;
    v16 = CDrawingContext::BeginFrame(
            v32,
            *((CSwRenderTargetGetBounds **)this + 9),
            &stru_1801FC928,
            1,
            (__int64)v36,
            0LL,
            0,
            0LL);
    v12 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x244u);
    }
    else
    {
      v17 = (struct CVisualTree *)*((_QWORD *)this + 8);
      v32 = 0LL;
      CDrawingContext::CalculateOcclusion(v2, v17, 1u, (__int64)&v41, 1, &v32);
      v18 = CDrawingContext::Clear((CD2DContext **)v2, &stru_1801FC928);
      v12 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x254u);
      }
      else
      {
        v19 = CDrawingContext::DrawVisualTree(v2, *((_QWORD *)this + 8), &v41, 0LL, 0x7FFFFFFF, 0, 0, 1, 0, 0, 1);
        v12 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x25Fu);
        }
        else
        {
          if ( g_LockAndReadOffscreenTarget )
            CDrawingContext::ReadTexture(v2);
          if ( v8 )
          {
            v22 = *(_QWORD *)(v4 + 32);
            v23 = 0;
            if ( *(_DWORD *)(v22 + 80) )
            {
              while ( 1 )
              {
                v24 = *(_QWORD *)(*(_QWORD *)(v22 + 56) + 8LL * v23);
                if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v24 + 264LL))(v24) )
                  break;
                if ( ++v23 >= *(_DWORD *)(v22 + 80) )
                  goto LABEL_30;
              }
              v25 = *(_QWORD *)(*(_QWORD *)(v22 + 56) + 8LL * v23);
              if ( v25 )
              {
                v26 = (CComposeTop *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 192LL))(v25);
                if ( v26 )
                {
                  v27 = _mm_cvtsi32_si128(*((_DWORD *)this + 22));
                  v28 = (float)*((int *)this + 21);
                  *(float *)&v41 = (float)*((int *)this + 20);
                  *((float *)&v41 + 1) = v28;
                  v29 = (float)*((int *)this + 23);
                  *((float *)&v41 + 2) = _mm_cvtepi32_ps(v27).m128_f32[0] + *(float *)&v41;
                  *((float *)&v41 + 3) = v29 + v28;
                  v30 = CComposeTop::FullRender(v26, (__int64)v2, (__int64)v36, (const struct MilRectF *)&v41);
                  v12 = v30;
                  if ( v30 < 0 )
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x285u);
                }
              }
            }
          }
        }
      }
LABEL_30:
      CDrawingContext::EndFrame(v2, v20, v21);
    }
    *(_BYTE *)(v4 + 1360) = 0;
  }
LABEL_34:
  CComposition::RestoreCursors((CComposition *)v4);
  if ( v2 )
    CMILCOMBase::InternalRelease((CDrawingContext *)((char *)v2 + 16));
  return (unsigned int)v12;
}
