/*
 * XREFs of ?ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReason@@@Z @ 0x18005A6A0
 * Callers:
 *     ?PostRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180047BF0 (-PostRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180051998 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18005D3B0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     McTemplateU0d @ 0x180167AC0 (McTemplateU0d.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1801CD38C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::ScheduleCompositionPass(
        __int64 a1,
        ULONG TolerableDelay,
        unsigned int a3)
{
  void *v6; // rcx
  int v7; // eax
  int v8; // ebp
  BOOL v9; // eax
  char v10; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  LARGE_INTEGER DueTime; // [rsp+A0h] [rbp+8h] BYREF
  __int16 Response; // [rsp+A8h] [rbp+10h] BYREF

  if ( TolerableDelay < *(_DWORD *)(a1 + 30572) )
  {
    v6 = *(void **)(a1 + 24);
    DueTime.QuadPart = -10000LL * TolerableDelay;
    if ( !SetWaitableTimerEx(v6, &DueTime, 0, 0LL, 0LL, 0LL, TolerableDelay) )
    {
      while ( 1 )
      {
        v7 = IsKernelDebuggerPresent();
        Response = 63;
        v8 = v7;
        if ( !v7 )
        {
          v9 = IsDebuggerPresent();
          v10 = Response;
          if ( v9 )
            v10 = 103;
          LOBYTE(Response) = v10;
        }
        DbgPrintEx(
          0x65u,
          0,
          "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
          word_180252860,
          word_180252860,
          L"false",
          "Function: ",
          L"CPartitionVerticalBlankScheduler::ScheduleCompositionPass",
          ", ",
          L"onecoreuap\\windows\\dwm\\dwmcore\\engine\\partitionverticalblankscheduler.cpp",
          2205);
        if ( !v8 )
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
          JUMPOUT(0x180106728LL);
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
LABEL_20:
            RaiseFailFastException(0LL, 0LL, 0);
            goto LABEL_6;
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
LABEL_6:
    *(_DWORD *)(a1 + 30572) = TolerableDelay;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULED_COMPOSITION_REASON, a3);
  _InterlockedOr(&dword_1802D5EAC, a3);
}
