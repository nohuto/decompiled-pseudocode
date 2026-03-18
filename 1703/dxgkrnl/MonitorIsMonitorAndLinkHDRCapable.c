/*
 * XREFs of MonitorIsMonitorAndLinkHDRCapable @ 0x1C00F2068
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00F0750 (DxgkDisplayConfigDeviceInfo.c)
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C00F1E3C (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 *     ?DmmGetMonitorSupportsHDR@@YAJPEAXIPEAE@Z @ 0x1C01D2304 (-DmmGetMonitorSupportsHDR@@YAJPEAXIPEAE@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000D2AC (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?EdidSupportsHDR@DXGMONITOR@@QEAAEXZ @ 0x1C0108BC4 (-EdidSupportsHDR@DXGMONITOR@@QEAAEXZ.c)
 */

__int64 __fastcall MonitorIsMonitorAndLinkHDRCapable(struct HDXGMONITOR__ *a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  DXGMONITOR *v10; // rbx
  char v11; // si
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  DXGMONITOR *v18; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v18 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v18, a3, a4);
  if ( (int)result < 0 )
  {
    *a2 = 0;
  }
  else
  {
    v10 = v18;
    if ( !v18 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
      WdLogEvent5_WdAssertion(v12);
      v17 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
      WdLogEvent5_WdAssertion(v17);
    }
    KeEnterCriticalRegion();
    v11 = 1;
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v10 + 240), 1u);
    if ( (*((_DWORD *)v10 + 6) & 0x400) != 0 )
    {
      if ( (*((_QWORD *)v10 + 51) & 0x400000000LL) == 0 || !DXGMONITOR::EdidSupportsHDR(v10) )
        v11 = 0;
      *a2 = v11;
    }
    else
    {
      *a2 = 0;
    }
    ExReleaseResourceLite((PERESOURCE)((char *)v10 + 240));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
