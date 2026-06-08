/*
 * XREFs of GetRegistryDwordValueNoDefault @ 0x1C0023E80
 * Callers:
 *     IsIntelPccDriverPresent @ 0x1C000407C (IsIntelPccDriverPresent.c)
 *     ProcLibTraceSummary2 @ 0x1C002069C (ProcLibTraceSummary2.c)
 *     InitPerfStatesInternal @ 0x1C0023130 (InitPerfStatesInternal.c)
 *     GetRegistryDwordValue @ 0x1C0023E5C (GetRegistryDwordValue.c)
 *     GetRegistryQwordValue @ 0x1C0024038 (GetRegistryQwordValue.c)
 *     GetHvPpmCapabilities @ 0x1C002BDC0 (GetHvPpmCapabilities.c)
 *     InitCpcStatesInternal @ 0x1C002F7CC (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C00309F8 (InitPerfFeedbackInternal.c)
 *     PopulateEnergyEstimationModel @ 0x1C0036358 (PopulateEnergyEstimationModel.c)
 *     ReadEnergyEquation @ 0x1C0036450 (ReadEnergyEquation.c)
 *     ReadPowerCurve @ 0x1C0036F3C (ReadPowerCurve.c)
 * Callees:
 *     memset @ 0x1C0005280 (memset.c)
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
