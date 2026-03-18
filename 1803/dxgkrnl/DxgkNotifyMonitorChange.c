/*
 * XREFs of DxgkNotifyMonitorChange @ 0x1C01D1204
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0236F48 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     DxgkStatusChangeNotify @ 0x1C00D7140 (DxgkStatusChangeNotify.c)
 *     DxgkIncreaseMonitorUniqueness @ 0x1C01D10D4 (DxgkIncreaseMonitorUniqueness.c)
 */

__int64 __fastcall DxgkNotifyMonitorChange(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  result = DxgkIncreaseMonitorUniqueness(a1);
  if ( (int)result >= 0 )
  {
    v4[0] = 12LL;
    v4[1] = 0LL;
    return DxgkStatusChangeNotify((int *)v4, v2, v3);
  }
  return result;
}
