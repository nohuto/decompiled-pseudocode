/*
 * XREFs of ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180023E10
 * Callers:
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800237F0 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 * Callees:
 *     ??0CHWCallbackRenderer@@AEAA@PEAVCD3DDeviceLevel1@@PEAVCSharedDirect3DResources@0@@Z @ 0x18001D0E0 (--0CHWCallbackRenderer@@AEAA@PEAVCD3DDeviceLevel1@@PEAVCSharedDirect3DResources@0@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?UpdateSwapChains@CCommonRenderingEffect@@UEAAXPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001FB90 (-UpdateSwapChains@CCommonRenderingEffect@@UEAAXPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@.c)
 *     ?D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z @ 0x180043D58 (-D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180043FB4 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18004413C (-EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@.c)
 *     ?GetNextHWCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCHWCallbackRenderer@@@Z @ 0x180046348 (-GetNextHWCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCHWCallba.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A460 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x180081B08 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x180081B24 (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18009E9C8 (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ??$emplace_back@AEAPEAVCHWDrawListEntry@@@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@QEAAXAEAPEAVCHWDrawListEntry@@@Z @ 0x1800B2710 (--$emplace_back@AEAPEAVCHWDrawListEntry@@@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@st.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq @ 0x180125258 (McTemplateU0qq.c)
 *     ?UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x18015551C (-UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CHWDrawListEntry::Render(__int64 a1, __int64 a2, __int64 a3, float a4, int a5)
{
  __int64 v5; // r13
  struct CHwLightCollectionBuffer *v6; // r12
  int v7; // esi
  bool v9; // r15
  __m128 *v13; // rax
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rax
  CD2DContext *v17; // rax
  CD2DContext *v18; // rsi
  __int64 v19; // rax
  int v20; // r14d
  __int64 v21; // rax
  __int64 v22; // r10
  unsigned int v23; // eax
  unsigned int v24; // edx
  int v26; // esi
  CD2DContext *v27; // rax
  CD2DContext *v28; // rsi
  char *v29; // r14
  __int64 v30; // rax
  int v31; // edi
  __int64 v32; // rsi
  __int64 v33; // r10
  unsigned int v34; // eax
  unsigned int v35; // edx
  __int64 v36; // rdx
  float *v37; // rcx
  float v38; // xmm1_4
  struct CD3DDeviceLevel1 *v39; // r15
  __int64 v40; // rdx
  unsigned int v41; // eax
  int v42; // ecx
  __int64 v43; // rax
  __int64 v44; // r15
  __int64 v45; // r12
  __int64 v46; // r15
  __int64 j; // rdi
  __int64 v48; // r14
  struct CD3DDeviceLevel1 *v49; // rax
  int NextHWCallbackRenderer; // eax
  __int64 v51; // rsi
  __int64 v52; // r15
  int v53; // eax
  __int64 v54; // rcx
  void (__fastcall *v55)(__int64, __int64, __int64); // rax
  CD2DTarget *v56; // r15
  __int64 i; // rdi
  CD2DTarget *v58; // r14
  __int64 v59; // rcx
  int v60; // esi
  int v61; // eax
  int v62; // eax
  struct CHWCallbackRenderer::CSharedDirect3DResources *v63; // r14
  CHWCallbackRenderer *v64; // rax
  CHWCallbackRenderer *v65; // rax
  CHWCallbackRenderer *v66; // r15
  unsigned int v67; // eax
  unsigned int v68; // edx
  int v69; // eax
  __m128 v70; // xmm1
  __m128 v71; // xmm2
  __m128 v72; // xmm3
  __m128 v73; // xmm3
  __m128 v74; // xmm3
  __m128 v75; // xmm3
  __m128 v76; // xmm3
  D3DVALUE v77; // xmm0_4
  CDrawListPrimitive *v78; // rcx
  struct ClipPlaneInfoRef *v79; // rax
  struct ClipPlaneInfoRef *v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rcx
  int v83; // eax
  float v84; // xmm1_4
  __int64 v85; // rcx
  struct ClipPlaneInfoRef *v86; // [rsp+30h] [rbp-61h]
  struct CHwLightCollectionBuffer *v87; // [rsp+38h] [rbp-59h] BYREF
  __int64 v88; // [rsp+40h] [rbp-51h] BYREF
  __int64 v89; // [rsp+48h] [rbp-49h] BYREF
  struct _D3DCOLORVALUE v90; // [rsp+50h] [rbp-41h] BYREF
  CHWCallbackRenderer *v91; // [rsp+60h] [rbp-31h] BYREF
  __int64 v92; // [rsp+68h] [rbp-29h] BYREF
  _OWORD v93[2]; // [rsp+70h] [rbp-21h] BYREF

  v5 = *(_QWORD *)(a2 + 384);
  v6 = 0LL;
  v7 = a5;
  v9 = 0;
  v87 = 0LL;
  v86 = 0LL;
  if ( a4 == 1.0 )
    v9 = a5 == 0;
  if ( (*(_BYTE *)(a1 + 44) & 1) != 0 && v9 )
    v7 = 1;
  v13 = *(__m128 **)(a1 + 16);
  if ( v13 )
  {
    v70 = v13[7];
    v71 = _mm_shuffle_ps(v70, v70, 255);
    v72 = v71;
    v72.m128_f32[0] = v71.m128_f32[0] * v70.m128_f32[0];
    v73 = _mm_shuffle_ps(v72, v72, 225);
    v73.m128_f32[0] = _mm_shuffle_ps(v70, v70, 85).m128_f32[0] * v71.m128_f32[0];
    v74 = _mm_shuffle_ps(v73, v73, 198);
    v74.m128_f32[0] = _mm_shuffle_ps(v70, v70, 170).m128_f32[0] * v71.m128_f32[0];
    v75 = _mm_shuffle_ps(v74, v74, 39);
    v75.m128_f32[0] = v71.m128_f32[0];
    v76 = _mm_shuffle_ps(v75, v75, 57);
    *(struct _D3DCOLORVALUE *)&v90.r = (struct _D3DCOLORVALUE)v76;
    v70.m128_f32[0] = _mm_shuffle_ps(v76, v76, 85).m128_f32[0] * *(float *)(a1 + 28);
    v90.r = v76.m128_f32[0] * *(float *)(a1 + 24);
    v77 = _mm_shuffle_ps(v76, v76, 170).m128_f32[0] * *(float *)(a1 + 32);
    v71.m128_f32[0] = _mm_shuffle_ps(v76, v76, 255).m128_f32[0] * *(float *)(a1 + 36);
    v78 = *(CDrawListPrimitive **)(a1 + 56);
    v90.b = v77;
    LODWORD(v90.g) = v70.m128_i32[0];
    LODWORD(v90.a) = v71.m128_i32[0];
    v93[1] = v76;
    CDrawListPrimitive::UpdatePremultipliedColor(v78, &v90);
  }
  if ( !v7 )
    goto LABEL_7;
  v26 = v7 - 1;
  if ( v26 )
  {
    v60 = v26 - 1;
    if ( v60 )
    {
      if ( v60 != 2 )
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
    v54 = *(_QWORD *)(a1 + 64);
    v93[0] = *(_OWORD *)(*(_QWORD *)(a1 + 56) + 56LL);
    v55 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v54 + 40LL);
    if ( v55 == CCommonRenderingEffect::UpdateSwapChains )
      CCommonRenderingEffect::UpdateSwapChains(v54, a2, (__int64)v93);
    else
      v55(v54, a2, (__int64)v93);
  }
  if ( (*(_BYTE *)(a1 + 44) & 4) != 0 )
    *(_BYTE *)(a2 + 6833) = 1;
  if ( *(_DWORD *)(a2 + 768) || !*(_DWORD *)(a2 + 696) )
  {
LABEL_15:
    v16 = *(_QWORD *)(a2 + 3336);
    if ( v16 )
    {
      v79 = *(struct ClipPlaneInfoRef **)(v16 + 256);
      v80 = 0LL;
      if ( v79 )
        v80 = v79;
      v86 = v80;
    }
    if ( (*(_BYTE *)(a1 + 44) & 8) != 0 && v9 )
    {
      v27 = (CD2DContext *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 152LL))(v5);
      v28 = v27;
      if ( *((_QWORD *)v27 + 57) )
        CD2DContext::FlushDrawList(v27);
      if ( !*((_BYTE *)v28 + 464) )
      {
        v56 = 0LL;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0qq(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Start, 16LL, 0LL);
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v28 + 22) + 384LL))(*((_QWORD *)v28 + 22));
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0qq(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 16LL, 0LL);
        for ( i = 0LL; (unsigned int)i < *((_DWORD *)v28 + 86); v56 = v58 )
        {
          v58 = *(CD2DTarget **)(*((_QWORD *)v28 + 40) + 8 * i);
          if ( v56 )
            *((_BYTE *)v56 + 48) = 0;
          CD2DTarget::ApplyState(v58, v28);
          i = (unsigned int)(i + 1);
        }
        *((_BYTE *)v28 + 464) = 1;
      }
      v29 = (char *)v28 + 448;
      *((_BYTE *)v28 + 465) = 1;
      v30 = *((_QWORD *)v28 + 56);
      v31 = 0;
      if ( v30 )
      {
        if ( *(struct CHwLightCollectionBuffer **)(v30 + 32) != v6 || *(struct ClipPlaneInfoRef **)(v30 + 40) != v86 )
        {
          CD2DContext::FlushDrawList(v28);
          v83 = CD2DContext::EnsureHwCallbackRenderer(v28, v6, v86);
          v31 = v83;
          if ( v83 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v83, 0x2A7u);
        }
      }
      else
      {
        v49 = (struct CD3DDeviceLevel1 *)(*(__int64 (__fastcall **)(CD2DContext *))(*(_QWORD *)v28 + 152LL))(v28);
        NextHWCallbackRenderer = CCallbackRendererManager::GetNextHWCallbackRenderer(
                                   (CD2DContext *)((char *)v28 + 8),
                                   v49,
                                   (struct CHWCallbackRenderer **)v28 + 56);
        v31 = NextHWCallbackRenderer;
        if ( NextHWCallbackRenderer < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, NextHWCallbackRenderer, 0x299u);
        }
        else
        {
          v51 = *(_QWORD *)v29;
          if ( *(struct CHwLightCollectionBuffer **)(*(_QWORD *)v29 + 32LL) != v6 )
          {
            if ( v6 )
              (**(void (__fastcall ***)(struct CHwLightCollectionBuffer *))v6)(v6);
            v81 = *(_QWORD *)(v51 + 32);
            *(_QWORD *)(v51 + 32) = v6;
            if ( v81 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 8LL))(v81);
          }
          v52 = *(_QWORD *)v29;
          if ( *(struct ClipPlaneInfoRef **)(*(_QWORD *)v29 + 40LL) != v86 )
          {
            if ( v86 )
              (**(void (__fastcall ***)(struct ClipPlaneInfoRef *))v86)(v86);
            v82 = *(_QWORD *)(v52 + 40);
            *(_QWORD *)(v52 + 40) = v86;
            if ( v82 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v82 + 8LL))(v82);
          }
        }
      }
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x2E2u);
LABEL_137:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x85u);
        return (unsigned int)v31;
      }
      v32 = *(_QWORD *)v29;
      v88 = a1;
      v33 = *(_QWORD *)(v32 + 24);
      v34 = *(_DWORD *)(v33 + 32);
      v35 = v34 + 1;
      if ( v34 + 1 < v34 )
      {
        v31 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      else
      {
        v31 = 0;
        if ( v35 <= *(_DWORD *)(v33 + 28) )
        {
          *(_QWORD *)(*(_QWORD *)(v33 + 8) + 8LL * v34) = v88;
          *(_DWORD *)(v33 + 32) = v35;
LABEL_45:
          (**(void (__fastcall ***)(__int64))v88)(v88);
          ++*(_DWORD *)(v88 + 40);
LABEL_46:
          if ( v31 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x90u);
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x7Eu);
          }
          else
          {
            LOBYTE(v36) = 1;
            if ( (unsigned __int8)CMILMatrix::Is2DAffine<1>(a1 + 72, v36)
              && (v38 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v37[1]) & _xmm), v38 < 0.000081380211)
              && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v37[4]) & _xmm) < 0.000081380211
              || (v84 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*v37) & _xmm), v84 < 0.000081380211)
              && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v37[5]) & _xmm) < 0.000081380211 )
            {
              v92 = a1;
              std::deque<CMegaRect>::emplace_back<CHWDrawListEntry * &>(v32 + 88, &v92);
              v31 = 0;
            }
          }
          if ( v31 >= 0 )
            return (unsigned int)v31;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x2E6u);
          goto LABEL_137;
        }
        v62 = DynArrayImpl<0>::AddMultipleAndSet(v33 + 8, 8LL, 1LL, &v88);
        v31 = v62;
        if ( v62 >= 0 )
          goto LABEL_45;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v62, 0xC0u);
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x67u);
      goto LABEL_46;
    }
    v17 = (CD2DContext *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 152LL))(v5);
    v18 = v17;
    if ( *((_QWORD *)v17 + 57) )
      CD2DContext::FlushDrawList(v17);
    if ( !*((_BYTE *)v18 + 464) )
    {
      v46 = 0LL;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0qq(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Start, 16LL, 0LL);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v18 + 22) + 384LL))(*((_QWORD *)v18 + 22));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0qq(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 16LL, 0LL);
      for ( j = 0LL; (unsigned int)j < *((_DWORD *)v18 + 86); v46 = v48 )
      {
        v48 = *(_QWORD *)(*((_QWORD *)v18 + 40) + 8 * j);
        if ( v46 )
          *(_BYTE *)(v46 + 48) = 0;
        if ( !*(_BYTE *)(v48 + 48) )
        {
          *(_QWORD *)(v48 + 16) = v18;
          CD2DContext::D2DSetTargetInternal(v18, (struct CD2DTarget *)v48);
          *(_BYTE *)(v48 + 48) = 1;
          CD2DTarget::ApplyCurrentClip((CD2DTarget *)v48);
        }
        j = (unsigned int)(j + 1);
      }
      *((_BYTE *)v18 + 464) = 1;
    }
    v19 = *((_QWORD *)v18 + 56);
    v20 = 0;
    *((_BYTE *)v18 + 465) = 1;
    if ( v19 )
    {
      if ( *(struct CHwLightCollectionBuffer **)(v19 + 32) != v6 || *(struct ClipPlaneInfoRef **)(v19 + 40) != v86 )
      {
        CD2DContext::FlushDrawList(v18);
        v53 = CD2DContext::EnsureHwCallbackRenderer(v18, v6, v86);
        v20 = v53;
        if ( v53 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0x2A7u);
      }
      goto LABEL_23;
    }
    v39 = (struct CD3DDeviceLevel1 *)(*(__int64 (__fastcall **)(CD2DContext *))(*(_QWORD *)v18 + 152LL))(v18);
    if ( *((_DWORD *)v18 + 16) )
      goto LABEL_54;
    v63 = (struct CHWCallbackRenderer::CSharedDirect3DResources *)*((_QWORD *)v18 + 13);
    v64 = (CHWCallbackRenderer *)HeapAlloc(WPF::g_processHeap, 0, 0x80uLL);
    if ( v64 && (v65 = CHWCallbackRenderer::CHWCallbackRenderer(v64, v39, v63), (v66 = v65) != 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v65 + 4);
      v91 = v65;
      v67 = *((_DWORD *)v18 + 16);
      v68 = v67 + 1;
      if ( v67 + 1 < v67 )
      {
        v20 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      else
      {
        if ( v68 <= *((_DWORD *)v18 + 15) )
        {
          v20 = 0;
          *(_QWORD *)(*((_QWORD *)v18 + 5) + 8LL * v67) = v91;
          *((_DWORD *)v18 + 16) = v68;
LABEL_106:
          v6 = v87;
LABEL_54:
          v40 = (unsigned int)(*((_DWORD *)v18 + 16) - 1);
          *((_QWORD *)v18 + 56) = *(_QWORD *)(*((_QWORD *)v18 + 5) + 8 * v40);
          v41 = *((_DWORD *)v18 + 31);
          *((_DWORD *)v18 + 16) = v40;
          if ( (unsigned int)v40 >= v41 )
            LODWORD(v40) = v41;
          ++*((_DWORD *)v18 + 28);
          v42 = *((_DWORD *)v18 + 8);
          *((_DWORD *)v18 + 31) = v40;
          v43 = *((_QWORD *)v18 + 56);
          *(_DWORD *)(v43 + 48) = v42;
          *(_DWORD *)(v43 + 52) = v42;
          goto LABEL_57;
        }
        v69 = DynArrayImpl<0>::AddMultipleAndSet((char *)v18 + 40, 8LL, 1LL, &v91);
        v20 = v69;
        if ( v69 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v69, 0xC0u);
      }
      if ( v20 >= 0 )
        goto LABEL_106;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0xCEu);
      CMILRefCountBase::Release((CHWCallbackRenderer *)((char *)v66 + 8));
      v6 = v87;
    }
    else
    {
      v20 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x5Cu);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xCDu);
    }
LABEL_57:
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x299u);
    }
    else
    {
      v44 = *((_QWORD *)v18 + 56);
      if ( *(struct CHwLightCollectionBuffer **)(v44 + 32) != v6 )
      {
        if ( v6 )
          (**(void (__fastcall ***)(struct CHwLightCollectionBuffer *))v6)(v6);
        v59 = *(_QWORD *)(v44 + 32);
        *(_QWORD *)(v44 + 32) = v6;
        if ( v59 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 8LL))(v59);
      }
      v45 = *((_QWORD *)v18 + 56);
      if ( *(struct ClipPlaneInfoRef **)(v45 + 40) != v86 )
      {
        if ( v86 )
          (**(void (__fastcall ***)(struct ClipPlaneInfoRef *))v86)(v86);
        v85 = *(_QWORD *)(v45 + 40);
        *(_QWORD *)(v45 + 40) = v86;
        if ( v85 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v85 + 8LL))(v85);
      }
    }
LABEL_23:
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x2C3u);
      goto LABEL_149;
    }
    v21 = *((_QWORD *)v18 + 56);
    v89 = a1;
    v22 = *(_QWORD *)(v21 + 24);
    v23 = *(_DWORD *)(v22 + 32);
    v24 = v23 + 1;
    if ( v23 + 1 < v23 )
    {
      v20 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      v20 = 0;
      if ( v24 <= *(_DWORD *)(v22 + 28) )
      {
        *(_QWORD *)(*(_QWORD *)(v22 + 8) + 8LL * v23) = v89;
        *(_DWORD *)(v22 + 32) = v24;
LABEL_27:
        (**(void (__fastcall ***)(__int64))v89)(v89);
        ++*(_DWORD *)(v89 + 40);
LABEL_28:
        if ( v20 >= 0 )
          return (unsigned int)v20;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x90u);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x2C5u);
LABEL_149:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x89u);
        return (unsigned int)v20;
      }
      v61 = DynArrayImpl<0>::AddMultipleAndSet(v22 + 8, 8LL, 1LL, &v89);
      v20 = v61;
      if ( v61 >= 0 )
        goto LABEL_27;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v61, 0xC0u);
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x67u);
    goto LABEL_28;
  }
  v31 = CLightStack::RetrieveCurrentLightBufferForContextNoRef(
          (CLightStack *)(a2 + 672),
          (struct CDrawingContext *)a2,
          (const struct CMILMatrix *)(a2 + 6536),
          &v87);
  if ( v31 >= 0 )
  {
    v6 = v87;
    goto LABEL_15;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x7Bu);
  return (unsigned int)v31;
}
