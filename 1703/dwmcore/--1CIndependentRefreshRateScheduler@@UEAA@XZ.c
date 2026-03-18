/*
 * XREFs of ??1CIndependentRefreshRateScheduler@@UEAA@XZ @ 0x18013C224
 * Callers:
 *     ??_GCIndependentRefreshRateScheduler@@UEAAPEAXI@Z @ 0x18013C540 (--_GCIndependentRefreshRateScheduler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800B2D0C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??$SAFE_DELETE@VCCrossThreadComposition@@@@YAXAEAPEAVCCrossThreadComposition@@@Z @ 0x18013B520 (--$SAFE_DELETE@VCCrossThreadComposition@@@@YAXAEAPEAVCCrossThreadComposition@@@Z.c)
 *     ??1CAnimationTracking@@QEAA@XZ @ 0x18013B548 (--1CAnimationTracking@@QEAA@XZ.c)
 *     ??1CDebugFrameCounter@@UEAA@XZ @ 0x18013B590 (--1CDebugFrameCounter@@UEAA@XZ.c)
 *     ??1CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x18013B998 (--1CTelemetryTouchLatencyAnalysis@@QEAA@XZ.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x18013F8A0 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ?ClearAllTelemetry@CTelemetryTracking@@AEAAXXZ @ 0x180142FCC (-ClearAllTelemetry@CTelemetryTracking@@AEAAXXZ.c)
 *     ??1CTelemetryFrameStatistics@@QEAA@XZ @ 0x1801435FC (--1CTelemetryFrameStatistics@@QEAA@XZ.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180189314 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

void __fastcall CIndependentRefreshRateScheduler::~CIndependentRefreshRateScheduler(
        CIndependentRefreshRateScheduler *this)
{
  CComposition *v2; // rcx
  int v3; // eax
  int v4; // esi
  BOOL v5; // eax
  char v6; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  __int64 v9; // rcx
  __int16 Response; // [rsp+90h] [rbp+8h] BYREF

  *(_QWORD *)this = &CIndependentRefreshRateScheduler::`vftable';
  v2 = (CComposition *)*((_QWORD *)this + 16);
  if ( v2 )
  {
    CComposition::OnShutdown(v2);
    if ( (unsigned int)CMILRefCountBase::Release(*((CMILRefCountBase **)this + 16)) )
    {
      while ( 1 )
      {
        v3 = IsKernelDebuggerPresent();
        Response = 63;
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
          word_1801D5868,
          word_1801D5868,
          L"false",
          "Function: ",
          L"CIndependentRefreshRateScheduler::~CIndependentRefreshRateScheduler",
          ", ",
          L"onecoreuap\\windows\\dwm\\dwmcore\\engine\\independentrefreshratescheduler.cpp",
          98);
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
    SAFE_DELETE<CCrossThreadComposition>((CCrossThreadComposition **)this + 16);
  }
  v9 = *((_QWORD *)this + 26);
  if ( v9 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 24LL))(v9, 5LL);
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 26));
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 25));
  CloseHandle(*((HANDLE *)this + 10));
  CDebugFrameCounter::~CDebugFrameCounter((CIndependentRefreshRateScheduler *)((char *)this + 25480));
  CTelemetryFrameStatistics::~CTelemetryFrameStatistics((CIndependentRefreshRateScheduler *)((char *)this + 25264));
  CTelemetryTracking::ClearAllTelemetry((CIndependentRefreshRateScheduler *)((char *)this + 24728));
  CTelemetryTouchLatencyAnalysis::~CTelemetryTouchLatencyAnalysis((CIndependentRefreshRateScheduler *)((char *)this + 22408));
  CAnimationTracking::~CAnimationTracking((CIndependentRefreshRateScheduler *)((char *)this + 21832));
  `vector destructor iterator'((char *)this + 216, 1328LL, 16LL, (void (__fastcall *)(char *))CFrameInfo::~CFrameInfo);
  *(_QWORD *)this = &ICompositorSchedulerTelemetry::`vftable';
}
