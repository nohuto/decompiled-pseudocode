/*
 * XREFs of ?_SaveHMDPresenceToMonitorStore@DXGMONITOR@@AEAAJII@Z @ 0x1C0200744
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010C694 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C010AFF0 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_SaveHMDPresenceToMonitorStore(UNICODE_STRING *this, int a2, int a3)
{
  __int64 result; // rax
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rbx
  NTSTATUS v8; // eax
  __int64 v9; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-20h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+40h] [rbp-10h] BYREF
  int Data; // [rsp+78h] [rbp+28h] BYREF
  int v13; // [rsp+80h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+38h] BYREF

  v13 = a3;
  Data = a2;
  result = DXGMONITOR::_OpenMonitorDataStore(this, 0, &KeyHandle);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"HMDDevicePresent");
    v5 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
    v7 = v5;
    if ( v5 < 0
      || (RtlInitUnicodeString(&ValueName, L"HMDAlwaysOn"),
          v8 = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &v13, 4u),
          v7 = v8,
          v8 < 0) )
    {
      v9 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v9 + 24) = this;
      *(_QWORD *)(v9 + 32) = v7;
      WdLogEvent5_WdError(v9);
    }
    ZwClose(KeyHandle);
    return (unsigned int)v7;
  }
  return result;
}
