/*
 * XREFs of ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x1801E2750
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180095C2C (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180096E20 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1801CD38C (-IsKernelDebuggerPresent@@YAHXZ.c)
 *     ?SetAntiAliasMode@CD2DContext@@IEAAXW4D2D1_ANTIALIAS_MODE@@@Z @ 0x1801E3E98 (-SetAntiAliasMode@CD2DContext@@IEAAXW4D2D1_ANTIALIAS_MODE@@@Z.c)
 */

__int64 __fastcall CD2DContext::DrawLegacyCommandList(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        enum D2D1_ANTIALIAS_MODE a5,
        unsigned int a6,
        int a7,
        char a8)
{
  int v11; // eax
  int v12; // esi
  BOOL v13; // eax
  CHAR v14; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  _BYTE *v19; // rdi
  CHAR Response[8]; // [rsp+60h] [rbp-C8h] BYREF
  __int128 v22; // [rsp+68h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+78h] [rbp-B0h]
  _BYTE v24[64]; // [rsp+80h] [rbp-A8h] BYREF

  CD2DContext::FlushDrawList((CD2DContext *)a1);
  if ( CCommonRegistryData::m_fEnableDisallowNonDrawListRendering
    && (*(_BYTE *)((*(__int64 (__fastcall **)(__int64 *))(*a2 + 40))(a2) + 94) & 0x10) != 0 )
  {
    while ( 1 )
    {
      v11 = IsKernelDebuggerPresent();
      strcpy(Response, "?");
      v12 = v11;
      if ( !v11 )
      {
        v13 = IsDebuggerPresent();
        v14 = Response[0];
        if ( v13 )
          v14 = 103;
        Response[0] = v14;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        word_180252860,
        word_180252860,
        L"!pD2DContextOwner->GetCurrentVisual()->DisallowNonDrawListRendering()",
        "Function: ",
        L"CD2DContext::DrawLegacyCommandList",
        ", ",
        L"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d2dcontext.cpp",
        1573);
      if ( !v12 )
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
        __debugbreak();
      }
      DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", Response, 2u);
      switch ( Response[0] )
      {
        case 'B':
        case 'b':
          __debugbreak();
          goto LABEL_16;
        case 'G':
        case 'g':
          goto LABEL_16;
        case 'I':
        case 'i':
          DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
          continue;
        case 'P':
        case 'p':
          CurrentProcess = GetCurrentProcess();
          TerminateProcess(CurrentProcess, 0xC0000001);
          goto LABEL_14;
        case 'T':
        case 't':
          CurrentThread = GetCurrentThread();
          TerminateThread(CurrentThread, 0xC0000001);
          goto LABEL_14;
        default:
LABEL_14:
          DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
          break;
      }
    }
  }
LABEL_16:
  CD2DContext::EnsureBeginDraw((CD2DContext *)a1);
  v17 = *a2;
  if ( a8 )
  {
    (*(void (__fastcall **)(__int64 *, _BYTE *))(v17 + 24))(a2, v24);
    v18 = *(_QWORD *)(a1 + 176);
    v22 = _xmm;
    v23 = 0LL;
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v18 + 240LL))(v18, &v22);
    v19 = v24;
  }
  else
  {
    (*(void (__fastcall **)(__int64 *, __int128 *))(v17 + 16))(a2, &v22);
    (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 176) + 240LL))(*(_QWORD *)(a1 + 176), &v22);
    v19 = 0LL;
  }
  CD2DContext::SetAntiAliasMode((CD2DContext *)a1, a5);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _BYTE *, unsigned int, int))(**(_QWORD **)(a1 + 184) + 32LL))(
    *(_QWORD *)(a1 + 184),
    a3,
    a6,
    v19,
    a6,
    a7);
  return 0LL;
}
