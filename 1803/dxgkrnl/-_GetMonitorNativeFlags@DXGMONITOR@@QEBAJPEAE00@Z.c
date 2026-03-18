/*
 * XREFs of ?_GetMonitorNativeFlags@DXGMONITOR@@QEBAJPEAE00@Z @ 0x1C0046F7C
 * Callers:
 *     MonitorGetNativeFlags @ 0x1C022E328 (MonitorGetNativeFlags.c)
 * Callees:
 *     ?_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ @ 0x1C00B8004 (-_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ.c)
 */

__int64 __fastcall DXGMONITOR::_GetMonitorNativeFlags(DXGMONITOR *this, unsigned __int8 *a2, bool *a3, bool *a4)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // eax

  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !a3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *((_DWORD *)this + 10);
  *a3 = (v11 & 0x200) != 0;
  *a2 = BYTE1(v11) & 1;
  *a4 = DXGMONITOR::_GetEdidBaseBlockPtr(this) == 0LL;
  return 0LL;
}
