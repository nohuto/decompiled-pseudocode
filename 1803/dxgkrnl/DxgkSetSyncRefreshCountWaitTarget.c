/*
 * XREFs of DxgkSetSyncRefreshCountWaitTarget @ 0x1C00E0310
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00E03F0 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 */

__int64 __fastcall DxgkSetSyncRefreshCountWaitTarget(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rbx
  unsigned int refreshed; // ebx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  unsigned int v10[6]; // [rsp+30h] [rbp-18h]

  v3 = (_OWORD *)a1;
  v9 = 0LL;
  v8 = 2026;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2026);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v8, 2026);
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v10 = *v3;
  refreshed = DxgkSetSyncRefreshCountWaitTargetInternal(v10[0], v10[1], v10[2], v10[3]);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v8);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v5, &EventProfilerExit, v6, v8);
  return refreshed;
}
