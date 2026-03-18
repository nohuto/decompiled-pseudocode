/*
 * XREFs of ACPIInternalEvaluateOST @ 0x1C0050074
 * Callers:
 *     ACPIProcessorStartDevice @ 0x1C0022DD0 (ACPIProcessorStartDevice.c)
 *     ACPICheckModuleStarted @ 0x1C005138C (ACPICheckModuleStarted.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C00902A0 (ACPIBusIrpStartDeviceWorker.c)
 * Callees:
 *     AMLIGetNamedChild @ 0x1C000E580 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C000F2AC (WPP_RECORDER_SF_Dqss.c)
 *     WPP_RECORDER_SF_qss @ 0x1C000F60C (WPP_RECORDER_SF_qss.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C0022070 (AMLIAsyncEvalObject.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 __fastcall ACPIInternalEvaluateOST(__int64 a1, __int64 a2, int a3)
{
  int v5; // edi
  __int64 *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdx
  const char *v9; // rax
  const char *v10; // r8
  __int64 v11; // r8
  const char *v12; // rax
  const char *v13; // rdx
  _QWORD v15[16]; // [rsp+50h] [rbp-A8h] BYREF

  v5 = -1073741823;
  v6 = AMLIGetNamedChild(*(__int64 **)(a1 + 712), 1414745951);
  if ( v6 )
  {
    memset(v15, 0, 0x78uLL);
    LODWORD(v15[7]) = a3;
    WORD1(v15[0]) = 1;
    LODWORD(v15[2]) = 0;
    WORD1(v15[10]) = 2;
    WORD1(v15[5]) = 1;
    v15[14] = 0LL;
    v5 = AMLIAsyncEvalObject(v6, 0LL, 3u, v15, 0LL, 0LL);
    AMLIDereferenceHandleEx((volatile signed __int32 *)v6, v7);
    if ( v5 == 259 )
      v5 = 0;
    if ( v5 < 0 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      v9 = byte_1C0066CD0;
      v10 = byte_1C0066CD0;
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
        (__int64)&WPP_adf19d460b46334a5cb7bb3ee834865a_Traceguids,
        v5,
        a1,
        v9,
        v10);
    }
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 8);
    v12 = byte_1C0066CD0;
    v13 = byte_1C0066CD0;
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
      (__int64)&WPP_adf19d460b46334a5cb7bb3ee834865a_Traceguids,
      a1,
      v12,
      v13);
  }
  return (unsigned int)v5;
}
