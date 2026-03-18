/*
 * XREFs of ?FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1801E3010
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180095C2C (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180096E20 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq @ 0x180147E0C (McTemplateU0qq.c)
 *     McTemplateU0ffff @ 0x18019F56C (McTemplateU0ffff.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1801CD38C (-IsKernelDebuggerPresent@@YAHXZ.c)
 *     ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801E3ED8 (-SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIAL.c)
 *     ?GetColorSpace@CD2DTarget@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x1801EC71C (-GetColorSpace@CD2DTarget@@QEBA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ?scRGBTosRGB@@YAMM@Z @ 0x180207F84 (-scRGBTosRGB@@YAMM@Z.c)
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
  CD2DTarget *v11; // r12
  int v12; // eax
  int v13; // eax
  int v14; // r14d
  BOOL v15; // eax
  char v16; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  __int128 v19; // xmm0
  enum DXGI_COLOR_SPACE_TYPE ColorSpace; // eax
  float g; // xmm6_4
  float b; // xmm7_4
  __int64 v23; // rcx
  int v24; // eax
  __int16 Response; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v27[7]; // [rsp+78h] [rbp-90h] BYREF
  int v28; // [rsp+B0h] [rbp-58h]
  __int64 v29; // [rsp+B4h] [rbp-54h]
  D3DVALUE r; // [rsp+C8h] [rbp-40h] BYREF
  float v31; // [rsp+CCh] [rbp-3Ch]
  float v32; // [rsp+D0h] [rbp-38h]
  float v33; // [rsp+D4h] [rbp-34h]
  struct D2D_MATRIX_3X2_F v34; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v35; // [rsp+F0h] [rbp-18h] BYREF

  CD2DContext::FlushDrawList(this);
  v10 = *((_DWORD *)this + 86);
  v11 = 0LL;
  if ( v10 )
    v11 = *(CD2DTarget **)(*((_QWORD *)this + 40) + 8LL * (unsigned int)(v10 - 1));
  CD2DContext::EnsureBeginDraw(this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v12 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 32LL))(a2);
    McTemplateU0qq(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Start, 2, v12);
  }
  if ( CCommonRegistryData::m_fEnableDisallowNonDrawListRendering
    && (*(_BYTE *)((*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 40LL))(a2) + 94) & 0x10) != 0 )
  {
    while ( 1 )
    {
      v13 = IsKernelDebuggerPresent();
      Response = 63;
      v14 = v13;
      if ( !v13 )
      {
        v15 = IsDebuggerPresent();
        v16 = Response;
        if ( v15 )
          v16 = 103;
        LOBYTE(Response) = v16;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        word_180252860,
        word_180252860,
        L"!pD2DContextOwner->GetCurrentVisual()->DisallowNonDrawListRendering()",
        "Function: ",
        L"CD2DContext::FillRectangleWithSolidColor",
        ", ",
        L"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d2dcontext.cpp",
        1495);
      if ( !v14 )
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
        __debugbreak();
      }
      DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
      switch ( (char)Response )
      {
        case 'B':
        case 'b':
          __debugbreak();
          goto LABEL_20;
        case 'G':
        case 'g':
          goto LABEL_20;
        case 'I':
        case 'i':
          DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
          continue;
        case 'P':
        case 'p':
          CurrentProcess = GetCurrentProcess();
          TerminateProcess(CurrentProcess, 0xC0000001);
          goto LABEL_18;
        case 'T':
        case 't':
          CurrentThread = GetCurrentThread();
          TerminateThread(CurrentThread, 0xC0000001);
          goto LABEL_18;
        default:
LABEL_18:
          DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
          break;
      }
    }
  }
LABEL_20:
  CD2DContext::SetCommonState(this, a2, a6, &a5, &v34);
  if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context[0], &EVTDESC_ETWGUID_DRAWEVENT) )
  {
    v27[0] = *(_QWORD *)&v34.m11;
    v27[6] = *(_QWORD *)&v34.m[2][0];
    v27[2] = *(_QWORD *)&v34.m[1][0];
    v19 = (__int128)*a3;
    v29 = 1065353216LL;
    v35 = v19;
    v27[1] = 0LL;
    v27[3] = 0LL;
    v27[4] = 0LL;
    v27[5] = 1065353216LL;
    v28 = 0;
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v27, (__int64)&v35, &v34.m11);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0ffff(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT,
        v34.m11,
        v34.m12,
        SLOBYTE(v34.m[1][0]),
        SLOBYTE(v34.m[1][1]));
  }
  ColorSpace = CD2DTarget::GetColorSpace(v11);
  g = a4->g;
  b = a4->b;
  if ( ColorSpace )
  {
    r = a4->r;
    v31 = g;
    v32 = b;
  }
  else
  {
    r = scRGBTosRGB(a4->r);
    v31 = scRGBTosRGB(g);
    v32 = scRGBTosRGB(b);
  }
  v23 = *((_QWORD *)this + 38);
  v33 = fminf(1.0, fmaxf(a4->a, 0.0));
  (*(void (__fastcall **)(__int64, D3DVALUE *))(*(_QWORD *)v23 + 64LL))(v23, &r);
  (*(void (__fastcall **)(_QWORD, const struct D2D_RECT_F *, _QWORD))(**((_QWORD **)this + 22) + 136LL))(
    *((_QWORD *)this + 22),
    a3,
    *((_QWORD *)this + 38));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v24 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 32LL))(a2);
    McTemplateU0qq(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 2, v24);
  }
  return 0LL;
}
