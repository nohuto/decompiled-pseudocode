/*
 * XREFs of ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x18014886C
 * Callers:
 *     ??_GCPartitionVerticalBlankScheduler@@UEAAPEAXI@Z @ 0x180148CF0 (--_GCPartitionVerticalBlankScheduler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x180014190 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CD5B4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?SendFrameStatisticsTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z @ 0x1800CFAE0 (-SendFrameStatisticsTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z.c)
 *     ?DeleteScenario@CAnimationTracking@@AEAAXI@Z @ 0x1800D1268 (-DeleteScenario@CAnimationTracking@@AEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??1CDebugFrameCounter@@UEAA@XZ @ 0x18014883C (--1CDebugFrameCounter@@UEAA@XZ.c)
 *     ??_ECCrossThreadComposition@@UEAAPEAXI@Z @ 0x180148C00 (--_ECCrossThreadComposition@@UEAAPEAXI@Z.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x18014A4C0 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ?ClearAllLongtermScenarios@CAnimationTracking@@AEAAXXZ @ 0x18014C1A8 (-ClearAllLongtermScenarios@CAnimationTracking@@AEAAXXZ.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ @ 0x18014DABC (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ.c)
 *     ?ClearAllTelemetry@CTelemetryTracking@@AEAAXXZ @ 0x180150704 (-ClearAllTelemetry@CTelemetryTracking@@AEAAXXZ.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1801CD38C (-IsKernelDebuggerPresent@@YAHXZ.c)
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
          word_180252860,
          word_180252860,
          L"false",
          "Function: ",
          L"CPartitionVerticalBlankScheduler::~CPartitionVerticalBlankScheduler",
          ", ",
          L"onecoreuap\\windows\\dwm\\dwmcore\\engine\\partitionverticalblankscheduler.cpp",
          100);
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
  v10 = *((_QWORD *)this + 11);
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 24LL))(v10, 5LL);
    v11 = *((_QWORD *)this + 11);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 10));
  CloseHandle(*((HANDLE *)this + 3));
  CDebugFrameCounter::~CDebugFrameCounter((CPartitionVerticalBlankScheduler *)((char *)this + 30576));
  QueryPerformanceCounter(&Response);
  CTelemetryFrameStatistics::SendFrameStatisticsTelemetry(
    (CPartitionVerticalBlankScheduler *)((char *)this + 30488),
    Response.QuadPart);
  CTelemetryTracking::ClearAllTelemetry((CPartitionVerticalBlankScheduler *)((char *)this + 29952));
  v12 = (CPartitionVerticalBlankScheduler *)((char *)this + 26768);
  v13 = 10LL;
  do
  {
    CTelemetryTouchLatencyAnalysis::RetireScenario(
      (CPartitionVerticalBlankScheduler *)((char *)this + 26760),
      v12,
      1,
      0);
    v12 = (struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)((char *)v12 + 248);
    --v13;
  }
  while ( v13 );
  CTelemetryTouchLatencyAnalysis::SendInteractionSummary((CPartitionVerticalBlankScheduler *)((char *)this + 26760));
  v14 = (void *)*((_QWORD *)this + 3656);
  if ( v14 )
    operator delete(v14);
  v15 = (void *)*((_QWORD *)this + 3657);
  if ( v15 )
    operator delete(v15);
  while ( *((_DWORD *)this + 6552) )
    CAnimationTracking::DeleteScenario((CPartitionVerticalBlankScheduler *)((char *)this + 26184), 0);
  *((_DWORD *)this + 6552) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 26184, 8u);
  CAnimationTracking::ClearAllLongtermScenarios((CPartitionVerticalBlankScheduler *)((char *)this + 26184));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 26184);
  `vector destructor iterator'((char *)this + 96, 1608LL, 16LL, CFrameInfo::~CFrameInfo);
  *(_QWORD *)this = &ICompositorSchedulerTelemetry::`vftable';
}
