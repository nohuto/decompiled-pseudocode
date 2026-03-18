/*
 * XREFs of DxgkReleaseProcessVidPnSourceOwners @ 0x1C01B9220
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0009844 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C009CB0C (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00D2E50 (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00D2F18 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 */

__int64 __fastcall DxgkReleaseProcessVidPnSourceOwners(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  DXGPROCESS *Process; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  int v13; // [rsp+20h] [rbp-79h] BYREF
  __int64 v14; // [rsp+28h] [rbp-71h]
  _BYTE v15[8]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v16; // [rsp+38h] [rbp-61h]
  __int128 v17; // [rsp+40h] [rbp-59h]
  int v18; // [rsp+50h] [rbp-49h]
  __int16 v19; // [rsp+54h] [rbp-45h]
  char v20; // [rsp+56h] [rbp-43h]
  _QWORD v21[10]; // [rsp+90h] [rbp-9h] BYREF

  memset(v21, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v21[1]);
  v14 = 0LL;
  v21[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v21[3]) = 42;
  LOBYTE(v21[6]) = -1;
  v13 = 2033;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v2, &EventProfilerEnter, v3, 2033);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v13, 2033);
  v19 = 0;
  v16 = a1;
  v17 = 0LL;
  v18 = 512;
  v20 = 0;
  if ( (int)DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v15, 1) >= 0 )
  {
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v15);
    DXGPROCESS::ReleaseVidPnSourceOwners(Process, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v21);
    DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v15);
    v8 = 0;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v5, v4, v6, v7) + 24) = a1;
    v8 = -1073741811;
  }
  if ( (_BYTE)v19 )
    DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v15);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v10, &EventProfilerExit, v11, v13);
  return v8;
}
