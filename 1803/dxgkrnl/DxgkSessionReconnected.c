/*
 * XREFs of DxgkSessionReconnected @ 0x1C01A21F0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     OutputDuplRemoteSessionReconnected @ 0x1C01CDAE0 (OutputDuplRemoteSessionReconnected.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C01D0610 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C01D111C (DxgkIncreaseSessionAdapterUniqueness.c)
 */

void __fastcall DxgkSessionReconnected(__int64 a1, unsigned int a2, __int64 a3)
{
  char v4; // di
  __int64 v5; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  v10 = 0LL;
  v4 = a1;
  v9 = 2199;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2199);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v9, 2199);
  DxgkIncreaseSessionAdapterUniqueness();
  if ( v4 )
  {
    Global = DXGGLOBAL::GetGlobal(v5);
    DXGSESSIONMGR::SetConsoleSession(*((DXGSESSIONMGR **)Global + 74), 1u);
  }
  else
  {
    OutputDuplRemoteSessionReconnected(a2);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v9);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v7, &EventProfilerExit, v8, v9);
}
