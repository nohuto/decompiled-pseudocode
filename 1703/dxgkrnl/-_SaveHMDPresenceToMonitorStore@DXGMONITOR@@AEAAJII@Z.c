/*
 * XREFs of ?_SaveHMDPresenceToMonitorStore@DXGMONITOR@@AEAAJII@Z @ 0x1C01E6108
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0109488 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C0108310 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_SaveHMDPresenceToMonitorStore(DXGMONITOR *this, int a2, int a3, __int64 a4)
{
  __int64 result; // rax
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  NTSTATUS v10; // eax
  __int64 v11; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-20h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+40h] [rbp-10h] BYREF
  int Data; // [rsp+78h] [rbp+28h] BYREF
  int v15; // [rsp+80h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+38h] BYREF

  v15 = a3;
  Data = a2;
  result = DXGMONITOR::_OpenMonitorDataStore(this, 0LL, &KeyHandle, a4);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"HMDDevicePresent");
    v6 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
    v9 = v6;
    if ( v6 < 0
      || (RtlInitUnicodeString(&ValueName, L"HMDAlwaysOn"),
          v10 = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &v15, 4u),
          v9 = v10,
          v10 < 0) )
    {
      v11 = WdLogNewEntry5_WdError(v8, v7);
      *(_QWORD *)(v11 + 24) = this;
      *(_QWORD *)(v11 + 32) = v9;
      WdLogEvent5_WdError(v11);
    }
    ZwClose(KeyHandle);
    return (unsigned int)v9;
  }
  return result;
}
