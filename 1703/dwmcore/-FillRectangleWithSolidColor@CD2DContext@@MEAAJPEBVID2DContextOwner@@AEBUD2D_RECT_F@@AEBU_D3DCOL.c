/*
 * XREFs of ?FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800AD860
 * Callers:
 *     ?DrawSolidRectangleInternal@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800A1CBC (-DrawSolidRectangleInternal@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 * Callees:
 *     ?GetColorSpace@CD2DTarget@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x18007B230 (-GetColorSpace@CD2DTarget@@QEBA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800AC504 (-SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIAL.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x1800AC7C4 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800AC894 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?scRGBTosRGB@@YAMM@Z @ 0x1800AED2C (-scRGBTosRGB@@YAMM@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x18013BC88 (Template_qq.c)
 *     Template_ffff @ 0x18016637C (Template_ffff.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180189314 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CD2DContext::FillRectangleWithSolidColor(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const struct D2D_RECT_F *a3,
        const struct _D3DCOLORVALUE *a4,
        enum D2D1_ANTIALIAS_MODE a5,
        enum D2D1_PRIMITIVE_BLEND a6)
{
  int v10; // eax
  CD2DTarget *v11; // rsi
  float b; // xmm0_4
  __int64 v13; // rcx
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  int v18; // r12d
  BOOL v19; // eax
  char v20; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  __int128 v23; // xmm0
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  D3DVALUE g; // xmm1_4
  unsigned int v28; // eax
  __int64 v29; // rcx
  __int16 Response; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v31[7]; // [rsp+78h] [rbp-90h] BYREF
  int v32; // [rsp+B0h] [rbp-58h]
  __int64 v33; // [rsp+B4h] [rbp-54h]
  D3DVALUE r; // [rsp+C8h] [rbp-40h] BYREF
  float v35; // [rsp+CCh] [rbp-3Ch]
  float v36; // [rsp+D0h] [rbp-38h]
  float v37; // [rsp+D4h] [rbp-34h]
  struct D2D_MATRIX_3X2_F v38; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v39; // [rsp+F0h] [rbp-18h] BYREF

  CD2DContext::FlushDrawList(this);
  v10 = *((_DWORD *)this + 90);
  v11 = 0LL;
  if ( v10 )
    v11 = *(CD2DTarget **)(*((_QWORD *)this + 42) + 8LL * (unsigned int)(v10 - 1));
  CD2DContext::EnsureBeginDraw(this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v15 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 32LL))(a2);
    Template_qq(v16, &EVTDESC_ETWGUID_DRAWEVENT_Start, 2LL, v15);
  }
  if ( CCommonRegistryData::m_fEnableDisallowNonDrawListRendering
    && (*(_BYTE *)((*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 40LL))(a2) + 91) & 1) != 0 )
  {
    while ( 1 )
    {
      v17 = IsKernelDebuggerPresent();
      Response = 63;
      v18 = v17;
      if ( !v17 )
      {
        v19 = IsDebuggerPresent();
        v20 = Response;
        if ( v19 )
          v20 = 103;
        LOBYTE(Response) = v20;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        word_1801D5868,
        word_1801D5868,
        L"!pD2DContextOwner->GetCurrentVisual()->DisallowNonDrawListRendering()",
        "Function: ",
        L"CD2DContext::FillRectangleWithSolidColor",
        ", ",
        L"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d2dcontext.cpp",
        1982);
      if ( !v18 )
      {
        DbgPrintEx(
          0x65u,
          0,
          "(No kernel debugger is present.) Respond with:\n"
          "  g                    -- Go (continue)\n"
          "  eb 0x%p 'p';g  -- terminate Process\n"
          "  eb 0x%p 't';g  -- terminate Thread\n"
          " or regular debugging.\n",
          &Response,
          &Response);
        JUMPOUT(0x1801113B3LL);
      }
      DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
      switch ( (char)Response )
      {
        case 'B':
        case 'b':
          __debugbreak();
          goto LABEL_6;
        case 'G':
        case 'g':
          goto LABEL_6;
        case 'I':
        case 'i':
          DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
          continue;
        case 'P':
        case 'p':
          CurrentProcess = GetCurrentProcess();
          TerminateProcess(CurrentProcess, 0xC0000001);
          goto LABEL_24;
        case 'T':
        case 't':
          CurrentThread = GetCurrentThread();
          TerminateThread(CurrentThread, 0xC0000001);
          goto LABEL_24;
        default:
LABEL_24:
          DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
          break;
      }
    }
  }
LABEL_6:
  CD2DContext::SetCommonState(this, a2, a6, &a5, &v38);
  if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_DRAWEVENT) )
  {
    v31[0] = *(_QWORD *)&v38.m11;
    v31[6] = *(_QWORD *)&v38.m[2][0];
    v31[2] = *(_QWORD *)&v38.m[1][0];
    v23 = (__int128)*a3;
    v33 = 1065353216LL;
    v39 = v23;
    v31[1] = 0LL;
    v31[3] = 0LL;
    v31[4] = 0LL;
    v31[5] = 1065353216LL;
    v32 = 0;
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v31, (__int64)&v39, &v38.m11);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_ffff(v24, (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT, v25, v26, SLOBYTE(v38.m[1][0]), SLOBYTE(v38.m[1][1]));
  }
  if ( (unsigned int)CD2DTarget::GetColorSpace(v11) )
  {
    g = a4->g;
    r = a4->r;
    b = a4->b;
    v35 = g;
  }
  else
  {
    r = scRGBTosRGB(a4->r);
    v35 = scRGBTosRGB(a4->g);
    b = scRGBTosRGB(a4->b);
  }
  v13 = *((_QWORD *)this + 41);
  v36 = b;
  v37 = fminf(1.0, fmaxf(a4->a, 0.0));
  (*(void (__fastcall **)(__int64, D3DVALUE *))(*(_QWORD *)v13 + 64LL))(v13, &r);
  (*(void (__fastcall **)(_QWORD, const struct D2D_RECT_F *, _QWORD))(**((_QWORD **)this + 22) + 136LL))(
    *((_QWORD *)this + 22),
    a3,
    *((_QWORD *)this + 41));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v28 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 32LL))(a2);
    Template_qq(v29, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 2LL, v28);
  }
  return 0LL;
}
