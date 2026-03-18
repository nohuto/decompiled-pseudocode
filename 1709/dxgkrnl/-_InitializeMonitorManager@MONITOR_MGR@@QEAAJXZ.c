/*
 * XREFs of ?_InitializeMonitorManager@MONITOR_MGR@@QEAAJXZ @ 0x1C010DEF4
 * Callers:
 *     MonitorCreateMonitorManager @ 0x1C010778C (MonitorCreateMonitorManager.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MONITOR_MGR::_InitializeMonitorManager(MONITOR_MGR *this, __int64 a2)
{
  int v4; // [rsp+40h] [rbp+8h] BYREF
  int v5; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  if ( g_IsInternalRelease || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 300LL) & 0x200) != 0 )
  {
    v4 = 0;
    v5 = 0;
    qword_1C005FDF8 = (__int64)&v4;
    qword_1C005FE08 = (__int64)&v4;
    qword_1C005FE30 = (__int64)&v5;
    qword_1C005FE40 = (__int64)&v5;
    RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &unk_1C005FDE0, 0LL, 0LL);
    if ( v4 )
      *((_BYTE *)this + 164) = 0;
    if ( v5 )
      *((_BYTE *)this + 3) = 0;
  }
  *((_BYTE *)this + 4) = 1;
  return 0LL;
}
