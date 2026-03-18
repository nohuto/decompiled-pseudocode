/*
 * XREFs of ?WakeUpAdapter@DXGADAPTER@@QEAAXXZ @ 0x1C0150344
 * Callers:
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0016148 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00F4EE0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     DpiRequestDevicePowerState @ 0x1C0039D14 (DpiRequestDevicePowerState.c)
 *     DxgkReportDripsBlocker @ 0x1C01A1F10 (DxgkReportDripsBlocker.c)
 */

void __fastcall DXGADAPTER::WakeUpAdapter(DXGADAPTER *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 CurrentProcess; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]

  v12 = 0LL;
  v11 = 8013;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 8013);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v11, 8013);
  DXGPUSHLOCK::AcquireShared((DXGADAPTER *)((char *)this + 72));
  if ( *((_DWORD *)this + 44) == 1 )
  {
    v6 = *((_QWORD *)this + 24);
    CurrentProcess = PsGetCurrentProcess(v5, v4);
    DxgkReportDripsBlocker(v8, v6, CurrentProcess);
    DpiRequestDevicePowerState(*((_QWORD *)this + 24), 1, 0);
  }
  ExReleasePushLockSharedEx((char *)this + 72, 0LL);
  KeLeaveCriticalRegion();
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v10, v11);
}
