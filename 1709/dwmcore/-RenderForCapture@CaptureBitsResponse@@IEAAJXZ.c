/*
 * XREFs of ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180148524
 * Callers:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x18007FA74 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180031B0C (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BE@@@2PEAVCHwndRenderTarget@@@Z @ 0x180041E30 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800426F0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x180042C58 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180042E90 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180043010 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180059708 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18005AFD8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180079484 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x1800AA880 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800AA8B8 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x18011A4C4 (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x18013E6D8 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017D57C (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 */

__int64 __fastcall CaptureBitsResponse::RenderForCapture(CaptureBitsResponse *this)
{
  struct CComposition **v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // r13
  __int64 v5; // rax
  __m128i v6; // xmm0
  float v7; // xmm1_4
  char v8; // r14
  float v9; // xmm2_4
  CVisualTree *v10; // rcx
  __int64 v11; // rbx
  signed int v12; // ebx
  __int64 v13; // rcx
  signed int v14; // eax
  signed int v15; // eax
  signed int v16; // eax
  struct CVisualTree *v17; // rdx
  signed int v18; // eax
  signed int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r14
  unsigned int v23; // r15d
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  __m128i v27; // xmm0
  float v28; // xmm2_4
  float v29; // xmm1_4
  signed int v30; // eax
  CDrawingContext *v32; // [rsp+68h] [rbp-69h] BYREF
  float v33; // [rsp+70h] [rbp-61h] BYREF
  float v34; // [rsp+74h] [rbp-5Dh] BYREF
  float v35[4]; // [rsp+78h] [rbp-59h] BYREF
  __int64 v36[2]; // [rsp+88h] [rbp-49h] BYREF
  __int128 v37; // [rsp+98h] [rbp-39h]
  __int128 v38; // [rsp+A8h] [rbp-29h]
  __int128 v39; // [rsp+B8h] [rbp-19h]
  __int16 v40; // [rsp+C8h] [rbp-9h]
  __m128 v41; // [rsp+D8h] [rbp+7h] BYREF

  v2 = 0LL;
  v3 = *((_QWORD *)this + 3) + 16LL;
  v32 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v5 = *((_QWORD *)this + 8);
  v41.m128_u64[0] = 0LL;
  *(_OWORD *)v36 = _xmm;
  v40 = 32085;
  v6 = _mm_cvtsi32_si128(*((_DWORD *)this + 22));
  v37 = _xmm;
  v7 = (float)*((int *)this + 23) + 0.0;
  v38 = _xmm;
  v39 = _xmm;
  v8 = *(_BYTE *)(v5 + 32);
  v41.m128_f32[2] = _mm_cvtepi32_ps(v6).m128_f32[0] + 0.0;
  v41.m128_f32[3] = v7;
  CComposition::ShowHideCursors((CComposition *)v4, 0);
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 24) - 1.0)) & _xmm);
  if ( v9 >= 0.0000011920929 )
    CMILMatrix::Scale((CMILMatrix *)v36, *((float *)this + 24), *((float *)this + 24), 1.0);
  CMILMatrix::Translate((CMILMatrix *)v36, (float)-*((_DWORD *)this + 20), (float)-*((_DWORD *)this + 21));
  v10 = (CVisualTree *)*((_QWORD *)this + 8);
  if ( (*(_BYTE *)(*((_QWORD *)v10 + 3) + 88LL) & 0x7F) != 0 )
  {
    if ( v8 )
    {
      v11 = *((_QWORD *)v10 + 2) + 552LL;
      AcquireSRWLockExclusive((PSRWLOCK)v11);
      *(_DWORD *)(v11 + 8) = GetCurrentThreadId();
      v12 = CVisualTree::PreCompute(*((CVisualTree **)this + 8));
      v13 = *(_QWORD *)(*((_QWORD *)this + 8) + 16LL) + 552LL;
      *(_DWORD *)(v13 + 8) = 0;
      ReleaseSRWLockExclusive((PSRWLOCK)v13);
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x20Bu);
        goto LABEL_34;
      }
    }
    else
    {
      v14 = CVisualTree::PreCompute(v10);
      v12 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x20Fu);
        goto LABEL_34;
      }
    }
  }
  v15 = CDrawingContext::Create((struct CComposition *)v4, &v32);
  v12 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x213u);
    v2 = (struct CComposition **)v32;
  }
  else
  {
    *(_BYTE *)(v4 + 1296) = 1;
    if ( !v8 && CVisual::GetEffectiveOffset(*(CVisual **)(*((_QWORD *)this + 8) + 24LL), &v34, &v33, v35) )
      CMILMatrix::Translate((CMILMatrix *)v36, COERCE_FLOAT(LODWORD(v34) ^ _xmm), COERCE_FLOAT(LODWORD(v33) ^ _xmm));
    v2 = (struct CComposition **)v32;
    v16 = CDrawingContext::BeginFrame(
            v32,
            *((CSwRenderTargetGetBounds **)this + 9),
            &stru_180219A30,
            1,
            (__int64)v36,
            0LL,
            0,
            0LL);
    v12 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0x22Au);
    }
    else
    {
      v17 = (struct CVisualTree *)*((_QWORD *)this + 8);
      v32 = 0LL;
      CDrawingContext::CalculateOcclusion(v2, v17, 1LL, (__int64)&v41, 0, 1, &v32);
      v18 = CDrawingContext::Clear(v2, &stru_180219A30);
      v12 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v18, 0x239u);
      }
      else
      {
        v19 = CDrawingContext::DrawVisualTree(
                (CDrawingContext *)v2,
                *((_QWORD *)this + 8),
                &v41,
                0LL,
                0x7FFFFFFF,
                0,
                0,
                1,
                0,
                0,
                1,
                0);
        v12 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0x244u);
        }
        else
        {
          if ( g_LockAndReadOffscreenTarget )
            CDrawingContext::ReadTexture((CDrawingContext *)v2);
          if ( v8 )
          {
            v22 = *(_QWORD *)(v4 + 72);
            v23 = 0;
            if ( *(_DWORD *)(v22 + 80) )
            {
              while ( 1 )
              {
                v24 = *(_QWORD *)(*(_QWORD *)(v22 + 56) + 8LL * v23);
                if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v24 + 272LL))(v24) )
                  break;
                if ( ++v23 >= *(_DWORD *)(v22 + 80) )
                  goto LABEL_30;
              }
              v25 = *(_QWORD *)(*(_QWORD *)(v22 + 56) + 8LL * v23);
              if ( v25 )
              {
                v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 200LL))(v25);
                if ( v26 )
                {
                  v27 = _mm_cvtsi32_si128(*((_DWORD *)this + 22));
                  v28 = (float)*((int *)this + 21);
                  v41.m128_f32[0] = (float)*((int *)this + 20);
                  v41.m128_f32[1] = v28;
                  v29 = (float)*((int *)this + 23);
                  v41.m128_f32[2] = _mm_cvtepi32_ps(v27).m128_f32[0] + v41.m128_f32[0];
                  v41.m128_f32[3] = v29 + v28;
                  v30 = CComposeTop::FullRender(v26, v2, v36, &v41);
                  v12 = v30;
                  if ( v30 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v30, 0x26Au);
                }
              }
            }
          }
        }
      }
LABEL_30:
      CDrawingContext::EndFrame((CDrawingContext *)v2, v20, v21);
    }
    *(_BYTE *)(v4 + 1296) = 0;
  }
LABEL_34:
  CComposition::RestoreCursors((CComposition *)v4);
  if ( v2 )
    CMILCOMBase::InternalRelease((CMILCOMBase *)(v2 + 2));
  return (unsigned int)v12;
}
