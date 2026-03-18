/*
 * XREFs of DpiFdoGetChildDescriptor @ 0x1C00396A8
 * Callers:
 *     DpEvalAcpiMethod @ 0x1C01ED000 (DpEvalAcpiMethod.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C01F6374 (DpiFdoHandleTargetConnectionState.c)
 *     DpiGetIntegratedDisplayOrientationOverrides @ 0x1C020B084 (DpiGetIntegratedDisplayOrientationOverrides.c)
 *     DpiGetIntegratedMonitorLinkInfo @ 0x1C020B0F0 (DpiGetIntegratedMonitorLinkInfo.c)
 *     DpiGetMonitorColorimetryOverride @ 0x1C020B148 (DpiGetMonitorColorimetryOverride.c)
 *     DpiGetMonitorNativeTimingOverride @ 0x1C020B3B8 (DpiGetMonitorNativeTimingOverride.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C020C6BC (DpiPdoHandleChildConnectionChange.c)
 *     DpiPdoIsChildConnected @ 0x1C020D164 (DpiPdoIsChildConnected.c)
 *     DpiSetTargetAdjustedColorimetry @ 0x1C020E030 (DpiSetTargetAdjustedColorimetry.c)
 *     ?_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@@Z @ 0x1C0235A50 (-_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DpiFdoGetChildDescriptor(__int64 a1, int a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rax
  _QWORD *v4; // rcx

  v2 = (_QWORD *)(a1 + 3328);
  v3 = *(_QWORD **)(a1 + 3328);
  do
  {
    if ( v3 == v2 )
      return 0LL;
    v4 = v3 - 4;
    v3 = (_QWORD *)*v3;
  }
  while ( *((_DWORD *)v4 + 6) != a2 );
  return v4;
}
