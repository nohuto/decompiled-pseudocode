/*
 * XREFs of ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0016548
 * Callers:
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C0002138 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 *     ?SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCResourceMarshaler@2@_NPEA_N@Z @ 0x1C000C9EC (-SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCReso.c)
 *     ?SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C000CB6C (-SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_.c)
 *     ?EnsureInteraction@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@_NPEAPEAVCInteractionMarshaler@2@@Z @ 0x1C000CC80 (-EnsureInteraction@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@_NPEAPEAVC.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C00156F0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0149DA0 (-SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEB.c)
 *     ?SetTransformMatrixHelper@CCaptureControllerMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0159A7C (-SetTransformMatrixHelper@CCaptureControllerMarshaler@DirectComposition@@QEAAJPEAVCApplicationCh.c)
 * Callees:
 *     ??0CInteractionMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00041D8 (--0CInteractionMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ?AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@@Z @ 0x1C000A924 (-AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C00149DC (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019270 (Win32AllocPoolWithQuotaZInit.c)
 *     ?AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ @ 0x1C0045F60 (-AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ??0CNaturalAnimationMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01459AC (--0CNaturalAnimationMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CInteractionTrackerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C014CCD8 (--0CInteractionTrackerMarshaler@DirectComposition@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateInternalResource(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        struct DirectComposition::CResourceMarshaler **a3)
{
  char *v5; // r14
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  struct DirectComposition::CResourceMarshaler *v11; // rax
  struct DirectComposition::CResourceMarshaler *v12; // rbx
  void **v13; // rax
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // edx
  struct DirectComposition::CResourceMarshaler *v18; // rax
  int v19; // edi
  __int64 v20; // rax
  struct DirectComposition::CResourceMarshaler *v21; // rcx
  _QWORD *v22; // rsi
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rbp
  unsigned __int64 i; // rax
  size_t v26; // r8
  unsigned int v28; // edx
  _QWORD *v29; // rax
  unsigned int v30; // edx
  unsigned int v31; // edx
  struct DirectComposition::CResourceMarshaler *v32; // rax
  struct DirectComposition::CResourceMarshaler *v33; // rax
  unsigned int v34; // edx
  unsigned int v35; // edx
  __int64 v36; // rax
  unsigned int v37; // edx
  unsigned int v38; // edx
  struct DirectComposition::CResourceMarshaler *v39; // rax
  struct DirectComposition::CResourceMarshaler *v40; // rax
  unsigned int v41; // edx
  unsigned int v42; // edx
  unsigned int v43; // edx
  unsigned int v44; // edx
  unsigned int v45; // edx
  struct DirectComposition::CResourceMarshaler *v46; // rax
  unsigned int v47; // edx
  struct DirectComposition::CResourceMarshaler *v48; // rax
  unsigned int v49; // edx
  unsigned int v50; // edx
  struct DirectComposition::CResourceMarshaler *v51; // rax
  unsigned int v52; // edx
  unsigned int v53; // edx
  struct DirectComposition::CResourceMarshaler *v54; // rax
  __int64 v55; // rax
  unsigned int v56; // edx
  unsigned int v57; // edx
  unsigned int v58; // edx
  struct DirectComposition::CResourceMarshaler *v59; // rax
  struct DirectComposition::CResourceMarshaler *v60; // rax
  unsigned int v61; // edx
  unsigned int v62; // edx
  char *v63; // rax
  _QWORD *v64; // rcx
  __int64 v65; // rdx
  _QWORD *v66; // rax
  unsigned int v67; // edx
  unsigned int v68; // edx
  unsigned int v69; // edx
  unsigned int v70; // edx
  unsigned int v71; // edx
  struct DirectComposition::CResourceMarshaler *v72; // rax
  unsigned int v73; // edx
  unsigned int v74; // edx
  struct DirectComposition::CResourceMarshaler *v75; // rax
  unsigned int v76; // edx
  unsigned int v77; // edx
  unsigned int v78; // edx
  __int64 v79; // rax
  struct DirectComposition::CResourceMarshaler *v80; // rax
  DirectComposition::CInteractionMarshaler *v81; // rax
  DirectComposition::CInteractionMarshaler *v82; // rax
  struct DirectComposition::CResourceMarshaler *v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  unsigned int v86; // edx
  unsigned int v87; // edx
  struct DirectComposition::CResourceMarshaler *v88; // rax
  struct DirectComposition::CResourceMarshaler *v89; // rax
  struct DirectComposition::CResourceMarshaler *v90; // rax
  unsigned int v91; // edx
  struct DirectComposition::CResourceMarshaler *v92; // rax
  unsigned int v93; // edx
  unsigned int v94; // edx
  struct DirectComposition::CResourceMarshaler *v95; // rax
  unsigned int v96; // edx
  unsigned int v97; // edx
  unsigned int v98; // edx
  struct DirectComposition::CResourceMarshaler *v99; // rax
  struct DirectComposition::CResourceMarshaler *v100; // rax
  struct DirectComposition::CResourceMarshaler *v101; // rax
  unsigned int v102; // edx
  __int64 v103; // rax
  unsigned int v104; // edx
  unsigned int v105; // edx
  unsigned int v106; // edx
  unsigned int v107; // edx
  unsigned int v108; // edx
  struct DirectComposition::CResourceMarshaler *v109; // rax
  struct DirectComposition::CResourceMarshaler *v110; // rax
  struct DirectComposition::CResourceMarshaler *v111; // rax
  __int64 v112; // rax
  struct DirectComposition::CResourceMarshaler *v113; // rax
  struct DirectComposition::CResourceMarshaler *v114; // rax
  struct DirectComposition::CResourceMarshaler *v115; // rax
  struct DirectComposition::CResourceMarshaler *v116; // rax
  struct DirectComposition::CResourceMarshaler *v117; // rax
  struct DirectComposition::CResourceMarshaler *v118; // rax
  struct DirectComposition::CResourceMarshaler *v119; // rax
  struct DirectComposition::CResourceMarshaler *v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  struct DirectComposition::CResourceMarshaler *v123; // rax
  __int64 v124; // rax
  struct DirectComposition::CResourceMarshaler *v125; // rax
  struct DirectComposition::CResourceMarshaler *v126; // rax
  __int64 v127; // rax
  void **v128; // rax
  __int64 v129; // rax
  struct DirectComposition::CResourceMarshaler *v130; // rax
  __int64 v131; // rax
  struct DirectComposition::CResourceMarshaler *v132; // rax
  __int64 v133; // rax
  unsigned int v134; // edx
  struct DirectComposition::CResourceMarshaler *v135; // rax
  struct DirectComposition::CResourceMarshaler *v136; // rax
  struct DirectComposition::CResourceMarshaler *v137; // rax
  __int64 v138; // rax
  unsigned int v139; // edx
  unsigned int v140; // edx
  unsigned int v141; // edx
  unsigned int v142; // edx
  unsigned int v143; // edx
  __int64 v144; // rax
  __int64 v145; // rax
  struct DirectComposition::CResourceMarshaler *v146; // rax
  struct DirectComposition::CResourceMarshaler *v147; // rax
  struct DirectComposition::CResourceMarshaler *v148; // rax
  struct DirectComposition::CResourceMarshaler *v149; // rax
  struct DirectComposition::CResourceMarshaler *v150; // rax
  unsigned int v151; // edx
  unsigned int v152; // edx
  unsigned int v153; // edx
  __int64 v154; // rax
  __int64 v155; // rax
  struct DirectComposition::CResourceMarshaler *v156; // rax
  struct DirectComposition::CResourceMarshaler *v157; // rax
  unsigned int v158; // edx
  struct DirectComposition::CResourceMarshaler *v159; // rax
  struct DirectComposition::CResourceMarshaler *v160; // rax
  DirectComposition::CInteractionTrackerMarshaler *v161; // rax
  __int64 v162; // rax
  DirectComposition::CNaturalAnimationMarshaler *v163; // rax
  struct DirectComposition::CResourceMarshaler *v164; // rax
  struct DirectComposition::CResourceMarshaler *v165; // rax
  struct DirectComposition::CResourceMarshaler *v166; // rax
  unsigned int v167; // edx
  unsigned int v168; // edx
  _QWORD *v169; // rax
  __int64 v170; // rax
  struct DirectComposition::CResourceMarshaler *v171; // rax
  struct DirectComposition::CResourceMarshaler *v172; // rax
  struct DirectComposition::CResourceMarshaler *v173; // rax
  __int64 v174; // rax
  unsigned int v175; // edx
  unsigned int v176; // edx
  struct DirectComposition::CResourceMarshaler *v177; // rax
  struct DirectComposition::CResourceMarshaler *v178; // rax
  __int64 v179; // rax
  struct DirectComposition::CResourceMarshaler *v180; // rax
  struct DirectComposition::CResourceMarshaler *v181; // rax
  unsigned int v182; // edx
  unsigned int v183; // edx
  unsigned int v184; // edx
  struct DirectComposition::CResourceMarshaler *v185; // rax
  struct DirectComposition::CResourceMarshaler *v186; // rax
  __int64 v187; // rax
  struct DirectComposition::CResourceMarshaler *v188; // rax
  _QWORD *v189; // rax
  _QWORD *v190; // rbx
  struct DirectComposition::CResourceMarshaler *v191; // rax
  struct DirectComposition::CResourceMarshaler *v192; // rax
  struct DirectComposition::CResourceMarshaler *v193; // rax
  struct DirectComposition::CResourceMarshaler *v194; // rax
  struct DirectComposition::CResourceMarshaler *v195; // rax
  unsigned int v196; // edx
  unsigned int v197; // edx
  unsigned int v198; // edx
  unsigned int v199; // edx
  unsigned int v200; // edx
  struct DirectComposition::CResourceMarshaler *v201; // rax
  struct DirectComposition::CResourceMarshaler *v202; // rax
  struct DirectComposition::CResourceMarshaler *v203; // rax
  struct DirectComposition::CResourceMarshaler *v204; // rax
  struct DirectComposition::CResourceMarshaler *v205; // rax
  struct DirectComposition::CResourceMarshaler *v206; // rax
  unsigned int v207; // edx
  struct DirectComposition::CResourceMarshaler *v208; // rax
  struct DirectComposition::CResourceMarshaler *v209; // rax
  struct DirectComposition::CResourceMarshaler *Src; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0LL;
  if ( a2 <= 0x52 )
  {
    if ( a2 != 82 )
    {
      if ( a2 <= 0x26 )
      {
        if ( a2 == 38 )
        {
          v126 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x98uLL);
          v12 = v126;
          if ( !v126 )
            return (unsigned int)-1073741801;
          memset(v126, 0, 0x98uLL);
          v13 = &DirectComposition::CConditionalExpressionMarshaler::`vftable';
          goto LABEL_24;
        }
        if ( a2 > 0x14 )
        {
          if ( a2 > 0x1E )
          {
            v67 = a2 - 31;
            if ( !v67 )
            {
              v125 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x78uLL);
              v12 = v125;
              if ( !v125 )
                return (unsigned int)-1073741801;
              memset(v125, 0, 0x78uLL);
              v13 = &DirectComposition::CCompositionDistantLightMarshaler::`vftable';
              goto LABEL_24;
            }
            v68 = v67 - 1;
            if ( !v68 )
            {
              v124 = Win32AllocPoolWithQuotaZInit(0x50uLL);
              v12 = (struct DirectComposition::CResourceMarshaler *)v124;
              if ( !v124 )
                return (unsigned int)-1073741801;
              *(_QWORD *)(v124 + 20) = 1LL;
              v13 = &DirectComposition::CCompositionLightMarshaler::`vftable';
              goto LABEL_25;
            }
            v69 = v68 - 1;
            if ( !v69 )
            {
              v123 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x90uLL);
              v12 = v123;
              if ( !v123 )
                return (unsigned int)-1073741801;
              memset(v123, 0, 0x90uLL);
              v13 = &DirectComposition::CCompositionPointLightMarshaler::`vftable';
              goto LABEL_24;
            }
            v70 = v69 - 2;
            if ( !v70 )
            {
              v122 = Win32AllocPoolWithQuotaZInit(0x60uLL);
              v12 = (struct DirectComposition::CResourceMarshaler *)v122;
              if ( !v122 )
                return (unsigned int)-1073741801;
              *(_QWORD *)(v122 + 20) = 1LL;
              v13 = &DirectComposition::CCompositionSkyBoxBrushMarshaler::`vftable';
              goto LABEL_25;
            }
            v71 = v70 - 1;
            if ( !v71 )
            {
              v90 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0xB8uLL);
              v12 = v90;
              if ( !v90 )
                return (unsigned int)-1073741801;
              memset(v90, 0, 0xB8uLL);
              v13 = &DirectComposition::CCompositionSpotLightMarshaler::`vftable';
              goto LABEL_24;
            }
            if ( v71 == 1 )
            {
              v72 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x38uLL);
              v12 = v72;
              if ( !v72 )
                return (unsigned int)-1073741801;
              memset(v72, 0, 0x38uLL);
              v13 = &DirectComposition::CCompositionSurfaceBitmapMarshaler::`vftable';
              goto LABEL_24;
            }
          }
          else
          {
            if ( a2 == 30 )
            {
              v121 = Win32AllocPoolWithQuotaZInit(0x48uLL);
              v12 = (struct DirectComposition::CResourceMarshaler *)v121;
              if ( !v121 )
                return (unsigned int)-1073741801;
              *(_QWORD *)(v121 + 20) = 1LL;
              v13 = &DirectComposition::CCompositionCubeMapMarshaler::`vftable';
              goto LABEL_25;
            }
            v30 = a2 - 24;
            if ( !v30 )
            {
              v85 = Win32AllocPoolWithQuotaZInit(0x58uLL);
              v12 = (struct DirectComposition::CResourceMarshaler *)v85;
              if ( !v85 )
                return (unsigned int)-1073741801;
              *(_QWORD *)(v85 + 20) = 1LL;
              v13 = &DirectComposition::CCompiledEffectTemplateMarshaler::`vftable';
              goto LABEL_25;
            }
            v31 = v30 - 1;
            if ( !v31 )
            {
              v32 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x78uLL);
              v12 = v32;
              if ( !v32 )
                return (unsigned int)-1073741801;
              memset(v32, 0, 0x78uLL);
              v13 = &DirectComposition::CComponentTransform2DMarshaler::`vftable';
              goto LABEL_24;
            }
            v47 = v31 - 1;
            if ( !v47 )
            {
              v48 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0xB8uLL);
              v12 = v48;
              if ( !v48 )
                return (unsigned int)-1073741801;
              memset(v48, 0, 0xB8uLL);
              v13 = &DirectComposition::CComponentTransform3DMarshaler::`vftable';
              goto LABEL_24;
            }
            v93 = v47 - 1;
            if ( !v93 )
            {
              v120 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x60uLL);
              v12 = v120;
              if ( !v120 )
                return (unsigned int)-1073741801;
              memset(v120, 0, 0x60uLL);
              *(_QWORD *)((char *)v12 + 20) = 1LL;
              v13 = &DirectComposition::CCompositeEffectMarshaler::`vftable';
              *((_QWORD *)v12 + 5) = 0LL;
              *((_DWORD *)v12 + 12) = 0;
              *((_QWORD *)v12 + 7) = 0LL;
              *((_QWORD *)v12 + 8) = 0LL;
              *((_QWORD *)v12 + 9) = 0LL;
              *((_DWORD *)v12 + 20) = 0;
              goto LABEL_25;
            }
            v94 = v93 - 1;
            if ( !v94 )
            {
              v101 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x68uLL);
              v12 = v101;
              if ( !v101 )
                return (unsigned int)-1073741801;
              memset(v101, 0, 0x68uLL);
              v13 = &DirectComposition::CCompositionAmbientLightMarshaler::`vftable';
              goto LABEL_24;
            }
            if ( v94 == 1 )
            {
              v95 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x30uLL);
              v12 = v95;
              if ( !v95 )
                return (unsigned int)-1073741801;
              memset(v95, 0, 0x30uLL);
              v13 = &DirectComposition::CCompositionCapabilitiesMarshaler::`vftable';
              goto LABEL_24;
            }
          }
          return (unsigned int)-1073741811;
        }
        if ( a2 == 20 )
        {
          v119 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0xB0uLL);
          v12 = v119;
          if ( !v119 )
            return (unsigned int)-1073741801;
          memset(v119, 0, 0xB0uLL);
          *(_QWORD *)((char *)v12 + 20) = 1LL;
          v13 = &DirectComposition::CColorMatrixEffectMarshaler::`vftable';
          *((_QWORD *)v12 + 5) = 0LL;
          *((_DWORD *)v12 + 12) = 0;
          *((_QWORD *)v12 + 7) = 0LL;
          *((_QWORD *)v12 + 8) = 0LL;
          *((_QWORD *)v12 + 9) = 0LL;
          *((_DWORD *)v12 + 20) = 0;
          goto LABEL_25;
        }
        if ( a2 <= 0xC )
        {
          if ( a2 == 12 )
          {
            v114 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x60uLL);
            v12 = v114;
            if ( !v114 )
              return (unsigned int)-1073741801;
            memset(v114, 0, 0x60uLL);
            *(_QWORD *)((char *)v12 + 20) = 1LL;
            v13 = &DirectComposition::CBlendEffectMarshaler::`vftable';
            *((_QWORD *)v12 + 5) = 0LL;
            *((_DWORD *)v12 + 12) = 0;
            *((_QWORD *)v12 + 7) = 0LL;
            *((_QWORD *)v12 + 8) = 0LL;
            *((_QWORD *)v12 + 9) = 0LL;
            *((_DWORD *)v12 + 20) = 0;
            goto LABEL_25;
          }
          v61 = a2 - 1;
          if ( !v61 )
          {
            v113 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x80uLL);
            v12 = v113;
            if ( !v113 )
              return (unsigned int)-1073741801;
            memset(v113, 0, 0x80uLL);
            *(_QWORD *)((char *)v12 + 20) = 1LL;
            v13 = &DirectComposition::CAffineTransform2DEffectMarshaler::`vftable';
            *((_QWORD *)v12 + 5) = 0LL;
            *((_DWORD *)v12 + 12) = 0;
            *((_QWORD *)v12 + 7) = 0LL;
            *((_QWORD *)v12 + 8) = 0LL;
            *((_QWORD *)v12 + 9) = 0LL;
            *((_DWORD *)v12 + 20) = 0;
            goto LABEL_25;
          }
          v62 = v61 - 1;
          if ( v62 )
          {
            v96 = v62 - 1;
            if ( v96 )
            {
              v97 = v96 - 1;
              if ( !v97 )
              {
                v110 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x30uLL);
                v12 = v110;
                if ( !v110 )
                  return (unsigned int)-1073741801;
                memset(v110, 0, 0x30uLL);
                v13 = &DirectComposition::CAnimationTriggerMarshaler::`vftable';
                goto LABEL_24;
              }
              v98 = v97 - 1;
              if ( !v98 )
              {
                v111 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x70uLL);
                v12 = v111;
                if ( !v111 )
                  return (unsigned int)-1073741801;
                memset(v111, 0, 0x70uLL);
                *(_QWORD *)((char *)v12 + 20) = 1LL;
                v13 = &DirectComposition::CArithmeticCompositeEffectMarshaler::`vftable';
                *((_QWORD *)v12 + 5) = 0LL;
                *((_DWORD *)v12 + 12) = 0;
                *((_QWORD *)v12 + 7) = 0LL;
                *((_QWORD *)v12 + 8) = 0LL;
                *((_QWORD *)v12 + 9) = 0LL;
                *((_DWORD *)v12 + 20) = 0;
                goto LABEL_25;
              }
              if ( v98 == 3 )
              {
                v99 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x38uLL);
                v12 = v99;
                if ( !v99 )
                  return (unsigned int)-1073741801;
                memset(v99, 0, 0x38uLL);
                v13 = &DirectComposition::CBackdropBrushMarshaler::`vftable';
                goto LABEL_24;
              }
              return (unsigned int)-1073741811;
            }
            v112 = Win32AllocPoolWithQuotaZInit(0xF8uLL);
            v12 = (struct DirectComposition::CResourceMarshaler *)v112;
            if ( !v112 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v112 + 20) = 1LL;
            *(_QWORD *)v112 = &DirectComposition::CAnimationLoggingManagerMarshaler::`vftable';
            *(_BYTE *)(v112 + 48) = 1;
            *(_QWORD *)(v112 + 72) = 12LL;
            *(_BYTE *)(v112 + 96) = 1;
            *(_QWORD *)(v112 + 120) = 12LL;
            *(_BYTE *)(v112 + 144) = 1;
            *(_QWORD *)(v112 + 168) = 16LL;
            *(_BYTE *)(v112 + 192) = 1;
            *(_QWORD *)(v112 + 216) = 8LL;
            *(_BYTE *)(v112 + 240) &= 0xFCu;
            *(_QWORD *)(v112 + 232) = 0LL;
            *(_DWORD *)(v112 + 244) = 1065353216;
          }
          else
          {
            v63 = (char *)Win32AllocPoolWithQuotaZInit(0xF8uLL);
            v5 = v63;
            if ( v63 )
            {
              memset(v63, 0, 0xF8uLL);
              *(_QWORD *)(v5 + 36) = 1LL;
              *((_QWORD *)v5 + 7) = 0LL;
              *(_QWORD *)v5 = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
              *((_QWORD *)v5 + 2) = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CNotifiedDeletionResource'};
            }
            else
            {
              v5 = 0LL;
            }
            if ( v5 )
            {
              v64 = (_QWORD *)((char *)this + 336);
              v65 = *((_QWORD *)this + 42);
              v66 = v5 + 120;
              if ( *(DirectComposition::CApplicationChannel **)(v65 + 8) != (DirectComposition::CApplicationChannel *)((char *)this + 336) )
                __fastfail(3u);
              *v66 = v65;
              *((_QWORD *)v5 + 16) = v64;
              *(_QWORD *)(v65 + 8) = v66;
              *v64 = v66;
            }
            v12 = (struct DirectComposition::CResourceMarshaler *)((unsigned __int64)(v5 + 16) & -(__int64)(v5 != 0LL));
          }
        }
        else
        {
          v41 = a2 - 13;
          if ( !v41 )
          {
            v118 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x68uLL);
            v12 = v118;
            if ( !v118 )
              return (unsigned int)-1073741801;
            memset(v118, 0, 0x68uLL);
            *(_QWORD *)((char *)v12 + 20) = 1LL;
            v13 = &DirectComposition::CBrightnessEffectMarshaler::`vftable';
            *((_QWORD *)v12 + 5) = 0LL;
            *((_DWORD *)v12 + 12) = 0;
            *((_QWORD *)v12 + 7) = 0LL;
            *((_QWORD *)v12 + 8) = 0LL;
            *((_QWORD *)v12 + 9) = 0LL;
            *((_DWORD *)v12 + 20) = 0;
            goto LABEL_25;
          }
          v42 = v41 - 2;
          if ( !v42 )
          {
            v117 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x58uLL);
            v12 = v117;
            if ( !v117 )
              return (unsigned int)-1073741801;
            memset(v117, 0, 0x58uLL);
            v13 = &DirectComposition::CVisualSurfaceMarshaler::`vftable';
            goto LABEL_24;
          }
          v43 = v42 - 1;
          if ( v43 )
          {
            v44 = v43 - 1;
            if ( !v44 )
            {
              v115 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x58uLL);
              v12 = v115;
              if ( !v115 )
                return (unsigned int)-1073741801;
              memset(v115, 0, 0x58uLL);
              v13 = &DirectComposition::CCaptureRenderTargetMarshaler::`vftable';
              goto LABEL_24;
            }
            v45 = v44 - 1;
            if ( !v45 )
            {
              v55 = Win32AllocPoolWithQuotaZInit(0x48uLL);
              v12 = (struct DirectComposition::CResourceMarshaler *)v55;
              if ( !v55 )
                return (unsigned int)-1073741801;
              *(_QWORD *)(v55 + 20) = 1LL;
              v13 = &DirectComposition::CColorBrushMarshaler::`vftable';
              goto LABEL_25;
            }
            if ( v45 == 1 )
            {
              v46 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x40uLL);
              v12 = v46;
              if ( !v46 )
                return (unsigned int)-1073741801;
              memset(v46, 0, 0x40uLL);
              v13 = &DirectComposition::CColorGradientStopMarshaler::`vftable';
              goto LABEL_24;
            }
            return (unsigned int)-1073741811;
          }
          v116 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x48uLL);
          v12 = v116;
          if ( !v116 )
            return (unsigned int)-1073741801;
          memset(v116, 0, 0x48uLL);
          *(_QWORD *)((char *)v12 + 20) = 1LL;
          *(_QWORD *)v12 = &DirectComposition::CCaptureControllerMarshaler::`vftable';
          *((_BYTE *)v12 + 56) = 1;
        }
        goto LABEL_26;
      }
      if ( a2 > 0x3B )
      {
        if ( a2 > 0x48 )
        {
          v102 = a2 - 73;
          if ( !v102 )
          {
            v103 = Win32AllocPoolWithQuotaZInit(0x28uLL);
            v12 = (struct DirectComposition::CResourceMarshaler *)v103;
            if ( !v103 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v103 + 20) = 1LL;
            v13 = &DirectComposition::CHoverPointerSourceMarshaler::`vftable';
            goto LABEL_25;
          }
          v151 = v102 - 1;
          if ( !v151 )
          {
            v157 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x60uLL);
            v12 = v157;
            if ( !v157 )
              return (unsigned int)-1073741801;
            memset(v157, 0, 0x60uLL);
            *(_QWORD *)((char *)v12 + 20) = 1LL;
            v13 = &DirectComposition::CHueRotationEffectMarshaler::`vftable';
            *((_QWORD *)v12 + 5) = 0LL;
            *((_DWORD *)v12 + 12) = 0;
            *((_QWORD *)v12 + 7) = 0LL;
            *((_QWORD *)v12 + 8) = 0LL;
            *((_QWORD *)v12 + 9) = 0LL;
            *((_DWORD *)v12 + 20) = 0;
            goto LABEL_25;
          }
          v152 = v151 - 1;
          if ( !v152 )
          {
            v156 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x30uLL);
            v12 = v156;
            if ( !v156 )
              return (unsigned int)-1073741801;
            memset(v156, 0, 0x30uLL);
            v13 = &DirectComposition::CHwndBitmapMarshaler::`vftable';
            goto LABEL_24;
          }
          v153 = v152 - 5;
          if ( !v153 )
          {
            v155 = Win32AllocPoolWithQuotaZInit(0x90uLL);
            v12 = (struct DirectComposition::CResourceMarshaler *)v155;
            if ( !v155 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v155 + 20) = 1LL;
            v13 = &DirectComposition::CInjectionAnimationMarshaler::`vftable';
            goto LABEL_25;
          }
          if ( v153 != 1 )
            return (unsigned int)-1073741811;
          v154 = Win32AllocPoolWithQuotaZInit(0x90uLL);
          v12 = (struct DirectComposition::CResourceMarshaler *)v154;
          if ( !v154 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v154 + 20) = 1LL;
          *(_QWORD *)v154 = &DirectComposition::CInkMarshaler::`vftable';
          *(_BYTE *)(v154 + 104) = 1;
          *(_QWORD *)(v154 + 128) = 36LL;
          goto LABEL_26;
        }
        if ( a2 == 72 )
        {
          v150 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x70uLL);
          v12 = v150;
          if ( !v150 )
            return (unsigned int)-1073741801;
          memset(v150, 0, 0x70uLL);
          *(_QWORD *)((char *)v12 + 20) = 1LL;
          *(_QWORD *)v12 = &DirectComposition::CHolographicViewerMarshaler::`vftable';
          *((_QWORD *)v12 + 5) = 0LL;
          *((_QWORD *)v12 + 6) = 0LL;
          *((_QWORD *)v12 + 7) = 0LL;
          *((_QWORD *)v12 + 8) = 0LL;
          *((_QWORD *)v12 + 9) = 0LL;
          *((_QWORD *)v12 + 10) = 0LL;
          *((_DWORD *)v12 + 22) = 0;
          *(_QWORD *)((char *)v12 + 92) = 0LL;
          *((_QWORD *)v12 + 13) = 0LL;
          goto LABEL_26;
        }
        v139 = a2 - 63;
        if ( !v139 )
        {
          v149 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x60uLL);
          v12 = v149;
          if ( !v149 )
            return (unsigned int)-1073741801;
          memset(v149, 0, 0x60uLL);
          v13 = &DirectComposition::CClipGroupMarshaler::`vftable';
          goto LABEL_24;
        }
        v140 = v139 - 3;
        if ( !v140 )
        {
          v148 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x50uLL);
          v12 = v148;
          if ( !v148 )
            return (unsigned int)-1073741801;
          memset(v148, 0, 0x50uLL);
          v13 = &DirectComposition::CHolographicCompositionMarshaler::`vftable';
          goto LABEL_24;
        }
        v141 = v140 - 1;
        if ( !v141 )
        {
          v147 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x50uLL);
          v12 = v147;
          if ( !v147 )
            return (unsigned int)-1073741801;
          memset(v147, 0, 0x50uLL);
          v13 = &DirectComposition::CHolographicDisplayMarshaler::`vftable';
          goto LABEL_24;
        }
        v142 = v141 - 1;
        if ( !v142 )
        {
          v146 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x30uLL);
          v12 = v146;
          if ( !v146 )
            return (unsigned int)-1073741801;
          memset(v146, 0, 0x30uLL);
          v13 = &DirectComposition::CHolographicExclusiveModeMarshaler::`vftable';
          goto LABEL_24;
        }
        v143 = v142 - 1;
        if ( v143 )
        {
          if ( v143 != 2 )
            return (unsigned int)-1073741811;
          v144 = Win32AllocPoolWithQuotaZInit(0x50uLL);
          v12 = (struct DirectComposition::CResourceMarshaler *)v144;
          if ( !v144 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v144 + 20) = 1LL;
          v128 = &DirectComposition::CHolographicInteropTextureMarshaler::`vftable';
        }
        else
        {
          v145 = Win32AllocPoolWithQuotaZInit(0x58uLL);
          v12 = (struct DirectComposition::CResourceMarshaler *)v145;
          if ( !v145 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v145 + 20) = 1LL;
          v128 = &DirectComposition::CHolographicExclusiveViewMarshaler::`vftable';
        }
      }
      else
      {
        if ( a2 == 59 )
        {
          v138 = Win32AllocPoolWithQuotaZInit(0xA8uLL);
          v12 = (struct DirectComposition::CResourceMarshaler *)v138;
          if ( !v138 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v138 + 20) = 1LL;
          *(_QWORD *)v138 = &DirectComposition::CGenericInkMarshaler::`vftable';
          *(_BYTE *)(v138 + 48) = 1;
          *(_QWORD *)(v138 + 72) = 1LL;
          *(_BYTE *)(v138 + 88) = 1;
          *(_QWORD *)(v138 + 112) = 1LL;
          goto LABEL_26;
        }
        if ( a2 > 0x31 )
        {
          v14 = a2 - 51;
          if ( !v14 )
          {
            v84 = Win32AllocPoolWithQuotaZInit(0x58uLL);
            v12 = (struct DirectComposition::CResourceMarshaler *)v84;
            if ( !v84 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v84 + 20) = 1LL;
            v13 = &DirectComposition::CEffectBrushMarshaler::`vftable';
            goto LABEL_25;
          }
          v15 = v14 - 1;
          if ( !v15 )
          {
            v100 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x38uLL);
            v12 = v100;
            if ( !v100 )
              return (unsigned int)-1073741801;
            memset(v100, 0, 0x38uLL);
            v13 = &DirectComposition::CEffectGroupMarshaler::`vftable';
            goto LABEL_24;
          }
          v16 = v15 - 1;
          if ( !v16 )
          {
            v137 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x60uLL);
            v12 = v137;
            if ( !v137 )
              return (unsigned int)-1073741801;
            memset(v137, 0, 0x60uLL);
            v13 = &DirectComposition::CEllipseGeometryMarshaler::`vftable';
            goto LABEL_24;
          }
          v17 = v16 - 1;
          if ( !v17 )
          {
            v18 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0xE8uLL);
            v12 = v18;
            if ( v18 )
            {
              memset(v18, 0, 0xE8uLL);
              v13 = &DirectComposition::CExpressionMarshaler::`vftable';
              goto LABEL_24;
            }
            return (unsigned int)-1073741801;
          }
          v134 = v17 - 2;
          if ( !v134 )
          {
            v136 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x68uLL);
            v12 = v136;
            if ( !v136 )
              return (unsigned int)-1073741801;
            memset(v136, 0, 0x68uLL);
            *(_QWORD *)((char *)v12 + 20) = 1LL;
            v13 = &DirectComposition::CFloodEffectMarshaler::`vftable';
            *((_QWORD *)v12 + 5) = 0LL;
            *((_DWORD *)v12 + 12) = 0;
            *((_QWORD *)v12 + 7) = 0LL;
            *((_QWORD *)v12 + 8) = 0LL;
            *((_QWORD *)v12 + 9) = 0LL;
            *((_DWORD *)v12 + 20) = 0;
            goto LABEL_25;
          }
          if ( v134 == 1 )
          {
            v135 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x68uLL);
            v12 = v135;
            if ( !v135 )
              return (unsigned int)-1073741801;
            memset(v135, 0, 0x68uLL);
            *(_QWORD *)((char *)v12 + 20) = 1LL;
            v13 = &DirectComposition::CGaussianBlurEffectMarshaler::`vftable';
            *((_QWORD *)v12 + 5) = 0LL;
            *((_DWORD *)v12 + 12) = 0;
            *((_QWORD *)v12 + 7) = 0LL;
            *((_QWORD *)v12 + 8) = 0LL;
            *((_QWORD *)v12 + 9) = 0LL;
            *((_DWORD *)v12 + 20) = 0;
            goto LABEL_25;
          }
          return (unsigned int)-1073741811;
        }
        if ( a2 == 49 )
        {
          v133 = Win32AllocPoolWithQuotaZInit(0x68uLL);
          v12 = (struct DirectComposition::CResourceMarshaler *)v133;
          if ( !v133 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v133 + 20) = 1LL;
          *(_QWORD *)v133 = &DirectComposition::CDropShadowMarshaler::`vftable';
          *(_DWORD *)(v133 + 80) = 1091567616;
          *(_QWORD *)(v133 + 96) = 1065353216LL;
          *(_DWORD *)(v133 + 76) = 1065353216;
          goto LABEL_26;
        }
        v104 = a2 - 39;
        if ( !v104 )
        {
          v132 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x40uLL);
          v12 = v132;
          if ( !v132 )
            return (unsigned int)-1073741801;
          memset(v132, 0, 0x40uLL);
          v13 = &DirectComposition::CContainerShapeMarshaler::`vftable';
          goto LABEL_24;
        }
        v105 = v104 - 3;
        if ( !v105 )
        {
          v131 = Win32AllocPoolWithQuotaZInit(0x130uLL);
          v12 = (struct DirectComposition::CResourceMarshaler *)v131;
          if ( !v131 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v131 + 20) = 1LL;
          v13 = &DirectComposition::CCursorVisualMarshaler::`vftable';
          goto LABEL_25;
        }
        v106 = v105 - 1;
        if ( !v106 )
        {
          v130 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x38uLL);
          v12 = v130;
          if ( !v130 )
            return (unsigned int)-1073741801;
          memset(v130, 0, 0x38uLL);
          v13 = &DirectComposition::CDataSourceReaderMarshaler::`vftable';
          goto LABEL_24;
        }
        v107 = v106 - 1;
        if ( v107 )
        {
          v108 = v107 - 1;
          if ( !v108 )
          {
            v109 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x38uLL);
            v12 = v109;
            if ( !v109 )
              return (unsigned int)-1073741801;
            memset(v109, 0, 0x38uLL);
            v13 = &DirectComposition::CRenderTargetGroupMarshaler::`vftable';
            goto LABEL_24;
          }
          if ( v108 != 1 )
            return (unsigned int)-1073741811;
          v127 = Win32AllocPoolWithQuotaZInit(0x60uLL);
          v12 = (struct DirectComposition::CResourceMarshaler *)v127;
          if ( !v127 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v127 + 20) = 1LL;
          v128 = &DirectComposition::CDesktopTargetMarshaler::`vftable';
        }
        else
        {
          v129 = Win32AllocPoolWithQuotaZInit(0x80uLL);
          v12 = (struct DirectComposition::CResourceMarshaler *)v129;
          if ( !v129 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v129 + 20) = 1LL;
          v128 = &DirectComposition::CRenderTargetTargetMarshaler::`vftable';
        }
      }
      *(_QWORD *)v12 = v128;
      *((_DWORD *)v12 + 4) |= 0x20u;
      goto LABEL_26;
    }
    v81 = (DirectComposition::CInteractionMarshaler *)Win32AllocPoolWithQuotaZInit(0x140uLL);
    if ( !v81 )
      return (unsigned int)-1073741801;
    v82 = DirectComposition::CInteractionMarshaler::CInteractionMarshaler(v81);
    goto LABEL_141;
  }
  if ( a2 <= 0x7C )
  {
    if ( a2 == 124 )
    {
      v181 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x60uLL);
      v12 = v181;
      if ( !v181 )
        return (unsigned int)-1073741801;
      memset(v181, 0, 0x60uLL);
      *(_QWORD *)((char *)v12 + 20) = 1LL;
      v13 = &DirectComposition::CSaturationEffectMarshaler::`vftable';
      *((_QWORD *)v12 + 5) = 0LL;
      *((_DWORD *)v12 + 12) = 0;
      *((_QWORD *)v12 + 7) = 0LL;
      *((_QWORD *)v12 + 8) = 0LL;
      *((_QWORD *)v12 + 9) = 0LL;
      *((_DWORD *)v12 + 20) = 0;
      goto LABEL_25;
    }
    if ( a2 > 0x66 )
    {
      if ( a2 <= 0x6F )
      {
        if ( a2 == 111 )
        {
          v174 = Win32AllocPoolWithQuotaZInit(0x60uLL);
          v12 = (struct DirectComposition::CResourceMarshaler *)v174;
          if ( !v174 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v174 + 20) = 1LL;
          v13 = &DirectComposition::CProjectedShadowSceneMarshaler::`vftable';
          goto LABEL_25;
        }
        v76 = a2 - 103;
        if ( !v76 )
        {
          v173 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x50uLL);
          v12 = v173;
          if ( !v173 )
            return (unsigned int)-1073741801;
          memset(v173, 0, 0x50uLL);
          v13 = &DirectComposition::CPlaneCaptureRenderTargetMarshaler::`vftable';
          goto LABEL_24;
        }
        v77 = v76 - 2;
        if ( !v77 )
        {
          v172 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x38uLL);
          v12 = v172;
          if ( !v172 )
            return (unsigned int)-1073741801;
          memset(v172, 0, 0x38uLL);
          v13 = &DirectComposition::CPrimitiveColorMarshaler::`vftable';
          goto LABEL_24;
        }
        v78 = v77 - 1;
        if ( !v78 )
        {
          v79 = Win32AllocPoolWithQuotaZInit(0xC0uLL);
          v12 = (struct DirectComposition::CResourceMarshaler *)v79;
          if ( !v79 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v79 + 20) = 1LL;
          *(_QWORD *)(v79 + 40) = 0LL;
          v13 = &DirectComposition::CPrimitiveGroupMarshaler::`vftable';
          goto LABEL_25;
        }
        v167 = v78 - 1;
        if ( !v167 )
        {
          v171 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0xC0uLL);
          v12 = v171;
          if ( !v171 )
            return (unsigned int)-1073741801;
          memset(v171, 0, 0xC0uLL);
          v13 = &DirectComposition::CPrimitiveGroupLayerClipMarshaler::`vftable';
          *((_QWORD *)v12 + 5) = 0LL;
          goto LABEL_24;
        }
        v168 = v167 - 2;
        if ( v168 )
        {
          if ( v168 != 1 )
            return (unsigned int)-1073741811;
          v169 = (_QWORD *)Win32AllocPoolWithQuotaZInit(0x50uLL);
          v12 = (struct DirectComposition::CResourceMarshaler *)v169;
          if ( !v169 )
            return (unsigned int)-1073741801;
          *(_QWORD *)((char *)v169 + 20) = 1LL;
          *v169 = &DirectComposition::CProjectedShadowReceiverMarshaler::`vftable';
          v169[8] = 0LL;
        }
        else
        {
          v170 = Win32AllocPoolWithQuotaZInit(0x68uLL);
          v12 = (struct DirectComposition::CResourceMarshaler *)v170;
          if ( !v170 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v170 + 20) = 1LL;
          *(_QWORD *)v170 = &DirectComposition::CProjectedShadowCasterMarshaler::`vftable';
          *(_DWORD *)(v170 + 56) = 1091567616;
          *(_BYTE *)(v170 + 72) = 0;
          *(_QWORD *)(v170 + 88) = 1065353216LL;
        }
      }
      else
      {
        v28 = a2 - 113;
        if ( v28 )
        {
          v52 = v28 - 1;
          if ( !v52 )
          {
            v180 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x50uLL);
            v12 = v180;
            if ( !v180 )
              return (unsigned int)-1073741801;
            memset(v180, 0, 0x50uLL);
            v13 = &DirectComposition::CSharedReadCaptureControllerMarshaler::`vftable';
            *((_BYTE *)v12 + 56) = 1;
            goto LABEL_24;
          }
          v53 = v52 - 1;
          if ( !v53 )
          {
            v54 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x88uLL);
            v12 = v54;
            if ( !v54 )
              return (unsigned int)-1073741801;
            memset(v54, 0, 0x88uLL);
            v13 = &DirectComposition::CRectangleClipMarshaler::`vftable';
            goto LABEL_24;
          }
          v175 = v53 - 3;
          if ( !v175 )
          {
            v179 = Win32AllocPoolWithQuotaZInit(0x50uLL);
            v12 = (struct DirectComposition::CResourceMarshaler *)v179;
            if ( !v179 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v179 + 20) = 1LL;
            v13 = &DirectComposition::CRemotingRenderTargetMarshaler::`vftable';
            goto LABEL_25;
          }
          v176 = v175 - 4;
          if ( !v176 )
          {
            v178 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x48uLL);
            v12 = v178;
            if ( !v178 )
              return (unsigned int)-1073741801;
            memset(v178, 0, 0x48uLL);
            v13 = &DirectComposition::CRotateTransformMarshaler::`vftable';
            goto LABEL_24;
          }
          if ( v176 == 1 )
          {
            v177 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x58uLL);
            v12 = v177;
            if ( !v177 )
              return (unsigned int)-1073741801;
            memset(v177, 0, 0x58uLL);
            v13 = &DirectComposition::CRotateTransform3DMarshaler::`vftable';
            goto LABEL_24;
          }
          return (unsigned int)-1073741811;
        }
        v29 = (_QWORD *)Win32AllocPoolWithQuotaZInit(0x60uLL);
        v12 = (struct DirectComposition::CResourceMarshaler *)v29;
        if ( !v29 )
          return (unsigned int)-1073741801;
        *(_QWORD *)((char *)v29 + 20) = 1LL;
        *v29 = &DirectComposition::CPropertySetMarshaler::`vftable';
        v29[7] = 0LL;
        v29[8] = 0LL;
        v29[9] = 0LL;
        v29[10] = 0LL;
      }
      goto LABEL_26;
    }
    if ( a2 == 102 )
    {
      v166 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x60uLL);
      v12 = v166;
      if ( !v166 )
        return (unsigned int)-1073741801;
      memset(v166, 0, 0x60uLL);
      v13 = &DirectComposition::CPathGeometryMarshaler::`vftable';
      goto LABEL_24;
    }
    if ( a2 > 0x5C )
    {
      v37 = a2 - 93;
      if ( !v37 )
      {
        v83 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x70uLL);
        v12 = v83;
        if ( !v83 )
          return (unsigned int)-1073741801;
        memset(v83, 0, 0x70uLL);
        v13 = &DirectComposition::CManipulationTransformMarshaler::`vftable';
        goto LABEL_24;
      }
      v38 = v37 - 1;
      if ( !v38 )
      {
        v39 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x48uLL);
        v12 = v39;
        if ( !v39 )
          return (unsigned int)-1073741801;
        memset(v39, 0, 0x48uLL);
        v13 = &DirectComposition::CMaskBrushMarshaler::`vftable';
        goto LABEL_24;
      }
      v56 = v38 - 2;
      if ( !v56 )
      {
        v165 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x50uLL);
        v12 = v165;
        if ( !v165 )
          return (unsigned int)-1073741801;
        memset(v165, 0, 0x50uLL);
        v13 = &DirectComposition::CMatrixTransformMarshaler::`vftable';
        goto LABEL_24;
      }
      v57 = v56 - 1;
      if ( !v57 )
      {
        v164 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x68uLL);
        v12 = v164;
        if ( !v164 )
          return (unsigned int)-1073741801;
        memset(v164, 0, 0x68uLL);
        v13 = &DirectComposition::CMatrixTransform3DMarshaler::`vftable';
        goto LABEL_24;
      }
      v58 = v57 - 2;
      if ( v58 )
      {
        if ( v58 == 1 )
        {
          v59 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x68uLL);
          v12 = v59;
          if ( !v59 )
            return (unsigned int)-1073741801;
          memset(v59, 0, 0x68uLL);
          v13 = &DirectComposition::CNineGridBrushMarshaler::`vftable';
          goto LABEL_24;
        }
        return (unsigned int)-1073741811;
      }
      v163 = (DirectComposition::CNaturalAnimationMarshaler *)Win32AllocPoolWithQuotaZInit(0xC0uLL);
      if ( !v163 )
        return (unsigned int)-1073741801;
      v82 = (DirectComposition::CInteractionMarshaler *)DirectComposition::CNaturalAnimationMarshaler::CNaturalAnimationMarshaler(v163);
    }
    else
    {
      if ( a2 == 92 )
      {
        v162 = Win32AllocPoolWithQuotaZInit(0x2B8uLL);
        v12 = (struct DirectComposition::CResourceMarshaler *)v162;
        if ( !v162 )
          return (unsigned int)-1073741801;
        *(_BYTE *)(v162 + 92) &= 0xF8u;
        *(_QWORD *)(v162 + 20) = 1LL;
        *(_QWORD *)v162 = &DirectComposition::CManipulationMarshaler::`vftable';
        *(_QWORD *)(v162 + 96) = 0LL;
        *(_DWORD *)(v162 + 104) = 0;
        *(_QWORD *)(v162 + 112) = 0LL;
        *(_QWORD *)(v162 + 120) = 0LL;
        goto LABEL_26;
      }
      v34 = a2 - 83;
      if ( v34 )
      {
        v35 = v34 - 1;
        if ( v35 )
        {
          v49 = v35 - 1;
          if ( !v49 )
          {
            v60 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x130uLL);
            v12 = v60;
            if ( !v60 )
              return (unsigned int)-1073741801;
            memset(v60, 0, 0x130uLL);
            v13 = &DirectComposition::CLayerVisualMarshaler::`vftable';
            goto LABEL_24;
          }
          v50 = v49 - 2;
          if ( !v50 )
          {
            v51 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x70uLL);
            v12 = v51;
            if ( !v51 )
              return (unsigned int)-1073741801;
            memset(v51, 0, 0x70uLL);
            v13 = &DirectComposition::CLinearGradientBrushMarshaler::`vftable';
            *((_QWORD *)v12 + 7) = 2LL;
            *((_DWORD *)v12 + 16) = 1;
            *((_QWORD *)v12 + 9) = 0LL;
            *((_QWORD *)v12 + 10) = 0LL;
            *((_QWORD *)v12 + 11) = 0LL;
            goto LABEL_24;
          }
          v158 = v50 - 2;
          if ( !v158 )
          {
            v160 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x80uLL);
            v12 = v160;
            if ( !v160 )
              return (unsigned int)-1073741801;
            memset(v160, 0, 0x80uLL);
            *(_QWORD *)((char *)v12 + 20) = 1LL;
            v13 = &DirectComposition::CLinearTransferEffectMarshaler::`vftable';
            *((_QWORD *)v12 + 5) = 0LL;
            *((_DWORD *)v12 + 12) = 0;
            *((_QWORD *)v12 + 7) = 0LL;
            *((_QWORD *)v12 + 8) = 0LL;
            *((_QWORD *)v12 + 9) = 0LL;
            *((_DWORD *)v12 + 20) = 0;
            goto LABEL_25;
          }
          if ( v158 == 1 )
          {
            v159 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x60uLL);
            v12 = v159;
            if ( !v159 )
              return (unsigned int)-1073741801;
            memset(v159, 0, 0x60uLL);
            v13 = &DirectComposition::CLineGeometryMarshaler::`vftable';
            goto LABEL_24;
          }
          return (unsigned int)-1073741811;
        }
        v36 = Win32AllocPoolWithQuotaZInit(0x138uLL);
        v12 = (struct DirectComposition::CResourceMarshaler *)v36;
        if ( !v36 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v36 + 20) = 1LL;
        *(_QWORD *)v36 = &DirectComposition::CKeyframeAnimationMarshaler::`vftable';
        *(_DWORD *)(v36 + 220) = 1065353216;
        *(_DWORD *)(v36 + 304) = 1065353216;
        goto LABEL_26;
      }
      v161 = (DirectComposition::CInteractionTrackerMarshaler *)Win32AllocPoolWithQuotaZInit(0x188uLL);
      if ( !v161 )
        return (unsigned int)-1073741801;
      v82 = (DirectComposition::CInteractionMarshaler *)DirectComposition::CInteractionTrackerMarshaler::CInteractionTrackerMarshaler(v161);
    }
LABEL_141:
    v12 = v82;
    goto LABEL_26;
  }
  if ( a2 > 0x8C )
  {
    if ( a2 <= 0x97 )
    {
      if ( a2 == 151 )
      {
        v33 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x118uLL);
        v12 = v33;
        if ( !v33 )
          return (unsigned int)-1073741801;
        memset(v33, 0, 0x118uLL);
        v13 = &DirectComposition::CVisualMarshaler::`vftable';
        goto LABEL_24;
      }
      v196 = a2 - 144;
      if ( !v196 )
      {
        v206 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x48uLL);
        v12 = v206;
        if ( !v206 )
          return (unsigned int)-1073741801;
        memset(v206, 0, 0x48uLL);
        v13 = &DirectComposition::CTransform3DGroupMarshaler::`vftable';
        goto LABEL_24;
      }
      v197 = v196 - 1;
      if ( !v197 )
      {
        v205 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x48uLL);
        v12 = v205;
        if ( !v205 )
          return (unsigned int)-1073741801;
        memset(v205, 0, 0x48uLL);
        v13 = &DirectComposition::CTransformGroupMarshaler::`vftable';
        goto LABEL_24;
      }
      v198 = v197 - 1;
      if ( !v198 )
      {
        v204 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x40uLL);
        v12 = v204;
        if ( !v204 )
          return (unsigned int)-1073741801;
        memset(v204, 0, 0x40uLL);
        v13 = &DirectComposition::CTranslateTransformMarshaler::`vftable';
        goto LABEL_24;
      }
      v199 = v198 - 1;
      if ( !v199 )
      {
        v203 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x48uLL);
        v12 = v203;
        if ( !v203 )
          return (unsigned int)-1073741801;
        memset(v203, 0, 0x48uLL);
        v13 = &DirectComposition::CTranslateTransform3DMarshaler::`vftable';
        goto LABEL_24;
      }
      v200 = v199 - 1;
      if ( !v200 )
      {
        v202 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x80uLL);
        v12 = v202;
        if ( !v202 )
          return (unsigned int)-1073741801;
        memset(v202, 0, 0x80uLL);
        *(_QWORD *)((char *)v12 + 20) = 1LL;
        v13 = &DirectComposition::CTurbulenceEffectMarshaler::`vftable';
        *((_QWORD *)v12 + 5) = 0LL;
        *((_DWORD *)v12 + 12) = 0;
        *((_QWORD *)v12 + 7) = 0LL;
        *((_QWORD *)v12 + 8) = 0LL;
        *((_QWORD *)v12 + 9) = 0LL;
        *((_DWORD *)v12 + 20) = 0;
        goto LABEL_25;
      }
      if ( v200 == 2 )
      {
        v201 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x48uLL);
        v12 = v201;
        if ( !v201 )
          return (unsigned int)-1073741801;
        memset(v201, 0, 0x48uLL);
        v13 = &DirectComposition::CViewBoxMarshaler::`vftable';
        goto LABEL_24;
      }
      return (unsigned int)-1073741811;
    }
    v73 = a2 - 152;
    if ( v73 )
    {
      v74 = v73 - 3;
      if ( !v74 )
      {
        v75 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x30uLL);
        v12 = v75;
        if ( !v75 )
          return (unsigned int)-1073741801;
        memset(v75, 0, 0x30uLL);
        v13 = &DirectComposition::CVisualReferenceControllerMarshaler::`vftable';
        goto LABEL_24;
      }
      v91 = v74 - 2;
      if ( !v91 )
      {
        v92 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x38uLL);
        v12 = v92;
        if ( !v92 )
          return (unsigned int)-1073741801;
        memset(v92, 0, 0x38uLL);
        v13 = &DirectComposition::CWindowBackdropBrushMarshaler::`vftable';
        goto LABEL_24;
      }
      v207 = v91 - 2;
      if ( !v207 )
      {
        v209 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x50uLL);
        v12 = v209;
        if ( !v209 )
          return (unsigned int)-1073741801;
        memset(v209, 0, 0x50uLL);
        v13 = &DirectComposition::CSharedWriteCaptureControllerMarshaler::`vftable';
        *((_BYTE *)v12 + 56) = 1;
        goto LABEL_24;
      }
      if ( v207 == 1 )
      {
        v208 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x40uLL);
        v12 = v208;
        if ( !v208 )
          return (unsigned int)-1073741801;
        memset(v208, 0, 0x40uLL);
        v13 = &DirectComposition::CYCbCrSurfaceMarshaler::`vftable';
        goto LABEL_24;
      }
      return (unsigned int)-1073741811;
    }
    v89 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x60uLL);
    v12 = v89;
    if ( v89 )
    {
      memset(v89, 0, 0x60uLL);
      v13 = &DirectComposition::CVisualCaptureMarshaler::`vftable';
      goto LABEL_24;
    }
    v12 = 0LL;
  }
  else
  {
    if ( a2 == 140 )
    {
      v195 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0xA0uLL);
      v12 = v195;
      if ( !v195 )
        return (unsigned int)-1073741801;
      memset(v195, 0, 0xA0uLL);
      *(_QWORD *)((char *)v12 + 20) = 1LL;
      v13 = &DirectComposition::CTableTransferEffectMarshaler::`vftable';
      *((_QWORD *)v12 + 5) = 0LL;
      *((_DWORD *)v12 + 12) = 0;
      *((_QWORD *)v12 + 7) = 0LL;
      *((_QWORD *)v12 + 8) = 0LL;
      *((_QWORD *)v12 + 9) = 0LL;
      *((_DWORD *)v12 + 20) = 0;
      goto LABEL_25;
    }
    if ( a2 > 0x83 )
    {
      v6 = a2 - 133;
      if ( !v6 )
      {
        v194 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x48uLL);
        v12 = v194;
        if ( !v194 )
          return (unsigned int)-1073741801;
        memset(v194, 0, 0x48uLL);
        v13 = &DirectComposition::CSkewTransformMarshaler::`vftable';
        goto LABEL_24;
      }
      v7 = v6 - 1;
      if ( !v7 )
      {
        v193 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x80uLL);
        v12 = v193;
        if ( !v193 )
          return (unsigned int)-1073741801;
        memset(v193, 0, 0x80uLL);
        v13 = &DirectComposition::CSnapshotMarshaler::`vftable';
        goto LABEL_24;
      }
      v8 = v7 - 2;
      if ( !v8 )
      {
        v192 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x120uLL);
        v12 = v192;
        if ( !v192 )
          return (unsigned int)-1073741801;
        memset(v192, 0, 0x120uLL);
        v13 = &DirectComposition::CSpatialVisualMarshaler::`vftable';
        goto LABEL_24;
      }
      v9 = v8 - 1;
      if ( !v9 )
      {
        v191 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x78uLL);
        v12 = v191;
        if ( !v191 )
          return (unsigned int)-1073741801;
        memset(v191, 0, 0x78uLL);
        v13 = &DirectComposition::CSpriteShapeMarshaler::`vftable';
        goto LABEL_24;
      }
      v10 = v9 - 1;
      if ( !v10 )
      {
        v11 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x128uLL);
        v12 = v11;
        if ( v11 )
        {
          memset(v11, 0, 0x128uLL);
          v13 = &DirectComposition::CSpriteVisualMarshaler::`vftable';
LABEL_24:
          *(_QWORD *)((char *)v12 + 20) = 1LL;
LABEL_25:
          *(_QWORD *)v12 = v13;
          goto LABEL_26;
        }
        return (unsigned int)-1073741801;
      }
      if ( v10 == 1 )
      {
        v40 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x68uLL);
        v12 = v40;
        if ( !v40 )
          return (unsigned int)-1073741801;
        memset(v40, 0, 0x68uLL);
        v13 = &DirectComposition::CSurfaceBrushMarshaler::`vftable';
        goto LABEL_24;
      }
      return (unsigned int)-1073741811;
    }
    if ( a2 == 131 )
    {
      v80 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x38uLL);
      v12 = v80;
      if ( !v80 )
        return (unsigned int)-1073741801;
      memset(v80, 0, 0x38uLL);
      v13 = &DirectComposition::CSharedSectionMarshaler::`vftable';
      goto LABEL_24;
    }
    v86 = a2 - 125;
    if ( v86 )
    {
      v87 = v86 - 1;
      if ( !v87 )
      {
        v88 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x48uLL);
        v12 = v88;
        if ( !v88 )
          return (unsigned int)-1073741801;
        memset(v88, 0, 0x48uLL);
        v13 = &DirectComposition::CScaleTransformMarshaler::`vftable';
        goto LABEL_24;
      }
      v182 = v87 - 1;
      if ( !v182 )
      {
        v188 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x50uLL);
        v12 = v188;
        if ( !v188 )
          return (unsigned int)-1073741801;
        memset(v188, 0, 0x50uLL);
        v13 = &DirectComposition::CScaleTransform3DMarshaler::`vftable';
        goto LABEL_24;
      }
      v183 = v182 - 1;
      if ( !v183 )
      {
        v187 = Win32AllocPoolWithQuotaZInit(0x30uLL);
        v12 = (struct DirectComposition::CResourceMarshaler *)v187;
        if ( !v187 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v187 + 20) = 1LL;
        v13 = &DirectComposition::CScreenCursorMarshaler::`vftable';
        goto LABEL_25;
      }
      v184 = v183 - 1;
      if ( !v184 )
      {
        v186 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x70uLL);
        v12 = v186;
        if ( !v186 )
          return (unsigned int)-1073741801;
        memset(v186, 0, 0x70uLL);
        *(_QWORD *)((char *)v12 + 20) = 1LL;
        v13 = &DirectComposition::CShadowEffectMarshaler::`vftable';
        *((_QWORD *)v12 + 5) = 0LL;
        *((_DWORD *)v12 + 12) = 0;
        *((_QWORD *)v12 + 7) = 0LL;
        *((_QWORD *)v12 + 8) = 0LL;
        *((_QWORD *)v12 + 9) = 0LL;
        *((_DWORD *)v12 + 20) = 0;
        goto LABEL_25;
      }
      if ( v184 == 1 )
      {
        v185 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x130uLL);
        v12 = v185;
        if ( !v185 )
          return (unsigned int)-1073741801;
        memset(v185, 0, 0x130uLL);
        v13 = &DirectComposition::CShapeVisualMarshaler::`vftable';
        goto LABEL_24;
      }
      return (unsigned int)-1073741811;
    }
    v189 = (_QWORD *)Win32AllocPoolWithQuotaZInit(0x40uLL);
    v190 = v189;
    if ( v189 )
    {
      memset(v189, 0, 0x40uLL);
      *(_QWORD *)((char *)v190 + 36) = 1LL;
      *v190 = &DirectComposition::CScalarMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
      v190[2] = &DirectComposition::CScalarMarshaler::`vftable'{for `DirectComposition::CResourceMarshaler'};
    }
    else
    {
      v190 = 0LL;
    }
    v12 = (struct DirectComposition::CResourceMarshaler *)((unsigned __int64)(v190 + 2) & -(__int64)(v190 != 0LL));
  }
LABEL_26:
  if ( !v12 )
    return (unsigned int)-1073741801;
  v19 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v12 + 56LL))(v12) )
    v19 = DirectComposition::CConnection::AcquireShellResourceAccess(*((DirectComposition::CConnection **)this + 5));
  v20 = *(_QWORD *)v12;
  v21 = v12;
  if ( v19 < 0 )
    goto LABEL_379;
  v19 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, char *))(v20 + 8))(
          v12,
          (char *)this + 472);
  if ( v19 < 0 )
  {
LABEL_378:
    v20 = *(_QWORD *)v12;
    v21 = v12;
LABEL_379:
    (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(v20 + 104))(v21, 1LL);
    return (unsigned int)v19;
  }
  v22 = (_QWORD *)((char *)this + 112);
  v19 = 0;
  v23 = *((_QWORD *)this + 17);
  if ( *((_QWORD *)this + 19) >= v23 )
  {
    v24 = *((_QWORD *)this + 17);
    v19 = DirectComposition::CDCompDynamicArrayBase::Grow(
            (DirectComposition::CApplicationChannel *)((char *)this + 112),
            1LL,
            0x746C4344u);
    if ( v19 < 0 )
      goto LABEL_39;
  }
  else
  {
    v24 = *((_QWORD *)this + 20);
    for ( i = v24 * *((_QWORD *)this + 18); *(_QWORD *)(i + *v22); i = v24 * *((_QWORD *)this + 18) )
      v24 = (v24 + 1) % v23;
    *((_QWORD *)this + 20) = (v24 + 1) % v23;
  }
  v26 = *((_QWORD *)this + 18);
  Src = v12;
  memmove((void *)(*v22 + v24 * v26), &Src, v26);
  *((_DWORD *)v12 + 6) = v24 + 1;
  ++*((_QWORD *)this + 19);
  if ( *((int *)this + 6) <= 2 )
  {
    *((_QWORD *)v12 + 1) = *((_QWORD *)this + 50);
    *((_QWORD *)this + 50) = v12;
  }
LABEL_39:
  if ( v19 < 0 )
    goto LABEL_378;
  if ( v5 )
    DirectComposition::CApplicationChannel::AddAnimationTimeListEntry(
      this,
      *((struct DirectComposition::CAnimationTimeList **)v5 + 9));
  *a3 = v12;
  return (unsigned int)v19;
}
