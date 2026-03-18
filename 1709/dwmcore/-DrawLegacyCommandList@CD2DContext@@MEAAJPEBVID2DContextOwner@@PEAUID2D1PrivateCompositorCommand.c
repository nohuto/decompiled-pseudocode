/*
 * XREFs of ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x180044710
 * Callers:
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x18003EAB0 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 * Callees:
 *     ?GetWorldTransform3x2@CDrawingContext@@UEBAXPEAUD2D_MATRIX_3X2_F@@@Z @ 0x180036BF0 (-GetWorldTransform3x2@CDrawingContext@@UEBAXPEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180043ED0 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180043FB4 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1801941BC (-IsKernelDebuggerPresent@@YAHXZ.c)
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
  __int64 v11; // rax
  void (__fastcall *v12)(CDrawingContext *, struct D2D_MATRIX_3X2_F *); // rax
  _BYTE *v13; // rsi
  int v15; // eax
  int v16; // esi
  BOOL v17; // eax
  CHAR v18; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  __int64 v21; // rcx
  CHAR Response[8]; // [rsp+60h] [rbp-C8h] BYREF
  struct D2D_MATRIX_3X2_F v23; // [rsp+68h] [rbp-C0h] BYREF
  _BYTE v24[64]; // [rsp+80h] [rbp-A8h] BYREF

  CD2DContext::FlushDrawList((CD2DContext *)a1);
  if ( CCommonRegistryData::m_fEnableDisallowNonDrawListRendering
    && (*(_BYTE *)((*(__int64 (__fastcall **)(CDrawingContext *))(*(_QWORD *)a2 + 40LL))(a2) + 94) & 1) != 0 )
  {
    while ( 1 )
    {
      v15 = IsKernelDebuggerPresent();
      strcpy(Response, "?");
      v16 = v15;
      if ( !v15 )
      {
        v17 = IsDebuggerPresent();
        v18 = Response[0];
        if ( v17 )
          v18 = 103;
        Response[0] = v18;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        (const wchar_t *)&word_1801EFDD8,
        (const wchar_t *)&word_1801EFDD8,
        L"!pD2DContextOwner->GetCurrentVisual()->DisallowNonDrawListRendering()",
        "Function: ",
        L"CD2DContext::DrawLegacyCommandList",
        ", ",
        L"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d2dcontext.cpp",
        1499);
      if ( !v16 )
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
        JUMPOUT(0x1800E1E70LL);
      }
      DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", Response, 2u);
      switch ( Response[0] )
      {
        case 'B':
        case 'b':
          __debugbreak();
          goto LABEL_2;
        case 'G':
        case 'g':
          goto LABEL_2;
        case 'I':
        case 'i':
          DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
          continue;
        case 'P':
        case 'p':
          CurrentProcess = GetCurrentProcess();
          TerminateProcess(CurrentProcess, 0xC0000001);
          goto LABEL_21;
        case 'T':
        case 't':
          CurrentThread = GetCurrentThread();
          TerminateThread(CurrentThread, 0xC0000001);
          goto LABEL_21;
        default:
LABEL_21:
          DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
          break;
      }
    }
  }
LABEL_2:
  CD2DContext::EnsureBeginDraw((CD2DContext *)a1);
  v11 = *(_QWORD *)a2;
  if ( a8 )
  {
    (*(void (__fastcall **)(CDrawingContext *, _BYTE *))(v11 + 24))(a2, v24);
    v21 = *(_QWORD *)(a1 + 176);
    *(_OWORD *)&v23.m11 = _xmm;
    *(_QWORD *)&v23.m[2][0] = 0LL;
    (*(void (__fastcall **)(__int64, struct D2D_MATRIX_3X2_F *))(*(_QWORD *)v21 + 240LL))(v21, &v23);
    v13 = v24;
  }
  else
  {
    v12 = *(void (__fastcall **)(CDrawingContext *, struct D2D_MATRIX_3X2_F *))(v11 + 16);
    if ( v12 == CDrawingContext::GetWorldTransform3x2 )
      CDrawingContext::GetWorldTransform3x2(a2, &v23);
    else
      v12(a2, &v23);
    (*(void (__fastcall **)(_QWORD, struct D2D_MATRIX_3X2_F *))(**(_QWORD **)(a1 + 176) + 240LL))(
      *(_QWORD *)(a1 + 176),
      &v23);
    v13 = 0LL;
  }
  if ( a5 != *(_DWORD *)(a1 + 384) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 176) + 256LL))(*(_QWORD *)(a1 + 176), a5);
    *(_DWORD *)(a1 + 384) = a5;
  }
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _BYTE *, unsigned int, int))(**(_QWORD **)(a1 + 184) + 32LL))(
    *(_QWORD *)(a1 + 184),
    a3,
    a6,
    v13,
    a6,
    a7);
  return 0LL;
}
