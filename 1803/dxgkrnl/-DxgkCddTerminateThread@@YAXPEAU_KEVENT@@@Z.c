/*
 * XREFs of ?DxgkCddTerminateThread@@YAXPEAU_KEVENT@@@Z @ 0x1C00DF100
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 */

void __fastcall DxgkCddTerminateThread(PRKEVENT Event, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  int v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v9 = 0LL;
  v8 = 3013;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)Event, &EventProfilerEnter, a3, 3013);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v8, 3013);
  retaddr = 0LL;
  if ( KeGetCurrentIrql() )
  {
    v7 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v7 + 24) = 2645LL;
    WdLogEvent5_WdAssertion(v7);
  }
  KeSetEvent(Event, 0, 0);
  PsTerminateSystemThread(0);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v8);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v5, &EventProfilerExit, v6, v8);
}
