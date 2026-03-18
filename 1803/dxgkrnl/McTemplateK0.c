/*
 * XREFs of McTemplateK0 @ 0x1C002771C
 * Callers:
 *     ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x1C00253D0 (-LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ @ 0x1C0026270 (-ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ.c)
 *     DpiDxgkDdiUnload @ 0x1C0042418 (DpiDxgkDdiUnload.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C01A0D58 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     McGenEventWriteKM @ 0x1C000ACD4 (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWriteKM(&DxgkControlGuid_Context, a2, a3, 1u, &v4);
}
