/*
 * XREFs of ?_DisableVirtualModeSupport@DXGMONITOR@@QEAAJE@Z @ 0x1C01E6F78
 * Callers:
 *     MonitorDisableMonitorVirtualModeSupport @ 0x1C01E3850 (MonitorDisableMonitorVirtualModeSupport.c)
 * Callees:
 *     ?_SaveVirtualModeSupportToRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C01E6280 (-_SaveVirtualModeSupportToRegistry@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_DisableVirtualModeSupport(DXGMONITOR *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  char v5; // si
  __int64 v7; // rax
  __int64 result; // rax

  v4 = *((_DWORD *)this + 6);
  v5 = a2;
  if ( (v4 & 2) != 0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  *((_DWORD *)this + 6) = *((_DWORD *)this + 6) & 0xFFFFFF7F | (v5 != 0 ? 0x80 : 0);
  result = DXGMONITOR::_SaveVirtualModeSupportToRegistry(this, a2, a3, a4);
  if ( (int)result < 0 )
    *((_DWORD *)this + 6) ^= (v4 ^ *((_DWORD *)this + 6)) & 0x80;
  return result;
}
