/*
 * XREFs of GetRegistryDwordValueNoDefault @ 0x1C0026600
 * Callers:
 *     ProcLibTraceSummary2 @ 0x1C001D178 (ProcLibTraceSummary2.c)
 *     InitPerfStatesInternal @ 0x1C0023DF4 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C0024634 (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C0024B54 (InitCpcStatesInternal.c)
 *     GetRegistryDwordValue @ 0x1C00265DC (GetRegistryDwordValue.c)
 *     GetRegistryQwordValue @ 0x1C002667C (GetRegistryQwordValue.c)
 *     GetHvPpmCapabilities @ 0x1C002A49C (GetHvPpmCapabilities.c)
 *     PopulateEnergyEstimationModel @ 0x1C002DEAC (PopulateEnergyEstimationModel.c)
 * Callees:
 *     memset @ 0x1C000C3C0 (memset.c)
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
