/*
 * XREFs of ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180170D04
 * Callers:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x18001E650 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x180034830 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x180034868 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180041320 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x1800653F4 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1800657F0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180065990 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BG@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006ED20 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006F434 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x1800A3D90 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800A3E90 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C57DC (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x18013C8CC (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x1801626C4 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801ADA10 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 */

__int64 __fastcall CaptureBitsResponse::RenderForCapture(CaptureBitsResponse *this)
{
  CDrawingContext *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // r13
  __int64 v5; // rax
  __m128i v6; // xmm0
  float v7; // xmm1_4
  char v8; // r14
  float v9; // xmm2_4
  struct CVisualTree *v10; // rcx
  __int64 v11; // rbx
  int v12; // ebx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // r14
  unsigned int v20; // r15d
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __m128i v24; // xmm0
  float v25; // xmm2_4
  float v26; // xmm1_4
  int v27; // eax
  CDrawingContext *v29; // [rsp+68h] [rbp-69h] BYREF
  float v30; // [rsp+70h] [rbp-61h] BYREF
  float v31; // [rsp+74h] [rbp-5Dh] BYREF
  float v32[4]; // [rsp+78h] [rbp-59h] BYREF
  __int64 v33[2]; // [rsp+88h] [rbp-49h] BYREF
  __int128 v34; // [rsp+98h] [rbp-39h]
  __int128 v35; // [rsp+A8h] [rbp-29h]
  __int128 v36; // [rsp+B8h] [rbp-19h]
  __int16 v37; // [rsp+C8h] [rbp-9h]
  __m128 v38; // [rsp+D8h] [rbp+7h] BYREF

  v2 = 0LL;
  v3 = *((_QWORD *)this + 3) + 16LL;
  v29 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v5 = *((_QWORD *)this + 8);
  v38.m128_u64[0] = 0LL;
  *(_OWORD *)v33 = _xmm;
  v37 = 32085;
  v6 = _mm_cvtsi32_si128(*((_DWORD *)this + 22));
  v34 = _xmm;
  v7 = (float)*((int *)this + 23) + 0.0;
  v35 = _xmm;
  v36 = _xmm;
  v8 = *(_BYTE *)(v5 + 32);
  v38.m128_f32[2] = _mm_cvtepi32_ps(v6).m128_f32[0] + 0.0;
  v38.m128_f32[3] = v7;
  CComposition::ShowHideCursors((CComposition *)v4, 0);
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 24) - 1.0)) & _xmm);
  if ( v9 >= 0.0000011920929 )
    CMILMatrix::Scale((CMILMatrix *)v33, *((float *)this + 24), *((float *)this + 24), 1.0);
  CMILMatrix::Translate((CMILMatrix *)v33, (float)-*((_DWORD *)this + 20), (float)-*((_DWORD *)this + 21));
  v10 = (struct CVisualTree *)*((_QWORD *)this + 8);
  if ( (*(_BYTE *)(*((_QWORD *)v10 + 3) + 88LL) & 0x7F) != 0 )
  {
    if ( v8 )
    {
      v11 = *((_QWORD *)v10 + 2) + 576LL;
      AcquireSRWLockExclusive((PSRWLOCK)v11);
      *(_DWORD *)(v11 + 8) = GetCurrentThreadId();
      v12 = CVisualTree::PreCompute(*((struct CVisualTree **)this + 8), 0LL);
      v13 = *(_QWORD *)(*((_QWORD *)this + 8) + 16LL) + 576LL;
      *(_DWORD *)(v13 + 8) = 0;
      ReleaseSRWLockExclusive((PSRWLOCK)v13);
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x209u);
        goto LABEL_34;
      }
    }
    else
    {
      v14 = CVisualTree::PreCompute(v10, 0LL);
      v12 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x20Du);
        goto LABEL_34;
      }
    }
  }
  v15 = CDrawingContext::Create((struct CComposition *)v4, &v29);
  v12 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x211u);
    v2 = v29;
  }
  else
  {
    *(_BYTE *)(v4 + 1344) = 1;
    if ( !v8 && CVisual::GetEffectiveOffset(*(CVisual **)(*((_QWORD *)this + 8) + 24LL), &v31, &v30, v32) )
      CMILMatrix::Translate((CMILMatrix *)v33, COERCE_FLOAT(LODWORD(v31) ^ _xmm), COERCE_FLOAT(LODWORD(v30) ^ _xmm));
    v2 = v29;
    v16 = CDrawingContext::BeginFrame(
            v29,
            *((struct IRenderTarget **)this + 9),
            &stru_1802AD270,
            1,
            (__int64)v33,
            0LL,
            0,
            0LL);
    v12 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x228u);
    }
    else
    {
      ++dword_1802D6248;
      CDrawingContext::CalculateOcclusion(v2, *((struct CVisualTree **)this + 8), 1LL, (__int64)&v38, 0, 1, &v29);
      v17 = CDrawingContext::Clear(v2, &stru_1802AD270);
      v12 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x23Au);
      }
      else
      {
        v18 = CDrawingContext::DrawVisualTree(v2, *((_QWORD *)this + 8), &v38, 0LL, 0x7FFFFFFF, 0, 0, 1, 0, 0, 1, 0);
        v12 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x245u);
        }
        else
        {
          if ( g_LockAndReadOffscreenTarget )
            CDrawingContext::ReadTexture(v2);
          if ( v8 )
          {
            v19 = *(_QWORD *)(v4 + 72);
            v20 = 0;
            if ( *(_DWORD *)(v19 + 80) )
            {
              while ( 1 )
              {
                v21 = *(_QWORD *)(*(_QWORD *)(v19 + 56) + 8LL * v20);
                if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v21 + 264LL))(v21) )
                  break;
                if ( ++v20 >= *(_DWORD *)(v19 + 80) )
                  goto LABEL_30;
              }
              v22 = *(_QWORD *)(*(_QWORD *)(v19 + 56) + 8LL * v20);
              if ( v22 )
              {
                v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 200LL))(v22);
                if ( v23 )
                {
                  v24 = _mm_cvtsi32_si128(*((_DWORD *)this + 22));
                  v25 = (float)*((int *)this + 21);
                  v38.m128_f32[0] = (float)*((int *)this + 20);
                  v38.m128_f32[1] = v25;
                  v26 = (float)*((int *)this + 23);
                  v38.m128_f32[2] = _mm_cvtepi32_ps(v24).m128_f32[0] + v38.m128_f32[0];
                  v38.m128_f32[3] = v26 + v25;
                  v27 = CComposeTop::FullRender(v23, v2, v33, &v38);
                  v12 = v27;
                  if ( v27 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x26Bu);
                }
              }
            }
          }
        }
      }
LABEL_30:
      CDrawingContext::EndFrame(v2);
    }
    *(_BYTE *)(v4 + 1344) = 0;
  }
LABEL_34:
  CComposition::RestoreCursors((CComposition *)v4);
  if ( v2 )
    CMILCOMBase::InternalRelease((CDrawingContext *)((char *)v2 + 16));
  return (unsigned int)v12;
}
