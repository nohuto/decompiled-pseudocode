/*
 * XREFs of MonitorIsDedicatedTimingGeneration @ 0x1C011E95C
 * Callers:
 *     ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x1C0012DC0 (-SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z.c)
 *     _lambda_36c2ba6a7cba07a048b6de3ef88fdf59_::operator() @ 0x1C01C2DFC (_lambda_36c2ba6a7cba07a048b6de3ef88fdf59_--operator().c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000BB68 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorIsDedicatedTimingGeneration(struct HDXGMONITOR__ *a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  struct DXGMONITOR *v3; // rbx
  struct _ERESOURCE *v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  struct DXGMONITOR *v9; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v9 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v9);
  if ( (int)result >= 0 )
  {
    v3 = v9;
    if ( !v9 )
    {
      v6 = WdLogNewEntry5_WdAssertion(v2);
      WdLogEvent5_WdAssertion(v6);
      v8 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v8);
    }
    KeEnterCriticalRegion();
    v4 = (struct _ERESOURCE *)((char *)v3 + 280);
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v3 + 280), 1u);
    if ( (*((_DWORD *)v3 + 6) & 0x400) != 0 )
      v5 = (*((_QWORD *)v3 + 56) & 0x4000000000LL) == 0 ? 0xC00000BB : 0;
    else
      v5 = -1073741275;
    ExReleaseResourceLite(v4);
    KeLeaveCriticalRegion();
    return v5;
  }
  return result;
}
