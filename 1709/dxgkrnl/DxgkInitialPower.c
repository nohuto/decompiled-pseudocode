/*
 * XREFs of DxgkInitialPower @ 0x1C011D528
 * Callers:
 *     DriverEntry @ 0x1C0205078 (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 DxgkInitialPower()
{
  NTSTATUS v0; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  NTSTATUS v9; // eax
  NTSTATUS v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  char OutputBuffer; // [rsp+40h] [rbp+8h] BYREF

  OutputBuffer = 0;
  v0 = ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &OutputBuffer, 1u);
  v5 = v0;
  if ( v0 < 0 )
    goto LABEL_4;
  byte_1C0060858 = OutputBuffer;
  if ( !OutputBuffer )
    return (unsigned int)v5;
  v8 = WdLogNewEntry5_WdEvent(v2, v1, v3, v4);
  *(_QWORD *)(v8 + 24) = 0LL;
  WdLogEvent5_WdEvent(v8);
  v9 = PoRegisterPowerSettingCallback(
         (PDEVICE_OBJECT)g_pDeviceObject,
         &GUID_MONITOR_POWER_ON,
         DpiMiracastHandlePowerCallback,
         0LL,
         &Handle);
  v5 = v9;
  if ( v9 < 0
    || (v10 = PoRegisterPowerSettingCallback(
                (PDEVICE_OBJECT)g_pDeviceObject,
                &GUID_LOW_POWER_EPOCH,
                DpiMiracastHandlePowerCallback,
                0LL,
                &qword_1C0060C10),
        v5 = v10,
        v10 < 0) )
  {
LABEL_4:
    v7 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v7 + 24) = v5;
    WdLogEvent5_WdError(v7);
    return (unsigned int)v5;
  }
  dword_1C0060C18 = 0;
  byte_1C0060859 = 0;
  qword_1C0060CA0 = (__int64)IoAllocateWorkItem((PDEVICE_OBJECT)g_pDeviceObject);
  if ( qword_1C0060CA0 )
  {
    KeInitializeTimerEx(&Timer, SynchronizationTimer);
    KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)DpiMiracastConnectedStandbyDelayTimerDpc, 0LL);
  }
  else
  {
    v12 = WdLogNewEntry5_WdLowResource(v11);
    LODWORD(v5) = -1073741801;
    *(_QWORD *)(v12 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v12);
  }
  return (unsigned int)v5;
}
