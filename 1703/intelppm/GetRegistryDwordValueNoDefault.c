/*
 * XREFs of GetRegistryDwordValueNoDefault @ 0x1C001AD70
 * Callers:
 *     IsIntelPccDriverPresent @ 0x1C0003EEC (IsIntelPccDriverPresent.c)
 *     GetRegistryQwordValue @ 0x1C001AC7C (GetRegistryQwordValue.c)
 *     GetRegistryDwordValue @ 0x1C001AD4C (GetRegistryDwordValue.c)
 *     InitPerfStatesInternal @ 0x1C001B128 (InitPerfStatesInternal.c)
 *     ProcLibTraceSummary2 @ 0x1C001F54C (ProcLibTraceSummary2.c)
 *     GetHvPpmCapabilities @ 0x1C002737C (GetHvPpmCapabilities.c)
 *     InitCpcStatesInternal @ 0x1C002AD40 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C002BE98 (InitPerfFeedbackInternal.c)
 *     PopulateEnergyEstimationModel @ 0x1C003202C (PopulateEnergyEstimationModel.c)
 * Callees:
 *     memset @ 0x1C0004EC0 (memset.c)
 */

__int64 __fastcall GetRegistryDwordValueNoDefault(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v7[14]; // [rsp+30h] [rbp-78h] BYREF

  memset(v7, 0, sizeof(v7));
  LODWORD(v7[1]) = 292;
  v7[2] = a2;
  v7[3] = a3;
  LODWORD(v7[4]) = 0x4000000;
  return RtlQueryRegistryValuesEx(0LL, a1, v7, 0LL, 0LL);
}
