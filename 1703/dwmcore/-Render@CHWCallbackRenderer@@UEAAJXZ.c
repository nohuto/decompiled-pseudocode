/*
 * XREFs of ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18008E060
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z @ 0x180008C70 (--_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW46VertexShaderKey@@@Z @ 0x180015EA0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXGI.c)
 *     ?IsWhitePixelInTopLeft@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180037980 (-IsWhitePixelInTopLeft@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z @ 0x1800428D0 (-GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z.c)
 *     ?IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ @ 0x180046638 (-IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??_GCCommonRenderingEffect@@UEAAPEAXI@Z @ 0x180077010 (--_GCCommonRenderingEffect@@UEAAPEAXI@Z.c)
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW46VertexShaderKey@@@Z @ 0x1800771F0 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXG.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x18008B150 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18008F260 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ??_ECDirtyRegion@@UEAAPEAXI@Z @ 0x180092B20 (--_ECDirtyRegion@@UEAAPEAXI@Z.c)
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x1800AB150 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 *     ??_GCHWDrawListEntry@@EEAAPEAXI@Z @ 0x1800AB6D0 (--_GCHWDrawListEntry@@EEAAPEAXI@Z.c)
 *     ??_E?$CCachableStorage@VCDrawListPrimitive4@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z @ 0x1800AECC0 (--_E-$CCachableStorage@VCDrawListPrimitive4@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z.c)
 *     ?_Tidy@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@IEAAXXZ @ 0x1800BE03C (-_Tidy@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@std@@IEAAXXZ.c)
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x1800BEDBC (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ.c)
 *     ?EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z @ 0x1800C5634 (-EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ @ 0x1801329C0 (-EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ.c)
 *     Template_q @ 0x18013BB44 (Template_q.c)
 *     ?UpdateConstantBufferIfNeeded@CHwLightCollectionBuffer@@QEAAJPEAVCD3DDeviceLevel1@@AEA_KPEAUID3D11Buffer@@2@Z @ 0x180199CFC (-UpdateConstantBufferIfNeeded@CHwLightCollectionBuffer@@QEAAJPEAVCD3DDeviceLevel1@@AEA_KPEAUID3D.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x1801BE0D8 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 */

__int64 __fastcall CHWCallbackRenderer::Render(CHWCallbackRenderer *this)
{
  __int64 v1; // rax
  CHWCallbackRenderer *v2; // rsi
  unsigned int v3; // edi
  unsigned int v4; // r14d
  __int64 v5; // r15
  __int64 *v6; // r12
  unsigned int v7; // r13d
  int v8; // eax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, int, CCompositionSurfaceBitmap **, int); // rdx
  __int64 (__fastcall ****v11)(void *); // r8
  __int64 v12; // rax
  char v13; // bl
  __int64 v14; // rdi
  __int64 v15; // r13
  CDrawListPrimitive *v16; // r15
  __int64 v17; // r12
  int v18; // r14d
  __int64 (__fastcall *v19)(__int64, int, CCompositionSurfaceBitmap **, int); // rax
  char v20; // dl
  CCompositionSurfaceBitmap **v21; // rsi
  unsigned int v22; // r15d
  __int64 v23; // r13
  _BYTE *v24; // r12
  _BYTE *v25; // r14
  CCompositionSurfaceBitmap *v26; // rcx
  bool v27; // zf
  int v28; // eax
  int v29; // eax
  __int64 v30; // r8
  unsigned int v31; // eax
  unsigned int v32; // eax
  _DWORD *v33; // rcx
  unsigned int v34; // eax
  unsigned int v35; // eax
  __int64 v36; // rsi
  __int64 v37; // rsi
  __int64 *v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  int v41; // r14d
  struct CD3DDeviceLevel1 *v42; // rdx
  CHwLightCollectionBuffer *v43; // rcx
  __int64 v44; // rsi
  __int64 v45; // rax
  int *v46; // r10
  __int64 v47; // r9
  struct CD3DDeviceLevel1 *v48; // rdx
  struct RenderTargetInfo *v49; // r8
  __int64 (__fastcall *v50)(__int64, struct CD3DDeviceLevel1 *, struct RenderTargetInfo *, __int64, int *, __int64, char *, unsigned int *); // rax
  int v51; // eax
  int v52; // r13d
  int v53; // eax
  __int64 v54; // rax
  int v55; // r13d
  unsigned int v56; // esi
  unsigned int v57; // r12d
  CD3DDynamicAppendBuffer *v58; // rcx
  char v59; // r9
  unsigned int v60; // r8d
  unsigned int *v61; // rcx
  char v62; // r15
  __int64 v63; // r14
  unsigned int v64; // ecx
  int v65; // edx
  unsigned int v66; // r15d
  int v67; // r15d
  __int64 v68; // r13
  unsigned int v69; // r12d
  int v70; // eax
  unsigned int v71; // r11d
  int v72; // r11d
  __int64 v73; // rsi
  __int64 v74; // r14
  int v75; // r15d
  unsigned int v76; // r12d
  unsigned int v77; // r13d
  int v78; // eax
  unsigned int v79; // r11d
  int v80; // r11d
  __int64 v81; // rcx
  unsigned int v82; // eax
  unsigned int v83; // eax
  unsigned int v84; // eax
  unsigned int v85; // eax
  int v86; // ecx
  __int64 v87; // rdx
  __int64 v88; // rdx
  __int64 v89; // rdx
  unsigned int v90; // r10d
  unsigned __int64 v91; // r9
  __int64 v92; // rax
  int v93; // r12d
  __int16 v94; // r14
  __m128i v95; // xmm1
  __m128i v96; // xmm1
  __m128i v97; // xmm2
  __m128i v98; // xmm2
  __int64 v99; // rax
  unsigned __int64 v100; // r9
  char *v101; // rcx
  __int64 v102; // rdx
  __int16 v103; // ax
  __int64 (*v104)(void); // rax
  char IsWhitePixelInTopLeft; // al
  __int64 v106; // rbx
  __int64 v107; // rbx
  unsigned int v108; // ecx
  int v109; // eax
  int v110; // ecx
  CD3DDynamicAppendBuffer *v111; // rcx
  CD3DDynamicAppendBuffer *v112; // rcx
  __int64 v113; // rcx
  __int64 v114; // rcx
  char *v115; // r14
  __int64 v116; // rbx
  __int64 *v117; // r13
  __int64 v118; // rsi
  __int64 v119; // rdi
  unsigned int v120; // ecx
  unsigned int v121; // eax
  unsigned int v122; // edx
  CHWCallbackRenderer *v123; // rax
  unsigned int v124; // r14d
  __int64 v125; // rcx
  __int64 v126; // rbx
  __int64 v127; // rsi
  __int64 v128; // rdx
  volatile signed __int32 *v129; // rcx
  unsigned int (__fastcall *v130)(CMILRefCountBase *__hidden); // rax
  unsigned int v131; // ecx
  __int64 v133; // rax
  __int64 *v134; // rsi
  __int64 v135; // rcx
  __int64 v136; // rax
  __int64 v137; // rcx
  __int64 v138; // rax
  __int64 v139; // rcx
  __int64 (__fastcall ****v140)(void *); // rdi
  __int64 (__fastcall ***v141)(void *); // r15
  __int64 (__fastcall ***v142)(void *); // r12
  __int64 (__fastcall ***v143)(void *); // rcx
  __int64 (__fastcall *v144)(void *); // rax
  int v145; // edx
  unsigned int v146; // ecx
  bool v147; // cc
  int v148; // edx
  unsigned int v149; // eax
  unsigned int v150; // ecx
  int v151; // eax
  __int64 v152; // rax
  int updated; // eax
  int v154; // eax
  int AdapterHwProtectedEntityCount; // eax
  int v156; // eax
  char IsHardwareProtectionDisabled; // al
  unsigned int v158; // edx
  __int64 v159; // rcx
  int v160; // eax
  int v161; // eax
  char v162; // al
  unsigned int v163; // edx
  __int64 v164; // rcx
  int v165; // r9d
  unsigned int v166; // [rsp+20h] [rbp-E0h]
  __int64 v167; // [rsp+28h] [rbp-D8h]
  unsigned int v168; // [rsp+50h] [rbp-B0h]
  int v169; // [rsp+58h] [rbp-A8h]
  unsigned int v170; // [rsp+5Ch] [rbp-A4h]
  unsigned int v171; // [rsp+60h] [rbp-A0h] BYREF
  int v172; // [rsp+64h] [rbp-9Ch]
  unsigned int v173; // [rsp+68h] [rbp-98h]
  int v174; // [rsp+6Ch] [rbp-94h]
  unsigned int v175; // [rsp+70h] [rbp-90h]
  unsigned int v176; // [rsp+74h] [rbp-8Ch]
  __int64 v177; // [rsp+78h] [rbp-88h]
  __int64 v178; // [rsp+80h] [rbp-80h]
  unsigned int v179; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v180; // [rsp+8Ch] [rbp-74h]
  __int64 v181; // [rsp+90h] [rbp-70h]
  __int64 v182; // [rsp+98h] [rbp-68h]
  CDrawListPrimitive *v183; // [rsp+A0h] [rbp-60h]
  CHWCallbackRenderer *v184; // [rsp+A8h] [rbp-58h] BYREF
  int v185; // [rsp+B0h] [rbp-50h]
  __int64 *v186; // [rsp+B8h] [rbp-48h]
  _BYTE *v187; // [rsp+C0h] [rbp-40h]
  int v188; // [rsp+C8h] [rbp-38h] BYREF
  int v189; // [rsp+CCh] [rbp-34h] BYREF
  int v190; // [rsp+D0h] [rbp-30h] BYREF
  int v191; // [rsp+D4h] [rbp-2Ch] BYREF
  int v192; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v193; // [rsp+DCh] [rbp-24h]
  __int64 v194; // [rsp+E8h] [rbp-18h]
  __int64 v195; // [rsp+F0h] [rbp-10h]
  __int64 v196; // [rsp+F8h] [rbp-8h] BYREF
  struct ID3D11Buffer *v197; // [rsp+100h] [rbp+0h] BYREF
  struct ID3D11Buffer *v198; // [rsp+108h] [rbp+8h] BYREF
  __int64 v199; // [rsp+110h] [rbp+10h] BYREF
  __int64 v200; // [rsp+118h] [rbp+18h] BYREF
  int v201; // [rsp+120h] [rbp+20h]
  int v202; // [rsp+124h] [rbp+24h]
  __int64 v203; // [rsp+128h] [rbp+28h] BYREF
  int v204; // [rsp+130h] [rbp+30h]
  int v205; // [rsp+134h] [rbp+34h]
  __int64 v206; // [rsp+138h] [rbp+38h] BYREF
  __int64 v207[11]; // [rsp+148h] [rbp+48h] BYREF
  char v209; // [rsp+1B8h] [rbp+B8h]
  char v210; // [rsp+1C0h] [rbp+C0h]
  char v211; // [rsp+1C8h] [rbp+C8h]
  unsigned int v212; // [rsp+1C8h] [rbp+C8h]

  v1 = *((_QWORD *)this + 3);
  v2 = this;
  v168 = 0;
  v3 = 0;
  v172 = 0;
  v4 = 0;
  v5 = *(_QWORD *)(v1 + 8);
  v6 = *(__int64 **)(v1 + 648);
  v7 = 0;
  v178 = 0LL;
  v187 = 0LL;
  v175 = 0;
  v180 = 0;
  v170 = 0;
  v195 = v5;
  v186 = v6;
  v169 = 24;
  v209 = 1;
  v210 = 1;
  v173 = 0;
  v176 = 0;
  _InterlockedExchangeAdd((volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager + 3, 1u);
  if ( CCommonRegistryData::m_fEnableMegaRects )
  {
    v8 = CMegaRectCollection::ReplaceMegaRectsWithClippedRects((CHWCallbackRenderer *)((char *)this + 256));
    v168 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xF5u);
      goto LABEL_137;
    }
  }
  v9 = *(_QWORD *)(*((_QWORD *)v2 + 3) + 648LL);
  v196 = *((_QWORD *)v2 + 30);
  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v9 + 56LL))(v9, 0LL, 1LL, &v196);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 192LL))(v9, 4LL);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 344LL))(v9, *(_QWORD *)(*((_QWORD *)v2 + 3) + 1872LL));
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 288LL))(
    v9,
    *(_QWORD *)(*((_QWORD *)v2 + 3) + 1880LL),
    0LL);
  v12 = *((unsigned int *)v2 + 18);
  v185 = v12;
  if ( (unsigned int)v12 >= *((_DWORD *)v2 + 19) )
  {
LABEL_131:
    v106 = *((_QWORD *)v2 + 13);
    if ( *(_QWORD *)(v106 + 40) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v106 + 16) + 648LL) + 120LL))(
        *(_QWORD *)(*(_QWORD *)(v106 + 16) + 648LL),
        *(_QWORD *)(v106 + 24),
        0LL);
      *(_QWORD *)(v106 + 40) = 0LL;
      *(_DWORD *)(v106 + 48) = 0;
      v107 = *((_QWORD *)v2 + 14);
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v107 + 16) + 648LL) + 120LL))(
        *(_QWORD *)(*(_QWORD *)(v107 + 16) + 648LL),
        *(_QWORD *)(v107 + 24),
        0LL);
      *(_QWORD *)(v107 + 40) = 0LL;
      *(_DWORD *)(v107 + 48) = 0;
      (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v6 + 96))(v6, v4, v3, 0LL);
      _InterlockedExchangeAdd((volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager + 4, 1u);
    }
    goto LABEL_133;
  }
  v13 = v178;
  v10 = CCommonRenderingEffect::CompareTo;
  v14 = v194;
  while ( 1 )
  {
    v15 = *(_QWORD *)(v5 + 8 * v12);
    v181 = v15;
    v16 = *(CDrawListPrimitive **)(v15 + 56);
    v183 = v16;
    if ( !*((_DWORD *)v16 + 4) )
      goto LABEL_117;
    v17 = *(_QWORD *)(v15 + 64);
    v18 = *(_DWORD *)(v15 + 144);
    v174 = v18;
    v182 = v17;
    v211 = 1;
    if ( !v187 )
    {
      v209 = 1;
LABEL_29:
      v29 = v169;
      goto LABEL_30;
    }
    v19 = *(__int64 (__fastcall **)(__int64, int, CCompositionSurfaceBitmap **, int))(*(_QWORD *)v187 + 56LL);
    if ( v19 == CCommonRenderingEffect::CompareTo )
    {
      if ( (*(unsigned int (__fastcall **)(__int64, __int64 (__fastcall *)(__int64, int, CCompositionSurfaceBitmap **, int)))(*(_QWORD *)v17 + 48LL))(
             v17,
             CCommonRenderingEffect::CompareTo) )
      {
        v28 = 0;
      }
      else
      {
        v20 = 0;
        if ( (v169 == 22) == (v18 == 22) )
        {
          v21 = (CCompositionSurfaceBitmap **)(v17 + 16);
          v22 = 0;
          v23 = v17 - (_QWORD)v187;
          v24 = &v187[-v182];
          v25 = v187 + 33;
          v13 = v178;
          while ( 1 )
          {
            v26 = *(CCompositionSurfaceBitmap **)((char *)v21 + (_QWORD)v24);
            if ( !v26 )
              break;
            if ( *v21 )
            {
              if ( v26 != *v21 || *(v25 - 1) != v25[v23 - 1] || *v25 != v25[v23] )
                goto LABEL_124;
              v27 = v25[1] == v25[v23 + 1];
              goto LABEL_13;
            }
            v104 = *(__int64 (**)(void))(*(_QWORD *)v26 + 136LL);
            if ( (char *)v104 == (char *)CCompositionSurfaceBitmap::IsWhitePixelInTopLeft )
              IsWhitePixelInTopLeft = CCompositionSurfaceBitmap::IsWhitePixelInTopLeft(v26);
            else
              IsWhitePixelInTopLeft = v104();
            if ( !IsWhitePixelInTopLeft )
            {
LABEL_124:
              v17 = v182;
              v28 = 0;
              v18 = v174;
              v16 = v183;
              v15 = v181;
              v2 = this;
              goto LABEL_16;
            }
            v20 = 1;
LABEL_14:
            ++v22;
            ++v21;
            v25 += 3;
            if ( v22 >= 2 )
            {
              v17 = v182;
              v18 = v174;
              v16 = v183;
              v15 = v181;
              v2 = this;
              v28 = (v20 != 0) + 1;
              goto LABEL_16;
            }
          }
          v27 = *v21 == 0LL;
LABEL_13:
          if ( !v27 )
            goto LABEL_124;
          goto LABEL_14;
        }
        v28 = 0;
      }
    }
    else
    {
      v28 = v19((__int64)v187, v169, (CCompositionSurfaceBitmap **)v17, v18);
    }
LABEL_16:
    if ( v28 != 1 )
    {
      if ( v28 != 2 || !CCommonRegistryData::m_fEnableCommonSuperSets )
        goto LABEL_29;
      ++v180;
    }
    v29 = v169;
    v211 = 0;
    if ( v18 == v169 && !v209 && !v210 )
    {
      v30 = *((_QWORD *)v2 + 13);
      if ( *(_QWORD *)(v30 + 40) )
      {
        v31 = *(_DWORD *)(v30 + 56) - *(_DWORD *)(v30 + 52);
        if ( *(_DWORD *)(v30 + 48) == 32 )
          v32 = v31 >> 5;
        else
          v32 = v31 / *(_DWORD *)(v30 + 48);
        if ( *((_DWORD *)v16 + 2) <= v32 )
        {
          v33 = (_DWORD *)*((_QWORD *)v2 + 14);
          v34 = v33[14] - v33[13];
          v35 = v33[12] == 2 ? v34 >> 1 : v34 / v33[12];
          if ( *((_DWORD *)v16 + 4) <= v35 )
            goto LABEL_102;
        }
        goto LABEL_29;
      }
    }
LABEL_30:
    v36 = *((_QWORD *)v2 + 13);
    if ( *(_QWORD *)(v36 + 40) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v36 + 16) + 648LL) + 120LL))(
        *(_QWORD *)(*(_QWORD *)(v36 + 16) + 648LL),
        *(_QWORD *)(v36 + 24),
        0LL);
      *(_QWORD *)(v36 + 40) = 0LL;
      *(_DWORD *)(v36 + 48) = 0;
      v37 = *((_QWORD *)this + 14);
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v37 + 16) + 648LL) + 120LL))(
        *(_QWORD *)(*(_QWORD *)(v37 + 16) + 648LL),
        *(_QWORD *)(v37 + 24),
        0LL);
      v38 = v186;
      v39 = v173;
      v40 = v176;
      *(_QWORD *)(v37 + 40) = 0LL;
      *(_DWORD *)(v37 + 48) = 0;
      (*(void (__fastcall **)(__int64 *, __int64, __int64, _QWORD))(*v38 + 96))(v38, v40, v39, 0LL);
      ++v170;
      v29 = v169;
      v172 = 0;
      v176 = 0;
    }
    if ( v18 == v29 )
    {
      v41 = v169;
    }
    else
    {
      v169 = *(_DWORD *)(v15 + 144);
      v41 = v169;
      (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64))(*v186 + 280))(
        v186,
        *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v169 + 1296),
        0LL,
        0xFFFFFFFFLL);
    }
    if ( !v211 )
      goto LABEL_52;
    v42 = (struct CD3DDeviceLevel1 *)*((_QWORD *)this + 3);
    v43 = (CHwLightCollectionBuffer *)*((_QWORD *)this + 4);
    v44 = *((_QWORD *)v42 + 81);
    if ( v43 )
    {
      v152 = *((_QWORD *)this + 6);
      v197 = *(struct ID3D11Buffer **)(*((_QWORD *)this + 5) + 128LL);
      v198 = *(struct ID3D11Buffer **)(v152 + 128);
      updated = CHwLightCollectionBuffer::UpdateConstantBufferIfNeeded(
                  v43,
                  v42,
                  (unsigned __int64 *)this + 7,
                  v197,
                  v198);
      v168 = updated;
      v52 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x23Bu);
        v2 = this;
        goto LABEL_48;
      }
      (*(void (__fastcall **)(__int64, __int64, __int64, struct ID3D11Buffer **))(*(_QWORD *)v44 + 56LL))(
        v44,
        2LL,
        1LL,
        &v197);
      (*(void (__fastcall **)(__int64, __int64, __int64, struct ID3D11Buffer **))(*(_QWORD *)v44 + 128LL))(
        v44,
        1LL,
        1LL,
        &v198);
    }
    v2 = this;
    v45 = *((_QWORD *)this + 4);
    if ( v45 )
    {
      v46 = &v188;
      v188 = *(_DWORD *)(v45 + 16);
    }
    else
    {
      v189 = -1;
      v46 = &v189;
    }
    v47 = *((unsigned int *)this + 25);
    v48 = (struct CD3DDeviceLevel1 *)*((_QWORD *)this + 3);
    v49 = (CHWCallbackRenderer *)((char *)this + 80);
    v50 = *(__int64 (__fastcall **)(__int64, struct CD3DDeviceLevel1 *, struct RenderTargetInfo *, __int64, int *, __int64, char *, unsigned int *))(*(_QWORD *)v17 + 32LL);
    if ( (char *)v50 == (char *)CCommonRenderingEffect::SetStateOnDevice )
    {
      v51 = CCommonRenderingEffect::SetStateOnDevice(
              v17,
              (__int64)v48,
              v49,
              (enum DXGI_COLOR_SPACE_TYPE)v47,
              v46,
              v41,
              (__int64)this + 128,
              (enum DXGI_COLOR_SPACE_TYPE *)&v179);
    }
    else if ( (char *)v50 == (char *)CBrushRenderingEffect::SetStateOnDevice )
    {
      v51 = CBrushRenderingEffect::SetStateOnDevice(
              v17,
              v48,
              (struct ID3D11Buffer *)v49,
              (DXGI_COLOR_SPACE_TYPE)v47,
              v46,
              v41,
              (__int64)this + 128,
              &v179);
    }
    else
    {
      LODWORD(v167) = v41;
      v51 = v50(v17, v48, v49, v47, v46, v167, (char *)this + 128, &v179);
    }
    v168 = v51;
    v52 = v51;
    if ( v51 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v51, 0x249u);
    }
    else
    {
      v177 = v179 - 3 <= 2;
      BYTE1(v177) = v179 - 6 <= 1;
      BYTE2(v177) = v179 > 6 || (v53 = 73, !_bittest(&v53, v179));
      HIDWORD(v177) = v179 == 2 || v179 == 5 ? 4 : 2;
      HIDWORD(v193) = HIDWORD(v177);
      LOBYTE(v193) = v179 - 3 <= 2;
      v14 = v193;
      v194 = v193;
    }
LABEL_48:
    if ( v52 >= 0 )
      break;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v52, 0x15Eu);
    v4 = v176;
    v187 = 0LL;
LABEL_116:
    v10 = CCommonRenderingEffect::CompareTo;
LABEL_117:
    v12 = (unsigned int)(v185 + 1);
    v185 = v12;
    if ( (unsigned int)v12 >= *((_DWORD *)v2 + 19) )
    {
      v3 = v173;
      v6 = v186;
      v7 = v170;
      goto LABEL_131;
    }
    v5 = v195;
  }
  if ( (_BYTE)v14 != v13 || HIDWORD(v194) != HIDWORD(v178) )
    v209 = 1;
  v54 = *(_QWORD *)v17;
  v13 = v14;
  v187 = (_BYTE *)v17;
  v178 = v14;
  (*(__int64 (__fastcall **)(__int64))(v54 + 48))(v17);
LABEL_52:
  v55 = HIDWORD(v178);
  if ( v13 )
    v56 = 8 * HIDWORD(v178) + 48;
  else
    v56 = 8 * HIDWORD(v178) + 16;
  v57 = *((_DWORD *)v16 + 2);
  v171 = v56;
  if ( v57 < 0x64 )
    v57 = 100;
  v58 = (CD3DDynamicAppendBuffer *)*((_QWORD *)this + 13);
  if ( v56 * v57 > *((_DWORD *)v58 + 14) )
  {
    v154 = CD3DDynamicAppendBuffer::EnsureByteSpace(v58, v56 * v57, 0);
    v168 = v154;
    if ( v154 < 0 )
    {
      v166 = 376;
      goto LABEL_267;
    }
    v56 = v171;
    v59 = 1;
    v55 = HIDWORD(v178);
    v209 = 1;
  }
  else
  {
    v59 = v209;
  }
  v60 = *((_DWORD *)v16 + 4);
  v61 = (unsigned int *)*((_QWORD *)this + 14);
  if ( v60 < 0x64 )
    v60 = 100;
  v173 = v60;
  if ( 2 * (unsigned __int64)v60 <= v61[14] )
  {
    v62 = v210;
    goto LABEL_62;
  }
  v154 = CD3DDynamicAppendBuffer::EnsureByteSpace((CD3DDynamicAppendBuffer *)v61, 2 * v60, 0);
  v168 = v154;
  if ( v154 >= 0 )
  {
    v56 = v171;
    v62 = 1;
    v59 = v209;
    v210 = 1;
LABEL_62:
    if ( v59 )
    {
      v133 = *((_QWORD *)this + 13);
      v134 = v186;
      v190 = 0;
      v135 = *(_QWORD *)(v133 + 24);
      v136 = *v186;
      v199 = v135;
      (*(void (__fastcall **)(__int64 *, _QWORD, __int64, __int64 *, unsigned int *, int *))(v136 + 144))(
        v186,
        0LL,
        1LL,
        &v199,
        &v171,
        &v190);
      if ( v55 == 2 )
      {
        if ( v13 )
          v137 = 2LL;
        else
          v137 = 0LL;
      }
      else if ( v55 == 4 )
      {
        v137 = 1LL;
        if ( v13 )
          v137 = 3LL;
      }
      else
      {
        v137 = 4LL;
      }
      (*(void (__fastcall **)(__int64 *, _QWORD))(*v134 + 136))(
        v134,
        *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v137 + 1264));
      v56 = v171;
      v209 = 0;
    }
    if ( v62 )
    {
      (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*v186 + 152))(
        v186,
        *(_QWORD *)(*((_QWORD *)this + 14) + 24LL),
        57LL);
      v56 = v171;
      v210 = 0;
    }
    v63 = *((_QWORD *)this + 13);
    v64 = *(_DWORD *)(v63 + 52);
    if ( v56 == 32 )
      v65 = *(_DWORD *)(v63 + 52) & 0x1F;
    else
      v65 = v64 % v56;
    v66 = v56 - v65;
    if ( v56 == 32 )
      v67 = v66 & 0x1F;
    else
      v67 = v66 % v56;
    v68 = *(_QWORD *)(v63 + 16);
    v212 = *(_DWORD *)(v63 + 56) - v64;
    v69 = v67 + v56 * v57;
    v70 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, __int64 *))(**(_QWORD **)(v68 + 648) + 112LL))(
            *(_QWORD *)(v68 + 648),
            *(_QWORD *)(v63 + 24),
            0LL,
            5 - (unsigned int)(v212 < v69),
            0,
            &v206);
    v168 = v70;
    v71 = v70;
    if ( v70 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v70, 0xAC4u);
      v71 = v168;
    }
    if ( !*(_DWORD *)(v68 + 872) && (v71 == -2005532292 || v71 == -2147024882 || v71 == -2005270523) )
    {
      AdapterHwProtectedEntityCount = CD3DDeviceManager::GetAdapterHwProtectedEntityCount(
                                        (CD3DDeviceManager *)&g_D3DDeviceManager,
                                        *(struct _LUID *)(v68 + 712));
      v71 = v168;
      if ( AdapterHwProtectedEntityCount )
      {
        if ( v168 != -2005270523
          || (v156 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v68 + 640) + 312LL))(*(_QWORD *)(v68 + 640)),
              v71 = -2005270523,
              *(_DWORD *)(v68 + 872) = -2003304307,
              v156 == -2005270480) )
        {
          CD3DDeviceManager::IsHardwareProtectionDisabled();
          CD3DDeviceManager::s_bHwProtectionTempDisabled = 1;
          IsHardwareProtectionDisabled = CD3DDeviceManager::IsHardwareProtectionDisabled();
          if ( (_BYTE)v159 != IsHardwareProtectionDisabled && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          {
            Template_q(v159, &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE, v158);
            v71 = v168;
          }
        }
      }
    }
    if ( *(_DWORD *)(v68 + 872) )
    {
      v72 = *(_DWORD *)(v68 + 872);
      v168 = v72;
      goto LABEL_79;
    }
    if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext(v71, 0LL, &v191) )
    {
      v72 = v191;
      v168 = v191;
    }
    if ( v72 == -2003304307 )
    {
      *(_DWORD *)(v68 + 872) = -2003304307;
    }
    else
    {
LABEL_79:
      if ( v72 >= 0 )
      {
        *(_QWORD *)(v63 + 40) = v206;
        *(_DWORD *)(v63 + 48) = v56;
        if ( v212 < v69 )
          *(_DWORD *)(v63 + 52) = 0;
        else
          *(_DWORD *)(v63 + 52) += v67;
LABEL_82:
        if ( v72 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v72, 0x19Cu);
          goto LABEL_270;
        }
        v73 = *((_QWORD *)this + 14);
        v74 = *(_QWORD *)(v73 + 16);
        v75 = -*(_DWORD *)(v73 + 52) & 1;
        v76 = *(_DWORD *)(v73 + 56) - *(_DWORD *)(v73 + 52);
        v77 = v75 + 2 * v173;
        v78 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, __int64 *))(**(_QWORD **)(v74 + 648)
                                                                                           + 112LL))(
                *(_QWORD *)(v74 + 648),
                *(_QWORD *)(v73 + 24),
                0LL,
                5 - (unsigned int)(v76 < v77),
                0,
                v207);
        v168 = v78;
        v79 = v78;
        if ( v78 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v78, 0xAC4u);
          v79 = v168;
        }
        if ( !*(_DWORD *)(v74 + 872) && (v79 == -2005532292 || v79 == -2147024882 || v79 == -2005270523) )
        {
          v160 = CD3DDeviceManager::GetAdapterHwProtectedEntityCount(
                   (CD3DDeviceManager *)&g_D3DDeviceManager,
                   *(struct _LUID *)(v74 + 712));
          v79 = v168;
          if ( v160 )
          {
            if ( v168 != -2005270523
              || (v161 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v74 + 640) + 312LL))(*(_QWORD *)(v74 + 640)),
                  v79 = -2005270523,
                  *(_DWORD *)(v74 + 872) = -2003304307,
                  v161 == -2005270480) )
            {
              CD3DDeviceManager::IsHardwareProtectionDisabled();
              CD3DDeviceManager::s_bHwProtectionTempDisabled = 1;
              v162 = CD3DDeviceManager::IsHardwareProtectionDisabled();
              if ( (_BYTE)v164 != v162 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
              {
                Template_q(v164, &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE, v163);
                v79 = v168;
              }
            }
          }
        }
        if ( *(_DWORD *)(v74 + 872) )
        {
          v80 = *(_DWORD *)(v74 + 872);
          v168 = v80;
          goto LABEL_93;
        }
        if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext(v79, 0LL, &v192) )
        {
          v80 = v192;
          v168 = v192;
        }
        if ( v80 == -2003304307 )
        {
          *(_DWORD *)(v74 + 872) = -2003304307;
        }
        else
        {
LABEL_93:
          if ( v80 >= 0 )
          {
            *(_QWORD *)(v73 + 40) = v207[0];
            *(_DWORD *)(v73 + 48) = 2;
            if ( v76 < v77 )
              *(_DWORD *)(v73 + 52) = 0;
            else
              *(_DWORD *)(v73 + 52) += v75;
            goto LABEL_96;
          }
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v80, 0x6Du);
        v80 = v168;
LABEL_96:
        if ( v80 < 0 )
        {
          v166 = 413;
          v165 = v80;
          goto LABEL_269;
        }
        v2 = this;
        v81 = *((_QWORD *)this + 14);
        v82 = *(_DWORD *)(v81 + 52);
        if ( *(_DWORD *)(v81 + 48) == 2 )
          v83 = v82 >> 1;
        else
          v83 = v82 / *(_DWORD *)(v81 + 48);
        v30 = *((_QWORD *)this + 13);
        v173 = v83;
        v84 = *(_DWORD *)(v30 + 52);
        if ( *(_DWORD *)(v30 + 48) == 32 )
          v85 = v84 >> 5;
        else
          v85 = v84 / *(_DWORD *)(v30 + 48);
        v16 = v183;
        v175 = v85;
LABEL_102:
        if ( v13 )
          v86 = HIDWORD(v178) + 6;
        else
          v86 = HIDWORD(v178) + 2;
        v87 = *(_QWORD *)(v30 + 40) + *(unsigned int *)(v30 + 52);
        *(_DWORD *)(v30 + 52) += *((_DWORD *)v16 + 2) * *(_DWORD *)(v30 + 48);
        if ( v13 )
        {
          v202 = *((_DWORD *)v16 + 2);
          v200 = v87;
          v201 = 8 * v86;
          TransferVertices<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>(
            v16,
            (struct CMILMatrix *)(v181 + 72),
            (__int64)&v200);
        }
        else
        {
          v205 = *((_DWORD *)v16 + 2);
          v203 = v87;
          v204 = 8 * v86;
          TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(
            (__int64)v16,
            v181 + 72,
            v30,
            COERCE_DOUBLE((unsigned __int64)*(_DWORD *)(v181 + 140)),
            &v203);
        }
        v88 = *((_QWORD *)v2 + 14);
        v11 = (__int64 (__fastcall ****)(void *))(*(_QWORD *)(v88 + 40) + *(unsigned int *)(v88 + 52));
        *(_DWORD *)(v88 + 52) += *((_DWORD *)v16 + 4) * *(_DWORD *)(v88 + 48);
        v89 = 0LL;
        v90 = *((_DWORD *)v16 + 4);
        v91 = *((_QWORD *)v16 + 6);
        if ( v90 )
        {
          if ( v90 < 0x10
            || (v92 = v90 - 1, (unsigned __int64)v11 <= v91 + 2 * v92) && (unsigned __int64)v11 + 2 * v92 >= v91 )
          {
            v93 = v172;
            v94 = v175;
          }
          else
          {
            v93 = v172;
            v94 = v175;
            v95 = _mm_cvtsi32_si128((__int16)v172);
            v96 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v95, v95), 0);
            v97 = _mm_cvtsi32_si128((__int16)v175);
            v98 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v97, v97), 0);
            do
            {
              v99 = (unsigned int)(v89 + 8);
              *(__m128i *)((char *)v11 + 2 * v89) = _mm_add_epi16(
                                                      _mm_add_epi16(
                                                        _mm_loadu_si128((const __m128i *)(v91 + 2 * v89)),
                                                        v98),
                                                      v96);
              v89 = (unsigned int)(v89 + 16);
              *(__m128i *)((char *)v11 + 2 * v99) = _mm_add_epi16(
                                                      _mm_add_epi16(
                                                        _mm_loadu_si128((const __m128i *)(v91 + 2 * v99)),
                                                        v98),
                                                      v96);
            }
            while ( (unsigned int)v89 < (v90 & 0xFFFFFFF0) );
          }
          if ( (unsigned int)v89 < v90 )
          {
            v100 = v91 - (_QWORD)v11;
            v101 = (char *)v11 + 2 * v89;
            v102 = v90 - (unsigned int)v89;
            do
            {
              v103 = *(_WORD *)&v101[v100];
              v101 += 2;
              *((_WORD *)v101 - 1) = v93 + v94 + v103;
              --v102;
            }
            while ( v102 );
          }
        }
        else
        {
          v93 = v172;
        }
        v4 = *((_DWORD *)v16 + 4) + v176;
        v172 = *((_DWORD *)v16 + 2) + v93;
        v176 = v4;
        goto LABEL_116;
      }
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v72, 0x6Du);
    v72 = v168;
    goto LABEL_82;
  }
  v166 = 385;
LABEL_267:
  v165 = v154;
LABEL_269:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v165, v166);
LABEL_270:
  v2 = this;
  v7 = v170;
LABEL_133:
  if ( v180 )
    _InterlockedExchangeAdd((volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager + 20, v180);
  if ( v7 )
    _InterlockedExchangeAdd((volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager + 4, v7);
LABEL_137:
  v108 = *((_DWORD *)v2 + 72);
  if ( v108 )
    _InterlockedExchangeAdd((volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager + 6, v108);
  v109 = *((_DWORD *)v2 + 18);
  v110 = *((_DWORD *)v2 + 19);
  if ( v109 != v110 )
    _InterlockedExchangeAdd(
      (volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager + 5,
      v110 - v109);
  v111 = (CD3DDynamicAppendBuffer *)*((_QWORD *)v2 + 13);
  if ( *((_QWORD *)v111 + 5) )
    CD3DDynamicAppendBuffer::EndAppend(v111);
  v112 = (CD3DDynamicAppendBuffer *)*((_QWORD *)v2 + 14);
  if ( *((_QWORD *)v112 + 5) )
    CD3DDynamicAppendBuffer::EndAppend(v112);
  v113 = *((_QWORD *)v2 + 4);
  if ( v113 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v113 + 8LL))(v113);
    *((_QWORD *)v2 + 4) = 0LL;
  }
  v114 = *((_QWORD *)v2 + 8);
  if ( v114 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v114 + 8LL))(v114);
    *((_QWORD *)v2 + 8) = 0LL;
  }
  v115 = (char *)v2 + 256;
  v116 = *((_QWORD *)v2 + 35);
  v117 = (__int64 *)*((_QWORD *)v2 + 32);
  v118 = v116 + *((_QWORD *)v2 + 36);
  while ( v116 != v118 )
  {
    if ( v117 )
      v138 = *v117;
    else
      v138 = 0LL;
    v10 = *(__int64 (__fastcall **)(__int64, int, CCompositionSurfaceBitmap **, int))(*(_QWORD *)(v138 + 8)
                                                                                    + 8
                                                                                    * (v116 & (*(_QWORD *)(v138 + 16)
                                                                                             - 1LL)));
    v11 = (__int64 (__fastcall ****)(void *))((char *)v10 + 32);
    if ( *((_QWORD *)v10 + 4) )
    {
      v139 = *(_QWORD *)v10;
      v140 = (__int64 (__fastcall ****)(void *))(*(_QWORD *)v10 + 56LL);
      *(_OWORD *)(v139 + 72) = *(_OWORD *)((char *)v10 + 40);
      *(_OWORD *)(v139 + 88) = *(_OWORD *)((char *)v10 + 56);
      *(_OWORD *)(v139 + 104) = *(_OWORD *)((char *)v10 + 72);
      *(_OWORD *)(v139 + 120) = *(_OWORD *)((char *)v10 + 88);
      *(_DWORD *)(v139 + 136) = *((_DWORD *)v10 + 26);
      v141 = *v140;
      *v140 = 0LL;
      if ( v140 != v11 )
      {
        v142 = *v11;
        *v11 = 0LL;
        v143 = *v140;
        if ( v142 != *v140 )
        {
          if ( v143 )
            ((void (__fastcall *)(__int64 (__fastcall ***)(void *), __int64, __int64 (__fastcall ****)(void *), __int64 (__fastcall *)(void *)))**v143)(
              v143,
              1LL,
              v11,
              PrimitiveStorage::CCachableStorage<CDrawListPrimitive4,16>::`vector deleting destructor');
          *v140 = v142;
        }
      }
      if ( v141 )
      {
        v144 = **v141;
        if ( v144 == PrimitiveStorage::CCachableStorage<CDrawListPrimitive4,16>::`vector deleting destructor' )
          PrimitiveStorage::CCachableStorage<CDrawListPrimitive4,16>::`vector deleting destructor'(v141);
        else
          ((void (__fastcall *)(__int64 (__fastcall ***)(void *), __int64, __int64 (__fastcall ****)(void *), __int64 (__fastcall *)(void *)))v144)(
            v141,
            1LL,
            v11,
            PrimitiveStorage::CCachableStorage<CDrawListPrimitive4,16>::`vector deleting destructor');
      }
    }
    ++v116;
  }
  std::deque<CMegaRect>::_Tidy(
    v115,
    v10,
    v11,
    PrimitiveStorage::CCachableStorage<CDrawListPrimitive4,16>::`vector deleting destructor');
  v184 = this;
  v119 = *((_QWORD *)this + 3);
  v120 = *(_DWORD *)(v119 + 128);
  if ( *(_DWORD *)(v119 + 64) < v120 )
    v120 = *(_DWORD *)(v119 + 64);
  *(_DWORD *)(v119 + 128) = v120;
  v121 = *(_DWORD *)(v119 + 64);
  v122 = v121 + 1;
  if ( v121 + 1 < v121 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  else
  {
    if ( v122 <= *(_DWORD *)(v119 + 60) )
    {
      *(_QWORD *)(*(_QWORD *)(v119 + 40) + 8LL * v121) = v184;
      *(_DWORD *)(v119 + 64) = v122;
      goto LABEL_156;
    }
    v151 = DynArrayImpl<0>::AddMultipleAndSet(v119 + 40, 8u, 1, &v184);
    if ( v151 >= 0 )
LABEL_156:
      _InterlockedIncrement((volatile signed __int32 *)v184 + 4);
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v151, 0xC0u);
  }
  v123 = v184;
  v124 = *((_DWORD *)v184 + 19);
  v125 = *((unsigned int *)v184 + 18);
  if ( v124 != (_DWORD)v125 )
  {
    if ( (unsigned int)v125 < v124 )
    {
      v126 = 8 * v125;
      v127 = v124 - (unsigned int)v125;
      v128 = (__int64)CCommonRenderingEffect::`scalar deleting destructor';
      while ( 1 )
      {
        --*(_DWORD *)(*(_QWORD *)(v126 + *(_QWORD *)(v119 + 8)) + 40LL);
        v129 = *(volatile signed __int32 **)(v126 + *(_QWORD *)(v119 + 8));
        v130 = *(unsigned int (__fastcall **)(CMILRefCountBase *__hidden))(*(_QWORD *)v129 + 8LL);
        if ( v130 != CMILRefCountBase::Release )
          goto LABEL_207;
        if ( _InterlockedExchangeAdd(v129 + 2, 0xFFFFFFFF) == 1 )
          break;
LABEL_162:
        v126 += 8LL;
        if ( !--v127 )
        {
          v123 = v184;
          goto LABEL_164;
        }
      }
      v130 = *(unsigned int (__fastcall **)(CMILRefCountBase *__hidden))(*(_QWORD *)v129 + 16LL);
      if ( (char *)v130 == (char *)CDirtyRegion::`vector deleting destructor' )
      {
        CDirtyRegion::`vector deleting destructor'((CDirtyRegion *)v129, 1u);
      }
      else if ( (char *)v130 == (char *)CHWDrawListEntry::`scalar deleting destructor' )
      {
        CHWDrawListEntry::`scalar deleting destructor'((CHWDrawListEntry *)v129, 1u);
      }
      else
      {
        v128 = 1LL;
        if ( (char *)v130 == (char *)CCommonRenderingEffect::`scalar deleting destructor' )
        {
          CCommonRenderingEffect::`scalar deleting destructor'((CCommonRenderingEffect *)v129, 1);
        }
        else if ( (char *)v130 == (char *)CDrawListCache::`scalar deleting destructor' )
        {
          CDrawListCache::`scalar deleting destructor'((CDrawListCache *)v129, 1u);
        }
        else if ( (char *)v130 == (char *)CPrimitiveGroupDrawListGenerator::`scalar deleting destructor' )
        {
          CPrimitiveGroupDrawListGenerator::`scalar deleting destructor'((CPrimitiveGroupDrawListGenerator *)v129, 1);
        }
        else
        {
LABEL_207:
          ((void (__fastcall *)(volatile signed __int32 *, __int64, void *(__fastcall *)(CDrawListCache *__hidden, unsigned int), CPrimitiveGroupDrawListGenerator *(__fastcall *)(CPrimitiveGroupDrawListGenerator *, char)))v130)(
            v129,
            v128,
            CDrawListCache::`scalar deleting destructor',
            CPrimitiveGroupDrawListGenerator::`scalar deleting destructor');
        }
      }
      v128 = (__int64)CCommonRenderingEffect::`scalar deleting destructor';
      goto LABEL_162;
    }
LABEL_164:
    v131 = *(_DWORD *)(v119 + 32);
    if ( v124 == v131 )
    {
      v145 = *(_DWORD *)(v119 + 64);
      if ( *(_DWORD *)(v119 + 124) > v131 )
        v131 = *(_DWORD *)(v119 + 124);
      *(_DWORD *)(v119 + 124) = v131;
      v146 = v145 - *(_DWORD *)(v119 + 128);
      v147 = *(_DWORD *)(v119 + 132) <= v146;
      *(_DWORD *)(v119 + 128) = v145;
      if ( !v147 )
        v146 = *(_DWORD *)(v119 + 132);
      v148 = *(_DWORD *)(v119 + 96);
      v149 = v148 - *(_DWORD *)(v119 + 136);
      *(_DWORD *)(v119 + 132) = v146;
      v150 = *(_DWORD *)(v119 + 140);
      if ( v150 <= v149 )
        v150 = v149;
      *(_DWORD *)(v119 + 140) = v150;
      *(_DWORD *)(v119 + 136) = v148;
      *(_DWORD *)(v119 + 32) = 0;
      v123 = v184;
    }
  }
  *((_QWORD *)v123 + 9) = 0LL;
  return v168;
}
