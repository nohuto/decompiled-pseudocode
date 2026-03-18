/*
 * XREFs of ?_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z @ 0x1C01E61E4
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0109488 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C0108310 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_SaveScaleFactorToMonitorStore(DXGMONITOR *this, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+58h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+18h] BYREF

  Data = a2;
  result = DXGMONITOR::_OpenMonitorDataStore(this, 0LL, &KeyHandle, a4);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"PreferredScaleFactor");
    v6 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
    ZwClose(KeyHandle);
    if ( (int)v6 >= 0 )
    {
      return 0LL;
    }
    else
    {
      v9 = WdLogNewEntry5_WdError(v8, v7);
      *(_QWORD *)(v9 + 24) = this;
      *(_QWORD *)(v9 + 32) = v6;
      WdLogEvent5_WdError(v9);
      return (unsigned int)v6;
    }
  }
  return result;
}
