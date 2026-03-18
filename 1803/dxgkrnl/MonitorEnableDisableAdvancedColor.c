/*
 * XREFs of MonitorEnableDisableAdvancedColor @ 0x1C022DCC8
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00AB300 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C00029B4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?_SetAdvancedColorEnabled@DXGMONITOR@@QEAAJ_N@Z @ 0x1C0238400 (-_SetAdvancedColorEnabled@DXGMONITOR@@QEAAJ_N@Z.c)
 */

__int64 __fastcall MonitorEnableDisableAdvancedColor(struct HDXGMONITOR__ *a1, char a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  struct DXGMONITOR *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  struct _ERESOURCE *v9; // rsi
  bool v10; // zf
  unsigned int v11; // ebx
  struct DXGMONITOR *v12; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v12 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v12);
  if ( (int)result >= 0 )
  {
    v5 = v12;
    if ( !v12 )
    {
      v6 = WdLogNewEntry5_WdAssertion(v4);
      WdLogEvent5_WdAssertion(v6);
      v8 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v8);
    }
    v9 = (struct _ERESOURCE *)((char *)v5 + 296);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v5 + 296), 1u);
    if ( ((*((_DWORD *)v5 + 10) & 0x800) != 0 || (v10 = a2 == 0, !a2))
      && ((*((_DWORD *)v5 + 10) & 0x800) == 0 || (v10 = a2 == 0, a2)) )
    {
      v11 = 255;
    }
    else
    {
      v11 = DXGMONITOR::_SetAdvancedColorEnabled(v5, !v10);
    }
    ExReleaseResourceLite(v9);
    KeLeaveCriticalRegion();
    return v11;
  }
  return result;
}
