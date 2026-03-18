/*
 * XREFs of ACPIInternalEvaluateOST @ 0x1C0029B5C
 * Callers:
 *     ACPICheckModuleStarted @ 0x1C002E4E4 (ACPICheckModuleStarted.c)
 *     ACPIProcessorStartDevice @ 0x1C0036300 (ACPIProcessorStartDevice.c)
 *     ACPIInitShutdownInProgress @ 0x1C0038F54 (ACPIInitShutdownInProgress.c)
 *     ACPINotifyOsShutdownWorker @ 0x1C0039060 (ACPINotifyOsShutdownWorker.c)
 *     ACPIRootEvent @ 0x1C00392D0 (ACPIRootEvent.c)
 *     AcpiShutdownNotificationTimerWorkItem @ 0x1C0039B10 (AcpiShutdownNotificationTimerWorkItem.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C0078860 (ACPIBusIrpStartDeviceWorker.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     WPP_RECORDER_SF_qss @ 0x1C0012DE0 (WPP_RECORDER_SF_qss.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 */

__int64 __fastcall ACPIInternalEvaluateOST(__int64 a1, int a2, int a3)
{
  int v6; // edi
  __int64 *v7; // rsi
  __int64 v8; // rdx
  const char *v9; // rax
  const char *v10; // r8
  __int64 v11; // r8
  const char *v12; // rax
  const char *v13; // rdx
  _QWORD v15[16]; // [rsp+50h] [rbp-A8h] BYREF

  v6 = -1073741823;
  v7 = AMLIGetNamedChild(*(_QWORD **)(a1 + 712), 1414745951);
  if ( v7 )
  {
    memset(v15, 0, 0x78uLL);
    LODWORD(v15[7]) = a3;
    WORD1(v15[0]) = 1;
    LODWORD(v15[2]) = a2;
    WORD1(v15[10]) = 2;
    WORD1(v15[5]) = 1;
    v15[14] = 0LL;
    v6 = AMLIAsyncEvalObject(v7, 0LL, 3LL, v15, 0LL, 0LL);
    AMLIDereferenceHandleEx((volatile signed __int32 *)v7);
    if ( v6 == 259 )
      v6 = 0;
    if ( v6 < 0 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      v9 = (const char *)&unk_1C005B1F0;
      v10 = (const char *)&unk_1C005B1F0;
      if ( (v8 & 0x200000000000LL) != 0 )
      {
        v9 = *(const char **)(a1 + 560);
        if ( (v8 & 0x400000000000LL) != 0 )
          v10 = *(const char **)(a1 + 568);
      }
      WPP_RECORDER_SF_Dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0xFu,
        (__int64)&WPP_c50cf807c7783e6199ec897531ccbc60_Traceguids,
        v6,
        a1,
        v9,
        v10);
    }
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 8);
    v12 = (const char *)&unk_1C005B1F0;
    v13 = (const char *)&unk_1C005B1F0;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v12 = *(const char **)(a1 + 560);
      if ( (v11 & 0x400000000000LL) != 0 )
        v13 = *(const char **)(a1 + 568);
    }
    WPP_RECORDER_SF_qss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x10u,
      (__int64)&WPP_c50cf807c7783e6199ec897531ccbc60_Traceguids,
      a1,
      v12,
      v13);
  }
  return (unsigned int)v6;
}
