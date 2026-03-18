/*
 * XREFs of ?_AddReference@DXGMONITOR@@QEAAXPEAX@Z @ 0x1C00D7D4C
 * Callers:
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00B11F0 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C00D86D0 (DxgkGetMonitorInternalInfo.c)
 *     MonitorGetMonitorHandle @ 0x1C00E4564 (MonitorGetMonitorHandle.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGMONITOR::_AddReference(struct _IO_REMOVE_LOCK *this, void *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax

  if ( IoAcquireRemoveLockEx(this + 12, a2, File, 1u, 0x20u) < 0 )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2);
    WdLogEvent5_WdAssertion(v3);
  }
}
