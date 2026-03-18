/*
 * XREFs of ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18006E340
 * Callers:
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x18006B810 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 *     ?Render@CHwndRenderTargetRemoteApp@@UEAAJ_NPEA_N@Z @ 0x180155D70 (-Render@CHwndRenderTargetRemoteApp@@UEAAJ_NPEA_N@Z.c)
 *     ?Render@CHwndRenderTargetDDA@@UEAAJ_NPEA_N@Z @ 0x180155F80 (-Render@CHwndRenderTargetDDA@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x18000D164 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Release@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800541D0 (-Release@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18006C2A4 (-RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18006D550 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?SupportsMoveOptimization@CHwndRenderTarget@@UEAA_NXZ @ 0x18006ED90 (-SupportsMoveOptimization@CHwndRenderTarget@@UEAA_NXZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x1800716A8 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJPEA_N@Z @ 0x180072344 (-UpdateMPOCaps@COverlayContext@@QEAAJPEA_N@Z.c)
 *     ?Release@CD3DDeviceLevel1@@UEAAKXZ @ 0x180077780 (-Release@CD3DDeviceLevel1@@UEAAKXZ.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180091210 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DJ@@@2PEAVCHwndRenderTarget@@@Z @ 0x1800AA100 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x1800AE1F0 (-PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x1800B80F0 (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1800CD870 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     ?ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z @ 0x1800CE274 (-ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800CE6DC (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x18012D0E8 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z @ 0x1801348DC (-FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z.c)
 *     ?RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180146300 (-RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180155520 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x180187E68 (-RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::Render(CHwndRenderTarget *this, __int64 a2, bool *a3)
{
  char v3; // bp
  char *v4; // r12
  int v5; // ebx
  char v6; // r13
  bool *v7; // r14
  __int64 v9; // rsi
  char v10; // r14
  struct CComposeTop *v11; // rbp
  __int64 v12; // rax
  char v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rbp
  char v17; // r15
  char v18; // r14
  int v19; // eax
  bool v20; // al
  CDirtyRegion *v21; // rcx
  void (*v22)(void); // rax
  bool v23; // zf
  __int64 v25; // rax
  __int64 v26; // rcx
  bool (__fastcall *v27)(CHwndRenderTarget *__hidden); // rax
  char v28; // al
  char v29; // cl
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r13
  int v38; // eax
  __int64 v39; // r15
  int v40; // eax
  __int64 v41; // r8
  int v42; // eax
  unsigned int i; // ebp
  __int64 v44; // rcx
  LPVOID v45; // r14
  int v46; // eax
  __int64 v47; // rcx
  int v48; // eax
  unsigned int j; // r14d
  int v50; // eax
  int v51; // eax
  CD2DContext *v52; // rcx
  const struct ID2DContextOwner *v53; // rdx
  __int64 (__fastcall *v54)(CD2DContext *__hidden, const struct ID2DContextOwner *, struct IRenderTarget **); // rax
  int v55; // eax
  int v56; // ebp
  __int64 v57; // rcx
  __int64 v58; // rcx
  CD3DDeviceLevel1 *v59; // rcx
  void (*v60)(void); // rax
  CBitmapOfDeviceBitmaps *v61; // rcx
  void (*v62)(void); // rax
  __int64 v63; // rcx
  __int64 v64; // rcx
  unsigned int v65; // eax
  __int64 v66; // rbp
  unsigned int v67; // eax
  unsigned int v68; // eax
  __int64 v69; // rbp
  unsigned int v70; // eax
  __int64 v71; // rbp
  unsigned int v72; // eax
  __int64 v73; // rbp
  unsigned int v74; // eax
  __int64 v75; // rbp
  unsigned int v76; // eax
  int v77; // eax
  unsigned int v78; // r8d
  int v79; // r8d
  __int64 v80; // rax
  unsigned int v81; // r8d
  int v82; // r8d
  __int64 v83; // r8
  int v84; // eax
  __int64 v85; // rax
  SIZE_T v86; // r8
  LPVOID v87; // r14
  int v88; // r9d
  SIZE_T v89; // r8
  LPVOID v90; // r14
  int v91; // r9d
  LPVOID v92; // r14
  int v93; // r9d
  __int64 v94; // rcx
  SIZE_T v95; // r8
  int v96; // r9d
  SIZE_T v97; // r8
  LPVOID v98; // r14
  int v99; // r9d
  SIZE_T v100; // r8
  LPVOID v101; // r14
  int v102; // r9d
  SIZE_T v103; // r8
  LPVOID v104; // rbp
  int v105; // eax
  int v106; // eax
  DwmCoreAsimov::CDwmEventManager *Manager; // rax
  int IsOptedIn; // eax
  char v109; // al
  COverlayContext *v110; // rcx
  unsigned int v111; // [rsp+20h] [rbp-58h]
  struct IRenderTarget *v112; // [rsp+80h] [rbp+8h] BYREF
  bool *v113; // [rsp+90h] [rbp+18h]
  char v114; // [rsp+98h] [rbp+20h]

  v113 = a3;
  v114 = 0;
  v3 = 0;
  v4 = (char *)this - 64;
  v5 = 0;
  LOBYTE(v112) = 0;
  v6 = 0;
  v7 = a3;
  v9 = 0LL;
  if ( *((_QWORD *)this + 5)
    || (v77 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v4 + 40LL))((char *)this - 64), v5 = v77, v77 >= 0) )
  {
    v9 = *((_QWORD *)v4 + 13);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v77, 0x62u);
  }
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xB0u);
    goto LABEL_29;
  }
  if ( *((_BYTE *)this + 721) )
  {
    v10 = 0;
    v11 = 0LL;
    v12 = *((_QWORD *)this + 9);
    v13 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this - 6) + 32LL) + 151LL);
    if ( v12 )
    {
      v11 = *(struct CComposeTop **)(v12 + 368);
      if ( v11 )
      {
        if ( *((_QWORD *)v11 + 1) )
        {
          v10 = 1;
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 200LL))(*((_QWORD *)this + 7));
        }
      }
    }
    v14 = *((_QWORD *)this + 8);
    if ( v14 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 56LL))(v14, *((unsigned __int8 *)this + 729));
    v15 = *((_QWORD *)this + 10);
    if ( !*(_BYTE *)(v15 + 2724) )
    {
      if ( *(_BYTE *)(v15 + 2726) )
      {
        if ( !*(_DWORD *)(v15 + 1120) )
        {
LABEL_12:
          if ( !v10 )
          {
LABEL_13:
            v16 = *((_QWORD *)this + 89);
            if ( v16 )
            {
              v17 = 0;
              v18 = 0;
              v19 = COverlayContext::SetMultiplaneOverlayPresentInfo(*((COverlayContext **)this + 89));
              v5 = v19;
              if ( v19 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x573u);
              }
              else
              {
                v5 = 0;
                if ( *(_QWORD *)(v16 + 968) )
                {
                  *(_BYTE *)(v83 + 84) = CDirectFlipInfo::RenderingRealizationChanged(*(CDirectFlipInfo **)(v16 + 968))
                                      && *(int *)(*(_QWORD *)(v83 + 32) + 76LL) <= 1;
                  *(_DWORD *)(v83 + 80) = *(_DWORD *)(*(_QWORD *)(v83 + 32) + 72LL);
                  if ( *(_BYTE *)(v83 + 84) )
                    *(_BYTE *)(v16 + 1089) = 1;
                  v84 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v16 + 968) + 16LL))(*(_QWORD *)(v16 + 968));
                  v5 = v84;
                  if ( v84 < 0 )
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v84, 0xE75u);
                }
                if ( v5 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x574u);
                }
                else
                {
                  v17 = *(_BYTE *)(v16 + 1089);
                  v18 = *(_BYTE *)(v16 + 1090);
                  *(_WORD *)(v16 + 1089) = 0;
                }
              }
              if ( v5 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x126u);
                goto LABEL_29;
              }
              if ( v18 )
              {
                v85 = *((_QWORD *)v4 + 2);
                v4[801] = 1;
                v4[790] = 1;
                (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v85 + 560) + 104LL))(*(_QWORD *)(v85 + 560));
              }
              else if ( v17 )
              {
                *((_BYTE *)this + 726) = 1;
              }
            }
            v3 = (char)v112;
            v7 = v113;
            goto LABEL_23;
          }
        }
      }
      else
      {
        v78 = 0;
        while ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(16LL * v78 + v15 + 24) )
        {
          v78 = v79 + 1;
          if ( v78 >= 8 )
            goto LABEL_12;
        }
      }
    }
    v27 = *(bool (__fastcall **)(CHwndRenderTarget *__hidden))(*(_QWORD *)v4 + 272LL);
    if ( v27 == CHwndRenderTarget::SupportsMoveOptimization )
      v28 = CHwndRenderTarget::SupportsMoveOptimization((CHwndRenderTarget *)v4);
    else
      v28 = v27((CHwndRenderTarget *)v4);
    v29 = v28;
    v30 = *((_QWORD *)v4 + 97);
    if ( v30 && *(_BYTE *)(v30 + 1097) )
      v31 = 232LL;
    else
      v31 = 164LL;
    v32 = CDrawingContext::BeginFrame(
            (CDrawingContext *)v9,
            *((CSwRenderTargetGetBounds **)this + 7),
            (__int64)&v4[v31],
            0LL,
            v29,
            (__int64)v4);
    v5 = v32;
    if ( v32 < 0 )
    {
      v111 = 226;
      goto LABEL_183;
    }
    v6 = 1;
    if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v4 + 176LL))(v4) )
    {
      v80 = *((_QWORD *)this - 6);
      v114 = 1;
      *(_BYTE *)(v80 + 1360) = 1;
    }
    v33 = *((_QWORD *)this + 10);
    if ( !*(_BYTE *)(v33 + 2724) )
    {
      if ( *(_BYTE *)(v33 + 2726) )
      {
        if ( !*(_DWORD *)(v33 + 1120) )
          goto LABEL_59;
      }
      else
      {
        v81 = 0;
        while ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(16LL * v81 + v33 + 24) )
        {
          v81 = v82 + 1;
          if ( v81 >= 8 )
            goto LABEL_59;
        }
      }
    }
    v32 = CHwndRenderTarget::RenderDirtyRegion((CHwndRenderTarget *)v4, (struct CDrawingContext *)v9, v11);
    v5 = v32;
    if ( v32 < 0 )
    {
      v111 = 253;
      goto LABEL_183;
    }
LABEL_59:
    if ( !v11
      || v13
      || (v32 = CHwndRenderTarget::RenderComposeTop(
                  (CHwndRenderTarget *)v4,
                  (struct CDrawingContext *)v9,
                  v11,
                  *(_BYTE *)(*((_QWORD *)this + 10) + 2724LL)),
          v5 = v32,
          v32 >= 0) )
    {
      v34 = *(_QWORD *)(*((_QWORD *)this - 6) + 536LL);
      if ( !v34
        || !*(_BYTE *)(v34 + 24)
        || !CDisplay::IsPrimary(*((CDisplay **)this + 6))
        || (v32 = CHwndRenderTarget::RenderDebugFrameCounter((CHwndRenderTarget *)v4, (struct CDrawingContext *)v9),
            v5 = v32,
            v32 >= 0) )
      {
        v35 = *((_QWORD *)this + 6);
        if ( *(_BYTE *)(v35 + 294) && *(_BYTE *)(v35 + 295) )
          LOBYTE(v112) = 1;
        goto LABEL_13;
      }
      v111 = 271;
    }
    else
    {
      v111 = 264;
    }
LABEL_183:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, v111);
    goto LABEL_29;
  }
LABEL_23:
  v20 = 0;
  if ( (*((_BYTE *)this + 726) || v3 || *((_BYTE *)this + 724) || *((_BYTE *)this + 730)) && !v4[801] )
  {
    v25 = *((_QWORD *)v4 + 97);
    if ( !v25
      || (!*(_DWORD *)(v25 + 264) || !*(_BYTE *)(v25 + 1091))
      && ((v26 = *(_QWORD *)(v25 + 968)) == 0 || !*(_BYTE *)(v26 + 86) || *(_BYTE *)(v26 + 84)) )
    {
      v20 = 1;
    }
  }
  *v7 = v20;
LABEL_29:
  if ( g_LockAndReadTarget )
    CDrawingContext::ReadTexture((CDrawingContext *)v9);
  if ( v6 )
  {
    *(_QWORD *)(v9 + 6704) = 0LL;
    v36 = 0xFFFFFFFFLL;
    *(_DWORD *)(v9 + 440) = 0;
    v37 = 64LL;
    v38 = *(_DWORD *)(v9 + 448);
    if ( v38 != 10 )
    {
      *(_DWORD *)(v9 + 448) = v38 + 1;
      goto LABEL_67;
    }
    v68 = *(_DWORD *)(v9 + 464);
    v69 = 64LL;
    if ( v68 > 0x40 )
      v69 = v68;
    if ( (unsigned __int64)(3 * v69) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else
    {
      if ( (unsigned int)(3 * v69) > *(_DWORD *)(v9 + 444) )
      {
LABEL_127:
        *(_DWORD *)(v9 + 464) = 0;
        *(_DWORD *)(v9 + 448) = 0;
LABEL_67:
        *(_DWORD *)(v9 + 472) = 0;
        v39 = 8LL;
        v40 = *(_DWORD *)(v9 + 480);
        if ( v40 != 8 )
        {
          *(_DWORD *)(v9 + 480) = v40 + 1;
          v41 = 0LL;
          goto LABEL_69;
        }
        v65 = *(_DWORD *)(v9 + 496);
        v66 = 8LL;
        if ( v65 > 8 )
          v66 = v65;
        if ( (unsigned __int64)(3 * v66) > 0xFFFFFFFF )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
        }
        else
        {
          if ( (unsigned int)(3 * v66) > *(_DWORD *)(v9 + 476) )
          {
LABEL_117:
            v41 = 0LL;
            *(_DWORD *)(v9 + 496) = 0;
            *(_DWORD *)(v9 + 480) = 0;
LABEL_69:
            *(_DWORD *)(v9 + 504) = 0;
            v42 = *(_DWORD *)(v9 + 512);
            if ( v42 != 10 )
            {
              *(_DWORD *)(v9 + 512) = v42 + 1;
              goto LABEL_71;
            }
            v70 = *(_DWORD *)(v9 + 528);
            v71 = 64LL;
            if ( v70 > 0x40 )
              v71 = v70;
            if ( (unsigned __int64)(3 * v71) > 0xFFFFFFFF )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
            }
            else if ( (unsigned int)(3 * v71) <= *(_DWORD *)(v9 + 508) )
            {
              if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v71 <= 1 )
              {
                v93 = -2147024809;
              }
              else
              {
                v92 = HeapAlloc(WPF::g_processHeap, 0, (unsigned int)v71);
                if ( v92 )
                {
                  WPF::ProcessHeapImpl::Free(*(void **)(v9 + 520));
                  *(_QWORD *)(v9 + 520) = v92;
                  *(_DWORD *)(v9 + 508) = v71;
                  goto LABEL_132;
                }
                v93 = -2147024882;
              }
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v93, 0xF3u);
            }
LABEL_132:
            v41 = 0LL;
            *(_DWORD *)(v9 + 528) = 0;
            *(_DWORD *)(v9 + 512) = 0;
LABEL_71:
            if ( *(_DWORD *)(v9 + 560) )
            {
              do
                CDrawingContext::PopLayerInternal(v9);
              while ( *(_DWORD *)(v9 + 560) );
              v41 = 0LL;
            }
            for ( i = 0; i < *(_DWORD *)(v9 + 688); ++i )
            {
              v94 = *(_QWORD *)(*(_QWORD *)(v9 + 664) + 8LL * i);
              if ( v94 )
                (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v94 + 16LL))(v94, v36, v41);
            }
            *(_DWORD *)(v9 + 688) = 0;
            DynArrayImpl<0>::ShrinkToSize(v9 + 664, 8LL);
            v44 = *(_QWORD *)(v9 + 736);
            if ( v44 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 8LL))(v44);
              *(_QWORD *)(v9 + 736) = 0LL;
            }
            LODWORD(v45) = 0;
            *(_DWORD *)(v9 + 840) = 0;
            *(_DWORD *)(v9 + 880) = 0;
            v46 = *(_DWORD *)(v9 + 888);
            if ( v46 != 10 )
            {
              *(_DWORD *)(v9 + 888) = v46 + 1;
              goto LABEL_77;
            }
            v72 = *(_DWORD *)(v9 + 904);
            v73 = 64LL;
            if ( v72 > 0x40 )
              v73 = v72;
            if ( (unsigned __int64)(3 * v73) > 0xFFFFFFFF )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
            }
            else if ( (unsigned int)(3 * v73) <= *(_DWORD *)(v9 + 884) )
            {
              if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v73 <= 0x1C )
              {
                v96 = -2147024809;
              }
              else
              {
                v95 = 28LL * (unsigned int)v73;
                if ( !v95 )
                  v95 = 1LL;
                v45 = HeapAlloc(WPF::g_processHeap, 0, v95);
                if ( v45 )
                {
                  WPF::ProcessHeapImpl::Free(*(void **)(v9 + 896));
                  *(_QWORD *)(v9 + 896) = v45;
                  LODWORD(v45) = 0;
                  *(_DWORD *)(v9 + 884) = v73;
                  goto LABEL_137;
                }
                v96 = -2147024882;
              }
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v96, 0xF3u);
            }
LABEL_137:
            *(_DWORD *)(v9 + 904) = (_DWORD)v45;
            *(_DWORD *)(v9 + 888) = (_DWORD)v45;
LABEL_77:
            *(_DWORD *)(v9 + 936) = (_DWORD)v45;
            DynArrayImpl<0>::ShrinkToSize(v9 + 912, 80LL);
            *(_DWORD *)(v9 + 2976) = (_DWORD)v45;
            v48 = *(_DWORD *)(v9 + 2984);
            if ( v48 != 8 )
            {
              *(_DWORD *)(v9 + 2984) = v48 + 1;
              goto LABEL_79;
            }
            v67 = *(_DWORD *)(v9 + 3000);
            v47 = 0xFFFFFFFFLL;
            if ( v67 > 8 )
              v39 = v67;
            if ( (unsigned __int64)(3 * v39) > 0xFFFFFFFF )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
            }
            else if ( (unsigned int)(3 * v39) <= *(_DWORD *)(v9 + 2980) )
            {
              if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v39 <= 0x10 )
              {
                v99 = -2147024809;
              }
              else
              {
                v97 = 16LL * (unsigned int)v39;
                if ( !v97 )
                  v97 = 1LL;
                v98 = HeapAlloc(WPF::g_processHeap, 0, v97);
                if ( v98 )
                {
                  WPF::ProcessHeapImpl::Free(*(void **)(v9 + 2992));
                  *(_QWORD *)(v9 + 2992) = v98;
                  *(_DWORD *)(v9 + 2980) = v39;
                  goto LABEL_122;
                }
                v99 = -2147024882;
              }
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v99, 0xF3u);
            }
LABEL_122:
            *(_DWORD *)(v9 + 3000) = 0;
            *(_DWORD *)(v9 + 2984) = 0;
LABEL_79:
            for ( j = 0; j < *(_DWORD *)(v9 + 1768); ++j )
              CScopedClipStack::FreeCpuClipStackState(
                (CScopedClipStack *)v47,
                (struct CScopedClipStack::CpuClipStackState *)(*(_QWORD *)(v9 + 1744) + 120LL * j));
            *(_DWORD *)(v9 + 1768) = 0;
            DynArrayImpl<0>::ShrinkToSize(v9 + 1744, 120LL);
            *(_DWORD *)(v9 + 3008) = 0;
            v50 = *(_DWORD *)(v9 + 3016);
            if ( v50 != 10 )
            {
              *(_DWORD *)(v9 + 3016) = v50 + 1;
              goto LABEL_82;
            }
            v74 = *(_DWORD *)(v9 + 3032);
            v75 = 64LL;
            if ( v74 > 0x40 )
              v75 = v74;
            if ( (unsigned __int64)(3 * v75) > 0xFFFFFFFF )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
            }
            else if ( (unsigned int)(3 * v75) <= *(_DWORD *)(v9 + 3012) )
            {
              if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v75 <= 4 )
              {
                v102 = -2147024809;
              }
              else
              {
                v100 = 4 * v75;
                if ( !(4 * v75) )
                  v100 = 1LL;
                v101 = HeapAlloc(WPF::g_processHeap, 0, v100);
                if ( v101 )
                {
                  WPF::ProcessHeapImpl::Free(*(void **)(v9 + 3024));
                  *(_QWORD *)(v9 + 3024) = v101;
                  *(_DWORD *)(v9 + 3012) = v75;
                  goto LABEL_142;
                }
                v102 = -2147024882;
              }
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v102, 0xF3u);
            }
LABEL_142:
            *(_DWORD *)(v9 + 3032) = 0;
            *(_DWORD *)(v9 + 3016) = 0;
LABEL_82:
            *(_DWORD *)(v9 + 3208) = 0;
            v51 = *(_DWORD *)(v9 + 3216);
            if ( v51 != 10 )
            {
              *(_DWORD *)(v9 + 3216) = v51 + 1;
LABEL_84:
              v52 = *(CD2DContext **)(v9 + 392);
              v112 = 0LL;
              v53 = (const struct ID2DContextOwner *)(v9 + 8);
              v54 = *(__int64 (__fastcall **)(CD2DContext *__hidden, const struct ID2DContextOwner *, struct IRenderTarget **))(*(_QWORD *)v52 + 32LL);
              if ( v54 == CD2DContext::PopTarget )
                v55 = CD2DContext::PopTarget(v52, v53, &v112);
              else
                v55 = v54(v52, v53, &v112);
              v56 = v55;
              if ( v55 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v55, 0x2628u);
              }
              else if ( g_LockAndReadD2DTarget )
              {
                (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v9 + 368) + 176LL))(
                  *(_QWORD *)(v9 + 368),
                  0LL,
                  0LL);
              }
              v57 = *(_QWORD *)(v9 + 368);
              if ( v57 )
              {
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
                *(_QWORD *)(v9 + 368) = 0LL;
              }
              v58 = *(_QWORD *)(v9 + 376);
              if ( v58 )
              {
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
                *(_QWORD *)(v9 + 376) = 0LL;
              }
              if ( v112 )
                (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v112 + 16LL))(v112);
              *(_BYTE *)(v9 + 6769) = 1;
              if ( v56 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v56, 0x1E9u);
              v59 = *(CD3DDeviceLevel1 **)(v9 + 392);
              if ( v59 )
              {
                v60 = *(void (**)(void))(*(_QWORD *)v59 + 16LL);
                if ( (char *)v60 == (char *)CD3DDeviceLevel1::Release )
                  CD3DDeviceLevel1::Release(v59);
                else
                  v60();
                *(_QWORD *)(v9 + 392) = 0LL;
              }
              v61 = *(CBitmapOfDeviceBitmaps **)(v9 + 3976);
              if ( v61 )
              {
                v62 = *(void (**)(void))(*(_QWORD *)v61 + 16LL);
                if ( (char *)v62 == (char *)CBitmapOfDeviceBitmaps::Release )
                  CBitmapOfDeviceBitmaps::Release(v61);
                else
                  v62();
                *(_QWORD *)(v9 + 3976) = 0LL;
              }
              v63 = *(_QWORD *)(v9 + 3448);
              if ( v63 )
              {
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
                *(_QWORD *)(v9 + 3448) = 0LL;
              }
              v23 = *(_BYTE *)(v9 + 3040) == 0;
              *(_BYTE *)(v9 + 6772) = 0;
              if ( v23 && !*(_QWORD *)(v9 + 6704) )
              {
                v64 = *(_QWORD *)(v9 + 6744);
                if ( v64 )
                {
                  v106 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v64 + 24) + 88LL))(*(_QWORD *)(v64 + 24));
                  if ( v106 < 0 )
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v106, 0x205u);
                  *(_QWORD *)(v9 + 6744) = 0LL;
                }
                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
                  TemplateEventDescriptor(v64, &EVTDESC_ETWGUID_DRAWING_CONTEXT_FRAME_Stop);
              }
              *(_QWORD *)(v9 + 3240) = 0LL;
              goto LABEL_32;
            }
            v76 = *(_DWORD *)(v9 + 3232);
            if ( v76 > 0x40 )
              v37 = v76;
            if ( (unsigned __int64)(3 * v37) > 0xFFFFFFFF )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
            }
            else if ( (unsigned int)(3 * v37) <= *(_DWORD *)(v9 + 3212) )
            {
              if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v37 <= 0x10 )
              {
                v105 = -2147024809;
              }
              else
              {
                v103 = 16LL * (unsigned int)v37;
                if ( !v103 )
                  v103 = 1LL;
                v104 = HeapAlloc(WPF::g_processHeap, 0, v103);
                if ( v104 )
                {
                  WPF::ProcessHeapImpl::Free(*(void **)(v9 + 3224));
                  *(_QWORD *)(v9 + 3224) = v104;
                  *(_DWORD *)(v9 + 3212) = v37;
                  goto LABEL_147;
                }
                v105 = -2147024882;
              }
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v105, 0xF3u);
            }
LABEL_147:
            *(_DWORD *)(v9 + 3232) = 0;
            *(_DWORD *)(v9 + 3216) = 0;
            goto LABEL_84;
          }
          if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v66 <= 0x44 )
          {
            v91 = -2147024809;
            goto LABEL_208;
          }
          v89 = 68LL * (unsigned int)v66;
          if ( !v89 )
            v89 = 1LL;
          v90 = HeapAlloc(WPF::g_processHeap, 0, v89);
          if ( !v90 )
          {
            v91 = -2147024882;
LABEL_208:
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v91, 0xF3u);
            goto LABEL_209;
          }
          WPF::ProcessHeapImpl::Free(*(void **)(v9 + 488));
          *(_QWORD *)(v9 + 488) = v90;
          *(_DWORD *)(v9 + 476) = v66;
        }
LABEL_209:
        v36 = 0xFFFFFFFFLL;
        goto LABEL_117;
      }
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v69 <= 0x10 )
      {
        v88 = -2147024809;
        goto LABEL_198;
      }
      v86 = 16LL * (unsigned int)v69;
      if ( !v86 )
        v86 = 1LL;
      v87 = HeapAlloc(WPF::g_processHeap, 0, v86);
      if ( !v87 )
      {
        v88 = -2147024882;
LABEL_198:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v88, 0xF3u);
        goto LABEL_199;
      }
      WPF::ProcessHeapImpl::Free(*(void **)(v9 + 456));
      *(_QWORD *)(v9 + 456) = v87;
      *(_DWORD *)(v9 + 444) = v69;
    }
LABEL_199:
    v36 = 0xFFFFFFFFLL;
    goto LABEL_127;
  }
LABEL_32:
  v21 = (CDirtyRegion *)*((_QWORD *)this + 10);
  if ( v21 )
  {
    v22 = *(void (**)(void))(*(_QWORD *)v21 + 8LL);
    if ( (char *)v22 == (char *)CDirtyRegion::Release )
      CDirtyRegion::Release(v21);
    else
      v22();
    *((_QWORD *)this + 10) = 0LL;
  }
  v23 = v114 == 0;
  *((_BYTE *)this + 721) = 0;
  if ( !v23 )
  {
    *(_BYTE *)(*((_QWORD *)this - 6) + 1360LL) = 0;
    *((_BYTE *)this + 732) = *(_BYTE *)(v9 + 6777);
  }
  if ( v5 < 0 )
  {
    *((_BYTE *)this + 726) = 0;
    Manager = DwmCoreAsimov::CDwmEventManager::GetManager(v21);
    DwmCoreAsimov::CDwmEventManager::ReportCompositionError(Manager, L"WindowErrors", L"HandleWindowErrors.", v5);
    if ( v5 != -2003304442 )
    {
      if ( v5 == -2003304316 || v5 == -2003304309 )
      {
        CHwndRenderTarget::ReleaseResourcesForDisplayChange(this);
        v5 = 0;
        goto LABEL_280;
      }
      if ( v5 == -2003304307 )
      {
        CHwndRenderTarget::ReleaseResourcesForDisplayChange(this);
        v5 = -2003304307;
        goto LABEL_280;
      }
      if ( v5 != -2003304306 )
      {
        CHwndRenderTarget::ReleaseResourcesForDisplayChange(this);
LABEL_280:
        v4[787] = 1;
        return (unsigned int)v5;
      }
      if ( byte_180241C59 )
      {
        v109 = byte_180241C58;
      }
      else
      {
        IsOptedIn = WinSqmIsOptedIn();
        byte_180241C59 = 1;
        v109 = IsOptedIn != 0;
        byte_180241C58 = v109;
      }
      if ( v109 )
        CDwmCoreWinSqm::RecordDisplayDriverName();
    }
    CHwndRenderTarget::ReleaseResourcesForDisplayChange(this);
    v5 = -2003304442;
    goto LABEL_280;
  }
  if ( v5 == 142213121 )
  {
    v4[792] = 1;
    return (unsigned int)v5;
  }
  if ( v5 != 142213129 )
    return (unsigned int)v5;
  v110 = (COverlayContext *)*((_QWORD *)v4 + 97);
  v4[792] = 0;
  v4[787] = 1;
  if ( v110 )
  {
    COverlayContext::UpdateMPOCaps(v110, 0LL);
    *(_BYTE *)(*((_QWORD *)v4 + 97) + 1093LL) = 1;
  }
  return 0LL;
}
