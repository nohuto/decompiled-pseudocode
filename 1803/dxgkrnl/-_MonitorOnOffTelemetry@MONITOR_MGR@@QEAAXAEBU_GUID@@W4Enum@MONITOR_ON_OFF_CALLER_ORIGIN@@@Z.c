/*
 * XREFs of ?_MonitorOnOffTelemetry@MONITOR_MGR@@QEAAXAEBU_GUID@@W4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1C022CA60
 * Callers:
 *     LogMonitorOnOffTelemetry @ 0x1C022D43C (LogMonitorOnOffTelemetry.c)
 * Callees:
 *     ?LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1C0235518 (-LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z.c)
 */

void __fastcall MONITOR_MGR::_MonitorOnOffTelemetry(__int64 a1, __int64 a2, char a3)
{
  struct _FAST_MUTEX *v3; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdi
  struct _ERESOURCE *v12; // rbp
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rax

  v3 = (struct _FAST_MUTEX *)(a1 + 168);
  if ( a1 == -168 )
  {
    v7 = WdLogNewEntry5_WdAssertion(-168LL);
    WdLogEvent5_WdAssertion(v7);
  }
  KeAcquireGuardedMutex(v3);
  v9 = a1 + 128;
  v10 = *(_QWORD *)(a1 + 128);
  if ( v10 != a1 + 128 )
  {
    v11 = v10 - 16;
    if ( !v10 )
      v11 = 0LL;
    while ( v11 )
    {
      v12 = (struct _ERESOURCE *)(v11 + 296);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(v11 + 296), 1u);
      LOBYTE(v13) = a3;
      DXGMONITOR::LogMonitorObjectOnOffState(v11, a2, 0LL, v13);
      v14 = *(_QWORD *)(v11 + 16);
      if ( v14 == v9 )
      {
        v11 = 0LL;
      }
      else
      {
        v11 = v14 - 16;
        if ( !v14 )
          v11 = 0LL;
      }
      ExReleaseResourceLite(v12);
      KeLeaveCriticalRegion();
    }
  }
  if ( !v3 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v15);
  }
  KeReleaseGuardedMutex(v3);
}
