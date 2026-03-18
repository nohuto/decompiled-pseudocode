/*
 * XREFs of ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001B3B4
 * Callers:
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C0014A94 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 *     ?SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0016E80 (-SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_.c)
 *     ?SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0016F84 (-SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEB.c)
 *     ?EnsureInteraction@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@_NPEAPEAVCInteractionMarshaler@2@@Z @ 0x1C0017060 (-EnsureInteraction@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@_NPEAPEAVC.c)
 *     ?CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z @ 0x1C001BFA0 (-CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z.c)
 * Callees:
 *     ??0CInteractionMarshaler@DirectComposition@@QEAA@XZ @ 0x1C000ED38 (--0CInteractionMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ?AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ @ 0x1C0014834 (-AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ.c)
 *     ?AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@@Z @ 0x1C0019820 (-AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@.c)
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z @ 0x1C001DEA8 (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001DF70 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ??0CInteractionTrackerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0144D78 (--0CInteractionTrackerMarshaler@DirectComposition@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateInternalResource(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        struct DirectComposition::CResourceMarshaler **a3)
{
  char *v5; // rsi
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  void *v10; // rax
  __int64 v11; // rbx
  void **v12; // rax
  int inserted; // edi
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v17; // edx
  void *v18; // rax
  unsigned int v19; // edx
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // edx
  void *v23; // rax
  unsigned int v24; // edx
  void *v25; // rax
  unsigned int v26; // edx
  unsigned int v27; // edx
  unsigned int v28; // edx
  __int64 v29; // rax
  unsigned int v30; // edx
  unsigned int v31; // edx
  unsigned int v32; // edx
  void *v33; // rax
  unsigned int v34; // edx
  void *v35; // rax
  __int64 v36; // rax
  void *v37; // rax
  unsigned int v38; // edx
  unsigned int v39; // edx
  unsigned int v40; // edx
  unsigned int v41; // edx
  unsigned int v42; // edx
  unsigned int v43; // edx
  unsigned int v44; // edx
  void *v45; // rax
  __int64 v46; // rax
  void *v47; // rax
  char *v48; // rax
  _QWORD *v49; // rcx
  __int64 v50; // rdx
  _QWORD *v51; // rax
  void *v52; // rax
  unsigned int v53; // edx
  void *v54; // rax
  unsigned int v55; // edx
  void *v56; // rax
  unsigned int v57; // edx
  unsigned int v58; // edx
  unsigned int v59; // edx
  unsigned int v60; // edx
  unsigned int v61; // edx
  unsigned int v62; // edx
  void *v63; // rax
  DirectComposition::CInteractionMarshaler *v64; // rax
  DirectComposition::CInteractionMarshaler *v65; // rax
  __int64 v66; // rax
  void *v67; // rax
  void *v68; // rax
  unsigned int v69; // edx
  unsigned int v70; // edx
  __int64 v71; // rax
  void *v72; // rax
  unsigned int v73; // edx
  void *v74; // rax
  unsigned int v75; // edx
  void *v76; // rax
  __int64 v77; // rax
  unsigned int v78; // edx
  unsigned int v79; // edx
  void *v80; // rax
  void *v81; // rax
  void *v82; // rax
  unsigned int v83; // edx
  unsigned int v84; // edx
  void *v85; // rax
  void *v86; // rax
  void *v87; // rax
  __int64 v88; // rax
  void **v89; // rax
  unsigned int v90; // edx
  __int64 v91; // rax
  void *v92; // rax
  unsigned int v93; // edx
  __int64 v94; // rax
  unsigned int v95; // edx
  unsigned int v96; // edx
  unsigned int v97; // edx
  void *v98; // rax
  void *v99; // rax
  void *v100; // rax
  void *v101; // rax
  void *v102; // rax
  unsigned int v103; // edx
  unsigned int v104; // edx
  unsigned int v105; // edx
  void *v106; // rax
  void *v107; // rax
  void *v108; // rax
  void *v109; // rax
  void *v110; // rax
  unsigned int v111; // edx
  unsigned int v112; // edx
  unsigned int v113; // edx
  unsigned int v114; // edx
  void *v115; // rax
  void *v116; // rax
  void *v117; // rax
  void *v118; // rax
  void *v119; // rax
  void *v120; // rax
  void *v121; // rax
  void *v122; // rax
  __int64 v123; // rax
  unsigned int v124; // edx
  void *v125; // rax
  void *v126; // rax
  __int64 v127; // rax
  void *v128; // rax
  void *v129; // rax
  void *v130; // rax
  void *v131; // rax
  __int64 v132; // rax
  void *v133; // rax
  void *v134; // rax
  unsigned int v135; // edx
  void *v136; // rax
  void *v137; // rax
  void *v138; // rax
  _QWORD *v139; // rax
  _QWORD *v140; // rbx
  void *v141; // rax
  __int64 v142; // rax
  __int64 v143; // rax
  void *v144; // rax
  __int64 v145; // rax
  DirectComposition::CInteractionTrackerMarshaler *v146; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  unsigned int v149; // edx
  unsigned int v150; // edx
  unsigned int v151; // edx
  unsigned int v152; // edx
  unsigned int v153; // edx
  void *v154; // rax
  void *v155; // rax
  void *v156; // rax
  void *v157; // rax
  void *v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax

  v5 = 0LL;
  if ( a2 <= 0x45 )
  {
    if ( a2 == 69 )
    {
      v67 = (void *)Win32AllocPoolWithQuotaZInit(0x70uLL);
      v11 = (__int64)v67;
      if ( !v67 )
        return (unsigned int)-1073741801;
      memset(v67, 0, 0x70uLL);
      v12 = &DirectComposition::CManipulationTransformMarshaler::`vftable';
      *(_QWORD *)(v11 + 20) = 1LL;
      goto LABEL_13;
    }
    if ( a2 > 0x1E )
    {
      if ( a2 > 0x2E )
      {
        v57 = a2 - 47;
        if ( v57 )
        {
          v58 = v57 - 2;
          if ( v58 )
          {
            v59 = v58 - 12;
            if ( v59 )
            {
              v60 = v59 - 2;
              if ( v60 )
              {
                v61 = v60 - 1;
                if ( v61 )
                {
                  v62 = v61 - 1;
                  if ( v62 )
                  {
                    v83 = v62 - 1;
                    if ( v83 )
                    {
                      v84 = v83 - 1;
                      if ( v84 )
                      {
                        if ( v84 != 1 )
                          return (unsigned int)-1073741811;
                        v85 = (void *)Win32AllocPoolWithQuotaZInit(0x50uLL);
                        v11 = (__int64)v85;
                        if ( !v85 )
                          return (unsigned int)-1073741801;
                        memset(v85, 0, 0x50uLL);
                        v12 = &DirectComposition::CMatrixTransformMarshaler::`vftable';
                        *(_QWORD *)(v11 + 20) = 1LL;
                      }
                      else
                      {
                        v128 = (void *)Win32AllocPoolWithQuotaZInit(0x48uLL);
                        v11 = (__int64)v128;
                        if ( !v128 )
                          return (unsigned int)-1073741801;
                        memset(v128, 0, 0x48uLL);
                        v12 = &DirectComposition::CSkewTransformMarshaler::`vftable';
                        *(_QWORD *)(v11 + 20) = 1LL;
                      }
                    }
                    else
                    {
                      v129 = (void *)Win32AllocPoolWithQuotaZInit(0x48uLL);
                      v11 = (__int64)v129;
                      if ( !v129 )
                        return (unsigned int)-1073741801;
                      memset(v129, 0, 0x48uLL);
                      v12 = &DirectComposition::CRotateTransformMarshaler::`vftable';
                      *(_QWORD *)(v11 + 20) = 1LL;
                    }
                  }
                  else
                  {
                    v63 = (void *)Win32AllocPoolWithQuotaZInit(0x48uLL);
                    v11 = (__int64)v63;
                    if ( !v63 )
                      return (unsigned int)-1073741801;
                    memset(v63, 0, 0x48uLL);
                    v12 = &DirectComposition::CScaleTransformMarshaler::`vftable';
                    *(_QWORD *)(v11 + 20) = 1LL;
                  }
                }
                else
                {
                  v72 = (void *)Win32AllocPoolWithQuotaZInit(0x40uLL);
                  v11 = (__int64)v72;
                  if ( !v72 )
                    return (unsigned int)-1073741801;
                  memset(v72, 0, 0x40uLL);
                  v12 = &DirectComposition::CTranslateTransformMarshaler::`vftable';
                  *(_QWORD *)(v11 + 20) = 1LL;
                }
              }
              else
              {
                v87 = (void *)Win32AllocPoolWithQuotaZInit(0x48uLL);
                v11 = (__int64)v87;
                if ( !v87 )
                  return (unsigned int)-1073741801;
                memset(v87, 0, 0x48uLL);
                v12 = &DirectComposition::CTransformGroupMarshaler::`vftable';
                *(_QWORD *)(v11 + 20) = 1LL;
              }
            }
            else
            {
              v130 = (void *)Win32AllocPoolWithQuotaZInit(0x58uLL);
              v11 = (__int64)v130;
              if ( !v130 )
                return (unsigned int)-1073741801;
              memset(v130, 0, 0x58uLL);
              v12 = &DirectComposition::CVisualSurfaceMarshaler::`vftable';
              *(_QWORD *)(v11 + 20) = 1LL;
            }
          }
          else
          {
            v131 = (void *)Win32AllocPoolWithQuotaZInit(0x30uLL);
            v11 = (__int64)v131;
            if ( !v131 )
              return (unsigned int)-1073741801;
            memset(v131, 0, 0x30uLL);
            v12 = &DirectComposition::CHolographicViewerContentMarshaler::`vftable';
            *(_QWORD *)(v11 + 20) = 1LL;
          }
          goto LABEL_13;
        }
        v132 = Win32AllocPoolWithQuotaZInit(0x50uLL);
        v11 = v132;
        if ( !v132 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v132 + 20) = 1LL;
        v89 = &DirectComposition::CHolographicInteropTextureMarshaler::`vftable';
      }
      else if ( a2 == 46 )
      {
        v127 = Win32AllocPoolWithQuotaZInit(0x40uLL);
        v11 = v127;
        if ( !v127 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v127 + 20) = 1LL;
        v89 = &DirectComposition::CHolographicExclusiveViewMarshaler::`vftable';
      }
      else
      {
        if ( a2 > 0x29 )
        {
          v78 = a2 - 42;
          if ( v78 )
          {
            v79 = v78 - 1;
            if ( v79 )
            {
              v124 = v79 - 1;
              if ( v124 )
              {
                if ( v124 != 1 )
                  return (unsigned int)-1073741811;
                v125 = (void *)Win32AllocPoolWithQuotaZInit(0x30uLL);
                v11 = (__int64)v125;
                if ( !v125 )
                  return (unsigned int)-1073741801;
                memset(v125, 0, 0x30uLL);
                v12 = &DirectComposition::CHolographicExclusiveModeMarshaler::`vftable';
                *(_QWORD *)(v11 + 20) = 1LL;
              }
              else
              {
                v126 = (void *)Win32AllocPoolWithQuotaZInit(0x78uLL);
                v11 = (__int64)v126;
                if ( !v126 )
                  return (unsigned int)-1073741801;
                memset(v126, 0, 0x78uLL);
                v12 = &DirectComposition::CHolographicDisplayMarshaler::`vftable';
                *(_QWORD *)(v11 + 20) = 1LL;
              }
            }
            else
            {
              v80 = (void *)Win32AllocPoolWithQuotaZInit(0x58uLL);
              v11 = (__int64)v80;
              if ( !v80 )
                return (unsigned int)-1073741801;
              memset(v80, 0, 0x58uLL);
              v12 = &DirectComposition::CVisualCaptureMarshaler::`vftable';
              *(_QWORD *)(v11 + 20) = 1LL;
            }
          }
          else
          {
            v82 = (void *)Win32AllocPoolWithQuotaZInit(0x38uLL);
            v11 = (__int64)v82;
            if ( !v82 )
              return (unsigned int)-1073741801;
            memset(v82, 0, 0x38uLL);
            v12 = &DirectComposition::CRenderTargetGroupMarshaler::`vftable';
            *(_QWORD *)(v11 + 20) = 1LL;
          }
          goto LABEL_13;
        }
        if ( a2 == 41 )
        {
          v88 = Win32AllocPoolWithQuotaZInit(0x78uLL);
          v11 = v88;
          if ( !v88 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v88 + 20) = 1LL;
          v89 = &DirectComposition::CRenderTargetTargetMarshaler::`vftable';
        }
        else
        {
          v17 = a2 - 31;
          if ( !v17 )
          {
            v18 = (void *)Win32AllocPoolWithQuotaZInit(0xF0uLL);
            v11 = (__int64)v18;
            if ( !v18 )
              return (unsigned int)-1073741801;
            memset(v18, 0, 0xF0uLL);
            v12 = &DirectComposition::CVisualMarshaler::`vftable';
            *(_QWORD *)(v11 + 20) = 1LL;
            goto LABEL_13;
          }
          v24 = v17 - 1;
          if ( !v24 )
          {
            v25 = (void *)Win32AllocPoolWithQuotaZInit(0x100uLL);
            v11 = (__int64)v25;
            if ( !v25 )
              return (unsigned int)-1073741801;
            memset(v25, 0, 0x100uLL);
            v12 = &DirectComposition::CSpriteVisualMarshaler::`vftable';
            *(_QWORD *)(v11 + 20) = 1LL;
            goto LABEL_13;
          }
          v55 = v24 - 1;
          if ( !v55 )
          {
            v56 = (void *)Win32AllocPoolWithQuotaZInit(0x108uLL);
            v11 = (__int64)v56;
            if ( !v56 )
              return (unsigned int)-1073741801;
            memset(v56, 0, 0x108uLL);
            v12 = &DirectComposition::CLayerVisualMarshaler::`vftable';
            *(_QWORD *)(v11 + 20) = 1LL;
            goto LABEL_13;
          }
          v90 = v55 - 6;
          if ( v90 )
          {
            if ( v90 != 1 )
              return (unsigned int)-1073741811;
            v123 = Win32AllocPoolWithQuotaZInit(0x48uLL);
            v11 = v123;
            if ( !v123 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v123 + 20) = 1LL;
            v89 = &DirectComposition::CRemotingRenderTargetMarshaler::`vftable';
          }
          else
          {
            v91 = Win32AllocPoolWithQuotaZInit(0x48uLL);
            v11 = v91;
            if ( !v91 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v91 + 20) = 1LL;
            v89 = &DirectComposition::CDesktopTargetMarshaler::`vftable';
          }
        }
      }
      *(_QWORD *)v11 = v89;
      *(_DWORD *)(v11 + 16) |= 0x20u;
      goto LABEL_14;
    }
    if ( a2 == 30 )
    {
      v122 = (void *)Win32AllocPoolWithQuotaZInit(0x48uLL);
      v11 = (__int64)v122;
      if ( !v122 )
        return (unsigned int)-1073741801;
      memset(v122, 0, 0x48uLL);
      v12 = &DirectComposition::CTransform3DGroupMarshaler::`vftable';
      *(_QWORD *)(v11 + 20) = 1LL;
      goto LABEL_13;
    }
    if ( a2 <= 0x12 )
    {
      if ( a2 == 18 )
      {
        v110 = (void *)Win32AllocPoolWithQuotaZInit(0x80uLL);
        v11 = (__int64)v110;
        if ( !v110 )
          return (unsigned int)-1073741801;
        memset(v110, 0, 0x80uLL);
        v12 = &DirectComposition::CLinearTransferEffectMarshaler::`vftable';
      }
      else if ( a2 > 0xD )
      {
        v103 = a2 - 14;
        if ( v103 )
        {
          v104 = v103 - 1;
          if ( v104 )
          {
            v105 = v104 - 1;
            if ( v105 )
            {
              if ( v105 != 1 )
                return (unsigned int)-1073741811;
              v106 = (void *)Win32AllocPoolWithQuotaZInit(0x70uLL);
              v11 = (__int64)v106;
              if ( !v106 )
                return (unsigned int)-1073741801;
              memset(v106, 0, 0x70uLL);
              v12 = &DirectComposition::CArithmeticCompositeEffectMarshaler::`vftable';
            }
            else
            {
              v107 = (void *)Win32AllocPoolWithQuotaZInit(0x68uLL);
              v11 = (__int64)v107;
              if ( !v107 )
                return (unsigned int)-1073741801;
              memset(v107, 0, 0x68uLL);
              v12 = &DirectComposition::CFloodEffectMarshaler::`vftable';
            }
          }
          else
          {
            v108 = (void *)Win32AllocPoolWithQuotaZInit(0x80uLL);
            v11 = (__int64)v108;
            if ( !v108 )
              return (unsigned int)-1073741801;
            memset(v108, 0, 0x80uLL);
            v12 = &DirectComposition::CTurbulenceEffectMarshaler::`vftable';
          }
        }
        else
        {
          v109 = (void *)Win32AllocPoolWithQuotaZInit(0x60uLL);
          v11 = (__int64)v109;
          if ( !v109 )
            return (unsigned int)-1073741801;
          memset(v109, 0, 0x60uLL);
          v12 = &DirectComposition::CSaturationEffectMarshaler::`vftable';
        }
      }
      else if ( a2 == 13 )
      {
        v102 = (void *)Win32AllocPoolWithQuotaZInit(0x70uLL);
        v11 = (__int64)v102;
        if ( !v102 )
          return (unsigned int)-1073741801;
        memset(v102, 0, 0x70uLL);
        v12 = &DirectComposition::CShadowEffectMarshaler::`vftable';
      }
      else
      {
        v75 = a2 - 7;
        if ( !v75 )
        {
          v76 = (void *)Win32AllocPoolWithQuotaZInit(0x38uLL);
          v11 = (__int64)v76;
          if ( !v76 )
            return (unsigned int)-1073741801;
          memset(v76, 0, 0x38uLL);
          v12 = &DirectComposition::CEffectGroupMarshaler::`vftable';
          *(_QWORD *)(v11 + 20) = 1LL;
          goto LABEL_13;
        }
        v95 = v75 - 2;
        if ( v95 )
        {
          v96 = v95 - 1;
          if ( v96 )
          {
            v97 = v96 - 1;
            if ( v97 )
            {
              if ( v97 != 1 )
                return (unsigned int)-1073741811;
              v98 = (void *)Win32AllocPoolWithQuotaZInit(0x60uLL);
              v11 = (__int64)v98;
              if ( !v98 )
                return (unsigned int)-1073741801;
              memset(v98, 0, 0x60uLL);
              v12 = &DirectComposition::CHueRotationEffectMarshaler::`vftable';
            }
            else
            {
              v99 = (void *)Win32AllocPoolWithQuotaZInit(0xB0uLL);
              v11 = (__int64)v99;
              if ( !v99 )
                return (unsigned int)-1073741801;
              memset(v99, 0, 0xB0uLL);
              v12 = &DirectComposition::CColorMatrixEffectMarshaler::`vftable';
            }
          }
          else
          {
            v100 = (void *)Win32AllocPoolWithQuotaZInit(0x68uLL);
            v11 = (__int64)v100;
            if ( !v100 )
              return (unsigned int)-1073741801;
            memset(v100, 0, 0x68uLL);
            v12 = &DirectComposition::CBrightnessEffectMarshaler::`vftable';
          }
        }
        else
        {
          v101 = (void *)Win32AllocPoolWithQuotaZInit(0x68uLL);
          v11 = (__int64)v101;
          if ( !v101 )
            return (unsigned int)-1073741801;
          memset(v101, 0, 0x68uLL);
          v12 = &DirectComposition::CGaussianBlurEffectMarshaler::`vftable';
        }
      }
    }
    else
    {
      if ( a2 > 0x19 )
      {
        v30 = a2 - 26;
        if ( v30 )
        {
          v31 = v30 - 1;
          if ( v31 )
          {
            v32 = v31 - 1;
            if ( v32 )
            {
              if ( v32 != 1 )
                return (unsigned int)-1073741811;
              v37 = (void *)Win32AllocPoolWithQuotaZInit(0xB8uLL);
              v11 = (__int64)v37;
              if ( !v37 )
                return (unsigned int)-1073741801;
              memset(v37, 0, 0xB8uLL);
              v12 = &DirectComposition::CComponentTransform3DMarshaler::`vftable';
              *(_QWORD *)(v11 + 20) = 1LL;
            }
            else
            {
              v33 = (void *)Win32AllocPoolWithQuotaZInit(0x78uLL);
              v11 = (__int64)v33;
              if ( !v33 )
                return (unsigned int)-1073741801;
              memset(v33, 0, 0x78uLL);
              v12 = &DirectComposition::CComponentTransform2DMarshaler::`vftable';
              *(_QWORD *)(v11 + 20) = 1LL;
            }
          }
          else
          {
            v86 = (void *)Win32AllocPoolWithQuotaZInit(0x68uLL);
            v11 = (__int64)v86;
            if ( !v86 )
              return (unsigned int)-1073741801;
            memset(v86, 0, 0x68uLL);
            v12 = &DirectComposition::CMatrixTransform3DMarshaler::`vftable';
            *(_QWORD *)(v11 + 20) = 1LL;
          }
        }
        else
        {
          v121 = (void *)Win32AllocPoolWithQuotaZInit(0x58uLL);
          v11 = (__int64)v121;
          if ( !v121 )
            return (unsigned int)-1073741801;
          memset(v121, 0, 0x58uLL);
          v12 = &DirectComposition::CRotateTransform3DMarshaler::`vftable';
          *(_QWORD *)(v11 + 20) = 1LL;
        }
        goto LABEL_13;
      }
      if ( a2 == 25 )
      {
        v120 = (void *)Win32AllocPoolWithQuotaZInit(0x50uLL);
        v11 = (__int64)v120;
        if ( !v120 )
          return (unsigned int)-1073741801;
        memset(v120, 0, 0x50uLL);
        v12 = &DirectComposition::CScaleTransform3DMarshaler::`vftable';
        *(_QWORD *)(v11 + 20) = 1LL;
        goto LABEL_13;
      }
      v111 = a2 - 19;
      if ( v111 )
      {
        v112 = v111 - 1;
        if ( v112 )
        {
          v113 = v112 - 1;
          if ( v113 )
          {
            v114 = v113 - 1;
            if ( v114 )
            {
              if ( v114 != 2 )
                return (unsigned int)-1073741811;
              v115 = (void *)Win32AllocPoolWithQuotaZInit(0x48uLL);
              v11 = (__int64)v115;
              if ( !v115 )
                return (unsigned int)-1073741801;
              memset(v115, 0, 0x48uLL);
              v12 = &DirectComposition::CTranslateTransform3DMarshaler::`vftable';
              *(_QWORD *)(v11 + 20) = 1LL;
              goto LABEL_13;
            }
            v116 = (void *)Win32AllocPoolWithQuotaZInit(0x80uLL);
            v11 = (__int64)v116;
            if ( !v116 )
              return (unsigned int)-1073741801;
            memset(v116, 0, 0x80uLL);
            v12 = &DirectComposition::CAffineTransform2DEffectMarshaler::`vftable';
          }
          else
          {
            v117 = (void *)Win32AllocPoolWithQuotaZInit(0x60uLL);
            v11 = (__int64)v117;
            if ( !v117 )
              return (unsigned int)-1073741801;
            memset(v117, 0, 0x60uLL);
            v12 = &DirectComposition::CBlendEffectMarshaler::`vftable';
          }
        }
        else
        {
          v118 = (void *)Win32AllocPoolWithQuotaZInit(0x60uLL);
          v11 = (__int64)v118;
          if ( !v118 )
            return (unsigned int)-1073741801;
          memset(v118, 0, 0x60uLL);
          v12 = &DirectComposition::CCompositeEffectMarshaler::`vftable';
        }
      }
      else
      {
        v119 = (void *)Win32AllocPoolWithQuotaZInit(0xA0uLL);
        v11 = (__int64)v119;
        if ( !v119 )
          return (unsigned int)-1073741801;
        memset(v119, 0, 0xA0uLL);
        v12 = &DirectComposition::CTableTransferEffectMarshaler::`vftable';
      }
    }
    *(_QWORD *)(v11 + 20) = 1LL;
    *(_QWORD *)(v11 + 40) = 0LL;
    *(_DWORD *)(v11 + 80) = 0;
    *(_QWORD *)(v11 + 72) = 0LL;
    *(_QWORD *)(v11 + 64) = 0LL;
    *(_QWORD *)(v11 + 56) = 0LL;
    *(_DWORD *)(v11 + 48) = 0;
    goto LABEL_13;
  }
  if ( a2 <= 0x6A )
  {
    if ( a2 == 106 )
    {
      v141 = (void *)Win32AllocPoolWithQuotaZInit(0x80uLL);
      v11 = (__int64)v141;
      if ( !v141 )
        return (unsigned int)-1073741801;
      memset(v141, 0, 0x80uLL);
      v12 = &DirectComposition::CSnapshotMarshaler::`vftable';
      *(_QWORD *)(v11 + 20) = 1LL;
    }
    else if ( a2 > 0x5D )
    {
      v38 = a2 - 94;
      if ( !v38 )
      {
        v139 = (_QWORD *)Win32AllocPoolWithQuotaZInit(0x40uLL);
        v140 = v139;
        if ( v139 )
        {
          memset(v139, 0, 0x40uLL);
          *(_QWORD *)((char *)v140 + 36) = 1LL;
          *v140 = &DirectComposition::CScalarMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
          v140[2] = &DirectComposition::CScalarMarshaler::`vftable'{for `DirectComposition::CResourceMarshaler'};
        }
        else
        {
          v140 = 0LL;
        }
        v11 = (unsigned __int64)(v140 + 2) & -(__int64)(v140 != 0LL);
        goto LABEL_14;
      }
      v39 = v38 - 3;
      if ( v39 )
      {
        v40 = v39 - 2;
        if ( v40 )
        {
          v41 = v40 - 1;
          if ( v41 )
          {
            v42 = v41 - 1;
            if ( v42 )
            {
              v43 = v42 - 1;
              if ( v43 )
              {
                v44 = v43 - 1;
                if ( v44 )
                {
                  v135 = v44 - 1;
                  if ( v135 )
                  {
                    if ( v135 != 1 )
                      return (unsigned int)-1073741811;
                    v136 = (void *)Win32AllocPoolWithQuotaZInit(0x40uLL);
                    v11 = (__int64)v136;
                    if ( !v136 )
                      return (unsigned int)-1073741801;
                    memset(v136, 0, 0x40uLL);
                    v12 = &DirectComposition::CYCbCrSurfaceMarshaler::`vftable';
                    *(_QWORD *)(v11 + 20) = 1LL;
                  }
                  else
                  {
                    v137 = (void *)Win32AllocPoolWithQuotaZInit(0x38uLL);
                    v11 = (__int64)v137;
                    if ( !v137 )
                      return (unsigned int)-1073741801;
                    memset(v137, 0, 0x38uLL);
                    v12 = &DirectComposition::CPrimitiveColorMarshaler::`vftable';
                    *(_QWORD *)(v11 + 20) = 1LL;
                  }
                }
                else
                {
                  v45 = (void *)Win32AllocPoolWithQuotaZInit(0xC0uLL);
                  v11 = (__int64)v45;
                  if ( !v45 )
                    return (unsigned int)-1073741801;
                  memset(v45, 0, 0xC0uLL);
                  v12 = &DirectComposition::CPrimitiveGroupLayerClipMarshaler::`vftable';
                  *(_QWORD *)(v11 + 20) = 1LL;
                  *(_QWORD *)(v11 + 40) = 0LL;
                }
              }
              else
              {
                v66 = Win32AllocPoolWithQuotaZInit(0xC0uLL);
                v11 = v66;
                if ( !v66 )
                  return (unsigned int)-1073741801;
                *(_QWORD *)(v66 + 20) = 1LL;
                *(_QWORD *)(v66 + 40) = 0LL;
                v12 = &DirectComposition::CPrimitiveGroupMarshaler::`vftable';
              }
            }
            else
            {
              v92 = (void *)Win32AllocPoolWithQuotaZInit(0x30uLL);
              v11 = (__int64)v92;
              if ( !v92 )
                return (unsigned int)-1073741801;
              memset(v92, 0, 0x30uLL);
              v12 = &DirectComposition::CAnimationTriggerMarshaler::`vftable';
              *(_QWORD *)(v11 + 20) = 1LL;
            }
          }
          else
          {
            v68 = (void *)Win32AllocPoolWithQuotaZInit(0x38uLL);
            v11 = (__int64)v68;
            if ( !v68 )
              return (unsigned int)-1073741801;
            memset(v68, 0, 0x38uLL);
            v12 = &DirectComposition::CSharedSectionMarshaler::`vftable';
            *(_QWORD *)(v11 + 20) = 1LL;
          }
        }
        else
        {
          v138 = (void *)Win32AllocPoolWithQuotaZInit(0x30uLL);
          v11 = (__int64)v138;
          if ( !v138 )
            return (unsigned int)-1073741801;
          memset(v138, 0, 0x30uLL);
          v12 = &DirectComposition::CHwndBitmapMarshaler::`vftable';
          *(_QWORD *)(v11 + 20) = 1LL;
        }
      }
      else
      {
        v52 = (void *)Win32AllocPoolWithQuotaZInit(0x38uLL);
        v11 = (__int64)v52;
        if ( !v52 )
          return (unsigned int)-1073741801;
        memset(v52, 0, 0x38uLL);
        v12 = &DirectComposition::CCompositionSurfaceBitmapMarshaler::`vftable';
        *(_QWORD *)(v11 + 20) = 1LL;
      }
    }
    else
    {
      if ( a2 == 93 )
      {
        v48 = (char *)Win32AllocPoolWithQuotaZInit(0xF8uLL);
        v5 = v48;
        if ( v48 )
        {
          memset(v48, 0, 0xF8uLL);
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
          v49 = (_QWORD *)((char *)this + 352);
          v50 = *((_QWORD *)this + 44);
          v51 = v5 + 120;
          if ( *(DirectComposition::CApplicationChannel **)(v50 + 8) != (DirectComposition::CApplicationChannel *)((char *)this + 352) )
            __fastfail(3u);
          *v51 = v50;
          *((_QWORD *)v5 + 16) = v49;
          *(_QWORD *)(v50 + 8) = v51;
          *v49 = v51;
        }
        v11 = (unsigned __int64)(v5 + 16) & -(__int64)(v5 != 0LL);
        goto LABEL_14;
      }
      if ( a2 > 0x55 )
      {
        v34 = a2 - 86;
        if ( v34 )
        {
          v53 = v34 - 1;
          if ( v53 )
          {
            v73 = v53 - 1;
            if ( v73 )
            {
              if ( v73 != 1 )
                return (unsigned int)-1073741811;
              v134 = (void *)Win32AllocPoolWithQuotaZInit(0x28uLL);
              v11 = (__int64)v134;
              if ( !v134 )
                return (unsigned int)-1073741801;
              memset(v134, 0, 0x28uLL);
              v12 = &DirectComposition::CWindowBackdropBrushMarshaler::`vftable';
              *(_QWORD *)(v11 + 20) = 1LL;
            }
            else
            {
              v74 = (void *)Win32AllocPoolWithQuotaZInit(0x58uLL);
              v11 = (__int64)v74;
              if ( !v74 )
                return (unsigned int)-1073741801;
              memset(v74, 0, 0x58uLL);
              v12 = &DirectComposition::CNineGridBrushMarshaler::`vftable';
              *(_QWORD *)(v11 + 20) = 1LL;
            }
          }
          else
          {
            v54 = (void *)Win32AllocPoolWithQuotaZInit(0x60uLL);
            v11 = (__int64)v54;
            if ( !v54 )
              return (unsigned int)-1073741801;
            memset(v54, 0, 0x60uLL);
            v12 = &DirectComposition::CLinearGradientBrushMarshaler::`vftable';
            *(_QWORD *)(v11 + 20) = 1LL;
          }
        }
        else
        {
          v35 = (void *)Win32AllocPoolWithQuotaZInit(0x38uLL);
          v11 = (__int64)v35;
          if ( !v35 )
            return (unsigned int)-1073741801;
          memset(v35, 0, 0x38uLL);
          v12 = &DirectComposition::CMaskBrushMarshaler::`vftable';
          *(_QWORD *)(v11 + 20) = 1LL;
        }
      }
      else if ( a2 == 85 )
      {
        v77 = Win32AllocPoolWithQuotaZInit(0x48uLL);
        v11 = v77;
        if ( !v77 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v77 + 20) = 1LL;
        v12 = &DirectComposition::CEffectBrushMarshaler::`vftable';
      }
      else
      {
        v19 = a2 - 71;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( v20 )
          {
            v21 = v20 - 10;
            if ( v21 )
            {
              v22 = v21 - 1;
              if ( v22 )
              {
                if ( v22 != 1 )
                  return (unsigned int)-1073741811;
                v23 = (void *)Win32AllocPoolWithQuotaZInit(0x58uLL);
                v11 = (__int64)v23;
                if ( !v23 )
                  return (unsigned int)-1073741801;
                memset(v23, 0, 0x58uLL);
                v12 = &DirectComposition::CSurfaceBrushMarshaler::`vftable';
                *(_QWORD *)(v11 + 20) = 1LL;
              }
              else
              {
                v81 = (void *)Win32AllocPoolWithQuotaZInit(0x28uLL);
                v11 = (__int64)v81;
                if ( !v81 )
                  return (unsigned int)-1073741801;
                memset(v81, 0, 0x28uLL);
                v12 = &DirectComposition::CBackdropBrushMarshaler::`vftable';
                *(_QWORD *)(v11 + 20) = 1LL;
              }
            }
            else
            {
              v46 = Win32AllocPoolWithQuotaZInit(0x38uLL);
              v11 = v46;
              if ( !v46 )
                return (unsigned int)-1073741801;
              *(_QWORD *)(v46 + 20) = 1LL;
              v12 = &DirectComposition::CColorBrushMarshaler::`vftable';
            }
          }
          else
          {
            v47 = (void *)Win32AllocPoolWithQuotaZInit(0x78uLL);
            v11 = (__int64)v47;
            if ( !v47 )
              return (unsigned int)-1073741801;
            memset(v47, 0, 0x78uLL);
            v12 = &DirectComposition::CRectangleClipMarshaler::`vftable';
            *(_QWORD *)(v11 + 20) = 1LL;
          }
        }
        else
        {
          v133 = (void *)Win32AllocPoolWithQuotaZInit(0x50uLL);
          v11 = (__int64)v133;
          if ( !v133 )
            return (unsigned int)-1073741801;
          memset(v133, 0, 0x50uLL);
          v12 = &DirectComposition::CClipGroupMarshaler::`vftable';
          *(_QWORD *)(v11 + 20) = 1LL;
        }
      }
    }
    goto LABEL_13;
  }
  if ( a2 > 0x7A )
  {
    v69 = a2 - 123;
    if ( !v69 )
    {
      v160 = Win32AllocPoolWithQuotaZInit(0xA0uLL);
      v11 = v160;
      if ( v160 )
      {
        *(_QWORD *)(v160 + 20) = 1LL;
        *(_QWORD *)v160 = &DirectComposition::CGenericInkMarshaler::`vftable';
        *(_QWORD *)(v160 + 40) = &DirectComposition::CDCompDynamicArray<unsigned char>::`vftable';
        *(_BYTE *)(v160 + 56) = 1;
        *(_QWORD *)(v160 + 80) = 1LL;
        *(_QWORD *)(v160 + 88) = 0LL;
        *(_BYTE *)(v160 + 112) = 1;
        *(_QWORD *)(v160 + 136) = 1LL;
        *(_QWORD *)(v160 + 96) = &DirectComposition::CDCompDynamicArray<unsigned char>::`vftable';
        *(_QWORD *)(v160 + 144) = 0LL;
        *(_DWORD *)(v160 + 152) = 0;
      }
      else
      {
        v11 = 0LL;
      }
      goto LABEL_14;
    }
    v70 = v69 - 1;
    if ( v70 )
    {
      v93 = v70 - 2;
      if ( !v93 )
      {
        v94 = Win32AllocPoolWithQuotaZInit(0x68uLL);
        v11 = v94;
        if ( !v94 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v94 + 20) = 1LL;
        *(_QWORD *)v94 = &DirectComposition::CDropShadowMarshaler::`vftable';
        *(_DWORD *)(v94 + 80) = 1091567616;
        *(_DWORD *)(v94 + 96) = 1065353216;
        *(_DWORD *)(v94 + 76) = 1065353216;
        goto LABEL_14;
      }
      v149 = v93 - 1;
      if ( v149 )
      {
        v150 = v149 - 1;
        if ( v150 )
        {
          v151 = v150 - 1;
          if ( v151 )
          {
            v152 = v151 - 1;
            if ( v152 )
            {
              v153 = v152 - 1;
              if ( v153 )
              {
                if ( v153 != 2 )
                  return (unsigned int)-1073741811;
                v154 = (void *)Win32AllocPoolWithQuotaZInit(0x30uLL);
                v11 = (__int64)v154;
                if ( !v154 )
                  return (unsigned int)-1073741801;
                memset(v154, 0, 0x30uLL);
                v12 = &DirectComposition::CCompositionCapabilitiesMarshaler::`vftable';
                *(_QWORD *)(v11 + 20) = 1LL;
              }
              else
              {
                v155 = (void *)Win32AllocPoolWithQuotaZInit(0x90uLL);
                v11 = (__int64)v155;
                if ( !v155 )
                  return (unsigned int)-1073741801;
                memset(v155, 0, 0x90uLL);
                v12 = &DirectComposition::CCompositionSpotLightMarshaler::`vftable';
                *(_QWORD *)(v11 + 20) = 1LL;
              }
            }
            else
            {
              v156 = (void *)Win32AllocPoolWithQuotaZInit(0x70uLL);
              v11 = (__int64)v156;
              if ( !v156 )
                return (unsigned int)-1073741801;
              memset(v156, 0, 0x70uLL);
              v12 = &DirectComposition::CCompositionPointLightMarshaler::`vftable';
              *(_QWORD *)(v11 + 20) = 1LL;
            }
          }
          else
          {
            v157 = (void *)Win32AllocPoolWithQuotaZInit(0x60uLL);
            v11 = (__int64)v157;
            if ( !v157 )
              return (unsigned int)-1073741801;
            memset(v157, 0, 0x60uLL);
            v12 = &DirectComposition::CCompositionDistantLightMarshaler::`vftable';
            *(_QWORD *)(v11 + 20) = 1LL;
          }
        }
        else
        {
          v158 = (void *)Win32AllocPoolWithQuotaZInit(0x48uLL);
          v11 = (__int64)v158;
          if ( !v158 )
            return (unsigned int)-1073741801;
          memset(v158, 0, 0x48uLL);
          v12 = &DirectComposition::CCompositionAmbientLightMarshaler::`vftable';
          *(_QWORD *)(v11 + 20) = 1LL;
        }
      }
      else
      {
        v159 = Win32AllocPoolWithQuotaZInit(0x38uLL);
        v11 = v159;
        if ( !v159 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v159 + 20) = 1LL;
        v12 = &DirectComposition::CCompositionLightMarshaler::`vftable';
      }
    }
    else
    {
      v71 = Win32AllocPoolWithQuotaZInit(0x58uLL);
      v11 = v71;
      if ( !v71 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(v71 + 20) = 1LL;
      v12 = &DirectComposition::CCompiledEffectTemplateMarshaler::`vftable';
    }
    goto LABEL_13;
  }
  if ( a2 == 122 )
  {
    v148 = Win32AllocPoolWithQuotaZInit(0xC8uLL);
    v11 = v148;
    if ( !v148 )
      return (unsigned int)-1073741801;
    *(_QWORD *)(v148 + 20) = 1LL;
    *(_QWORD *)v148 = &DirectComposition::CPencilMarshaler::`vftable';
    *(_QWORD *)(v148 + 96) = 0LL;
    *(_QWORD *)(v148 + 120) = 0LL;
    *(_QWORD *)(v148 + 144) = &DirectComposition::CDCompDynamicArray<unsigned char>::`vftable';
    *(_BYTE *)(v148 + 160) = 1;
    *(_QWORD *)(v148 + 184) = 20LL;
    goto LABEL_14;
  }
  if ( a2 <= 0x71 )
  {
    if ( a2 == 113 )
    {
      v144 = (void *)Win32AllocPoolWithQuotaZInit(0x88uLL);
      v11 = (__int64)v144;
      if ( !v144 )
        return (unsigned int)-1073741801;
      memset(v144, 0, 0x88uLL);
      v12 = &DirectComposition::CConditionalExpressionMarshaler::`vftable';
      *(_QWORD *)(v11 + 20) = 1LL;
      goto LABEL_13;
    }
    v6 = a2 - 107;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( !v7 )
      {
        v143 = Win32AllocPoolWithQuotaZInit(0x68uLL);
        v11 = v143;
        if ( !v143 )
          return (unsigned int)-1073741801;
        *(_BYTE *)(v143 + 84) &= 0xC0u;
        *(_QWORD *)(v143 + 20) = 1LL;
        *(_QWORD *)v143 = &DirectComposition::CManipulationMarshaler::`vftable';
        *(_QWORD *)(v143 + 88) = 0LL;
        *(_QWORD *)(v143 + 96) = 0LL;
        goto LABEL_14;
      }
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 2;
        if ( !v9 )
        {
          v10 = (void *)Win32AllocPoolWithQuotaZInit(0xD0uLL);
          v11 = (__int64)v10;
          if ( !v10 )
            return (unsigned int)-1073741801;
          memset(v10, 0, 0xD0uLL);
          v12 = &DirectComposition::CExpressionMarshaler::`vftable';
          *(_QWORD *)(v11 + 20) = 1LL;
          goto LABEL_13;
        }
        if ( v9 == 1 )
        {
          v36 = Win32AllocPoolWithQuotaZInit(0x108uLL);
          v11 = v36;
          if ( !v36 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v36 + 20) = 1LL;
          *(_QWORD *)v36 = &DirectComposition::CKeyframeAnimationMarshaler::`vftable';
          *(_DWORD *)(v36 + 188) = 1065353216;
          goto LABEL_14;
        }
        return (unsigned int)-1073741811;
      }
      v142 = Win32AllocPoolWithQuotaZInit(0x28uLL);
      v11 = v142;
      if ( !v142 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(v142 + 20) = 1LL;
      v12 = &DirectComposition::CHoverPointerSourceMarshaler::`vftable';
LABEL_13:
      *(_QWORD *)v11 = v12;
      goto LABEL_14;
    }
    v64 = (DirectComposition::CInteractionMarshaler *)Win32AllocPoolWithQuotaZInit(0x100uLL);
    if ( !v64 )
      return (unsigned int)-1073741801;
    v65 = DirectComposition::CInteractionMarshaler::CInteractionMarshaler(v64);
LABEL_110:
    v11 = (__int64)v65;
    goto LABEL_14;
  }
  v26 = a2 - 114;
  if ( !v26 )
  {
    v147 = Win32AllocPoolWithQuotaZInit(0x80uLL);
    v11 = v147;
    if ( !v147 )
      return (unsigned int)-1073741801;
    *(_QWORD *)(v147 + 20) = 1LL;
    v12 = &DirectComposition::CInjectionAnimationMarshaler::`vftable';
    goto LABEL_13;
  }
  v27 = v26 - 1;
  if ( !v27 )
  {
    v146 = (DirectComposition::CInteractionTrackerMarshaler *)Win32AllocPoolWithQuotaZInit(0x170uLL);
    if ( !v146 )
      return (unsigned int)-1073741801;
    v65 = (DirectComposition::CInteractionMarshaler *)DirectComposition::CInteractionTrackerMarshaler::CInteractionTrackerMarshaler(v146);
    goto LABEL_110;
  }
  v28 = v27 - 4;
  if ( v28 )
  {
    if ( v28 == 2 )
    {
      v145 = Win32AllocPoolWithQuotaZInit(0x98uLL);
      v11 = v145;
      if ( !v145 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(v145 + 20) = 1LL;
      *(_QWORD *)v145 = &DirectComposition::CInkMarshaler::`vftable';
      *(_QWORD *)(v145 + 96) = &DirectComposition::CDCompDynamicArray<unsigned __int64>::`vftable';
      *(_BYTE *)(v145 + 112) = 1;
      *(_QWORD *)(v145 + 136) = 36LL;
      goto LABEL_14;
    }
    return (unsigned int)-1073741811;
  }
  v29 = Win32AllocPoolWithQuotaZInit(0x78uLL);
  v11 = v29;
  if ( !v29 )
    return (unsigned int)-1073741801;
  *(_QWORD *)(v29 + 20) = 1LL;
  *(_QWORD *)v29 = &DirectComposition::CPropertyBagMarshaler::`vftable';
  *(_QWORD *)(v29 + 64) = &DirectComposition::CDCompDynamicArray<unsigned char>::`vftable';
  *(_BYTE *)(v29 + 80) = 1;
  *(_QWORD *)(v29 + 104) = 16LL;
LABEL_14:
  if ( !v11 )
    return (unsigned int)-1073741801;
  inserted = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v11 + 56LL))(v11) )
    inserted = DirectComposition::CConnection::AcquireShellResourceAccess(*((DirectComposition::CConnection **)this + 5));
  v14 = *(_QWORD *)v11;
  v15 = v11;
  if ( inserted < 0 )
    goto LABEL_294;
  inserted = (*(__int64 (__fastcall **)(__int64, char *))(v14 + 8))(v11, (char *)this + 488);
  if ( inserted < 0 )
    goto LABEL_293;
  inserted = DirectComposition::CLinearObjectTableBase::InsertObject(
               (DirectComposition::CApplicationChannel *)((char *)this + 120),
               (void *)v11,
               (unsigned int *)(v11 + 24));
  if ( inserted >= 0 && *((int *)this + 6) <= 2 )
  {
    *(_QWORD *)(v11 + 8) = *((_QWORD *)this + 52);
    *((_QWORD *)this + 52) = v11;
  }
  if ( inserted < 0 )
  {
LABEL_293:
    v14 = *(_QWORD *)v11;
    v15 = v11;
LABEL_294:
    (*(void (__fastcall **)(__int64, __int64))(v14 + 104))(v15, 1LL);
    return (unsigned int)inserted;
  }
  if ( v5 )
    DirectComposition::CApplicationChannel::AddAnimationTimeListEntry(
      this,
      *((struct DirectComposition::CAnimationTimeList **)v5 + 9));
  *a3 = (struct DirectComposition::CResourceMarshaler *)v11;
  return (unsigned int)inserted;
}
