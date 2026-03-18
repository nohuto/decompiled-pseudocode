/*
 * XREFs of MonitorGetLinkInfoFromMonitor @ 0x1C022E12C
 * Callers:
 *     ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x1C0044F68 (-SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C00029B4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetLinkInfoFromMonitor(struct HDXGMONITOR__ *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  __int64 v5; // rcx
  struct DXGMONITOR *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  struct DXGMONITOR *v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( !a1 )
    return 3221225485LL;
  v11 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v11);
  if ( (int)result >= 0 )
  {
    v6 = v11;
    if ( !v11 )
    {
      v7 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v7);
      v9 = WdLogNewEntry5_WdAssertion(v8);
      WdLogEvent5_WdAssertion(v9);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v6 + 296), 1u);
    if ( (*((_DWORD *)v6 + 10) & 0x400) != 0 )
    {
      *(_QWORD *)a2 = *((_QWORD *)v6 + 58);
      v10 = *((_DWORD *)v6 + 118);
    }
    else
    {
      v10 = 0;
      v2 = -1073741275;
      *(_QWORD *)a2 = 0LL;
    }
    *(_DWORD *)(a2 + 8) = v10;
    ExReleaseResourceLite((PERESOURCE)((char *)v6 + 296));
    KeLeaveCriticalRegion();
    return v2;
  }
  return result;
}
