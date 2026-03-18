/*
 * XREFs of DxgkInitialPower @ 0x1C02059B4
 * Callers:
 *     DriverEntry @ 0x1C023F078 (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 DxgkInitialPower()
{
  NTSTATUS v0; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  char OutputBuffer; // [rsp+40h] [rbp+8h] BYREF

  OutputBuffer = 0;
  v0 = ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &OutputBuffer, 1u);
  v3 = v0;
  if ( v0 < 0 )
    goto LABEL_2;
  byte_1C007A757 = OutputBuffer;
  if ( !OutputBuffer )
    return (unsigned int)v3;
  v5 = WdLogNewEntry5_WdEvent(v2, v1);
  *(_QWORD *)(v5 + 24) = 0LL;
  WdLogEvent5_WdEvent(v5);
  v6 = PoRegisterPowerSettingCallback(
         g_pDeviceObject,
         &GUID_MONITOR_POWER_ON,
         (PPOWER_SETTING_CALLBACK)DpiMiracastHandlePowerCallback,
         0LL,
         &Handle);
  v3 = v6;
  if ( v6 < 0
    || (v7 = PoRegisterPowerSettingCallback(
               g_pDeviceObject,
               &GUID_LOW_POWER_EPOCH,
               (PPOWER_SETTING_CALLBACK)DpiMiracastHandlePowerCallback,
               0LL,
               &qword_1C007AB68),
        v3 = v7,
        v7 < 0) )
  {
LABEL_2:
    v4 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v4 + 24) = v3;
    WdLogEvent5_WdError(v4);
  }
  else
  {
    dword_1C007AB70 = 0;
    byte_1C007A759 = 0;
    qword_1C007ABF8 = (__int64)IoAllocateWorkItem(g_pDeviceObject);
    if ( qword_1C007ABF8 )
    {
      KeInitializeTimerEx(&Timer, SynchronizationTimer);
      KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)DpiMiracastConnectedStandbyDelayTimerDpc, 0LL);
    }
    else
    {
      v9 = WdLogNewEntry5_WdLowResource(v8);
      LODWORD(v3) = -1073741801;
      *(_QWORD *)(v9 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v9);
    }
  }
  return (unsigned int)v3;
}
