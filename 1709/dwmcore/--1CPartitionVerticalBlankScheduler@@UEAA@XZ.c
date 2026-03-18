/*
 * XREFs of ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x180125EB4
 * Callers:
 *     ??_GCPartitionVerticalBlankScheduler@@UEAAPEAXI@Z @ 0x1801262E0 (--_GCPartitionVerticalBlankScheduler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?SendFrameStatisticsTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z @ 0x180001B9C (-SendFrameStatisticsTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z.c)
 *     ?DeleteScenario@CAnimationTracking@@AEAAXI@Z @ 0x180003B10 (-DeleteScenario@CAnimationTracking@@AEAAXI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180046BF8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??1CDebugFrameCounter@@UEAA@XZ @ 0x180125DBC (--1CDebugFrameCounter@@UEAA@XZ.c)
 *     ??_ECCrossThreadComposition@@UEAAPEAXI@Z @ 0x180126250 (--_ECCrossThreadComposition@@UEAAPEAXI@Z.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x180128560 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x18012B968 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ @ 0x18012C37C (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ.c)
 *     ?ClearAllLongtermScenarios@CAnimationTracking@@AEAAXXZ @ 0x18012DF70 (-ClearAllLongtermScenarios@CAnimationTracking@@AEAAXXZ.c)
 *     ?ClearAllTelemetry@CTelemetryTracking@@AEAAXXZ @ 0x18012EF08 (-ClearAllTelemetry@CTelemetryTracking@@AEAAXXZ.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1801941BC (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::~CPartitionVerticalBlankScheduler(
        CPartitionVerticalBlankScheduler *this)
{
  CComposition *v2; // rcx
  int v3; // eax
  int v4; // edi
  BOOL v5; // eax
  char LowPart; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  CCrossThreadComposition *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v12; // rsi
  __int64 v13; // rbp
  void *v14; // rcx
  void *v15; // rcx
  LARGE_INTEGER Response; // [rsp+90h] [rbp+8h] BYREF

  *(_QWORD *)this = &CPartitionVerticalBlankScheduler::`vftable';
  v2 = (CComposition *)*((_QWORD *)this + 9);
  if ( v2 )
  {
    CComposition::OnShutdown(v2);
    if ( (unsigned int)CMILRefCountBase::Release(*((CMILRefCountBase **)this + 9)) )
    {
      while ( 1 )
      {
        v3 = IsKernelDebuggerPresent();
        LOWORD(Response.LowPart) = 63;
        v4 = v3;
        if ( !v3 )
        {
          v5 = IsDebuggerPresent();
          LowPart = Response.LowPart;
          if ( v5 )
            LowPart = 103;
          LOBYTE(Response.LowPart) = LowPart;
        }
        DbgPrintEx(
          0x65u,
          0,
          "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
          (const wchar_t *)&word_1801EFDD8,
          (const wchar_t *)&word_1801EFDD8,
          L"false",
          "Function: ",
          L"CPartitionVerticalBlankScheduler::~CPartitionVerticalBlankScheduler",
          ", ",
          L"onecoreuap\\windows\\dwm\\dwmcore\\engine\\partitionverticalblankscheduler.cpp",
          99);
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
        switch ( LOBYTE(Response.LowPart) )
        {
          case 'B':
          case 'b':
            __debugbreak();
            goto LABEL_16;
          case 'G':
          case 'g':
LABEL_16:
            RaiseFailFastException(0LL, 0LL, 0);
            goto LABEL_17;
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
LABEL_17:
    v9 = (CCrossThreadComposition *)*((_QWORD *)this + 9);
    if ( v9 )
    {
      CCrossThreadComposition::`vector deleting destructor'(v9, 1u);
      *((_QWORD *)this + 9) = 0LL;
    }
  }
  v10 = *((_QWORD *)this + 14);
  if ( v10 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 24LL))(v10, 5LL);
  v11 = *((_QWORD *)this + 14);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 13));
  CloseHandle(*((HANDLE *)this + 3));
  CDebugFrameCounter::~CDebugFrameCounter((CPartitionVerticalBlankScheduler *)((char *)this + 24800));
  QueryPerformanceCounter(&Response);
  CTelemetryFrameStatistics::SendFrameStatisticsTelemetry(
    (CPartitionVerticalBlankScheduler *)((char *)this + 24712),
    Response.QuadPart);
  CTelemetryTracking::ClearAllTelemetry((CPartitionVerticalBlankScheduler *)((char *)this + 24176));
  v12 = (CPartitionVerticalBlankScheduler *)((char *)this + 21936);
  v13 = 10LL;
  do
  {
    CTelemetryTouchLatencyAnalysis::RetireScenario(
      (CPartitionVerticalBlankScheduler *)((char *)this + 21928),
      v12,
      1,
      0);
    v12 = (struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)((char *)v12 + 192);
    --v13;
  }
  while ( v13 );
  CTelemetryTouchLatencyAnalysis::SendInteractionSummary((CPartitionVerticalBlankScheduler *)((char *)this + 21928));
  v14 = (void *)*((_QWORD *)this + 2983);
  if ( v14 )
    WPF::ProcessHeapImpl::Free(v14);
  v15 = (void *)*((_QWORD *)this + 2984);
  if ( v15 )
    WPF::ProcessHeapImpl::Free(v15);
  while ( *((_DWORD *)this + 5344) )
    CAnimationTracking::DeleteScenario((CPartitionVerticalBlankScheduler *)((char *)this + 21352), 0);
  *((_DWORD *)this + 5344) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 21352, 8u);
  CAnimationTracking::ClearAllLongtermScenarios((CPartitionVerticalBlankScheduler *)((char *)this + 21352));
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 2669);
  `vector destructor iterator'((char *)this + 120, 1304LL, 16LL, CFrameInfo::~CFrameInfo);
  *(_QWORD *)this = &ICompositorSchedulerTelemetry::`vftable';
}
