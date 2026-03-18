/*
 * XREFs of ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800AB7E0
 * Callers:
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800AB220 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 * Callees:
 *     ?IssueSurfaceNotifications@CCommonRenderingEffect@@UEBAXPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180009810 (-IssueSurfaceNotifications@CCommonRenderingEffect@@UEBAXPEAVCDrawingContext@@AEBV-$TMilRect_@MUM.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x18007B250 (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180099C10 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?GetNextHWCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCHWCallbackRenderer@@@Z @ 0x1800ABE38 (-GetNextHWCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCHWCallba.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800AC894 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ??$emplace_back@AEAPEAVCHWDrawListEntry@@@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@QEAAXAEAPEAVCHWDrawListEntry@@@Z @ 0x1800BDF80 (--$emplace_back@AEAPEAVCHWDrawListEntry@@@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@st.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x1801307D4 (-EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@.c)
 *     Template_qq @ 0x18013BC88 (Template_qq.c)
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x180156240 (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ?UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x18015F4A8 (-UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?CreateConstantBuffer@CHwLightCollectionBuffer@@QEAAJPEAVCD3DDeviceLevel1@@PEA_KPEAPEAVCD3DConstantBuffer@@2@Z @ 0x180199AAC (-CreateConstantBuffer@CHwLightCollectionBuffer@@QEAAJPEAVCD3DDeviceLevel1@@PEA_KPEAPEAVCD3DConst.c)
 */

__int64 __fastcall CHWDrawListEntry::Render(__int64 a1, __int64 a2, __int64 a3, float a4, int a5)
{
  __int64 v5; // r15
  struct CHwLightCollectionBuffer *v6; // r12
  int v7; // r14d
  bool v9; // r13
  __m128 *v13; // rax
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rax
  struct ClipPlaneInfoRef *v17; // rsi
  CD2DContext *v18; // rax
  __int64 v19; // rcx
  CD2DContext *v20; // rsi
  char *v21; // r14
  __int64 v22; // rax
  int v23; // edi
  __int64 v24; // rax
  __int64 v25; // r10
  unsigned int v26; // eax
  unsigned int v27; // edx
  CD2DContext *v29; // rax
  __int64 v30; // rcx
  CD2DContext *v31; // r14
  char *v32; // r15
  __int64 v33; // rax
  struct CD3DDeviceLevel1 *v34; // rax
  int v35; // eax
  __int64 v36; // r14
  __int64 v37; // rsi
  __int64 v38; // r10
  unsigned int v39; // eax
  unsigned int v40; // edx
  float v41; // xmm1_4
  int v42; // r14d
  struct CD3DDeviceLevel1 *v43; // rax
  int NextHWCallbackRenderer; // eax
  __int64 v45; // rsi
  struct ClipPlaneInfoRef *v46; // r15
  __int64 v47; // rcx
  void (__fastcall *v48)(__int64, CDrawingContext *); // rax
  CD2DTarget *v49; // r13
  __int64 v50; // rcx
  __int64 j; // rdi
  CD2DTarget *v52; // r15
  int v53; // r14d
  CD2DTarget *v54; // r15
  __int64 v55; // rcx
  __int64 i; // rdi
  CD2DTarget *v57; // r14
  float v58; // xmm1_4
  int v59; // eax
  int v60; // eax
  __m128 v61; // xmm2
  __m128 v62; // xmm3
  __m128 v63; // xmm4
  __m128 v64; // xmm4
  __m128 v65; // xmm4
  __m128 v66; // xmm4
  __m128 v67; // xmm4
  D3DVALUE v68; // xmm1_4
  D3DVALUE v69; // xmm0_4
  CDrawListPrimitive *v70; // rcx
  int v71; // eax
  int ConstantBuffer; // eax
  struct ClipPlaneInfoRef *v73; // [rsp+30h] [rbp-40h] BYREF
  struct CHwLightCollectionBuffer *v74; // [rsp+38h] [rbp-38h] BYREF
  struct _D3DCOLORVALUE v75; // [rsp+40h] [rbp-30h] BYREF

  v5 = *(_QWORD *)(a2 + 392);
  v6 = 0LL;
  v7 = a5;
  v9 = 0;
  v74 = 0LL;
  v73 = 0LL;
  if ( a4 == 1.0 )
    v9 = a5 == 0;
  if ( (*(_BYTE *)(a1 + 44) & 1) != 0 && v9 )
    v7 = 1;
  v13 = *(__m128 **)(a1 + 16);
  if ( v13 )
  {
    v61 = v13[7];
    v62 = _mm_shuffle_ps(v61, v61, 255);
    v63 = v62;
    v63.m128_f32[0] = v62.m128_f32[0] * v61.m128_f32[0];
    v64 = _mm_shuffle_ps(v63, v63, 225);
    v64.m128_f32[0] = v62.m128_f32[0] * _mm_shuffle_ps(v61, v61, 85).m128_f32[0];
    v65 = _mm_shuffle_ps(v64, v64, 198);
    v65.m128_f32[0] = _mm_shuffle_ps(v61, v61, 170).m128_f32[0] * v62.m128_f32[0];
    v66 = _mm_shuffle_ps(v65, v65, 39);
    v66.m128_f32[0] = v62.m128_f32[0];
    v67 = _mm_shuffle_ps(v66, v66, 57);
    *(struct _D3DCOLORVALUE *)&v75.r = (struct _D3DCOLORVALUE)v67;
    v68 = _mm_shuffle_ps(v67, v67, 85).m128_f32[0] * *(float *)(a1 + 28);
    v75.r = v67.m128_f32[0] * *(float *)(a1 + 24);
    v69 = _mm_shuffle_ps(v67, v67, 170).m128_f32[0] * *(float *)(a1 + 32);
    v61.m128_f32[0] = _mm_shuffle_ps(v67, v67, 255).m128_f32[0] * *(float *)(a1 + 36);
    v70 = *(CDrawListPrimitive **)(a1 + 56);
    v75.b = v69;
    v75.g = v68;
    LODWORD(v75.a) = v61.m128_i32[0];
    CDrawListPrimitive::UpdatePremultipliedColor(v70, &v75);
  }
  if ( !v7 )
    goto LABEL_7;
  v42 = v7 - 1;
  if ( v42 )
  {
    v53 = v42 - 1;
    if ( v53 )
    {
      if ( v53 != 2 )
      {
LABEL_7:
        v14 = 0;
        goto LABEL_8;
      }
      v14 = 22;
    }
    else
    {
      v14 = 21;
    }
  }
  else
  {
    v14 = 5;
  }
LABEL_8:
  if ( !*(_DWORD *)(a1 + 40) )
  {
    *(_OWORD *)(a1 + 72) = *(_OWORD *)a3;
    *(_OWORD *)(a1 + 88) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(a1 + 104) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(a1 + 120) = *(_OWORD *)(a3 + 48);
    v15 = *(_DWORD *)(a3 + 64);
    *(float *)(a1 + 140) = a4;
    *(_DWORD *)(a1 + 136) = v15;
    *(_DWORD *)(a1 + 144) = v14;
  }
  if ( (*(_BYTE *)(a1 + 44) & 0x10) != 0 )
  {
    v47 = *(_QWORD *)(a1 + 64);
    *(struct _D3DCOLORVALUE *)&v75.r = *(struct _D3DCOLORVALUE *)(*(_QWORD *)(a1 + 56) + 56LL);
    v48 = *(void (__fastcall **)(__int64, CDrawingContext *))(*(_QWORD *)v47 + 40LL);
    if ( v48 == CCommonRenderingEffect::IssueSurfaceNotifications )
      CCommonRenderingEffect::IssueSurfaceNotifications(v47, (CDrawingContext *)a2);
    else
      ((void (__fastcall *)(__int64, __int64, struct _D3DCOLORVALUE *))v48)(v47, a2, &v75);
  }
  if ( (*(_BYTE *)(a1 + 44) & 4) != 0 )
    *(_BYTE *)(a2 + 6777) = 1;
  if ( *(_BYTE *)(a2 + 728) && *(_DWORD *)(a2 + 688) )
  {
    v23 = CLightStack::RetrieveCurrentLightBufferForContextNoRef(
            (CLightStack *)(a2 + 664),
            (struct CDrawingContext *)a2,
            (const struct CMILMatrix *)(a2 + 6472),
            &v74);
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x7Bu);
      return (unsigned int)v23;
    }
    v6 = v74;
  }
  v16 = *(_QWORD *)(a2 + 3240);
  if ( v16 && *(_QWORD *)(v16 + 256) )
  {
    v17 = *(struct ClipPlaneInfoRef **)(v16 + 256);
    v73 = v17;
  }
  else
  {
    v17 = v73;
  }
  if ( (*(_BYTE *)(a1 + 44) & 8) == 0 || !v9 )
  {
    v18 = (CD2DContext *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 176LL))(v5);
    v20 = v18;
    if ( *((_QWORD *)v18 + 59) )
      CD2DContext::FlushDrawList(v18);
    if ( !*((_BYTE *)v20 + 480) )
    {
      v54 = 0LL;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_qq(v19, &EVTDESC_ETWGUID_DRAWEVENT_Start, 16LL, 0LL);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v20 + 22) + 384LL))(*((_QWORD *)v20 + 22));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_qq(v55, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 16LL, 0LL);
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)v20 + 90); v54 = v57 )
      {
        v57 = *(CD2DTarget **)(*((_QWORD *)v20 + 42) + 8 * i);
        if ( v54 )
          *((_BYTE *)v54 + 48) = 0;
        CD2DTarget::ApplyState(v57, v20);
        i = (unsigned int)(i + 1);
      }
      *((_BYTE *)v20 + 480) = 1;
    }
    v21 = (char *)v20 + 464;
    *((_BYTE *)v20 + 481) = 1;
    v22 = *((_QWORD *)v20 + 58);
    v23 = 0;
    if ( v22 )
    {
      if ( *(struct CHwLightCollectionBuffer **)(v22 + 32) != v6 || *(struct ClipPlaneInfoRef **)(v22 + 64) != v73 )
      {
        CD2DContext::FlushDrawList(v20);
        CD2DContext::EnsureHwCallbackRenderer(v20, v6, v73);
      }
    }
    else
    {
      v43 = (struct CD3DDeviceLevel1 *)(*(__int64 (__fastcall **)(CD2DContext *))(*(_QWORD *)v20 + 176LL))(v20);
      NextHWCallbackRenderer = CCallbackRendererManager::GetNextHWCallbackRenderer(
                                 (CD2DContext *)((char *)v20 + 8),
                                 v43,
                                 (struct CHWCallbackRenderer **)v20 + 58);
      v23 = NextHWCallbackRenderer;
      if ( NextHWCallbackRenderer < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, NextHWCallbackRenderer, 0x361u);
      }
      else
      {
        v45 = *(_QWORD *)v21;
        v23 = 0;
        if ( !v6
          || *(_QWORD *)(v45 + 40) && *(_QWORD *)(v45 + 48)
          || (ConstantBuffer = CHwLightCollectionBuffer::CreateConstantBuffer(
                                 v6,
                                 *(struct CD3DDeviceLevel1 **)(v45 + 24),
                                 (unsigned __int64 *)(v45 + 56),
                                 (struct CD3DConstantBuffer **)(v45 + 40),
                                 (struct CD3DConstantBuffer **)(v45 + 48)),
              v23 = ConstantBuffer,
              ConstantBuffer >= 0) )
        {
          *(_QWORD *)(v45 + 32) = v6;
          if ( v6 )
            (**(void (__fastcall ***)(struct CHwLightCollectionBuffer *))v6)(v6);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, ConstantBuffer, 0xBDu);
        }
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x362u);
        }
        else
        {
          v46 = v73;
          *(_QWORD *)(*(_QWORD *)v21 + 64LL) = v73;
          if ( v46 )
            (**(void (__fastcall ***)(struct ClipPlaneInfoRef *))v46)(v46);
        }
      }
    }
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x38Bu);
      goto LABEL_131;
    }
    v24 = *(_QWORD *)v21;
    v73 = (struct ClipPlaneInfoRef *)a1;
    v25 = *(_QWORD *)(v24 + 24);
    v26 = *(_DWORD *)(v25 + 32);
    v27 = v26 + 1;
    if ( v26 + 1 < v26 )
    {
      v23 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      v23 = 0;
      if ( v27 <= *(_DWORD *)(v25 + 28) )
      {
        *(_QWORD *)(*(_QWORD *)(v25 + 8) + 8LL * v26) = v73;
        *(_DWORD *)(v25 + 32) = v27;
LABEL_28:
        (**(void (__fastcall ***)(struct ClipPlaneInfoRef *))v73)(v73);
        ++*((_DWORD *)v73 + 10);
LABEL_29:
        if ( v23 >= 0 )
          return (unsigned int)v23;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x87u);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x38Du);
LABEL_131:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x89u);
        return (unsigned int)v23;
      }
      v59 = DynArrayImpl<0>::AddMultipleAndSet(v25 + 8, 8u, 1, &v73);
      v23 = v59;
      if ( v59 >= 0 )
        goto LABEL_28;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v59, 0xC0u);
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x5Fu);
    goto LABEL_29;
  }
  v29 = (CD2DContext *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 176LL))(v5);
  v31 = v29;
  if ( *((_QWORD *)v29 + 59) )
    CD2DContext::FlushDrawList(v29);
  if ( !*((_BYTE *)v31 + 480) )
  {
    v49 = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_qq(v30, &EVTDESC_ETWGUID_DRAWEVENT_Start, 16LL, 0LL);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v31 + 22) + 384LL))(*((_QWORD *)v31 + 22));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_qq(v50, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 16LL, 0LL);
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)v31 + 90); v49 = v52 )
    {
      v52 = *(CD2DTarget **)(*((_QWORD *)v31 + 42) + 8 * j);
      if ( v49 )
        *((_BYTE *)v49 + 48) = 0;
      CD2DTarget::ApplyState(v52, v31);
      j = (unsigned int)(j + 1);
    }
    *((_BYTE *)v31 + 480) = 1;
  }
  v32 = (char *)v31 + 464;
  *((_BYTE *)v31 + 481) = 1;
  v33 = *((_QWORD *)v31 + 58);
  v23 = 0;
  if ( v33 )
  {
    if ( *(struct CHwLightCollectionBuffer **)(v33 + 32) != v6 || *(struct ClipPlaneInfoRef **)(v33 + 64) != v17 )
    {
      CD2DContext::FlushDrawList(v31);
      CD2DContext::EnsureHwCallbackRenderer(v31, v6, v17);
    }
  }
  else
  {
    v34 = (struct CD3DDeviceLevel1 *)(*(__int64 (__fastcall **)(CD2DContext *))(*(_QWORD *)v31 + 176LL))(v31);
    v35 = CCallbackRendererManager::GetNextHWCallbackRenderer(
            (CD2DContext *)((char *)v31 + 8),
            v34,
            (struct CHWCallbackRenderer **)v31 + 58);
    v23 = v35;
    if ( v35 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0x361u);
    }
    else
    {
      v36 = *(_QWORD *)v32;
      v23 = 0;
      if ( !v6
        || *(_QWORD *)(v36 + 40) && *(_QWORD *)(v36 + 48)
        || (v71 = CHwLightCollectionBuffer::CreateConstantBuffer(
                    v6,
                    *(struct CD3DDeviceLevel1 **)(v36 + 24),
                    (unsigned __int64 *)(v36 + 56),
                    (struct CD3DConstantBuffer **)(v36 + 40),
                    (struct CD3DConstantBuffer **)(v36 + 48)),
            v23 = v71,
            v71 >= 0) )
      {
        *(_QWORD *)(v36 + 32) = v6;
        if ( v6 )
          (**(void (__fastcall ***)(struct CHwLightCollectionBuffer *))v6)(v6);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v71, 0xBDu);
      }
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x362u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v32 + 64LL) = v17;
        if ( v17 )
          (**(void (__fastcall ***)(struct ClipPlaneInfoRef *))v17)(v17);
      }
    }
  }
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x3AAu);
    goto LABEL_119;
  }
  v37 = *(_QWORD *)v32;
  v73 = (struct ClipPlaneInfoRef *)a1;
  v38 = *(_QWORD *)(v37 + 24);
  v39 = *(_DWORD *)(v38 + 32);
  v40 = v39 + 1;
  if ( v39 + 1 < v39 )
  {
    v23 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  else
  {
    v23 = 0;
    if ( v40 <= *(_DWORD *)(v38 + 28) )
    {
      *(_QWORD *)(*(_QWORD *)(v38 + 8) + 8LL * v39) = v73;
      *(_DWORD *)(v38 + 32) = v40;
LABEL_50:
      (**(void (__fastcall ***)(struct ClipPlaneInfoRef *))v73)(v73);
      ++*((_DWORD *)v73 + 10);
      goto LABEL_51;
    }
    v60 = DynArrayImpl<0>::AddMultipleAndSet(v38 + 8, 8u, 1, &v73);
    v23 = v60;
    if ( v60 >= 0 )
      goto LABEL_50;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v60, 0xC0u);
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x5Fu);
LABEL_51:
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x87u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x73u);
  }
  else if ( (unsigned __int8)CMILMatrix::Is2DAffine<1>(a1 + 72, 1)
         && (v41 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 76)) & _xmm), v41 < 0.00012207031)
         && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 88)) & _xmm) < 0.00012207031
         || (v58 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 72)) & _xmm), v58 < 0.00012207031)
         && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 92)) & _xmm) < 0.00012207031 )
  {
    v74 = (struct CHwLightCollectionBuffer *)a1;
    std::deque<CMegaRect>::emplace_back<CHWDrawListEntry * &>(v37 + 256, &v74);
    v23 = 0;
  }
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x3AEu);
LABEL_119:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x85u);
  }
  return (unsigned int)v23;
}
