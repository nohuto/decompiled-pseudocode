/*
 * XREFs of ?MilInstrumentationBreak@@YAXK_N@Z @ 0x140008994
 * Callers:
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXIJKI@Z @ 0x140008838 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXIJKI@Z.c)
 * Callees:
 *     ?IsKernelDebuggerEnabled@@YAHXZ @ 0x1400088E8 (-IsKernelDebuggerEnabled@@YAHXZ.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x140008930 (-IsKernelDebuggerPresent@@YAHXZ.c)
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x140008C74 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 */

void __fastcall MilInstrumentationBreak(const unsigned __int16 *a1, const unsigned __int16 *a2)
{
  char v2; // bl
  BOOL v3; // eax
  BOOL v4; // ebx
  BOOL v5; // eax
  char v6; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  unsigned int Response; // [rsp+98h] [rbp+10h] BYREF

  LOBYTE(Response) = (_BYTE)a2;
  v2 = (char)a1;
  if ( !g_fDisableInstrumentationBreaks )
  {
    Response = 0;
    if ( RegGetHKLMDword(a1, a2, &Response)
      && !Response
      && ((v2 & 8) == 0 || IsKernelDebuggerPresent() || !IsDebuggerPresent() && (unsigned int)IsKernelDebuggerEnabled()) )
    {
      while ( 1 )
      {
        v3 = IsKernelDebuggerPresent();
        LOWORD(Response) = 63;
        v4 = v3;
        if ( !v3 )
        {
          v5 = IsDebuggerPresent();
          v6 = Response;
          if ( v5 )
            v6 = 103;
          LOBYTE(Response) = v6;
        }
        DbgPrintEx(
          0x65u,
          0,
          "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
          L"Unexpected HRESULT in MilInstrumentation* caller",
          word_14000B984,
          word_14000B984,
          "Function: ",
          L"MilInstrumentationBreak",
          ", ",
          L"onecoreuap\\windows\\dwm\\shared\\util\\utillib\\debugbreak.cpp",
          214);
        if ( !v4 )
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
            return;
          case 'G':
          case 'g':
            return;
          case 'I':
          case 'i':
            DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
            continue;
          case 'P':
          case 'p':
            CurrentProcess = GetCurrentProcess();
            TerminateProcess(CurrentProcess, 0xC0000001);
            goto LABEL_19;
          case 'T':
          case 't':
            CurrentThread = GetCurrentThread();
            TerminateThread(CurrentThread, 0xC0000001);
            goto LABEL_19;
          default:
LABEL_19:
            DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
            break;
        }
      }
    }
  }
}
