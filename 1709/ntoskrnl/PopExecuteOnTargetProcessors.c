/*
 * XREFs of PopExecuteOnTargetProcessors @ 0x1401173B0
 * Callers:
 *     PoGetPerfStateAndParkingInfo @ 0x14000B3F4 (PoGetPerfStateAndParkingInfo.c)
 *     PoGetIdleTimes @ 0x14008CD70 (PoGetIdleTimes.c)
 *     PpmParkRegisterParking @ 0x140137E1C (PpmParkRegisterParking.c)
 *     PpmCheckArmPeriod @ 0x140138E48 (PpmCheckArmPeriod.c)
 *     PpmUpdateIdleDomains @ 0x14023C8A0 (PpmUpdateIdleDomains.c)
 *     PpmUpdatePlatformIdleVeto @ 0x14023CC50 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x14023CDC0 (PpmUpdateProcessorIdleVeto.c)
 *     PpmCapturePerformanceDistribution @ 0x14024876C (PpmCapturePerformanceDistribution.c)
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 *     PpmRegisterPerfStates @ 0x1405B500C (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x1405B5958 (PpmCheckInitProcessors.c)
 *     PpmUpdateProcessorPolicy @ 0x1405B5DF8 (PpmUpdateProcessorPolicy.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x1405B60EC (PpmParkUpdateConcurrencyTracking.c)
 *     PpmIdleRegisterDefaultStates @ 0x1405B8098 (PpmIdleRegisterDefaultStates.c)
 *     PpmUpdateIdleStates @ 0x1405B81D0 (PpmUpdateIdleStates.c)
 *     PpmEventTraceControlCallback @ 0x1405F2F90 (PpmEventTraceControlCallback.c)
 *     PpmReapplyIdlePolicy @ 0x1406F68F8 (PpmReapplyIdlePolicy.c)
 *     PpmWmiIdleAccountingWork @ 0x140707900 (PpmWmiIdleAccountingWork.c)
 *     PpmPostProcessMediaBuffering @ 0x14070B9C0 (PpmPostProcessMediaBuffering.c)
 *     EtwpKernelTraceRundown @ 0x14074CFD4 (EtwpKernelTraceRundown.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     PopQueueTargetDpc @ 0x14008ECA4 (PopQueueTargetDpc.c)
 */

__int64 __fastcall PopExecuteOnTargetProcessors(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 Object; // [rsp+30h] [rbp-49h] BYREF
  char v6; // [rsp+32h] [rbp-47h]
  int v7; // [rsp+34h] [rbp-45h]
  _QWORD v8[2]; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v9[2]; // [rsp+48h] [rbp-31h] BYREF
  __int16 v10; // [rsp+58h] [rbp-21h]
  _QWORD v11[5]; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v12; // [rsp+88h] [rbp+Fh]
  _BYTE v13[64]; // [rsp+90h] [rbp+17h] BYREF

  v9[0] = a1;
  v11[0] = a2;
  v8[1] = v8;
  Object = 1;
  v8[0] = v8;
  v9[1] = *(_QWORD *)(a1 + 8);
  v11[4] = v9;
  v11[3] = &Object;
  v6 = 6;
  v7 = 0;
  v10 = 0;
  v11[1] = a3;
  v11[2] = a4;
  v12 = 0;
  PopQueueTargetDpc((__int64)v13, (__int64)v11);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  return v12;
}
