/*
 * XREFs of ?ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReason@@@Z @ 0x180011520
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180014A50 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?UnusedNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x180019FE0 (-UnusedNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z.c)
 *     ?PostRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180029AA0 (-PostRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 *     ??$ChangePropertyValue@UD2D_MATRIX_3X2_F@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800A5B68 (--$ChangePropertyValue@UD2D_MATRIX_3X2_F@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@P.c)
 *     ?UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A64A0 (-UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 * Callees:
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1801941BC (-IsKernelDebuggerPresent@@YAHXZ.c)
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

  if ( TolerableDelay < *(_DWORD *)(a1 + 24796) )
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
          (const wchar_t *)&word_1801EFDD8,
          (const wchar_t *)&word_1801EFDD8,
          L"false",
          "Function: ",
          L"CPartitionVerticalBlankScheduler::ScheduleCompositionPass",
          ", ",
          L"onecoreuap\\windows\\dwm\\dwmcore\\engine\\partitionverticalblankscheduler.cpp",
          2290);
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
          JUMPOUT(0x1800CC5D6LL);
        }
        DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
        switch ( (char)Response )
        {
          case 'B':
          case 'b':
            __debugbreak();
            goto LABEL_18;
          case 'G':
          case 'g':
LABEL_18:
            RaiseFailFastException(0LL, 0LL, 0);
            goto LABEL_4;
          case 'I':
          case 'i':
            DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
            continue;
          case 'P':
          case 'p':
            CurrentProcess = GetCurrentProcess();
            TerminateProcess(CurrentProcess, 0xC0000001);
            goto LABEL_16;
          case 'T':
          case 't':
            CurrentThread = GetCurrentThread();
            TerminateThread(CurrentThread, 0xC0000001);
            goto LABEL_16;
          default:
LABEL_16:
            DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
            break;
        }
      }
    }
LABEL_4:
    *(_DWORD *)(a1 + 24796) = TolerableDelay;
  }
  _InterlockedOr(&dword_180272190, a3);
}
