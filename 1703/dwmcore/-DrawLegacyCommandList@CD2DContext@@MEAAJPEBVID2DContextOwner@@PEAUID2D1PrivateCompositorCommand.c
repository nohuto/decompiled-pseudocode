/*
 * XREFs of ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x1800AD1A0
 * Callers:
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x18000EC78 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?DrawLegacyD2DCommandList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorCommandList@@M_NI@Z @ 0x18000EF20 (-DrawLegacyD2DCommandList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorCommandList@@M_NI@Z.c)
 *     ?DrawAtlasedRects@CDrawingContext@@QEAAJPEAVCAtlasedRectsGroup@@@Z @ 0x1800A741C (-DrawAtlasedRects@CDrawingContext@@QEAAJPEAVCAtlasedRectsGroup@@@Z.c)
 *     ?FillRectanglesAsCommandList@CD2DContext@@AEAAJPEBVID2DContextOwner@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAUID2D1Bitmap@@AEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800AC9E4 (-FillRectanglesAsCommandList@CD2DContext@@AEAAJPEBVID2DContextOwner@@PEAV-$TMilRect_@MUMilRectF@.c)
 *     ?DrawBitmapAsCommandList@CD2DContext@@AEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800ACD0C (-DrawBitmapAsCommandList@CD2DContext@@AEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap@@PEBUD2D_RECT_F.c)
 * Callees:
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x18000FD68 (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x18007B214 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     ?GetColorSpace@CD2DTarget@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x18007B230 (-GetColorSpace@CD2DTarget@@QEBA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ?Set@CHWCallbackRenderer@@QEAAXIAEBURenderTargetInfo@@IIW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18008DF3C (-Set@CHWCallbackRenderer@@QEAAXIAEBURenderTargetInfo@@IIW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?GetWorldTransform3x2@CDrawingContext@@UEBAXPEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800A0CE0 (-GetWorldTransform3x2@CDrawingContext@@UEBAXPEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z @ 0x1800AC6B8 (-D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z.c)
 *     ??$ReleaseInterface@VCWARPCallbackRenderer@@@@YAXAEAPEAVCWARPCallbackRenderer@@@Z @ 0x1800C5FC4 (--$ReleaseInterface@VCWARPCallbackRenderer@@@@YAXAEAPEAVCWARPCallbackRenderer@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x18013BC88 (Template_qq.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180189314 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CD2DContext::DrawLegacyCommandList(
        __int64 a1,
        CDrawingContext *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        char a8)
{
  _BYTE *v8; // rbp
  __int64 v12; // rdx
  __int64 v13; // rax
  void (__fastcall *v14)(CDrawingContext *, struct D2D_MATRIX_3X2_F *); // rax
  __int64 v16; // r15
  __int64 v17; // rcx
  unsigned int i; // ebx
  __int64 v19; // rdi
  int v20; // eax
  CD2DTarget *v21; // r13
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rax
  int v28; // edi
  int v29; // ebx
  enum DXGI_COLOR_SPACE_TYPE ColorSpace; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // ebx
  BOOL v35; // eax
  CHAR v36; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  __int64 v39; // rcx
  CHAR Response[4]; // [rsp+60h] [rbp-C8h] BYREF
  struct D2D_MATRIX_3X2_F v41; // [rsp+68h] [rbp-C0h] BYREF
  _BYTE v42[64]; // [rsp+80h] [rbp-A8h] BYREF

  v8 = 0LL;
  if ( *(_QWORD *)(a1 + 464) )
  {
    v20 = *(_DWORD *)(a1 + 360);
    v21 = 0LL;
    if ( v20 )
      v21 = *(CD2DTarget **)(*(_QWORD *)(a1 + 336) + 8LL * (unsigned int)(v20 - 1));
    v22 = *(_DWORD *)(a1 + 360);
    v23 = 0LL;
    if ( v22 )
      v23 = *(_QWORD *)(*(_QWORD *)(a1 + 336) + 8LL * (unsigned int)(v22 - 1));
    v24 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v23 + 24) + 120LL))(*(_QWORD *)(v23 + 24));
    v25 = 0LL;
    *(_DWORD *)Response = *(_DWORD *)(v24 + 152);
    v26 = *(_DWORD *)(a1 + 360);
    if ( v26 )
      v25 = *(_QWORD *)(*(_QWORD *)(a1 + 336) + 8LL * (unsigned int)(v26 - 1));
    v27 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v25 + 24) + 120LL))(*(_QWORD *)(v25 + 24));
    v28 = *(_DWORD *)(a1 + 32);
    v29 = *(_DWORD *)(v27 + 148);
    ColorSpace = (unsigned int)CD2DTarget::GetColorSpace(v21);
    CHWCallbackRenderer::Set(
      *(CHWCallbackRenderer **)(a1 + 464),
      v28,
      (const struct RenderTargetInfo *)(a1 + 440),
      v29,
      *(signed int *)Response,
      ColorSpace);
    v31 = CD2DContext::DrawCustomCallbackRendererInternal(
            (CD2DContext *)a1,
            *(struct ID2D1PrivateCompositorRenderer **)(a1 + 464));
    if ( v31 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x3E2u);
    else
      ReleaseInterface<CWARPCallbackRenderer>(a1 + 464);
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 472);
    if ( v12 )
    {
      *(_DWORD *)(v12 + 44) = *(_DWORD *)(a1 + 32);
      *(_OWORD *)(v12 + 48) = *(_OWORD *)(a1 + 440);
      *(_DWORD *)(v12 + 64) = *(_DWORD *)(a1 + 456);
      *(_BYTE *)(v12 + 68) = 1;
      v32 = CD2DContext::DrawCustomCallbackRendererInternal(
              (CD2DContext *)a1,
              *(struct ID2D1PrivateCompositorRenderer **)(a1 + 472));
      if ( v32 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x3EEu);
      else
        ReleaseInterface<CWARPCallbackRenderer>(a1 + 472);
    }
  }
  if ( CCommonRegistryData::m_fEnableDisallowNonDrawListRendering
    && (*(_BYTE *)((*(__int64 (__fastcall **)(CDrawingContext *))(*(_QWORD *)a2 + 40LL))(a2) + 91) & 1) != 0 )
  {
    while ( 1 )
    {
      v33 = IsKernelDebuggerPresent();
      strcpy(Response, "?");
      v34 = v33;
      if ( !v33 )
      {
        v35 = IsDebuggerPresent();
        v36 = Response[0];
        if ( v35 )
          v36 = 103;
        Response[0] = v36;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        word_1801D5868,
        word_1801D5868,
        L"!pD2DContextOwner->GetCurrentVisual()->DisallowNonDrawListRendering()",
        "Function: ",
        L"CD2DContext::DrawLegacyCommandList",
        ", ",
        L"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d2dcontext.cpp",
        2058);
      if ( !v34 )
      {
        DbgPrintEx(
          0x65u,
          0,
          "(No kernel debugger is present.) Respond with:\n"
          "  g                    -- Go (continue)\n"
          "  eb 0x%p 'p';g  -- terminate Process\n"
          "  eb 0x%p 't';g  -- terminate Thread\n"
          " or regular debugging.\n",
          Response,
          Response);
        JUMPOUT(0x180110E0CLL);
      }
      DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", Response, 2u);
      switch ( Response[0] )
      {
        case 'B':
        case 'b':
          __debugbreak();
          goto LABEL_4;
        case 'G':
        case 'g':
          goto LABEL_4;
        case 'I':
        case 'i':
          DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
          continue;
        case 'P':
        case 'p':
          CurrentProcess = GetCurrentProcess();
          TerminateProcess(CurrentProcess, 0xC0000001);
          goto LABEL_47;
        case 'T':
        case 't':
          CurrentThread = GetCurrentThread();
          TerminateThread(CurrentThread, 0xC0000001);
          goto LABEL_47;
        default:
LABEL_47:
          DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
          break;
      }
    }
  }
LABEL_4:
  if ( !*(_BYTE *)(a1 + 480) )
  {
    v16 = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_qq(a1, &EVTDESC_ETWGUID_DRAWEVENT_Start, 16LL, 0LL);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 176) + 384LL))(*(_QWORD *)(a1 + 176));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_qq(v17, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 16LL, 0LL);
    for ( i = 0; i < *(_DWORD *)(a1 + 360); v16 = v19 )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(a1 + 336) + 8LL * i);
      if ( v16 )
        *(_BYTE *)(v16 + 48) = 0;
      if ( !*(_BYTE *)(v19 + 48) )
      {
        *(_QWORD *)(v19 + 16) = a1;
        CD2DContext::D2DSetTargetInternal((CD2DContext *)a1, (struct CD2DTarget *)v19);
        *(_BYTE *)(v19 + 48) = 1;
        CD2DTarget::ApplyCurrentClip((CD2DTarget *)v19);
      }
      ++i;
    }
    *(_BYTE *)(a1 + 480) = 1;
  }
  *(_BYTE *)(a1 + 481) = 1;
  v13 = *(_QWORD *)a2;
  if ( a8 )
  {
    (*(void (__fastcall **)(CDrawingContext *, _BYTE *))(v13 + 24))(a2, v42);
    v39 = *(_QWORD *)(a1 + 176);
    *(_OWORD *)&v41.m11 = _xmm;
    *(_QWORD *)&v41.m[2][0] = 0LL;
    (*(void (__fastcall **)(__int64, struct D2D_MATRIX_3X2_F *))(*(_QWORD *)v39 + 240LL))(v39, &v41);
    v8 = v42;
  }
  else
  {
    v14 = *(void (__fastcall **)(CDrawingContext *, struct D2D_MATRIX_3X2_F *))(v13 + 16);
    if ( v14 == CDrawingContext::GetWorldTransform3x2 )
      CDrawingContext::GetWorldTransform3x2(a2, &v41);
    else
      v14(a2, &v41);
    (*(void (__fastcall **)(_QWORD, struct D2D_MATRIX_3X2_F *))(**(_QWORD **)(a1 + 176) + 240LL))(
      *(_QWORD *)(a1 + 176),
      &v41);
  }
  if ( a5 != *(_DWORD *)(a1 + 400) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 176) + 256LL))(*(_QWORD *)(a1 + 176), a5);
    *(_DWORD *)(a1 + 400) = a5;
  }
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _BYTE *, unsigned int, int))(**(_QWORD **)(a1 + 184) + 32LL))(
    *(_QWORD *)(a1 + 184),
    a3,
    a6,
    v8,
    a6,
    a7);
  return 0LL;
}
