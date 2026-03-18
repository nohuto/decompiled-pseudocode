/*
 * XREFs of DxgkSessionDisconnected @ 0x1C01A2130
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     OutputDuplRemoteSessionDisconnected @ 0x1C01CDA88 (OutputDuplRemoteSessionDisconnected.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C01D111C (DxgkIncreaseSessionAdapterUniqueness.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C0200880 (DxgkMiracastStopAllMiracastSessions.c)
 */

void __fastcall DxgkSessionDisconnected(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  v3 = a1;
  v8 = 2198;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2198);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v8, 2198);
  DxgkIncreaseSessionAdapterUniqueness();
  if ( v3 )
  {
    v10 = -300000000LL;
    LOBYTE(v5) = 1;
    DxgkMiracastStopAllMiracastSessions(v5, &v10, 129LL);
  }
  else
  {
    OutputDuplRemoteSessionDisconnected(v5, v4);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v8);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v6, &EventProfilerExit, v7, v8);
}
