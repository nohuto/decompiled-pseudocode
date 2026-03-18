/*
 * XREFs of ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18009C040
 * Callers:
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18009BA00 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 * Callees:
 *     ?UpdateInterpolationMode@CCommonRenderingEffect@@UEAAXW4D2D1_INTERPOLATION_MODE@@@Z @ 0x180006080 (-UpdateInterpolationMode@CCommonRenderingEffect@@UEAAXW4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?UpdateSwapChains@CCommonRenderingEffect@@UEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800060B0 (-UpdateSwapChains@CCommonRenderingEffect@@UEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@.c)
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x180015DAC (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ??$emplace_back@AEBI@?$vector@IV?$allocator@I@std@@@std@@QEAAXAEBI@Z @ 0x180017030 (--$emplace_back@AEBI@-$vector@IV-$allocator@I@std@@@std@@QEAAXAEBI@Z.c)
 *     ??$emplace_back@V?$ComPtr@VCHwLightCollectionBuffer@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCHwLightCollectionBuffer@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCHwLightCollectionBuffer@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@VCHwLightCollectionBuffer@@@WRL@Microsoft@@@Z @ 0x18001800C (--$emplace_back@V-$ComPtr@VCHwLightCollectionBuffer@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VCHwLig.c)
 *     ??0CHWCallbackRenderer@@AEAA@PEAVCD3DDeviceLevel1@@PEAVCSharedDirect3DResources@0@@Z @ 0x180059BEC (--0CHWCallbackRenderer@@AEAA@PEAVCD3DDeviceLevel1@@PEAVCSharedDirect3DResources@0@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x180094F5C (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x180094F78 (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180095C2C (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z @ 0x180096D48 (-D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800A58B0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$emplace_back@AEAPEAVCHWDrawListEntry@@@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@QEAAXAEAPEAVCHWDrawListEntry@@@Z @ 0x1800BCB78 (--$emplace_back@AEAPEAVCHWDrawListEntry@@@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@st.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCDrawListEntry@@$0A@@@QEAAJPEFBQEAVCDrawListEntry@@I@Z @ 0x1800BCD5C (-AddMultipleAndSet@-$DynArray@PEAVCDrawListEntry@@$0A@@@QEAAJPEFBQEAVCDrawListEntry@@I@Z.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?GetNextHWCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCHWCallbackRenderer@@@Z @ 0x1800BF658 (-GetNextHWCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCHWCallba.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18013E050 (-EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@.c)
 *     McTemplateU0qq @ 0x180147E0C (McTemplateU0qq.c)
 *     ?UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x18017E650 (-UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CHWDrawListEntry::Render(__int64 a1, __int64 a2, __int64 a3, float a4, int a5)
{
  __int64 v5; // r12
  struct CHwLightCollectionBuffer *v6; // rbx
  int v7; // r15d
  bool v9; // r13
  __m128 *v13; // rax
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rax
  struct ClipPlaneInfoRef *v17; // r15
  CD2DContext *v18; // rax
  CD2DContext *v19; // r14
  __int64 v20; // r15
  int v21; // esi
  struct CHwLightCollectionBuffer **v22; // r12
  __int64 v23; // rax
  int v24; // eax
  struct CHwLightCollectionBuffer **v26; // rax
  int v27; // r15d
  CD2DContext *v28; // rax
  CD2DContext *v29; // r14
  __int64 v30; // r13
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // r10
  unsigned int v35; // eax
  unsigned int v36; // edx
  __int64 v37; // rdx
  float v38; // xmm1_4
  __int64 v39; // rax
  int v40; // edx
  struct CD3DDeviceLevel1 *v41; // r15
  __int64 v42; // rdx
  bool v43; // cf
  int v44; // ecx
  __int64 v45; // rax
  __int64 v46; // r13
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rbx
  struct ClipPlaneInfoRef *v50; // rcx
  __int64 v51; // r13
  __int64 i; // rsi
  __int64 v53; // r15
  int v54; // eax
  struct CD3DDeviceLevel1 *v55; // rax
  int NextHWCallbackRenderer; // eax
  __int64 v57; // r13
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rbx
  struct ClipPlaneInfoRef *v61; // rcx
  __int64 v62; // rcx
  __int64 (__fastcall *v63)(__int64, __int64, __int64); // rax
  int v64; // eax
  int v65; // eax
  __int64 v66; // rdx
  void (__fastcall *v67)(CCommonRenderingEffect *, __int64); // rax
  CCommonRenderingEffect *v68; // rcx
  CD2DTarget *v69; // r13
  __int64 j; // rsi
  CD2DTarget *v71; // r12
  int v72; // r15d
  __int64 v73; // rdx
  __int64 v74; // r12
  unsigned __int64 v75; // rax
  unsigned __int64 v76; // rax
  __int64 v77; // r13
  struct CHwLightCollectionBuffer **v78; // rax
  _QWORD *v79; // rdx
  _QWORD *v80; // rcx
  _QWORD *v81; // r12
  _QWORD *v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rax
  int v85; // eax
  struct CHWCallbackRenderer::CSharedDirect3DResources *v86; // rsi
  CHWCallbackRenderer *v87; // rax
  CHWCallbackRenderer *v88; // rax
  CHWCallbackRenderer *v89; // r15
  unsigned int v90; // eax
  unsigned int v91; // edx
  int v92; // eax
  int v93; // ebx
  __m128 v94; // xmm3
  __m128 v95; // xmm4
  __m128 v96; // xmm5
  __m128 v97; // xmm5
  __m128 v98; // xmm5
  __m128 v99; // xmm5
  __m128 v100; // xmm5
  D3DVALUE v101; // xmm1_4
  D3DVALUE v102; // xmm0_4
  D3DVALUE v103; // xmm2_4
  CDrawListPrimitive *v104; // rcx
  struct ClipPlaneInfoRef *v105; // rax
  int v106; // eax
  float v107; // xmm1_4
  int v108; // eax
  unsigned int v109; // [rsp+20h] [rbp-B1h]
  struct ClipPlaneInfoRef *v110; // [rsp+30h] [rbp-A1h]
  __int64 v111; // [rsp+38h] [rbp-99h] BYREF
  __int64 v112; // [rsp+40h] [rbp-91h] BYREF
  struct CHwLightCollectionBuffer *v113; // [rsp+48h] [rbp-89h] BYREF
  struct _D3DCOLORVALUE v114; // [rsp+50h] [rbp-81h] BYREF
  int v115; // [rsp+60h] [rbp-71h] BYREF
  int v116; // [rsp+68h] [rbp-69h] BYREF
  int v117; // [rsp+70h] [rbp-61h] BYREF
  int v118; // [rsp+78h] [rbp-59h] BYREF
  __int64 v119; // [rsp+80h] [rbp-51h] BYREF
  __int64 v120; // [rsp+88h] [rbp-49h] BYREF
  _QWORD *v121; // [rsp+90h] [rbp-41h] BYREF
  struct CHwLightCollectionBuffer *v122; // [rsp+98h] [rbp-39h] BYREF
  struct CHwLightCollectionBuffer *v123; // [rsp+A0h] [rbp-31h] BYREF
  CHWCallbackRenderer *v124; // [rsp+A8h] [rbp-29h] BYREF
  _OWORD v125[2]; // [rsp+B0h] [rbp-21h] BYREF
  void *retaddr; // [rsp+128h] [rbp+57h]

  v5 = *(_QWORD *)(a2 + 384);
  v6 = 0LL;
  v7 = a5;
  v9 = 0;
  v113 = 0LL;
  v110 = 0LL;
  if ( a4 == 1.0 )
    v9 = a5 == 0;
  if ( (*(_BYTE *)(a1 + 44) & 1) != 0 && v9 )
    v7 = 1;
  v13 = *(__m128 **)(a1 + 16);
  if ( v13 )
  {
    v94 = v13[7];
    v95 = _mm_shuffle_ps(v94, v94, 255);
    v96 = v95;
    v96.m128_f32[0] = v95.m128_f32[0] * v94.m128_f32[0];
    v97 = _mm_shuffle_ps(v96, v96, 225);
    v97.m128_f32[0] = v95.m128_f32[0] * _mm_shuffle_ps(v94, v94, 85).m128_f32[0];
    v98 = _mm_shuffle_ps(v97, v97, 198);
    v98.m128_f32[0] = v95.m128_f32[0] * _mm_shuffle_ps(v94, v94, 170).m128_f32[0];
    v99 = _mm_shuffle_ps(v98, v98, 39);
    v99.m128_f32[0] = v95.m128_f32[0];
    v100 = _mm_shuffle_ps(v99, v99, 57);
    *(struct _D3DCOLORVALUE *)&v114.r = (struct _D3DCOLORVALUE)v100;
    v101 = _mm_shuffle_ps(v100, v100, 85).m128_f32[0] * *(float *)(a1 + 28);
    v114.r = v100.m128_f32[0] * *(float *)(a1 + 24);
    v102 = _mm_shuffle_ps(v100, v100, 170).m128_f32[0] * *(float *)(a1 + 32);
    v103 = _mm_shuffle_ps(v100, v100, 255).m128_f32[0] * *(float *)(a1 + 36);
    v104 = *(CDrawListPrimitive **)(a1 + 56);
    v114.b = v102;
    v114.g = v101;
    v114.a = v103;
    v125[1] = v100;
    CDrawListPrimitive::UpdatePremultipliedColor(v104, &v114);
  }
  if ( !v7 )
    goto LABEL_7;
  v27 = v7 - 1;
  if ( v27 )
  {
    v72 = v27 - 1;
    if ( v72 )
    {
      if ( v72 != 2 )
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
    v62 = *(_QWORD *)(a1 + 64);
    v125[0] = *(_OWORD *)(*(_QWORD *)(a1 + 56) + 56LL);
    v63 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v62 + 48LL);
    v64 = v63 == CCommonRenderingEffect::UpdateSwapChains
        ? CCommonRenderingEffect::UpdateSwapChains(v62, a2, (__int64)v125)
        : v63(v62, a2, (__int64)v125);
    v21 = v64;
    if ( v64 < 0 )
    {
      v109 = 110;
LABEL_205:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, v109);
      return (unsigned int)v21;
    }
  }
  if ( (*(_DWORD *)(a1 + 44) & 0x200) != 0 )
  {
    v65 = *(_DWORD *)(a2 + 252);
    v66 = 0LL;
    if ( v65 >= 1 )
    {
      switch ( v65 )
      {
        case 1:
          v66 = 1LL;
          break;
        case 2:
        case 3:
          v66 = 2LL;
          break;
        case 4:
        case 6:
          v66 = 3LL;
          break;
        case 5:
          v66 = 4LL;
          break;
        default:
          break;
      }
    }
    v67 = *(void (__fastcall **)(CCommonRenderingEffect *, __int64))(**(_QWORD **)(a1 + 64) + 56LL);
    v68 = *(CCommonRenderingEffect **)(a1 + 64);
    if ( v67 == CCommonRenderingEffect::UpdateInterpolationMode )
      CCommonRenderingEffect::UpdateInterpolationMode(v68, v66);
    else
      v67(v68, v66);
  }
  if ( (*(_BYTE *)(a1 + 44) & 4) != 0 )
    *(_BYTE *)(a2 + 6835) = 1;
  if ( !*(_DWORD *)(a2 + 768) && *(_DWORD *)(a2 + 696) )
  {
    v54 = CLightStack::RetrieveCurrentLightBufferForContextNoRef(
            (CLightStack *)(a2 + 672),
            (struct CDrawingContext *)a2,
            (const struct CMILMatrix *)(a2 + 6536),
            &v113);
    v21 = v54;
    if ( v54 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v54, 0x80u);
      return (unsigned int)v21;
    }
    v6 = v113;
  }
  v16 = *(_QWORD *)(a2 + 3336);
  v17 = 0LL;
  if ( v16 )
  {
    v105 = *(struct ClipPlaneInfoRef **)(v16 + 256);
    if ( v105 )
      v17 = v105;
    v110 = v17;
  }
  if ( (*(_BYTE *)(a1 + 44) & 8) == 0 || !v9 )
  {
    v18 = (CD2DContext *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 160LL))(v5);
    v19 = v18;
    if ( *((_QWORD *)v18 + 57) )
      CD2DContext::FlushDrawList(v18);
    if ( !*((_BYTE *)v19 + 464) )
    {
      v51 = 0LL;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0qq(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Start, 16LL, 0LL);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v19 + 22) + 384LL))(*((_QWORD *)v19 + 22));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0qq(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 16LL, 0LL);
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)v19 + 86); v51 = v53 )
      {
        v53 = *(_QWORD *)(*((_QWORD *)v19 + 40) + 8 * i);
        if ( v51 )
          *(_BYTE *)(v51 + 48) = 0;
        if ( !*(_BYTE *)(v53 + 48) )
        {
          *(_QWORD *)(v53 + 16) = v19;
          CD2DContext::D2DSetTargetInternal(v19, (struct CD2DTarget *)v53);
          *(_BYTE *)(v53 + 48) = 1;
          CD2DTarget::ApplyCurrentClip((CD2DTarget *)v53);
        }
        i = (unsigned int)(i + 1);
      }
      *((_BYTE *)v19 + 464) = 1;
    }
    v20 = *((_QWORD *)v19 + 56);
    v21 = 0;
    *((_BYTE *)v19 + 465) = 1;
    if ( v20 )
    {
      if ( *(struct ClipPlaneInfoRef **)(v20 + 80) == v110 )
      {
        v22 = *(struct CHwLightCollectionBuffer ***)(v20 + 40);
        v118 = *((_DWORD *)v19 + 8);
        if ( *(struct CHwLightCollectionBuffer ***)(v20 + 32) == v22 )
        {
          if ( !v6 )
            goto LABEL_25;
        }
        else if ( *(v22 - 1) == v6 )
        {
          goto LABEL_25;
        }
        if ( v6 )
        {
          (**(void (__fastcall ***)(struct CHwLightCollectionBuffer *))v6)(v6);
          v22 = *(struct CHwLightCollectionBuffer ***)(v20 + 40);
        }
        v26 = *(struct CHwLightCollectionBuffer ***)(v20 + 48);
        if ( v26 == v22 )
        {
          v73 = *(_QWORD *)(v20 + 32);
          v74 = ((__int64)v22 - v73) >> 3;
          if ( v74 == 0x1FFFFFFFFFFFFFFFLL )
            ModuleFailFastForHRESULT(2147483659LL, retaddr);
          v75 = ((__int64)v26 - v73) >> 3;
          v120 = v74 + 1;
          if ( v75 > 0x1FFFFFFFFFFFFFFFLL - (v75 >> 1) )
          {
            v76 = v74 + 1;
          }
          else
          {
            v76 = (v75 >> 1) + v75;
            if ( v76 < v74 + 1 )
              v76 = v74 + 1;
          }
          v111 = v76;
          v77 = std::_Allocate<std::_Default_allocate_traits<1>>(v76, 8LL);
          v78 = (struct CHwLightCollectionBuffer **)(v77 + 8 * v74);
          *v78 = 0LL;
          if ( v78 != (struct CHwLightCollectionBuffer **)&v121 )
          {
            *v78 = v6;
            v6 = 0LL;
          }
          v79 = *(_QWORD **)(v20 + 40);
          v80 = (_QWORD *)v77;
          v81 = *(_QWORD **)(v20 + 32);
          if ( v81 != v79 )
          {
            do
            {
              *v80 = 0LL;
              if ( v80 != v81 )
              {
                *v80 = *v81;
                *v81 = 0LL;
              }
              ++v80;
              ++v81;
            }
            while ( v81 != v79 );
            v81 = *(_QWORD **)(v20 + 32);
          }
          if ( v81 )
          {
            v82 = *(_QWORD **)(v20 + 40);
            v121 = v82;
            if ( v81 != v82 )
            {
              do
              {
                v83 = *v81;
                if ( *v81 )
                {
                  *v81 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v83 + 8LL))(v83);
                  v82 = v121;
                }
                ++v81;
              }
              while ( v81 != v82 );
              v81 = *(_QWORD **)(v20 + 32);
            }
            std::_Deallocate(v81, (__int64)(*(_QWORD *)(v20 + 48) - (_QWORD)v81) >> 3, 8uLL);
          }
          v84 = v120;
          *(_QWORD *)(v20 + 32) = v77;
          *(_QWORD *)(v20 + 40) = v77 + 8 * v84;
          *(_QWORD *)(v20 + 48) = v77 + 8 * v111;
        }
        else
        {
          *v22 = 0LL;
          if ( v22 != (struct CHwLightCollectionBuffer **)&v121 )
          {
            *v22 = v6;
            v6 = 0LL;
          }
          *(_QWORD *)(v20 + 40) += 8LL;
        }
        if ( v6 )
          (*(void (__fastcall **)(struct CHwLightCollectionBuffer *))(*(_QWORD *)v6 + 8LL))(v6);
        std::vector<unsigned int>::emplace_back<unsigned int const &>((const void **)(v20 + 56), &v118);
      }
      else
      {
        CD2DContext::FlushDrawList(v19);
        v108 = CD2DContext::EnsureHwCallbackRenderer(v19, v6, v110);
        v21 = v108;
        if ( v108 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v108, 0x2B0u);
      }
LABEL_25:
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x2D0u);
      }
      else
      {
        v23 = *((_QWORD *)v19 + 56);
        v119 = a1;
        v24 = DynArray<CDrawListEntry *,0>::AddMultipleAndSet(*(_QWORD *)(v23 + 24) + 8LL, &v119);
        v21 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x67u);
        }
        else
        {
          (**(void (__fastcall ***)(__int64))v119)(v119);
          ++*(_DWORD *)(v119 + 40);
        }
        if ( v21 >= 0 )
          return (unsigned int)v21;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x92u);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x2D2u);
      }
      v109 = 142;
      goto LABEL_205;
    }
    v39 = (*(__int64 (__fastcall **)(CD2DContext *))(*(_QWORD *)v19 + 160LL))(v19);
    v40 = *((_DWORD *)v19 + 16);
    v41 = (struct CD3DDeviceLevel1 *)v39;
    if ( v40 )
      goto LABEL_65;
    v86 = (struct CHWCallbackRenderer::CSharedDirect3DResources *)*((_QWORD *)v19 + 13);
    v87 = (CHWCallbackRenderer *)HeapAlloc(WPF::g_processHeap, 0, 0xA8uLL);
    if ( v87 && (v88 = CHWCallbackRenderer::CHWCallbackRenderer(v87, v41, v86), (v89 = v88) != 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v88 + 4);
      v124 = v88;
      v90 = *((_DWORD *)v19 + 16);
      v91 = v90 + 1;
      if ( v90 + 1 < v90 )
      {
        v93 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      else
      {
        if ( v91 <= *((_DWORD *)v19 + 15) )
        {
          v21 = 0;
          *(_QWORD *)(*((_QWORD *)v19 + 5) + 8LL * v90) = v124;
          *((_DWORD *)v19 + 16) = v91;
LABEL_143:
          v40 = *((_DWORD *)v19 + 16);
          v6 = v113;
LABEL_65:
          v42 = (unsigned int)(v40 - 1);
          *((_QWORD *)v19 + 56) = *(_QWORD *)(*((_QWORD *)v19 + 5) + 8 * v42);
          v43 = (unsigned int)v42 < *((_DWORD *)v19 + 31);
          v44 = *((_DWORD *)v19 + 8);
          *((_DWORD *)v19 + 16) = v42;
          if ( !v43 )
            LODWORD(v42) = *((_DWORD *)v19 + 31);
          ++*((_DWORD *)v19 + 28);
          *((_DWORD *)v19 + 31) = v42;
          v45 = *((_QWORD *)v19 + 56);
          *(_DWORD *)(v45 + 88) = v44;
          *(_DWORD *)(v45 + 92) = v44;
          goto LABEL_68;
        }
        v92 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v19 + 40, 8u, 1, &v124);
        v93 = v92;
        if ( v92 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v92, 0xC0u);
      }
      v21 = v93;
      if ( v93 >= 0 )
        goto LABEL_143;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v93, 0xD5u);
      CMILRefCountBase::Release((CHWCallbackRenderer *)((char *)v89 + 8));
      v6 = v113;
    }
    else
    {
      v21 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x5Eu);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xD4u);
    }
LABEL_68:
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x2A3u);
      goto LABEL_25;
    }
    v46 = *((_QWORD *)v19 + 56);
    v117 = *((_DWORD *)v19 + 8);
    v47 = *(_QWORD *)(v46 + 40);
    v48 = *(_QWORD *)(v46 + 32);
    if ( v48 != v47 )
      goto LABEL_190;
    if ( !v6 )
      goto LABEL_71;
    if ( v48 != v47 )
    {
LABEL_190:
      if ( *(struct CHwLightCollectionBuffer **)(v47 - 8) == v6 )
      {
LABEL_71:
        v49 = *((_QWORD *)v19 + 56);
        v50 = *(struct ClipPlaneInfoRef **)(v49 + 80);
        if ( v50 != v110 )
        {
          if ( v110 )
          {
            (**(void (__fastcall ***)(struct ClipPlaneInfoRef *))v110)(v110);
            v50 = *(struct ClipPlaneInfoRef **)(v49 + 80);
          }
          *(_QWORD *)(v49 + 80) = v110;
          if ( v50 )
            (*(void (__fastcall **)(struct ClipPlaneInfoRef *))(*(_QWORD *)v50 + 8LL))(v50);
        }
        goto LABEL_25;
      }
    }
    v111 = (__int64)v6;
    if ( v6 )
      (**(void (__fastcall ***)(struct CHwLightCollectionBuffer *))v6)(v6);
    std::vector<Microsoft::WRL::ComPtr<CHwLightCollectionBuffer>>::emplace_back<Microsoft::WRL::ComPtr<CHwLightCollectionBuffer>>(
      (_QWORD *)(v46 + 32),
      &v111);
    if ( v111 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v111 + 8LL))(v111);
    std::vector<unsigned int>::emplace_back<unsigned int const &>((const void **)(v46 + 56), &v117);
    goto LABEL_71;
  }
  v28 = (CD2DContext *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 160LL))(v5);
  v29 = v28;
  if ( *((_QWORD *)v28 + 57) )
    CD2DContext::FlushDrawList(v28);
  if ( !*((_BYTE *)v29 + 464) )
  {
    v69 = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qq(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Start, 16LL, 0LL);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v29 + 22) + 384LL))(*((_QWORD *)v29 + 22));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qq(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 16LL, 0LL);
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)v29 + 86); v69 = v71 )
    {
      v71 = *(CD2DTarget **)(*((_QWORD *)v29 + 40) + 8 * j);
      if ( v69 )
        *((_BYTE *)v69 + 48) = 0;
      CD2DTarget::ApplyState(v71, v29);
      j = (unsigned int)(j + 1);
    }
    *((_BYTE *)v29 + 464) = 1;
  }
  v30 = *((_QWORD *)v29 + 56);
  v21 = 0;
  *((_BYTE *)v29 + 465) = 1;
  if ( !v30 )
  {
    v55 = (struct CD3DDeviceLevel1 *)(*(__int64 (__fastcall **)(CD2DContext *))(*(_QWORD *)v29 + 160LL))(v29);
    NextHWCallbackRenderer = CCallbackRendererManager::GetNextHWCallbackRenderer(
                               (CD2DContext *)((char *)v29 + 8),
                               v55,
                               (struct CHWCallbackRenderer **)v29 + 56);
    v21 = NextHWCallbackRenderer;
    if ( NextHWCallbackRenderer < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, NextHWCallbackRenderer, 0x2A3u);
      goto LABEL_52;
    }
    v57 = *((_QWORD *)v29 + 56);
    v115 = *((_DWORD *)v29 + 8);
    v58 = *(_QWORD *)(v57 + 40);
    v59 = *(_QWORD *)(v57 + 32);
    if ( v59 != v58 )
      goto LABEL_160;
    if ( !v6 )
      goto LABEL_89;
    if ( v59 != v58 )
    {
LABEL_160:
      if ( *(struct CHwLightCollectionBuffer **)(v58 - 8) == v6 )
      {
LABEL_89:
        v60 = *((_QWORD *)v29 + 56);
        v61 = *(struct ClipPlaneInfoRef **)(v60 + 80);
        if ( v61 != v17 )
        {
          if ( v17 )
          {
            (**(void (__fastcall ***)(struct ClipPlaneInfoRef *))v17)(v17);
            v61 = *(struct ClipPlaneInfoRef **)(v60 + 80);
          }
          *(_QWORD *)(v60 + 80) = v17;
          if ( v61 )
            (*(void (__fastcall **)(struct ClipPlaneInfoRef *))(*(_QWORD *)v61 + 8LL))(v61);
        }
        goto LABEL_52;
      }
    }
    v122 = v6;
    if ( v6 )
      (**(void (__fastcall ***)(struct CHwLightCollectionBuffer *))v6)(v6);
    std::vector<Microsoft::WRL::ComPtr<CHwLightCollectionBuffer>>::emplace_back<Microsoft::WRL::ComPtr<CHwLightCollectionBuffer>>(
      (_QWORD *)(v57 + 32),
      (__int64 *)&v122);
    if ( v122 )
      (*(void (__fastcall **)(struct CHwLightCollectionBuffer *))(*(_QWORD *)v122 + 8LL))(v122);
    std::vector<unsigned int>::emplace_back<unsigned int const &>((const void **)(v57 + 56), &v115);
    goto LABEL_89;
  }
  if ( *(struct ClipPlaneInfoRef **)(v30 + 80) == v17 )
  {
    v31 = *(_QWORD *)(v30 + 32);
    v116 = *((_DWORD *)v29 + 8);
    v32 = *(_QWORD *)(v30 + 40);
    if ( v31 == v32 )
    {
      if ( !v6 )
        goto LABEL_52;
      if ( v31 == v32 )
        goto LABEL_175;
    }
    if ( *(struct CHwLightCollectionBuffer **)(v32 - 8) != v6 )
    {
LABEL_175:
      v123 = v6;
      if ( v6 )
        (**(void (__fastcall ***)(struct CHwLightCollectionBuffer *))v6)(v6);
      std::vector<Microsoft::WRL::ComPtr<CHwLightCollectionBuffer>>::emplace_back<Microsoft::WRL::ComPtr<CHwLightCollectionBuffer>>(
        (_QWORD *)(v30 + 32),
        (__int64 *)&v123);
      if ( v123 )
        (*(void (__fastcall **)(struct CHwLightCollectionBuffer *))(*(_QWORD *)v123 + 8LL))(v123);
      std::vector<unsigned int>::emplace_back<unsigned int const &>((const void **)(v30 + 56), &v116);
    }
  }
  else
  {
    CD2DContext::FlushDrawList(v29);
    v106 = CD2DContext::EnsureHwCallbackRenderer(v29, v6, v17);
    v21 = v106;
    if ( v106 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v106, 0x2B0u);
  }
LABEL_52:
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x2EFu);
    goto LABEL_187;
  }
  v33 = *((_QWORD *)v29 + 56);
  v112 = a1;
  v34 = *(_QWORD *)(v33 + 24);
  v35 = *(_DWORD *)(v34 + 32);
  v36 = v35 + 1;
  if ( v35 + 1 < v35 )
  {
    v21 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  else
  {
    v21 = 0;
    if ( v36 <= *(_DWORD *)(v34 + 28) )
    {
      *(_QWORD *)(*(_QWORD *)(v34 + 8) + 8LL * v35) = v112;
      *(_DWORD *)(v34 + 32) = v36;
LABEL_56:
      (**(void (__fastcall ***)(__int64))v112)(v112);
      ++*(_DWORD *)(v112 + 40);
      goto LABEL_57;
    }
    v85 = DynArrayImpl<0>::AddMultipleAndSet(v34 + 8, 8u, 1, &v112);
    v21 = v85;
    if ( v85 >= 0 )
      goto LABEL_56;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v85, 0xC0u);
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x67u);
LABEL_57:
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x92u);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x80u);
  }
  else
  {
    LOBYTE(v37) = 1;
    if ( (unsigned __int8)CMILMatrix::Is2DAffine<1>(a1 + 72, v37)
      && (v38 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 76) - 0.0)) & _xmm), v38 < 0.000081380211)
      && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 88) - 0.0)) & _xmm) < 0.000081380211
      || (v107 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 72) - 0.0)) & _xmm), v107 < 0.000081380211)
      && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 92) - 0.0)) & _xmm) < 0.000081380211 )
    {
      v120 = a1;
      std::deque<CMegaRect>::emplace_back<CHWDrawListEntry * &>(v33 + 128, &v120);
      v21 = 0;
    }
  }
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x2F3u);
LABEL_187:
    v109 = 138;
    goto LABEL_205;
  }
  return (unsigned int)v21;
}
