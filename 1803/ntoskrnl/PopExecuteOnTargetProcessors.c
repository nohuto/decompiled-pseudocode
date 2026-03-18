/*
 * XREFs of PopExecuteOnTargetProcessors @ 0x140038E58
 * Callers:
 *     PoGetIdleTimes @ 0x14003837C (PoGetIdleTimes.c)
 *     PoGetPerfStateAndParkingInfo @ 0x1400C6718 (PoGetPerfStateAndParkingInfo.c)
 *     PpmParkRegisterParking @ 0x14017F43C (PpmParkRegisterParking.c)
 *     PpmCheckArmPeriod @ 0x14017FAC0 (PpmCheckArmPeriod.c)
 *     PpmUpdateIdleDomains @ 0x140273E80 (PpmUpdateIdleDomains.c)
 *     PpmUpdatePlatformIdleVeto @ 0x140274230 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1402743A0 (PpmUpdateProcessorIdleVeto.c)
 *     PpmCapturePerformanceDistribution @ 0x14027E7EC (PpmCapturePerformanceDistribution.c)
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 *     PpmUpdateProcessorPolicy @ 0x140612240 (PpmUpdateProcessorPolicy.c)
 *     PpmIdleRegisterDefaultStates @ 0x14062769C (PpmIdleRegisterDefaultStates.c)
 *     PpmUpdateIdleStates @ 0x1406277D0 (PpmUpdateIdleStates.c)
 *     EtwpKernelTraceRundown @ 0x140628E98 (EtwpKernelTraceRundown.c)
 *     PpmRegisterPerfStates @ 0x14063EACC (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x14063F434 (PpmCheckInitProcessors.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x14063F818 (PpmParkUpdateConcurrencyTracking.c)
 *     PpmEventTraceControlCallback @ 0x140655C50 (PpmEventTraceControlCallback.c)
 *     PpmReapplyIdlePolicy @ 0x14075E524 (PpmReapplyIdlePolicy.c)
 *     PpmWmiIdleAccountingWork @ 0x14076B740 (PpmWmiIdleAccountingWork.c)
 *     PpmPostProcessMediaBuffering @ 0x14076EE98 (PpmPostProcessMediaBuffering.c)
 * Callees:
 *     PopQueueTargetDpc @ 0x140038F50 (PopQueueTargetDpc.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 */

__int64 __fastcall PopExecuteOnTargetProcessors(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 Object; // [rsp+30h] [rbp-49h] BYREF
  char v6; // [rsp+32h] [rbp-47h]
  int v7; // [rsp+34h] [rbp-45h]
  _QWORD v8[2]; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v9[2]; // [rsp+48h] [rbp-31h] BYREF
  __int16 v10; // [rsp+58h] [rbp-21h]
  __int64 v11; // [rsp+60h] [rbp-19h]
  __int64 v12; // [rsp+68h] [rbp-11h]
  __int64 v13; // [rsp+70h] [rbp-9h]
  __int16 *p_Object; // [rsp+78h] [rbp-1h]
  _QWORD *v15; // [rsp+80h] [rbp+7h]
  unsigned int v16; // [rsp+88h] [rbp+Fh]
  struct _KDPC Dpc; // [rsp+90h] [rbp+17h] BYREF

  Object = 1;
  v6 = 6;
  v8[1] = v8;
  v8[0] = v8;
  v9[1] = *(_QWORD *)(a1 + 8);
  v15 = v9;
  v9[0] = a1;
  v11 = a2;
  p_Object = &Object;
  v7 = 0;
  v10 = 0;
  v12 = a3;
  v13 = a4;
  v16 = 0;
  PopQueueTargetDpc(&Dpc);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  return v16;
}
