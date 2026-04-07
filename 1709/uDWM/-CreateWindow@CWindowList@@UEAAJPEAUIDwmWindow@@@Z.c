/*
 * XREFs of ?CreateWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18007A7F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CWindowData@@QEAA@XZ @ 0x180010BB0 (--0CWindowData@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18009FAE8 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CWindowList::CreateWindow(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v3; // esi
  int v4; // eax
  int v5; // edi
  BOOL v6; // eax
  char v7; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  CWindowData *v10; // rax
  CWindowData *v11; // rax
  CWindowData *v12; // rdi
  __int16 Response; // [rsp+A8h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+B0h] [rbp+18h] BYREF

  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v3 = 0;
  if ( (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2) )
  {
    while ( 1 )
    {
      v4 = IsKernelDebuggerPresent();
      Response = 63;
      v5 = v4;
      if ( !v4 )
      {
        v6 = IsDebuggerPresent();
        v7 = Response;
        if ( v6 )
          v7 = 103;
        LOBYTE(Response) = v7;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        word_1800AA398,
        word_1800AA398,
        L"pwdData == nullptr",
        "Function: ",
        L"CWindowList::CreateWindow",
        ", ",
        L"windows\\dwm\\udwm\\windowlist.cpp",
        1312);
      if ( !v5 )
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
          goto LABEL_15;
        case 'G':
        case 'g':
          goto LABEL_15;
        case 'I':
        case 'i':
          DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
          continue;
        case 'P':
        case 'p':
          CurrentProcess = GetCurrentProcess();
          TerminateProcess(CurrentProcess, 0xC0000001);
          goto LABEL_13;
        case 'T':
        case 't':
          CurrentThread = GetCurrentThread();
          TerminateThread(CurrentThread, 0xC0000001);
          goto LABEL_13;
        default:
LABEL_13:
          DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
          break;
      }
    }
  }
LABEL_15:
  v10 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         744LL);
  if ( v10 && (v11 = CWindowData::CWindowData(v10), (v12 = v11) != 0LL) )
  {
    *((_QWORD *)v11 + 3) = a2;
    (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v11);
    *((_QWORD *)v12 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x523u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return v3;
}
