/*
 * XREFs of MonitorGetBrightnessNitsCaps @ 0x1C011173C
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x1C00ABB70 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C00029B4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetBrightnessNitsCaps(struct HDXGMONITOR__ *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rax
  char *v5; // rcx
  __int128 v6; // xmm1
  struct DXGMONITOR *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v7 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v7);
  if ( (int)result >= 0 )
  {
    v4 = 2LL;
    v5 = (char *)v7 + 680;
    do
    {
      *(_OWORD *)a2 = *(_OWORD *)v5;
      *(_OWORD *)(a2 + 16) = *((_OWORD *)v5 + 1);
      *(_OWORD *)(a2 + 32) = *((_OWORD *)v5 + 2);
      *(_OWORD *)(a2 + 48) = *((_OWORD *)v5 + 3);
      *(_OWORD *)(a2 + 64) = *((_OWORD *)v5 + 4);
      *(_OWORD *)(a2 + 80) = *((_OWORD *)v5 + 5);
      *(_OWORD *)(a2 + 96) = *((_OWORD *)v5 + 6);
      a2 += 128LL;
      v6 = *((_OWORD *)v5 + 7);
      v5 += 128;
      *(_OWORD *)(a2 - 16) = v6;
      --v4;
    }
    while ( v4 );
    *(_OWORD *)a2 = *(_OWORD *)v5;
    *(_OWORD *)(a2 + 16) = *((_OWORD *)v5 + 1);
    *(_OWORD *)(a2 + 32) = *((_OWORD *)v5 + 2);
    *(_QWORD *)(a2 + 48) = *((_QWORD *)v5 + 6);
    *(_DWORD *)(a2 + 56) = *((_DWORD *)v5 + 14);
    return 0LL;
  }
  return result;
}
