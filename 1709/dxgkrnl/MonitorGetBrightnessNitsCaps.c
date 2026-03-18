/*
 * XREFs of MonitorGetBrightnessNitsCaps @ 0x1C0100B94
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x1C00D86D0 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000BB68 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetBrightnessNitsCaps(
        struct HDXGMONITOR__ *a1,
        _DWORD *a2,
        _OWORD *a3,
        _DWORD *a4,
        _DWORD *a5)
{
  __int64 result; // rax
  struct DXGMONITOR *v9; // rcx
  _OWORD *v10; // rbx
  struct DXGMONITOR *v11; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v11 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v11);
  if ( (int)result >= 0 )
  {
    v9 = v11;
    *a2 = *((_DWORD *)v11 + 163);
    *a3 = *((_OWORD *)v9 + 41);
    a3[1] = *((_OWORD *)v9 + 42);
    a3[2] = *((_OWORD *)v9 + 43);
    a3[3] = *((_OWORD *)v9 + 44);
    a3[4] = *((_OWORD *)v9 + 45);
    a3[5] = *((_OWORD *)v9 + 46);
    a3[6] = *((_OWORD *)v9 + 47);
    v10 = a3 + 8;
    *(v10 - 1) = *((_OWORD *)v9 + 48);
    *v10 = *((_OWORD *)v9 + 49);
    v10[1] = *((_OWORD *)v9 + 50);
    v10[2] = *((_OWORD *)v9 + 51);
    v10[3] = *((_OWORD *)v9 + 52);
    *a4 = *((_DWORD *)v9 + 212);
    *a5 = *((_DWORD *)v9 + 213);
    return 0LL;
  }
  return result;
}
