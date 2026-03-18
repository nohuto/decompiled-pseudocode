/*
 * XREFs of ?_DisableVirtualModeSupport@DXGMONITOR@@QEAAJE@Z @ 0x1C02018A4
 * Callers:
 *     MonitorDisableMonitorVirtualModeSupport @ 0x1C01FE1A0 (MonitorDisableMonitorVirtualModeSupport.c)
 * Callees:
 *     ?_SaveVirtualModeSupportToRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0200958 (-_SaveVirtualModeSupportToRegistry@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_DisableVirtualModeSupport(DXGMONITOR *this, char a2)
{
  int v2; // edi
  __int64 v5; // rax
  __int64 result; // rax

  v2 = *((_DWORD *)this + 6);
  if ( (v2 & 2) != 0 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v5);
  }
  *((_DWORD *)this + 6) = *((_DWORD *)this + 6) & 0xFFFFFF7F | (a2 != 0 ? 0x80 : 0);
  result = DXGMONITOR::_SaveVirtualModeSupportToRegistry((UNICODE_STRING *)this);
  if ( (int)result < 0 )
    *((_DWORD *)this + 6) ^= (v2 ^ *((_DWORD *)this + 6)) & 0x80;
  return result;
}
