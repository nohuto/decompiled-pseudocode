/*
 * XREFs of DxgkPreSessionDisconnected @ 0x1C01A1DE0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?HMDDisplayOnOff@@YAJPEAVDXGADAPTER@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C01C5780 (-HMDDisplayOnOff@@YAJPEAVDXGADAPTER@@IW4_HMD_POWER_REQUEST@@@Z.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C01D0610 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 */

void __fastcall DxgkPreSessionDisconnected(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]

  v12 = 0LL;
  v3 = a1;
  v11 = 2197;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2197);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v11, 2197);
  if ( v3 )
  {
    v4 = HMDDisplayOnOff(0LL, 0xFFFFFFFFLL, 2LL);
    v6 = v4;
    if ( v4 < 0 )
    {
      v7 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v7 + 24) = v6;
      WdLogEvent5_WdError(v7);
    }
    Global = DXGGLOBAL::GetGlobal(v5);
    DXGSESSIONMGR::SetConsoleSession(*((DXGSESSIONMGR **)Global + 74), 0);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v10, v11);
}
