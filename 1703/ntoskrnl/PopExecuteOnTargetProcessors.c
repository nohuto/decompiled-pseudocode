/*
 * XREFs of PopExecuteOnTargetProcessors @ 0x1400888B0
 * Callers:
 *     PoGetIdleTimes @ 0x140088C1C (PoGetIdleTimes.c)
 *     PpmParkRegisterParking @ 0x14015FC70 (PpmParkRegisterParking.c)
 *     PpmCheckArmPeriod @ 0x140160360 (PpmCheckArmPeriod.c)
 *     PpmUpdateIdleDomains @ 0x1402299E0 (PpmUpdateIdleDomains.c)
 *     PpmUpdatePlatformIdleVeto @ 0x140229DA0 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x140229F10 (PpmUpdateProcessorIdleVeto.c)
 *     PoGetPerfStateAndParkingInfo @ 0x1402331F0 (PoGetPerfStateAndParkingInfo.c)
 *     PpmCapturePerformanceDistribution @ 0x1402333F8 (PpmCapturePerformanceDistribution.c)
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     EtwpKernelTraceRundown @ 0x140434EC0 (EtwpKernelTraceRundown.c)
 *     PpmPerfRecomputeBackgroundPolicy @ 0x1405819C0 (PpmPerfRecomputeBackgroundPolicy.c)
 *     PpmUpdateProcessorPolicy @ 0x14058358C (PpmUpdateProcessorPolicy.c)
 *     PpmReapplyIdlePolicy @ 0x14059B744 (PpmReapplyIdlePolicy.c)
 *     PpmIdleRegisterDefaultStates @ 0x1405A80EC (PpmIdleRegisterDefaultStates.c)
 *     PpmUpdateIdleStates @ 0x1405A8220 (PpmUpdateIdleStates.c)
 *     PpmRegisterPerfStates @ 0x1405BF450 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x1405BFD98 (PpmCheckInitProcessors.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x1405C03D0 (PpmParkUpdateConcurrencyTracking.c)
 *     PpmEventTraceControlCallback @ 0x1405D6570 (PpmEventTraceControlCallback.c)
 *     PpmWmiIdleAccountingWork @ 0x1406CFCE0 (PpmWmiIdleAccountingWork.c)
 *     PpmPostProcessMediaBuffering @ 0x1406D5C4C (PpmPostProcessMediaBuffering.c)
 * Callees:
 *     PopQueueTargetDpc @ 0x1400889A0 (PopQueueTargetDpc.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
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

  v9[0] = a1;
  v11 = a2;
  v8[1] = v8;
  Object = 1;
  v8[0] = v8;
  v9[1] = *(_QWORD *)(a1 + 8);
  v15 = v9;
  p_Object = &Object;
  v6 = 6;
  v7 = 0;
  v10 = 0;
  v12 = a3;
  v13 = a4;
  v16 = 0;
  PopQueueTargetDpc(&Dpc);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  return v16;
}
