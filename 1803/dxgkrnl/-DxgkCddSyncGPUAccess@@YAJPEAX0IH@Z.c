/*
 * XREFs of ?DxgkCddSyncGPUAccess@@YAJPEAX0IH@Z @ 0x1C00D0250
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@IH@Z @ 0x1C00D0300 (-DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCddSyncGPUAccess(__int64 a1, struct DXGADAPTER *a2, __int64 a3, int a4)
{
  unsigned int v5; // ebp
  struct DXGPROCESS *Current; // rbx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // rax
  int v14; // [rsp+20h] [rbp-18h] BYREF
  __int64 v15; // [rsp+28h] [rbp-10h]

  v15 = 0LL;
  v5 = a3;
  v14 = 3016;
  Current = (struct DXGPROCESS *)a1;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 3016);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v14, 3016);
  if ( !Current )
    Current = DXGPROCESS::GetCurrent();
  if ( a2 )
  {
    v9 = DxgkpCddSyncGPUAccess(Current, a2, v5, a4);
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v8);
    v9 = -1073741811;
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v13);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v10, &EventProfilerExit, v11, v14);
  return v9;
}
