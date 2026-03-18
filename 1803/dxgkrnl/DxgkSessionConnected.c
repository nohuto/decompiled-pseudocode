/*
 * XREFs of DxgkSessionConnected @ 0x1C01A2080
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C01D0610 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C01D111C (DxgkIncreaseSessionAdapterUniqueness.c)
 */

void __fastcall DxgkSessionConnected(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  __int64 v4; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  v9 = 0LL;
  v3 = a1;
  v8 = 2196;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2196);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v8, 2196);
  DxgkIncreaseSessionAdapterUniqueness();
  if ( v3 )
  {
    Global = DXGGLOBAL::GetGlobal(v4);
    DXGSESSIONMGR::SetConsoleSession(*((DXGSESSIONMGR **)Global + 74), 1u);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v8);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v6, &EventProfilerExit, v7, v8);
}
