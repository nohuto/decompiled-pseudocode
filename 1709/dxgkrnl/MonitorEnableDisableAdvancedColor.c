/*
 * XREFs of MonitorEnableDisableAdvancedColor @ 0x1C01FE350
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00B4080 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000BB68 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?_SetAdvancedColorEnabled@DXGMONITOR@@QEAAJE@Z @ 0x1C02020A8 (-_SetAdvancedColorEnabled@DXGMONITOR@@QEAAJE@Z.c)
 */

__int64 __fastcall MonitorEnableDisableAdvancedColor(struct HDXGMONITOR__ *a1, unsigned __int8 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  struct DXGMONITOR *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  struct _ERESOURCE *v9; // rsi
  unsigned int v10; // ebx
  struct DXGMONITOR *v11; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v11 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v11);
  if ( (int)result >= 0 )
  {
    v5 = v11;
    if ( !v11 )
    {
      v6 = WdLogNewEntry5_WdAssertion(v4);
      WdLogEvent5_WdAssertion(v6);
      v8 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v8);
    }
    KeEnterCriticalRegion();
    v9 = (struct _ERESOURCE *)((char *)v5 + 280);
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v5 + 280), 1u);
    if ( ((*((_DWORD *)v5 + 6) & 0x800) != 0 || !a2) && ((*((_DWORD *)v5 + 6) & 0x800) == 0 || a2) )
      v10 = 255;
    else
      v10 = DXGMONITOR::_SetAdvancedColorEnabled(v5, a2);
    ExReleaseResourceLite(v9);
    KeLeaveCriticalRegion();
    return v10;
  }
  return result;
}
