/*
 * XREFs of ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0030918
 * Callers:
 *     ?EnsureInteraction@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@_NPEAPEAVCInteractionMarshaler@2@@Z @ 0x1C002B960 (-EnsureInteraction@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@_NPEAPEAVC.c)
 *     ?SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C002D3B4 (-SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_.c)
 *     ?SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C002D4C4 (-SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEB.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C002E240 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C0033398 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 * Callees:
 *     ??0CInteractionMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0021A24 (--0CInteractionMarshaler@DirectComposition@@QEAA@XZ.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0026FA0 (Win32AllocPoolWithQuotaZInit.c)
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z @ 0x1C002717C (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z.c)
 *     ?AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@@Z @ 0x1C002ED98 (-AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@.c)
 *     ?AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ @ 0x1C0033138 (-AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ??0CNaturalAnimationMarshaler@DirectComposition@@QEAA@XZ @ 0x1C013F8CC (--0CNaturalAnimationMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CInteractionTrackerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01447C8 (--0CInteractionTrackerMarshaler@DirectComposition@@QEAA@XZ.c)
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
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  void *v17; // rax
  int inserted; // edi
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v22; // edx
  unsigned int v23; // edx
  unsigned int v24; // edx
  void *v25; // rax
  unsigned int v26; // edx
  unsigned int v27; // edx
  void *v28; // rax
  unsigned int v29; // edx
  void *v30; // rax
  char *v31; // rax
  void *v32; // rax
  unsigned int v33; // edx
  unsigned int v34; // edx
  unsigned int v35; // edx
  unsigned int v36; // edx
  char *v37; // rax
  unsigned int v38; // edx
  unsigned int v39; // edx
  unsigned int v40; // edx
  unsigned int v41; // edx
  void *v42; // rax
  char *v43; // rax
  unsigned int v44; // edx
  void *v45; // rax
  void *v46; // rax
  void *v47; // rax
  unsigned int v48; // edx
  unsigned int v49; // edx
  void *v50; // rax
  void *v51; // rax
  unsigned int v52; // edx
  unsigned int v53; // edx
  char *v54; // rax
  _QWORD *v55; // rcx
  __int64 v56; // rdx
  _QWORD *v57; // rax
  void *v58; // rax
  unsigned int v59; // edx
  unsigned int v60; // edx
  unsigned int v61; // edx
  void *v62; // rax
  char *v63; // rax
  void *v64; // rax
  DirectComposition::CInteractionMarshaler *v65; // rax
  DirectComposition::CInteractionMarshaler *v66; // rax
  unsigned int v67; // edx
  unsigned int v68; // edx
  unsigned int v69; // edx
  unsigned int v70; // edx
  _QWORD *v71; // rax
  void *v72; // rax
  char *v73; // rax
  unsigned int v74; // edx
  unsigned int v75; // edx
  void *v76; // rax
  void *v77; // rax
  void *v78; // rax
  void *v79; // rax
  void *v80; // rax
  void *v81; // rax
  unsigned int v82; // edx
  unsigned int v83; // edx
  unsigned int v84; // edx
  unsigned int v85; // edx
  void *v86; // rax
  unsigned int v87; // edx
  unsigned int v88; // edx
  void *v89; // rax
  void *v90; // rax
  void *v91; // rax
  void *v92; // rax
  void *v93; // rax
  unsigned int v94; // edx
  void *v95; // rax
  unsigned int v96; // edx
  unsigned int v97; // edx
  char *v98; // rax
  char *v99; // rax
  void **v100; // rax
  char *v101; // rax
  unsigned int v102; // edx
  char *v103; // rax
  char *v104; // rax
  unsigned int v105; // edx
  unsigned int v106; // edx
  void *v107; // rax
  void *v108; // rax
  char *v109; // rax
  void *v110; // rax
  void *v111; // rax
  void *v112; // rax
  void *v113; // rax
  void *v114; // rax
  void *v115; // rax
  unsigned int v116; // edx
  unsigned int v117; // edx
  unsigned int v118; // edx
  void *v119; // rax
  char *v120; // rax
  void *v121; // rax
  char *v122; // rax
  char *v123; // rax
  void *v124; // rax
  void *v125; // rax
  void *v126; // rax
  unsigned int v127; // edx
  unsigned int v128; // edx
  unsigned int v129; // edx
  unsigned int v130; // edx
  void *v131; // rax
  void *v132; // rax
  void *v133; // rax
  void *v134; // rax
  char *v135; // rax
  char *v136; // rax
  unsigned int v137; // edx
  void *v138; // rax
  void *v139; // rax
  char *v140; // rax
  char *v141; // rax
  DirectComposition::CInteractionTrackerMarshaler *v142; // rax
  char *v143; // rax
  char *v144; // rax
  void *v145; // rax
  void *v146; // rax
  void *v147; // rax
  DirectComposition::CNaturalAnimationMarshaler *v148; // rax
  void *v149; // rax
  char *v150; // rax
  void *v151; // rax
  void *v152; // rax
  _QWORD *v153; // rax
  _QWORD *v154; // rbx
  void *v155; // rax
  void *v156; // rax
  void *v157; // rax
  void *v158; // rax
  void *v159; // rax
  void *v160; // rax
  void *v161; // rax
  void *v162; // rax
  void *v163; // rax

  v5 = 0LL;
  if ( a2 <= 0x4A )
  {
    if ( a2 == 74 )
    {
      v141 = (char *)Win32AllocPoolWithQuotaZInit(0x90uLL, 0x61694344u);
      v11 = (__int64)v141;
      if ( !v141 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(v141 + 20) = 1LL;
      v12 = &DirectComposition::CInjectionAnimationMarshaler::`vftable';
      goto LABEL_26;
    }
    if ( a2 <= 0x21 )
    {
      if ( a2 == 33 )
      {
        v123 = (char *)Win32AllocPoolWithQuotaZInit(0x50uLL, 0x62734344u);
        v11 = (__int64)v123;
        if ( !v123 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v123 + 20) = 1LL;
        v12 = &DirectComposition::CCompositionSkyBoxBrushMarshaler::`vftable';
        goto LABEL_26;
      }
      if ( a2 <= 0x12 )
      {
        if ( a2 == 18 )
        {
          v114 = Win32AllocPoolWithQuotaZInit(0xB0uLL, 0x65664344u);
          v11 = (__int64)v114;
          if ( !v114 )
            return (unsigned int)-1073741801;
          memset(v114, 0, 0xB0uLL);
          v12 = &DirectComposition::CColorMatrixEffectMarshaler::`vftable';
        }
        else if ( a2 <= 8 )
        {
          if ( a2 == 8 )
          {
            v80 = Win32AllocPoolWithQuotaZInit(0x28uLL, 0x626A4344u);
            v11 = (__int64)v80;
            if ( !v80 )
              return (unsigned int)-1073741801;
            memset(v80, 0, 0x28uLL);
            v12 = &DirectComposition::CBackdropBrushMarshaler::`vftable';
            *(_QWORD *)(v11 + 20) = 1LL;
            goto LABEL_26;
          }
          v52 = a2 - 1;
          if ( v52 )
          {
            v53 = v52 - 1;
            if ( !v53 )
            {
              v54 = (char *)Win32AllocPoolWithQuotaZInit(0xF8uLL, 0x6E614344u);
              v5 = v54;
              if ( v54 )
              {
                memset(v54, 0, 0xF8uLL);
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
                v55 = (_QWORD *)((char *)this + 336);
                v56 = *((_QWORD *)this + 42);
                v57 = v5 + 120;
                if ( *(DirectComposition::CApplicationChannel **)(v56 + 8) != (DirectComposition::CApplicationChannel *)((char *)this + 336) )
                  __fastfail(3u);
                *v57 = v56;
                *((_QWORD *)v5 + 16) = v55;
                *(_QWORD *)(v56 + 8) = v57;
                *v55 = v57;
              }
              v11 = (unsigned __int64)(v5 + 16) & -(__int64)(v5 != 0LL);
              goto LABEL_27;
            }
            v105 = v53 - 1;
            if ( !v105 )
            {
              v109 = (char *)Win32AllocPoolWithQuotaZInit(0xB8uLL, 0x6D6C4344u);
              v11 = (__int64)v109;
              if ( !v109 )
                return (unsigned int)-1073741801;
              *(_QWORD *)(v109 + 20) = 1LL;
              *(_QWORD *)v109 = &DirectComposition::CAnimationLoggingManagerMarshaler::`vftable';
              v109[48] = 1;
              *((_QWORD *)v109 + 9) = 12LL;
              v109[96] = 1;
              *((_QWORD *)v109 + 15) = 12LL;
              v109[144] = 1;
              *((_QWORD *)v109 + 21) = 8LL;
              v109[180] = 0;
              goto LABEL_27;
            }
            v106 = v105 - 1;
            if ( !v106 )
            {
              v107 = Win32AllocPoolWithQuotaZInit(0x30uLL, 0x74614344u);
              v11 = (__int64)v107;
              if ( !v107 )
                return (unsigned int)-1073741801;
              memset(v107, 0, 0x30uLL);
              v12 = &DirectComposition::CAnimationTriggerMarshaler::`vftable';
              *(_QWORD *)(v11 + 20) = 1LL;
              goto LABEL_26;
            }
            if ( v106 != 1 )
              return (unsigned int)-1073741811;
            v108 = Win32AllocPoolWithQuotaZInit(0x70uLL, 0x65664344u);
            v11 = (__int64)v108;
            if ( !v108 )
              return (unsigned int)-1073741801;
            memset(v108, 0, 0x70uLL);
            v12 = &DirectComposition::CArithmeticCompositeEffectMarshaler::`vftable';
          }
          else
          {
            v110 = Win32AllocPoolWithQuotaZInit(0x80uLL, 0x65664344u);
            v11 = (__int64)v110;
            if ( !v110 )
              return (unsigned int)-1073741801;
            memset(v110, 0, 0x80uLL);
            v12 = &DirectComposition::CAffineTransform2DEffectMarshaler::`vftable';
          }
        }
        else
        {
          v33 = a2 - 12;
          if ( v33 )
          {
            v34 = v33 - 1;
            if ( v34 )
            {
              v35 = v34 - 2;
              if ( !v35 )
              {
                v111 = Win32AllocPoolWithQuotaZInit(0x58uLL, 0x736C4344u);
                v11 = (__int64)v111;
                if ( !v111 )
                  return (unsigned int)-1073741801;
                memset(v111, 0, 0x58uLL);
                v12 = &DirectComposition::CVisualSurfaceMarshaler::`vftable';
                *(_QWORD *)(v11 + 20) = 1LL;
                goto LABEL_26;
              }
              v36 = v35 - 1;
              if ( !v36 )
              {
                v37 = (char *)Win32AllocPoolWithQuotaZInit(0x38uLL, 0x636A4344u);
                v11 = (__int64)v37;
                if ( !v37 )
                  return (unsigned int)-1073741801;
                *(_QWORD *)(v37 + 20) = 1LL;
                v12 = &DirectComposition::CColorBrushMarshaler::`vftable';
                goto LABEL_26;
              }
              if ( v36 == 1 )
              {
                v46 = Win32AllocPoolWithQuotaZInit(0x40uLL, 0x73674344u);
                v11 = (__int64)v46;
                if ( !v46 )
                  return (unsigned int)-1073741801;
                memset(v46, 0, 0x40uLL);
                v12 = &DirectComposition::CColorGradientStopMarshaler::`vftable';
                *(_QWORD *)(v11 + 20) = 1LL;
                goto LABEL_26;
              }
              return (unsigned int)-1073741811;
            }
            v112 = Win32AllocPoolWithQuotaZInit(0x68uLL, 0x65664344u);
            v11 = (__int64)v112;
            if ( !v112 )
              return (unsigned int)-1073741801;
            memset(v112, 0, 0x68uLL);
            v12 = &DirectComposition::CBrightnessEffectMarshaler::`vftable';
          }
          else
          {
            v113 = Win32AllocPoolWithQuotaZInit(0x60uLL, 0x65664344u);
            v11 = (__int64)v113;
            if ( !v113 )
              return (unsigned int)-1073741801;
            memset(v113, 0, 0x60uLL);
            v12 = &DirectComposition::CBlendEffectMarshaler::`vftable';
          }
        }
      }
      else
      {
        if ( a2 == 27 )
        {
          v81 = Win32AllocPoolWithQuotaZInit(0x30uLL, 0x64634344u);
          v11 = (__int64)v81;
          if ( !v81 )
            return (unsigned int)-1073741801;
          memset(v81, 0, 0x30uLL);
          v12 = &DirectComposition::CCompositionCapabilitiesMarshaler::`vftable';
          *(_QWORD *)(v11 + 20) = 1LL;
          goto LABEL_26;
        }
        if ( a2 > 0x1B )
        {
          v116 = a2 - 28;
          if ( !v116 )
          {
            v122 = (char *)Win32AllocPoolWithQuotaZInit(0x48uLL, 0x6D634344u);
            v11 = (__int64)v122;
            if ( !v122 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v122 + 20) = 1LL;
            v12 = &DirectComposition::CCompositionCubeMapMarshaler::`vftable';
            goto LABEL_26;
          }
          v117 = v116 - 1;
          if ( !v117 )
          {
            v121 = Win32AllocPoolWithQuotaZInit(0x70uLL, 0x6C644344u);
            v11 = (__int64)v121;
            if ( !v121 )
              return (unsigned int)-1073741801;
            memset(v121, 0, 0x70uLL);
            v12 = &DirectComposition::CCompositionDistantLightMarshaler::`vftable';
            *(_QWORD *)(v11 + 20) = 1LL;
            goto LABEL_26;
          }
          v118 = v117 - 1;
          if ( !v118 )
          {
            v120 = (char *)Win32AllocPoolWithQuotaZInit(0x48uLL, 0x6C634344u);
            v11 = (__int64)v120;
            if ( !v120 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v120 + 20) = 1LL;
            v12 = &DirectComposition::CCompositionLightMarshaler::`vftable';
            goto LABEL_26;
          }
          if ( v118 == 1 )
          {
            v119 = Win32AllocPoolWithQuotaZInit(0x80uLL, 0x6F704344u);
            v11 = (__int64)v119;
            if ( !v119 )
              return (unsigned int)-1073741801;
            memset(v119, 0, 0x80uLL);
            v12 = &DirectComposition::CCompositionPointLightMarshaler::`vftable';
            *(_QWORD *)(v11 + 20) = 1LL;
            goto LABEL_26;
          }
          return (unsigned int)-1073741811;
        }
        v26 = a2 - 22;
        if ( !v26 )
        {
          v63 = (char *)Win32AllocPoolWithQuotaZInit(0x58uLL, 0x74654344u);
          v11 = (__int64)v63;
          if ( !v63 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v63 + 20) = 1LL;
          v12 = &DirectComposition::CCompiledEffectTemplateMarshaler::`vftable';
          goto LABEL_26;
        }
        v27 = v26 - 1;
        if ( !v27 )
        {
          v28 = Win32AllocPoolWithQuotaZInit(0x78uLL, 0x32634344u);
          v11 = (__int64)v28;
          if ( !v28 )
            return (unsigned int)-1073741801;
          memset(v28, 0, 0x78uLL);
          v12 = &DirectComposition::CComponentTransform2DMarshaler::`vftable';
          *(_QWORD *)(v11 + 20) = 1LL;
          goto LABEL_26;
        }
        v44 = v27 - 1;
        if ( !v44 )
        {
          v45 = Win32AllocPoolWithQuotaZInit(0xB8uLL, 0x6F634344u);
          v11 = (__int64)v45;
          if ( !v45 )
            return (unsigned int)-1073741801;
          memset(v45, 0, 0xB8uLL);
          v12 = &DirectComposition::CComponentTransform3DMarshaler::`vftable';
          *(_QWORD *)(v11 + 20) = 1LL;
          goto LABEL_26;
        }
        v94 = v44 - 1;
        if ( v94 )
        {
          if ( v94 == 1 )
          {
            v95 = Win32AllocPoolWithQuotaZInit(0x60uLL, 0x6D614344u);
            v11 = (__int64)v95;
            if ( !v95 )
              return (unsigned int)-1073741801;
            memset(v95, 0, 0x60uLL);
            v12 = &DirectComposition::CCompositionAmbientLightMarshaler::`vftable';
            *(_QWORD *)(v11 + 20) = 1LL;
            goto LABEL_26;
          }
          return (unsigned int)-1073741811;
        }
        v115 = Win32AllocPoolWithQuotaZInit(0x60uLL, 0x65664344u);
        v11 = (__int64)v115;
        if ( !v115 )
          return (unsigned int)-1073741801;
        memset(v115, 0, 0x60uLL);
        v12 = &DirectComposition::CCompositeEffectMarshaler::`vftable';
      }
      goto LABEL_198;
    }
    if ( a2 > 0x34 )
    {
      if ( a2 <= 0x40 )
      {
        if ( a2 != 64 )
        {
          v127 = a2 - 54;
          if ( v127 )
          {
            v128 = v127 - 4;
            if ( !v128 )
            {
              v134 = Win32AllocPoolWithQuotaZInit(0x50uLL, 0x67634344u);
              v11 = (__int64)v134;
              if ( !v134 )
                return (unsigned int)-1073741801;
              memset(v134, 0, 0x50uLL);
              v12 = &DirectComposition::CClipGroupMarshaler::`vftable';
              *(_QWORD *)(v11 + 20) = 1LL;
              goto LABEL_26;
            }
            v129 = v128 - 3;
            if ( !v129 )
            {
              v133 = Win32AllocPoolWithQuotaZInit(0x30uLL, 0x63684344u);
              v11 = (__int64)v133;
              if ( !v133 )
                return (unsigned int)-1073741801;
              memset(v133, 0, 0x30uLL);
              v12 = &DirectComposition::CHolographicCompositionMarshaler::`vftable';
              *(_QWORD *)(v11 + 20) = 1LL;
              goto LABEL_26;
            }
            v130 = v129 - 1;
            if ( v130 )
            {
              if ( v130 == 1 )
              {
                v131 = Win32AllocPoolWithQuotaZInit(0x30uLL, 0x6D684344u);
                v11 = (__int64)v131;
                if ( !v131 )
                  return (unsigned int)-1073741801;
                memset(v131, 0, 0x30uLL);
                v12 = &DirectComposition::CHolographicExclusiveModeMarshaler::`vftable';
                *(_QWORD *)(v11 + 20) = 1LL;
                goto LABEL_26;
              }
              return (unsigned int)-1073741811;
            }
            v132 = Win32AllocPoolWithQuotaZInit(0x78uLL, 0x64684344u);
            v11 = (__int64)v132;
            if ( !v132 )
              return (unsigned int)-1073741801;
            memset(v132, 0, 0x78uLL);
            *(_QWORD *)(v11 + 20) = 1LL;
            *(_QWORD *)v11 = &DirectComposition::CHolographicDisplayMarshaler::`vftable';
            *(_DWORD *)(v11 + 88) = -1;
            *(_DWORD *)(v11 + 92) = -1;
          }
          else
          {
            v135 = (char *)Win32AllocPoolWithQuotaZInit(0xA8uLL, 0x69674344u);
            v11 = (__int64)v135;
            if ( !v135 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v135 + 20) = 1LL;
            *(_QWORD *)v135 = &DirectComposition::CGenericInkMarshaler::`vftable';
            v135[48] = 1;
            *((_QWORD *)v135 + 9) = 1LL;
            v135[88] = 1;
            *((_QWORD *)v135 + 14) = 1LL;
          }
          goto LABEL_27;
        }
        v136 = (char *)Win32AllocPoolWithQuotaZInit(0x58uLL, 0x65684344u);
        v11 = (__int64)v136;
        if ( !v136 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v136 + 20) = 1LL;
        v100 = &DirectComposition::CHolographicExclusiveViewMarshaler::`vftable';
      }
      else
      {
        v96 = a2 - 66;
        if ( v96 )
        {
          v97 = v96 - 1;
          if ( !v97 )
          {
            v98 = (char *)Win32AllocPoolWithQuotaZInit(0x28uLL, 0x70684344u);
            v11 = (__int64)v98;
            if ( !v98 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v98 + 20) = 1LL;
            v12 = &DirectComposition::CHoverPointerSourceMarshaler::`vftable';
            goto LABEL_26;
          }
          v137 = v97 - 1;
          if ( v137 )
          {
            if ( v137 == 1 )
            {
              v138 = Win32AllocPoolWithQuotaZInit(0x30uLL, 0x62684344u);
              v11 = (__int64)v138;
              if ( !v138 )
                return (unsigned int)-1073741801;
              memset(v138, 0, 0x30uLL);
              v12 = &DirectComposition::CHwndBitmapMarshaler::`vftable';
              *(_QWORD *)(v11 + 20) = 1LL;
              goto LABEL_26;
            }
            return (unsigned int)-1073741811;
          }
          v139 = Win32AllocPoolWithQuotaZInit(0x60uLL, 0x65664344u);
          v11 = (__int64)v139;
          if ( !v139 )
            return (unsigned int)-1073741801;
          memset(v139, 0, 0x60uLL);
          v12 = &DirectComposition::CHueRotationEffectMarshaler::`vftable';
          goto LABEL_198;
        }
        v140 = (char *)Win32AllocPoolWithQuotaZInit(0x50uLL, 0x69684344u);
        v11 = (__int64)v140;
        if ( !v140 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v140 + 20) = 1LL;
        v100 = &DirectComposition::CHolographicInteropTextureMarshaler::`vftable';
      }
    }
    else
    {
      if ( a2 == 52 )
      {
        v126 = Win32AllocPoolWithQuotaZInit(0x68uLL, 0x65664344u);
        v11 = (__int64)v126;
        if ( !v126 )
          return (unsigned int)-1073741801;
        memset(v126, 0, 0x68uLL);
        v12 = &DirectComposition::CGaussianBlurEffectMarshaler::`vftable';
        goto LABEL_198;
      }
      if ( a2 > 0x29 )
      {
        v13 = a2 - 44;
        if ( !v13 )
        {
          v104 = (char *)Win32AllocPoolWithQuotaZInit(0x68uLL, 0x73644344u);
          v11 = (__int64)v104;
          if ( !v104 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v104 + 20) = 1LL;
          *(_QWORD *)v104 = &DirectComposition::CDropShadowMarshaler::`vftable';
          *((_DWORD *)v104 + 20) = 1091567616;
          *((_QWORD *)v104 + 12) = 1065353216LL;
          *((_DWORD *)v104 + 19) = 1065353216;
          goto LABEL_27;
        }
        v14 = v13 - 2;
        if ( !v14 )
        {
          v73 = (char *)Win32AllocPoolWithQuotaZInit(0x48uLL, 0x656A4344u);
          v11 = (__int64)v73;
          if ( !v73 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v73 + 20) = 1LL;
          v12 = &DirectComposition::CEffectBrushMarshaler::`vftable';
          goto LABEL_26;
        }
        v15 = v14 - 1;
        if ( !v15 )
        {
          v78 = Win32AllocPoolWithQuotaZInit(0x38uLL, 0x67654344u);
          v11 = (__int64)v78;
          if ( !v78 )
            return (unsigned int)-1073741801;
          memset(v78, 0, 0x38uLL);
          v12 = &DirectComposition::CEffectGroupMarshaler::`vftable';
          *(_QWORD *)(v11 + 20) = 1LL;
          goto LABEL_26;
        }
        v16 = v15 - 1;
        if ( !v16 )
        {
          v17 = Win32AllocPoolWithQuotaZInit(0xE8uLL, 0x78654344u);
          v11 = (__int64)v17;
          if ( v17 )
          {
            memset(v17, 0, 0xE8uLL);
            v12 = &DirectComposition::CExpressionMarshaler::`vftable';
            *(_QWORD *)(v11 + 20) = 1LL;
            goto LABEL_26;
          }
          return (unsigned int)-1073741801;
        }
        if ( v16 != 3 )
          return (unsigned int)-1073741811;
        v125 = Win32AllocPoolWithQuotaZInit(0x68uLL, 0x65664344u);
        v11 = (__int64)v125;
        if ( !v125 )
          return (unsigned int)-1073741801;
        memset(v125, 0, 0x68uLL);
        v12 = &DirectComposition::CFloodEffectMarshaler::`vftable';
        goto LABEL_198;
      }
      if ( a2 == 41 )
      {
        v101 = (char *)Win32AllocPoolWithQuotaZInit(0x60uLL, 0x65644344u);
        v11 = (__int64)v101;
        if ( !v101 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v101 + 20) = 1LL;
        v100 = &DirectComposition::CDesktopTargetMarshaler::`vftable';
      }
      else
      {
        v48 = a2 - 34;
        if ( !v48 )
        {
          v90 = Win32AllocPoolWithQuotaZInit(0xA8uLL, 0x70734344u);
          v11 = (__int64)v90;
          if ( !v90 )
            return (unsigned int)-1073741801;
          memset(v90, 0, 0xA8uLL);
          v12 = &DirectComposition::CCompositionSpotLightMarshaler::`vftable';
          *(_QWORD *)(v11 + 20) = 1LL;
          goto LABEL_26;
        }
        v49 = v48 - 1;
        if ( !v49 )
        {
          v50 = Win32AllocPoolWithQuotaZInit(0x38uLL, 0x62634344u);
          v11 = (__int64)v50;
          if ( !v50 )
            return (unsigned int)-1073741801;
          memset(v50, 0, 0x38uLL);
          v12 = &DirectComposition::CCompositionSurfaceBitmapMarshaler::`vftable';
          *(_QWORD *)(v11 + 20) = 1LL;
          goto LABEL_26;
        }
        v87 = v49 - 1;
        if ( !v87 )
        {
          v124 = Win32AllocPoolWithQuotaZInit(0x98uLL, 0x61634344u);
          v11 = (__int64)v124;
          if ( !v124 )
            return (unsigned int)-1073741801;
          memset(v124, 0, 0x98uLL);
          v12 = &DirectComposition::CConditionalExpressionMarshaler::`vftable';
          *(_QWORD *)(v11 + 20) = 1LL;
          goto LABEL_26;
        }
        v88 = v87 - 3;
        if ( v88 )
        {
          if ( v88 == 1 )
          {
            v89 = Win32AllocPoolWithQuotaZInit(0x38uLL, 0x6B644344u);
            v11 = (__int64)v89;
            if ( !v89 )
              return (unsigned int)-1073741801;
            memset(v89, 0, 0x38uLL);
            v12 = &DirectComposition::CRenderTargetGroupMarshaler::`vftable';
            *(_QWORD *)(v11 + 20) = 1LL;
            goto LABEL_26;
          }
          return (unsigned int)-1073741811;
        }
        v99 = (char *)Win32AllocPoolWithQuotaZInit(0x80uLL, 0x65644344u);
        v11 = (__int64)v99;
        if ( !v99 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v99 + 20) = 1LL;
        v100 = &DirectComposition::CRenderTargetTargetMarshaler::`vftable';
      }
    }
LABEL_181:
    *(_QWORD *)v11 = v100;
    *(_DWORD *)(v11 + 16) |= 0x20u;
    goto LABEL_27;
  }
  if ( a2 > 0x6F )
  {
    if ( a2 > 0x7C )
    {
      if ( a2 > 0x85 )
      {
        v29 = a2 - 134;
        if ( v29 )
        {
          v74 = v29 - 1;
          if ( !v74 )
          {
            v79 = Win32AllocPoolWithQuotaZInit(0x58uLL, 0x72764344u);
            v11 = (__int64)v79;
            if ( !v79 )
              return (unsigned int)-1073741801;
            memset(v79, 0, 0x58uLL);
            v12 = &DirectComposition::CVisualCaptureMarshaler::`vftable';
            *(_QWORD *)(v11 + 20) = 1LL;
            goto LABEL_26;
          }
          v75 = v74 - 3;
          if ( !v75 )
          {
            v76 = Win32AllocPoolWithQuotaZInit(0x28uLL, 0x776A4344u);
            v11 = (__int64)v76;
            if ( !v76 )
              return (unsigned int)-1073741801;
            memset(v76, 0, 0x28uLL);
            v12 = &DirectComposition::CWindowBackdropBrushMarshaler::`vftable';
            *(_QWORD *)(v11 + 20) = 1LL;
            goto LABEL_26;
          }
          if ( v75 == 2 )
          {
            v163 = Win32AllocPoolWithQuotaZInit(0x40uLL, 0x73794344u);
            v11 = (__int64)v163;
            if ( !v163 )
              return (unsigned int)-1073741801;
            memset(v163, 0, 0x40uLL);
            v12 = &DirectComposition::CYCbCrSurfaceMarshaler::`vftable';
            *(_QWORD *)(v11 + 20) = 1LL;
            goto LABEL_26;
          }
          return (unsigned int)-1073741811;
        }
        v30 = Win32AllocPoolWithQuotaZInit(0xF0uLL, 0x69764344u);
        v11 = (__int64)v30;
        if ( v30 )
        {
          memset(v30, 0, 0xF0uLL);
          v12 = &DirectComposition::CVisualMarshaler::`vftable';
          *(_QWORD *)(v11 + 20) = 1LL;
          goto LABEL_26;
        }
        v11 = 0LL;
        goto LABEL_27;
      }
      if ( a2 == 133 )
      {
        v162 = Win32AllocPoolWithQuotaZInit(0x80uLL, 0x65664344u);
        v11 = (__int64)v162;
        if ( !v162 )
          return (unsigned int)-1073741801;
        memset(v162, 0, 0x80uLL);
        v12 = &DirectComposition::CTurbulenceEffectMarshaler::`vftable';
      }
      else
      {
        v82 = a2 - 125;
        if ( v82 )
        {
          v83 = v82 - 4;
          if ( !v83 )
          {
            v160 = Win32AllocPoolWithQuotaZInit(0x48uLL, 0x33674344u);
            v11 = (__int64)v160;
            if ( !v160 )
              return (unsigned int)-1073741801;
            memset(v160, 0, 0x48uLL);
            v12 = &DirectComposition::CTransform3DGroupMarshaler::`vftable';
            *(_QWORD *)(v11 + 20) = 1LL;
            goto LABEL_26;
          }
          v84 = v83 - 1;
          if ( !v84 )
          {
            v93 = Win32AllocPoolWithQuotaZInit(0x48uLL, 0x67744344u);
            v11 = (__int64)v93;
            if ( !v93 )
              return (unsigned int)-1073741801;
            memset(v93, 0, 0x48uLL);
            v12 = &DirectComposition::CTransformGroupMarshaler::`vftable';
            *(_QWORD *)(v11 + 20) = 1LL;
            goto LABEL_26;
          }
          v85 = v84 - 1;
          if ( !v85 )
          {
            v86 = Win32AllocPoolWithQuotaZInit(0x40uLL, 0x74744344u);
            v11 = (__int64)v86;
            if ( !v86 )
              return (unsigned int)-1073741801;
            memset(v86, 0, 0x40uLL);
            v12 = &DirectComposition::CTranslateTransformMarshaler::`vftable';
            *(_QWORD *)(v11 + 20) = 1LL;
            goto LABEL_26;
          }
          if ( v85 == 1 )
          {
            v159 = Win32AllocPoolWithQuotaZInit(0x48uLL, 0x33744344u);
            v11 = (__int64)v159;
            if ( !v159 )
              return (unsigned int)-1073741801;
            memset(v159, 0, 0x48uLL);
            v12 = &DirectComposition::CTranslateTransform3DMarshaler::`vftable';
            *(_QWORD *)(v11 + 20) = 1LL;
            goto LABEL_26;
          }
          return (unsigned int)-1073741811;
        }
        v161 = Win32AllocPoolWithQuotaZInit(0xA0uLL, 0x65664344u);
        v11 = (__int64)v161;
        if ( !v161 )
          return (unsigned int)-1073741801;
        memset(v161, 0, 0xA0uLL);
        v12 = &DirectComposition::CTableTransferEffectMarshaler::`vftable';
      }
    }
    else
    {
      if ( a2 == 124 )
      {
        v32 = Win32AllocPoolWithQuotaZInit(0x58uLL, 0x736A4344u);
        v11 = (__int64)v32;
        if ( !v32 )
          return (unsigned int)-1073741801;
        memset(v32, 0, 0x58uLL);
        v12 = &DirectComposition::CSurfaceBrushMarshaler::`vftable';
        *(_QWORD *)(v11 + 20) = 1LL;
        goto LABEL_26;
      }
      if ( a2 > 0x75 )
      {
        v22 = a2 - 118;
        if ( !v22 )
        {
          v72 = Win32AllocPoolWithQuotaZInit(0x38uLL, 0x73734344u);
          v11 = (__int64)v72;
          if ( !v72 )
            return (unsigned int)-1073741801;
          memset(v72, 0, 0x38uLL);
          v12 = &DirectComposition::CSharedSectionMarshaler::`vftable';
          *(_QWORD *)(v11 + 20) = 1LL;
          goto LABEL_26;
        }
        v23 = v22 - 2;
        if ( !v23 )
        {
          v158 = Win32AllocPoolWithQuotaZInit(0x48uLL, 0x746B4344u);
          v11 = (__int64)v158;
          if ( !v158 )
            return (unsigned int)-1073741801;
          memset(v158, 0, 0x48uLL);
          v12 = &DirectComposition::CSkewTransformMarshaler::`vftable';
          *(_QWORD *)(v11 + 20) = 1LL;
          goto LABEL_26;
        }
        v24 = v23 - 1;
        if ( !v24 )
        {
          v157 = Win32AllocPoolWithQuotaZInit(0x80uLL, 0x61734344u);
          v11 = (__int64)v157;
          if ( !v157 )
            return (unsigned int)-1073741801;
          memset(v157, 0, 0x80uLL);
          v12 = &DirectComposition::CSnapshotMarshaler::`vftable';
          *(_QWORD *)(v11 + 20) = 1LL;
          goto LABEL_26;
        }
        if ( v24 == 2 )
        {
          v25 = Win32AllocPoolWithQuotaZInit(0x100uLL, 0x76734344u);
          v11 = (__int64)v25;
          if ( !v25 )
            return (unsigned int)-1073741801;
          memset(v25, 0, 0x100uLL);
          v12 = &DirectComposition::CSpriteVisualMarshaler::`vftable';
          *(_QWORD *)(v11 + 20) = 1LL;
          goto LABEL_26;
        }
        return (unsigned int)-1073741811;
      }
      if ( a2 == 117 )
      {
        v156 = Win32AllocPoolWithQuotaZInit(0x70uLL, 0x65664344u);
        v11 = (__int64)v156;
        if ( !v156 )
          return (unsigned int)-1073741801;
        memset(v156, 0, 0x70uLL);
        v12 = &DirectComposition::CShadowEffectMarshaler::`vftable';
      }
      else
      {
        v59 = a2 - 112;
        if ( v59 )
        {
          v60 = v59 - 1;
          if ( v60 )
          {
            v61 = v60 - 1;
            if ( !v61 )
            {
              v62 = Win32AllocPoolWithQuotaZInit(0x48uLL, 0x74734344u);
              v11 = (__int64)v62;
              if ( !v62 )
                return (unsigned int)-1073741801;
              memset(v62, 0, 0x48uLL);
              v12 = &DirectComposition::CScaleTransformMarshaler::`vftable';
              *(_QWORD *)(v11 + 20) = 1LL;
              goto LABEL_26;
            }
            v102 = v61 - 1;
            if ( !v102 )
            {
              v152 = Win32AllocPoolWithQuotaZInit(0x50uLL, 0x33734344u);
              v11 = (__int64)v152;
              if ( !v152 )
                return (unsigned int)-1073741801;
              memset(v152, 0, 0x50uLL);
              v12 = &DirectComposition::CScaleTransform3DMarshaler::`vftable';
              *(_QWORD *)(v11 + 20) = 1LL;
              goto LABEL_26;
            }
            if ( v102 == 1 )
            {
              v103 = (char *)Win32AllocPoolWithQuotaZInit(0x30uLL, 0x77634344u);
              v11 = (__int64)v103;
              if ( !v103 )
                return (unsigned int)-1073741801;
              *(_QWORD *)(v103 + 20) = 1LL;
              v12 = &DirectComposition::CScreenCursorMarshaler::`vftable';
              goto LABEL_26;
            }
            return (unsigned int)-1073741811;
          }
          v153 = Win32AllocPoolWithQuotaZInit(0x40uLL, 0x6C734344u);
          v154 = v153;
          if ( v153 )
          {
            memset(v153, 0, 0x40uLL);
            *(_QWORD *)((char *)v154 + 36) = 1LL;
            *v154 = &DirectComposition::CScalarMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
            v154[2] = &DirectComposition::CScalarMarshaler::`vftable'{for `DirectComposition::CResourceMarshaler'};
          }
          else
          {
            v154 = 0LL;
          }
          v11 = (unsigned __int64)(v154 + 2) & -(__int64)(v154 != 0LL);
          goto LABEL_27;
        }
        v155 = Win32AllocPoolWithQuotaZInit(0x60uLL, 0x65664344u);
        v11 = (__int64)v155;
        if ( !v155 )
          return (unsigned int)-1073741801;
        memset(v155, 0, 0x60uLL);
        v12 = &DirectComposition::CSaturationEffectMarshaler::`vftable';
      }
    }
LABEL_198:
    *(_QWORD *)(v11 + 20) = 1LL;
    *(_QWORD *)(v11 + 40) = 0LL;
    *(_DWORD *)(v11 + 80) = 0;
    *(_QWORD *)(v11 + 72) = 0LL;
    *(_QWORD *)(v11 + 64) = 0LL;
    *(_QWORD *)(v11 + 56) = 0LL;
    *(_DWORD *)(v11 + 48) = 0;
    goto LABEL_26;
  }
  if ( a2 == 111 )
  {
    v151 = Win32AllocPoolWithQuotaZInit(0x58uLL, 0x33724344u);
    v11 = (__int64)v151;
    if ( !v151 )
      return (unsigned int)-1073741801;
    memset(v151, 0, 0x58uLL);
    v12 = &DirectComposition::CRotateTransform3DMarshaler::`vftable';
    *(_QWORD *)(v11 + 20) = 1LL;
    goto LABEL_26;
  }
  if ( a2 > 0x5A )
  {
    if ( a2 <= 0x63 )
    {
      if ( a2 == 99 )
      {
        v51 = Win32AllocPoolWithQuotaZInit(0xC0uLL, 0x67704344u);
        v11 = (__int64)v51;
        if ( !v51 )
          return (unsigned int)-1073741801;
        memset(v51, 0, 0xC0uLL);
        v12 = &DirectComposition::CPrimitiveGroupLayerClipMarshaler::`vftable';
        *(_QWORD *)(v11 + 20) = 1LL;
        *(_QWORD *)(v11 + 40) = 0LL;
        goto LABEL_26;
      }
      v67 = a2 - 92;
      if ( v67 )
      {
        v68 = v67 - 1;
        if ( !v68 )
        {
          v77 = Win32AllocPoolWithQuotaZInit(0x58uLL, 0x6E6A4344u);
          v11 = (__int64)v77;
          if ( !v77 )
            return (unsigned int)-1073741801;
          memset(v77, 0, 0x58uLL);
          v12 = &DirectComposition::CNineGridBrushMarshaler::`vftable';
          *(_QWORD *)(v11 + 20) = 1LL;
          goto LABEL_26;
        }
        v69 = v68 - 2;
        if ( !v69 )
        {
          v147 = Win32AllocPoolWithQuotaZInit(0x50uLL, 0x70644344u);
          v11 = (__int64)v147;
          if ( !v147 )
            return (unsigned int)-1073741801;
          memset(v147, 0, 0x50uLL);
          v12 = &DirectComposition::CPlaneCaptureRenderTargetMarshaler::`vftable';
          *(_QWORD *)(v11 + 20) = 1LL;
          goto LABEL_26;
        }
        v70 = v69 - 2;
        if ( !v70 )
        {
          v146 = Win32AllocPoolWithQuotaZInit(0x38uLL, 0x63704344u);
          v11 = (__int64)v146;
          if ( !v146 )
            return (unsigned int)-1073741801;
          memset(v146, 0, 0x38uLL);
          v12 = &DirectComposition::CPrimitiveColorMarshaler::`vftable';
          *(_QWORD *)(v11 + 20) = 1LL;
          goto LABEL_26;
        }
        if ( v70 == 1 )
        {
          v71 = Win32AllocPoolWithQuotaZInit(0xC0uLL, 0x67704344u);
          v11 = (__int64)v71;
          if ( !v71 )
            return (unsigned int)-1073741801;
          *(_QWORD *)((char *)v71 + 20) = 1LL;
          v71[5] = 0LL;
          v12 = &DirectComposition::CPrimitiveGroupMarshaler::`vftable';
          goto LABEL_26;
        }
        return (unsigned int)-1073741811;
      }
      v148 = (DirectComposition::CNaturalAnimationMarshaler *)Win32AllocPoolWithQuotaZInit(0xC0uLL, 0x616E4344u);
      if ( !v148 )
        return (unsigned int)-1073741801;
      v66 = (DirectComposition::CInteractionMarshaler *)DirectComposition::CNaturalAnimationMarshaler::CNaturalAnimationMarshaler(v148);
      goto LABEL_123;
    }
    if ( a2 == 100 )
    {
      v31 = (char *)Win32AllocPoolWithQuotaZInit(0x70uLL, 0x62704344u);
      v11 = (__int64)v31;
      if ( !v31 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(v31 + 20) = 1LL;
      *(_QWORD *)v31 = &DirectComposition::CPropertyBagMarshaler::`vftable';
      v31[72] = 1;
      *((_QWORD *)v31 + 12) = 16LL;
      goto LABEL_27;
    }
    if ( a2 == 103 )
    {
      v47 = Win32AllocPoolWithQuotaZInit(0x78uLL, 0x63724344u);
      v11 = (__int64)v47;
      if ( !v47 )
        return (unsigned int)-1073741801;
      memset(v47, 0, 0x78uLL);
      v12 = &DirectComposition::CRectangleClipMarshaler::`vftable';
      *(_QWORD *)(v11 + 20) = 1LL;
      goto LABEL_26;
    }
    if ( a2 != 106 )
    {
      if ( a2 == 110 )
      {
        v149 = Win32AllocPoolWithQuotaZInit(0x48uLL, 0x6F724344u);
        v11 = (__int64)v149;
        if ( !v149 )
          return (unsigned int)-1073741801;
        memset(v149, 0, 0x48uLL);
        v12 = &DirectComposition::CRotateTransformMarshaler::`vftable';
        *(_QWORD *)(v11 + 20) = 1LL;
        goto LABEL_26;
      }
      return (unsigned int)-1073741811;
    }
    v150 = (char *)Win32AllocPoolWithQuotaZInit(0x48uLL, 0x6D644344u);
    v11 = (__int64)v150;
    if ( !v150 )
      return (unsigned int)-1073741801;
    *(_QWORD *)(v150 + 20) = 1LL;
    v100 = &DirectComposition::CRemotingRenderTargetMarshaler::`vftable';
    goto LABEL_181;
  }
  if ( a2 == 90 )
  {
    v92 = Win32AllocPoolWithQuotaZInit(0x68uLL, 0x336D4344u);
    v11 = (__int64)v92;
    if ( !v92 )
      return (unsigned int)-1073741801;
    memset(v92, 0, 0x68uLL);
    v12 = &DirectComposition::CMatrixTransform3DMarshaler::`vftable';
    *(_QWORD *)(v11 + 20) = 1LL;
    goto LABEL_26;
  }
  if ( a2 > 0x51 )
  {
    v38 = a2 - 83;
    if ( v38 )
    {
      v39 = v38 - 2;
      if ( v39 )
      {
        v40 = v39 - 1;
        if ( !v40 )
        {
          v64 = Win32AllocPoolWithQuotaZInit(0x70uLL, 0x616D4344u);
          v11 = (__int64)v64;
          if ( !v64 )
            return (unsigned int)-1073741801;
          memset(v64, 0, 0x70uLL);
          v12 = &DirectComposition::CManipulationTransformMarshaler::`vftable';
          *(_QWORD *)(v11 + 20) = 1LL;
          goto LABEL_26;
        }
        v41 = v40 - 1;
        if ( !v41 )
        {
          v42 = Win32AllocPoolWithQuotaZInit(0x38uLL, 0x6D6A4344u);
          v11 = (__int64)v42;
          if ( !v42 )
            return (unsigned int)-1073741801;
          memset(v42, 0, 0x38uLL);
          v12 = &DirectComposition::CMaskBrushMarshaler::`vftable';
          *(_QWORD *)(v11 + 20) = 1LL;
          goto LABEL_26;
        }
        if ( v41 == 2 )
        {
          v91 = Win32AllocPoolWithQuotaZInit(0x50uLL, 0x746D4344u);
          v11 = (__int64)v91;
          if ( !v91 )
            return (unsigned int)-1073741801;
          memset(v91, 0, 0x50uLL);
          v12 = &DirectComposition::CMatrixTransformMarshaler::`vftable';
          *(_QWORD *)(v11 + 20) = 1LL;
          goto LABEL_26;
        }
        return (unsigned int)-1073741811;
      }
      v144 = (char *)Win32AllocPoolWithQuotaZInit(0x98uLL, 0x696D4344u);
      v11 = (__int64)v144;
      if ( !v144 )
        return (unsigned int)-1073741801;
      v144[92] &= 0xC0u;
      *(_QWORD *)(v144 + 20) = 1LL;
      *(_QWORD *)v144 = &DirectComposition::CManipulationMarshaler::`vftable';
      *((_QWORD *)v144 + 12) = 0LL;
      *((_QWORD *)v144 + 13) = 0LL;
      memset(v144 + 112, 0, 0x28uLL);
      goto LABEL_27;
    }
    v145 = Win32AllocPoolWithQuotaZInit(0x80uLL, 0x65664344u);
    v11 = (__int64)v145;
    if ( !v145 )
      return (unsigned int)-1073741801;
    memset(v145, 0, 0x80uLL);
    v12 = &DirectComposition::CLinearTransferEffectMarshaler::`vftable';
    goto LABEL_198;
  }
  if ( a2 == 81 )
  {
    v58 = Win32AllocPoolWithQuotaZInit(0x58uLL, 0x6C6A4344u);
    v11 = (__int64)v58;
    if ( !v58 )
      return (unsigned int)-1073741801;
    memset(v58, 0, 0x58uLL);
    v12 = &DirectComposition::CLinearGradientBrushMarshaler::`vftable';
    *(_QWORD *)(v11 + 20) = 1LL;
    *(_QWORD *)(v11 + 40) = 2LL;
    *(_QWORD *)(v11 + 48) = 0LL;
    *(_QWORD *)(v11 + 56) = 0LL;
    *(_QWORD *)(v11 + 64) = 0LL;
    goto LABEL_26;
  }
  v6 = a2 - 75;
  if ( !v6 )
  {
    v143 = (char *)Win32AllocPoolWithQuotaZInit(0x90uLL, 0x6B694344u);
    v11 = (__int64)v143;
    if ( !v143 )
      return (unsigned int)-1073741801;
    *(_QWORD *)(v143 + 20) = 1LL;
    *(_QWORD *)v143 = &DirectComposition::CInkMarshaler::`vftable';
    v143[104] = 1;
    *((_QWORD *)v143 + 16) = 36LL;
    goto LABEL_27;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v65 = (DirectComposition::CInteractionMarshaler *)Win32AllocPoolWithQuotaZInit(0x120uLL, 0x6F694344u);
    if ( !v65 )
      return (unsigned int)-1073741801;
    v66 = DirectComposition::CInteractionMarshaler::CInteractionMarshaler(v65);
    goto LABEL_123;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v142 = (DirectComposition::CInteractionTrackerMarshaler *)Win32AllocPoolWithQuotaZInit(0x188uLL, 0x72694344u);
    if ( !v142 )
      return (unsigned int)-1073741801;
    v66 = (DirectComposition::CInteractionMarshaler *)DirectComposition::CInteractionTrackerMarshaler::CInteractionTrackerMarshaler(v142);
LABEL_123:
    v11 = (__int64)v66;
    goto LABEL_27;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      v10 = Win32AllocPoolWithQuotaZInit(0x108uLL, 0x766C4344u);
      v11 = (__int64)v10;
      if ( v10 )
      {
        memset(v10, 0, 0x108uLL);
        v12 = &DirectComposition::CLayerVisualMarshaler::`vftable';
        *(_QWORD *)(v11 + 20) = 1LL;
LABEL_26:
        *(_QWORD *)v11 = v12;
        goto LABEL_27;
      }
      return (unsigned int)-1073741801;
    }
    return (unsigned int)-1073741811;
  }
  v43 = (char *)Win32AllocPoolWithQuotaZInit(0x118uLL, 0x666B4344u);
  v11 = (__int64)v43;
  if ( !v43 )
    return (unsigned int)-1073741801;
  *(_QWORD *)(v43 + 20) = 1LL;
  *(_QWORD *)v43 = &DirectComposition::CKeyframeAnimationMarshaler::`vftable';
  *((_DWORD *)v43 + 51) = 1065353216;
LABEL_27:
  if ( !v11 )
    return (unsigned int)-1073741801;
  inserted = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v11 + 56LL))(v11) )
    inserted = DirectComposition::CConnection::AcquireShellResourceAccess(*((DirectComposition::CConnection **)this + 5));
  v19 = *(_QWORD *)v11;
  v20 = v11;
  if ( inserted < 0 )
    goto LABEL_315;
  inserted = (*(__int64 (__fastcall **)(__int64, char *))(v19 + 8))(v11, (char *)this + 472);
  if ( inserted < 0 )
    goto LABEL_314;
  inserted = DirectComposition::CLinearObjectTableBase::InsertObject(
               (DirectComposition::CApplicationChannel *)((char *)this + 112),
               (void *)v11,
               (unsigned int *)(v11 + 24));
  if ( inserted >= 0 && *((int *)this + 6) <= 2 )
  {
    *(_QWORD *)(v11 + 8) = *((_QWORD *)this + 50);
    *((_QWORD *)this + 50) = v11;
  }
  if ( inserted < 0 )
  {
LABEL_314:
    v19 = *(_QWORD *)v11;
    v20 = v11;
LABEL_315:
    (*(void (__fastcall **)(__int64, __int64))(v19 + 104))(v20, 1LL);
    return (unsigned int)inserted;
  }
  if ( v5 )
    DirectComposition::CApplicationChannel::AddAnimationTimeListEntry(
      this,
      *((struct DirectComposition::CAnimationTimeList **)v5 + 9));
  *a3 = (struct DirectComposition::CResourceMarshaler *)v11;
  return (unsigned int)inserted;
}
