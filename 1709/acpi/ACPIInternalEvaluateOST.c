/*
 * XREFs of ACPIInternalEvaluateOST @ 0x1C004F9C8
 * Callers:
 *     ACPIProcessorStartDevice @ 0x1C0025740 (ACPIProcessorStartDevice.c)
 *     ACPICheckModuleStarted @ 0x1C0051DD4 (ACPICheckModuleStarted.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C00968E0 (ACPIBusIrpStartDeviceWorker.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C0003B6C (WPP_RECORDER_SF_Dqss.c)
 *     WPP_RECORDER_SF_qss @ 0x1C0003CBC (WPP_RECORDER_SF_qss.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     AMLIAsyncEvalObject @ 0x1C001A5F8 (AMLIAsyncEvalObject.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall ACPIInternalEvaluateOST(__int64 a1, __int64 a2, int a3)
{
  int v5; // edi
  __int64 *v6; // rsi
  __int64 v7; // rdx
  const char *v8; // rax
  const char *v9; // r8
  __int64 v10; // r8
  const char *v11; // rax
  const char *v12; // rdx
  _QWORD v14[16]; // [rsp+50h] [rbp-A8h] BYREF

  v5 = -1073741823;
  v6 = AMLIGetNamedChild(*(__int64 **)(a1 + 712), 1414745951);
  if ( v6 )
  {
    memset(v14, 0, 0x78uLL);
    LODWORD(v14[7]) = a3;
    WORD1(v14[0]) = 1;
    LODWORD(v14[2]) = 0;
    WORD1(v14[10]) = 2;
    WORD1(v14[5]) = 1;
    v14[14] = 0LL;
    v5 = AMLIAsyncEvalObject(v6, 0LL, 3u, v14, 0LL, 0LL);
    AMLIDereferenceHandleEx((__int64)v6);
    if ( v5 == 259 )
      v5 = 0;
    if ( v5 < 0 )
    {
      v7 = *(_QWORD *)(a1 + 8);
      v8 = (const char *)&unk_1C0067B08;
      v9 = (const char *)&unk_1C0067B08;
      if ( (v7 & 0x200000000000LL) != 0 )
      {
        v8 = *(const char **)(a1 + 560);
        if ( (v7 & 0x400000000000LL) != 0 )
          v9 = *(const char **)(a1 + 568);
      }
      WPP_RECORDER_SF_Dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0xFu,
        (__int64)&WPP_cd6be62ef00435e9c3ee0951047d8321_Traceguids,
        v5,
        a1,
        v8,
        v9);
    }
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 8);
    v11 = (const char *)&unk_1C0067B08;
    v12 = (const char *)&unk_1C0067B08;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v11 = *(const char **)(a1 + 560);
      if ( (v10 & 0x400000000000LL) != 0 )
        v12 = *(const char **)(a1 + 568);
    }
    WPP_RECORDER_SF_qss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x10u,
      (__int64)&WPP_cd6be62ef00435e9c3ee0951047d8321_Traceguids,
      a1,
      v11,
      v12);
  }
  return (unsigned int)v5;
}
